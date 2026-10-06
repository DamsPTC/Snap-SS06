/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5f9290; end: 10a5f95c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a5f7964) */
/* WARNING: Removing unreachable block (ram,0x00010a5f518c) */
/* WARNING: Removing unreachable block (ram,0x00010a5f6e90) */
/* WARNING: Removing unreachable block (ram,0x00010a5f79e4) */

void FUN_10a5f9290(long *param_1,ulong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  long *plVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  int iVar38;
  undefined8 unaff_x19;
  long *plVar39;
  long *unaff_x20;
  int iVar40;
  undefined1 *unaff_x21;
  uint uVar41;
  undefined8 unaff_x22;
  ulong uVar42;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  int iVar43;
  long *plVar44;
  undefined8 unaff_x26;
  int iVar45;
  long *plVar46;
  undefined8 unaff_x27;
  long *plVar47;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  uint uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long lVar55;
  long lVar56;
  float fVar57;
  float fVar58;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar59;
  undefined8 unaff_d11;
  float fVar60;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
code_r0x00010a5f9290:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((((*(byte *)((long)param_1 + 0x59c) & 1) != 0) || (*(char *)((long)param_1 + 0x59d) == '\x01')
      ) && (plVar39 = (long *)param_1[0xb1], plVar39 != (long *)0x0)) {
    (**(code **)(*param_1 + 0x50))((undefined1 *)((long)register0x00000008 + -0x80));
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    if (*(long *)((long)register0x00000008 + -0x78) != 0) {
      plVar47 = (long *)(*(long *)((long)register0x00000008 + -0x78) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar6) {
          *plVar47 = *plVar47 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      unaff_x20 = *(long **)((long)register0x00000008 + -0x78);
      if (unaff_x20 != (long *)0x0) {
        plVar47 = unaff_x20 + 1;
        do {
          lVar24 = *plVar47;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar6) {
            *plVar47 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          param_1 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if ((char)plVar39[8] == '\x01') {
      pcVar8 = (code *)*plVar39;
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      if (*(long *)((long)register0x00000008 + -0xa8) != 0) {
        plVar47 = (long *)(*(long *)((long)register0x00000008 + -0xa8) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar6) {
            *plVar47 = *plVar47 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      param_1 = (long *)((long)register0x00000008 + -0x80);
      (*pcVar8)(param_1,plVar39);
      plVar39 = *(long **)((long)register0x00000008 + -0x78);
      if (plVar39 != (long *)0x0) {
        plVar47 = plVar39 + 1;
        do {
          lVar24 = *plVar47;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar6) {
            *plVar47 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_10a5f93e4:
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar39;
        }
      }
    }
    else if ((char)plVar39[8] == '\x02') {
      unaff_x20 = plVar39;
      FUN_10a688b40();
      if (unaff_x20 == (long *)0x0) {
        param_1 = (long *)0x0;
        if (param_2 != 0) {
          lVar15 = plVar39[1];
          lVar24 = *plVar39;
          if (plVar39[1] != 0) {
            plVar39 = (long *)(plVar39[1] + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = *plVar39 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar17 = *(undefined8 *)((long)register0x00000008 + -0xb0);
          plVar39 = *(long **)((long)register0x00000008 + -0xa8);
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
          *(long **)((long)register0x00000008 + -0x88) = plVar39;
          if (plVar39 != (long *)0x0) {
            plVar47 = plVar39 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar6) {
                *plVar47 = *plVar47 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          *(code **)((long)register0x00000008 + -0x80) = FUN_10a61d4dc;
          *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_FUN_110c00ea0;
          *(long *)((long)register0x00000008 + -0x68) = lVar15;
          *(long *)((long)register0x00000008 + -0x70) = lVar24;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
          *(long **)((long)register0x00000008 + -0x58) = plVar39;
          if (plVar39 != (long *)0x0) {
            plVar47 = plVar39 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar6) {
                *plVar47 = *plVar47 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
          unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x80);
          FUN_10a4634ec(param_2,(undefined1 *)((long)register0x00000008 + -0x80));
          param_1 = (long *)((long)register0x00000008 + -0x78);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))();
          if (plVar39 != (long *)0x0) {
            plVar47 = plVar39 + 1;
            do {
              lVar24 = *plVar47;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar6) {
                *plVar47 = lVar24 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plVar39 + 0x10))(plVar39);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              param_1 = plVar39;
            }
          }
          plVar39 = *(long **)((long)register0x00000008 + -0x98);
          if (plVar39 != (long *)0x0) {
            plVar47 = plVar39 + 1;
            do {
              lVar24 = *plVar47;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar6) {
                *plVar47 = lVar24 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10a5f93e4;
          }
        }
      }
      else {
        *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
        param_1 = (long *)*plVar39;
        FUN_10a61d2d0(param_1,(undefined1 *)((long)register0x00000008 + -0xb0));
        iVar40 = *(int *)((long)unaff_x20 + 4) + -1;
        *(int *)((long)unaff_x20 + 4) = iVar40;
        if (iVar40 == 0) {
          *(undefined4 *)unaff_x20 = 0;
        }
      }
    }
    plVar39 = *(long **)((long)register0x00000008 + -0xa8);
    if (plVar39 != (long *)0x0) {
      plVar47 = plVar39 + 1;
      do {
        lVar24 = *plVar47;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar6) {
          *plVar47 = lVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar39 + 0x10))(plVar39);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar39;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))(unaff_x21 + 8);
  FUN_10a61be10(unaff_x20 + 2);
  func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xa0));
  FUN_10a61be10((undefined1 *)((long)register0x00000008 + -0xb0));
  plVar39 = param_1;
  __Unwind_Resume();
  plVar47 = plVar39 + -0xd;
  *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x21;
  *(long **)((long)register0x00000008 + -0xd0) = unaff_x20;
  *(long **)((long)register0x00000008 + -200) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0xb8) = FUN_10a5f95c8;
  *(undefined8 *)((long)register0x00000008 + -0x168) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(plVar39 + 0x91) < 0x30) {
LAB_10a5f4d20:
    if ((*(byte *)(plVar39 + 0xc1) & 1) != 0) goto LAB_10a5f7850;
  }
  else {
    lVar24 = plVar39[0x97];
    if ((lVar24 == 0) || (FUN_10ab3b8d0(), (int)lVar24 != 2)) goto LAB_10a5f7850;
    if (*(uint *)(plVar39 + 0x91) < 0x30) goto LAB_10a5f4d20;
  }
  lVar15 = plVar39[0x20];
  for (lVar24 = *(long *)(lVar15 + 0x158); lVar24 != lVar15 + 0x150; lVar24 = *(long *)(lVar24 + 8))
  {
    if (*(long *)(lVar24 + 0x10) != 0) {
      plVar9 = (long *)(*(long *)(lVar24 + 0x10) + 0xb0);
      (**(code **)(*plVar9 + 0x18))(plVar9,0xd88b8b8a073aaad7);
      if (plVar9 != (long *)0x0) goto LAB_10a5f4d80;
    }
  }
  plVar9 = (long *)0x0;
LAB_10a5f4d80:
  uVar19 = (ulong)*(byte *)(plVar39[0x21] + 0x29);
  if (5 < uVar19) goto LAB_10a5f7a1c;
  plVar10 = *(long **)(plVar39[0x21] + uVar19 * 8 + 0x30);
  (**(code **)(*plVar10 + 0x18))();
  *(long **)((long)register0x00000008 + -0x3c8) = plVar47;
  if (((int)plVar10 == 0) || ((*(byte *)((long)plVar39 + 0x51e) & 1) != 0)) {
    if ((*(byte *)((long)plVar39 + 0x535) & 1) != 0) goto LAB_10a5f7850;
    plVar9 = plVar47;
    FUN_10a5f7bec();
    *(char *)((long)plVar39 + 0x535) = (char)plVar9;
    if ((int)plVar9 == 0) goto LAB_10a5f7850;
    plVar39 = (long *)plVar39[0xa9];
    if ((plVar39 == (long *)0x0) || ((**(code **)(*plVar39 + 0x90))(), *plVar39 == 0)) {
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x2d0);
      FUN_10a0d0194((undefined1 *)((long)register0x00000008 + -0x2e8));
      plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
      uVar41 = *(uint *)(plVar47 + 0x9e);
      lVar24 = 0xd0;
      if (0x2f < uVar41) {
        lVar24 = 0x108;
      }
      puVar28 = (undefined8 *)0x1137eb698;
      if (0x2f < uVar41) {
        puVar28 = (undefined8 *)0x1137eb6d0;
      }
      FUN_10ab6e728();
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        puVar36 = (undefined8 *)((long)register0x00000008 + -0x2d0);
        func_0x000107c3192c(puVar36,*puVar25,puVar25[1]);
      }
      else {
        uVar54 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x2c0) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x2c8) = uVar54;
        *(undefined8 *)((long)register0x00000008 + -0x2d0) = uVar17;
        puVar36 = puVar25;
      }
      *(undefined8 *)((long)register0x00000008 + -0x2b8) = puVar25[3];
      uVar49 = *(undefined4 *)(puVar25 + 6);
      uVar17 = puVar25[4];
      *(undefined8 *)((long)register0x00000008 + -0x2a8) = puVar25[5];
      *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x2a0) = uVar49;
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x298);
      if (cRam00000001137eb63f < '\0') {
        func_0x000107c3192c(puVar25,uRam00000001137eb628,uRam00000001137eb630);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x290) = uRam00000001137eb630;
        *puVar25 = uRam00000001137eb628;
        *(ulong *)((long)register0x00000008 + -0x288) =
             CONCAT17(cRam00000001137eb63f,uRam00000001137eb638);
        puVar25 = puVar36;
      }
      *(long *)((long)register0x00000008 + -0x280) = lRam00000001137eb640;
      *(undefined8 *)((long)register0x00000008 + -0x270) = uRam00000001137eb650;
      *(undefined8 *)((long)register0x00000008 + -0x278) = uRam00000001137eb648;
      *(undefined4 *)((long)register0x00000008 + -0x268) = uRam00000001137eb658;
      puVar36 = (undefined8 *)((long)register0x00000008 + -0x260);
      if (cRam00000001137eb677 < '\0') {
        func_0x000107c3192c(puVar36,uRam00000001137eb660,uRam00000001137eb668);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -600) = uRam00000001137eb668;
        *puVar36 = uRam00000001137eb660;
        *(ulong *)((long)register0x00000008 + -0x250) =
             CONCAT17(cRam00000001137eb677,uRam00000001137eb670);
        puVar36 = puVar25;
      }
      *(long *)((long)register0x00000008 + -0x248) = lRam00000001137eb678;
      *(undefined8 *)((long)register0x00000008 + -0x238) = uRam00000001137eb688;
      *(undefined8 *)((long)register0x00000008 + -0x240) = uRam00000001137eb680;
      *(undefined4 *)((long)register0x00000008 + -0x230) = uRam00000001137eb690;
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x228);
      pcVar1 = (char *)0x1137eb6af;
      if (0x2f < uVar41) {
        pcVar1 = (char *)0x1137eb6e7;
      }
      if (*pcVar1 < '\0') {
        puVar28 = (undefined8 *)0x1137eb6a0;
        if (0x2f < uVar41) {
          puVar28 = (undefined8 *)0x1137eb6d8;
        }
        func_0x000107c3192c(puVar25,*(undefined8 *)(lVar24 + 0x1137eb5c8),*puVar28);
      }
      else {
        uVar17 = *puVar28;
        *(undefined8 *)((long)register0x00000008 + -0x220) = puVar28[1];
        *puVar25 = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x218) = puVar28[2];
        puVar25 = puVar36;
      }
      puVar28 = (undefined8 *)0x1137eb6b0;
      if (0x2f < uVar41) {
        puVar28 = (undefined8 *)0x1137eb6e8;
      }
      *(undefined8 *)((long)register0x00000008 + -0x210) = *puVar28;
      puVar28 = (undefined8 *)0x1137eb6b8;
      if (0x2f < uVar41) {
        puVar28 = (undefined8 *)0x1137eb6f0;
      }
      uVar17 = *puVar28;
      *(undefined8 *)((long)register0x00000008 + -0x200) = puVar28[1];
      *(undefined8 *)((long)register0x00000008 + -0x208) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x1f8) = *(undefined4 *)(puVar28 + 2);
      FUN_10ab6f020();
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c3192c((undefined8 *)((long)register0x00000008 + -0x1f0),*puVar25,puVar25[1]);
      }
      else {
        uVar54 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar54;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = puVar25[3];
      uVar54 = puVar25[5];
      uVar17 = puVar25[4];
      *(undefined4 *)((long)register0x00000008 + -0x1c0) = *(undefined4 *)(puVar25 + 6);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = uVar54;
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar17;
      FUN_10ab6f520((undefined1 *)((long)register0x00000008 + -0x1b0),
                    (undefined1 *)((long)register0x00000008 + -0x2d0),5);
      lVar24 = *(long *)((long)register0x00000008 + -0x2e8);
      *(undefined4 *)(lVar24 + 0xf0) = *(undefined4 *)((long)register0x00000008 + -0x1b0);
      if ((undefined4 *)(lVar24 + 0xf0) != (undefined4 *)((long)register0x00000008 + -0x1b0)) {
        FUN_10a1903c4(lVar24 + 0xf8,*(long *)((long)register0x00000008 + -0x1a8),
                      *(long *)((long)register0x00000008 + -0x1a0),
                      (*(long *)((long)register0x00000008 + -0x1a0) -
                       *(long *)((long)register0x00000008 + -0x1a8) >> 3) * 0x6db6db6db6db6db7);
      }
      plVar39 = plVar47 + 0xb6;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -400);
      uVar53 = *(undefined8 *)((long)register0x00000008 + -0x178);
      uVar54 = *(undefined8 *)((long)register0x00000008 + -0x180);
      *(undefined8 *)(lVar24 + 0x118) = *(undefined8 *)((long)register0x00000008 + -0x188);
      *(undefined8 *)(lVar24 + 0x110) = uVar17;
      *(undefined8 *)(lVar24 + 0x128) = uVar53;
      *(undefined8 *)(lVar24 + 0x120) = uVar54;
      *(undefined8 *)(lVar24 + 0x130) = *(undefined8 *)((long)register0x00000008 + -0x170);
      *(undefined1 **)((long)register0x00000008 + -0x300) =
           (undefined1 *)((long)register0x00000008 + -0x1a8);
      func_0x00010a190844((undefined1 *)((long)register0x00000008 + -0x300));
      lVar24 = 0x118;
      do {
        lVar24 = lVar24 + -0x38;
      } while (lVar24 != 0);
      *(undefined8 *)(*(long *)((long)register0x00000008 + -0x2e8) + 0xe8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      FUN_10a1995d0((undefined1 *)((long)register0x00000008 + -0x2d0),
                    (undefined1 *)((long)register0x00000008 + -0x300),
                    (undefined1 *)((long)register0x00000008 + -0x1b0),
                    (undefined1 *)((long)register0x00000008 + -0x2e8));
      func_0x00010a19a938(plVar39,(undefined1 *)((long)register0x00000008 + -0x2d0));
      plVar9 = *(long **)((long)register0x00000008 + -0x2c8);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar24 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = (long *)*plVar39;
      if (*(char *)((long)plVar9 + 0xb9) != '\0') {
        *(undefined1 *)((long)plVar9 + 0xb9) = 0;
        (**(code **)(*plVar9 + 0xa0))();
        plVar9 = (long *)*plVar39;
      }
      if (*(char *)((long)plVar9 + 0xba) != '\0') {
        *(undefined1 *)((long)plVar9 + 0xba) = 0;
        (**(code **)(*plVar9 + 0xa0))();
      }
      *(long *)((long)register0x00000008 + -0x1b0) = plVar47[0x2e];
      FUN_10a2db3d8((undefined1 *)((long)register0x00000008 + -0x2d0),
                    (undefined1 *)((long)register0x00000008 + -0x1b0),plVar39);
      *(undefined8 *)((long)register0x00000008 + -0x2f8) =
           *(undefined8 *)((long)register0x00000008 + -0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0x300) =
           *(undefined8 *)((long)register0x00000008 + -0x2d0);
      if (*(long *)((long)register0x00000008 + -0x2c8) != 0) {
        plVar39 = (long *)(*(long *)((long)register0x00000008 + -0x2c8) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar6) {
            *plVar39 = *plVar39 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a426824(plVar47,(undefined1 *)((long)register0x00000008 + -0x300));
      plVar39 = *(long **)((long)register0x00000008 + -0x2f8);
      if (plVar39 != (long *)0x0) {
        plVar9 = plVar39 + 1;
        do {
          lVar24 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
      if (*(uint *)(plVar47 + 0x9e) < 0x30) {
        lVar24 = plVar47[0xac];
        *(long *)((long)register0x00000008 + -0x310) = plVar47[0xab];
        *(long *)((long)register0x00000008 + -0x308) = lVar24;
        if (lVar24 != 0) {
          plVar39 = (long *)(lVar24 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar6) {
              *plVar39 = *plVar39 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a42646c(plVar47,(undefined1 *)((long)register0x00000008 + -0x310));
        plVar39 = *(long **)((long)register0x00000008 + -0x308);
        if (plVar39 != (long *)0x0) {
          plVar9 = plVar39 + 1;
          do {
            lVar24 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_10a5f5368:
          if (lVar24 == 0) {
            (**(code **)(*plVar39 + 0x10))(plVar39);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
          }
        }
      }
      else {
        lVar24 = plVar47[0xaa];
        *(long *)((long)register0x00000008 + -0x310) = plVar47[0xa9];
        *(long *)((long)register0x00000008 + -0x308) = lVar24;
        if (lVar24 != 0) {
          plVar39 = (long *)(lVar24 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar6) {
              *plVar39 = *plVar39 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a42646c(plVar47,(undefined1 *)((long)register0x00000008 + -0x310));
        plVar39 = *(long **)((long)register0x00000008 + -0x308);
        if (plVar39 != (long *)0x0) {
          plVar9 = plVar39 + 1;
          do {
            lVar24 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a5f5368;
        }
      }
      plVar39 = *(long **)((long)register0x00000008 + -0x2c8);
      if (plVar39 != (long *)0x0) {
        plVar9 = plVar39 + 1;
        do {
          lVar24 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
      plVar39 = *(long **)((long)register0x00000008 + -0x2e0);
      if (plVar39 != (long *)0x0) {
        plVar9 = plVar39 + 1;
        do {
          lVar24 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
    }
    uVar41 = *(uint *)(plVar47 + 0x9e);
    plVar39 = (long *)plVar47[0xb6];
    (**(code **)(*plVar39 + 0x90))();
    lVar24 = *plVar39;
    if (uVar41 < 0x30) {
      *(undefined **)((long)register0x00000008 + -0x2d0) = &UNK_10f66a490;
      *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0x3b;
      lVar15 = *(long *)((long)register0x00000008 + -0x3c8);
      if (lVar24 == 0) {
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x2d0));
        goto LAB_10a5f7a1c;
      }
      plVar39 = *(long **)(lVar15 + 0x630);
      if (plVar39 == (long *)0x0) {
        iVar40 = 0;
      }
      else {
        iVar40 = 0;
        do {
          iVar40 = iVar40 + (int)((ulong)(plVar39[4] - plVar39[3]) >> 3) * (int)plVar39[2] *
                            -0x55555555;
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
      uVar41 = *(uint *)(lVar15 + 0x570);
      iVar38 = *(int *)(lVar15 + 0x57c);
      *(ulong *)((long)register0x00000008 + -0x3f8) = (ulong)uVar41;
      iVar45 = iVar38 + uVar41;
      *(int *)((long)register0x00000008 + -0x454) = iVar45;
      uVar41 = iVar45 + 1;
      *(ulong *)((long)register0x00000008 + -0x388) = (ulong)uVar41;
      uVar41 = iVar40 * uVar41;
      if ((uVar41 >> 0xf & 0xffff) != 0) {
        FUN_10a185264((undefined1 *)((long)register0x00000008 + -0x2d0),0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10f66a4cc,0x46);
        __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x1b0),0xffff);
        uVar19 = *(ulong *)((long)register0x00000008 + -0x1a8);
        puVar7 = *(undefined1 **)((long)register0x00000008 + -0x1b0);
        if (-1 < (char)*(byte *)((long)register0x00000008 + -0x199)) {
          uVar19 = (ulong)*(byte *)((long)register0x00000008 + -0x199);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x1b0);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x2d0),puVar7,uVar19);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10f66a513,0x53);
        FUN_10a61d104((undefined1 *)((long)register0x00000008 + -0x2d0));
        goto LAB_10a5f7a1c;
      }
      fVar58 = *(float *)(lVar15 + 0x578);
      *(undefined4 *)((long)register0x00000008 + -0x44c) = *(undefined4 *)(lVar15 + 0x574);
      uVar48 = *(uint *)(lVar15 + 0x580);
      *(undefined8 *)((long)register0x00000008 + -0x438) = 0;
      *(ulong *)((long)register0x00000008 + -0x440) = (ulong)uVar48;
      *(undefined4 *)((long)register0x00000008 + -0x444) =
           *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18);
      FUN_10ab4a154(lVar24,uVar41 * 2);
      param_2 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x388) *
                             (iVar40 * 6 + -6));
      FUN_10ab4cb54(lVar24);
      uVar41 = *(uint *)(lVar24 + 0x110);
      lVar15 = *(long *)(lVar24 + 0x100);
      if (uVar41 == 0xffffffff) {
        lVar20 = 0;
        lVar16 = *(long *)(lVar24 + 0xf8);
      }
      else {
        lVar16 = *(long *)(lVar24 + 0xf8);
        uVar19 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar19 < uVar41 || uVar19 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar20 = lVar16 + (ulong)uVar41 * 0x38;
      }
      lVar27 = lVar16;
      if (lVar16 == lVar15) {
        lVar27 = 0;
        lVar55 = lVar16;
      }
      else {
        do {
          lVar55 = lVar27;
          if (*(long *)(lVar27 + 0x18) == lRam00000001137eb640) break;
          lVar27 = lVar27 + 0x38;
          lVar55 = lVar15;
        } while (lVar27 != lVar15);
        lVar56 = lVar16;
        lVar27 = 0;
        if (lVar55 != lVar15) {
          lVar27 = lVar55;
        }
        do {
          lVar55 = lVar56;
          if (*(long *)(lVar56 + 0x18) == lRam00000001137eb678) break;
          lVar56 = lVar56 + 0x38;
          lVar55 = lVar15;
        } while (lVar56 != lVar15);
      }
      uVar41 = *(uint *)(lVar24 + 0x120);
      lVar56 = lVar16;
      if (uVar41 == 0xffffffff) {
        lVar35 = 0;
      }
      else {
        uVar19 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar19 < uVar41 || uVar19 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar35 = lVar16 + (ulong)uVar41 * 0x38;
      }
      for (; (lVar56 != lVar15 &&
             (lVar16 = lVar56, *(long *)(lVar56 + 0x18) != lRam00000001137eb6e8));
          lVar56 = lVar56 + 0x38) {
        lVar16 = lVar15;
      }
      if (((((lVar20 == 0) || (*(int *)(lVar20 + 0x24) != 5)) || (lVar27 == 0)) ||
          (((((*(int *)(lVar20 + 0x28) != 3 || (*(int *)(lVar27 + 0x24) != 5)) ||
             ((lVar55 == lVar15 || ((lVar55 == 0 || (*(int *)(lVar27 + 0x28) != 3)))))) ||
            (*(int *)(lVar55 + 0x24) != 5)) ||
           (((((*(int *)(lVar55 + 0x28) != 3 || (lVar35 == 0)) || (*(int *)(lVar35 + 0x24) != 5)) ||
             ((lVar16 == lVar15 || (lVar16 == 0)))) || (*(int *)(lVar35 + 0x28) != 2)))))) ||
         ((*(int *)(lVar16 + 0x24) != 5 || (*(int *)(lVar16 + 0x28) != 3)))) goto LAB_10a5f78a8;
      lVar15 = *(long *)(lVar24 + 0x10);
      uVar41 = *(uint *)(lVar20 + 0x30);
      uVar48 = *(uint *)(lVar24 + 0xf0);
      uVar14 = *(uint *)(lVar27 + 0x30);
      uVar2 = *(uint *)(lVar55 + 0x30);
      uVar3 = *(uint *)(lVar35 + 0x30);
      uVar4 = *(uint *)(lVar16 + 0x30);
      FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0x2d0),lVar24);
      lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x3c8) + 0x630);
      if (lVar24 != 0) {
        uVar34 = 0;
        *(undefined4 *)((long)register0x00000008 + -0x418) = 0;
        *(ulong *)((long)register0x00000008 + -0x390) = lVar15 + (ulong)uVar41;
        *(ulong *)((long)register0x00000008 + -0x370) = lVar15 + (ulong)uVar14;
        *(ulong *)((long)register0x00000008 + -0x368) = lVar15 + (ulong)uVar2;
        *(ulong *)((long)register0x00000008 + -0x398) = lVar15 + (ulong)uVar3;
        *(ulong *)((long)register0x00000008 + -0x3a0) = lVar15 + (ulong)uVar4;
        fVar60 = fVar58 * *(float *)((long)register0x00000008 + -0x44c);
        if (0.0 <= fVar58) {
          fVar60 = fVar58;
        }
        *(float *)((long)register0x00000008 + -0x450) = fVar60;
        *(int *)((long)register0x00000008 + -0x458) =
             ~(iVar38 + (int)*(undefined8 *)((long)register0x00000008 + -0x3f8));
        do {
          *(long *)((long)register0x00000008 + -0x400) = lVar24;
          lVar15 = *(long *)(lVar24 + 0x18);
          lVar24 = *(long *)(lVar24 + 0x20);
          if (lVar24 - lVar15 != 0) {
            *(undefined8 *)((long)register0x00000008 + -1000) = 0;
            uVar19 = 0;
            *(undefined4 *)((long)register0x00000008 + -0x414) = 0;
            uVar41 = (int)((ulong)(lVar24 - lVar15) >> 3) *
                     (int)*(undefined8 *)((long)register0x00000008 + -0x388) * -0x55555555;
            *(float *)((long)register0x00000008 + -0x344) = (float)uVar41;
            *(uint *)((long)register0x00000008 + -0x448) = uVar41 - 1;
            do {
              plVar39 = (long *)(lVar15 + uVar19 * 0x18);
              *(long **)((long)register0x00000008 + -0x340) = plVar39;
              lVar16 = *plVar39;
              lVar20 = plVar39[1];
              uVar19 = (lVar20 - lVar16 >> 2) * -0x5555555555555555;
              iVar40 = (int)uVar19 * 2;
              *(int *)((long)register0x00000008 + -0x3ec) = iVar40 + -2;
              if (lVar20 != lVar16) {
                uVar32 = 0;
                do {
                  uVar42 = (ulong)(uVar34 + 1);
                  puVar36 = (undefined8 *)(lVar16 + uVar32 * 0xc);
                  lVar24 = *(long *)((long)register0x00000008 + -0x390);
                  puVar28 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar34);
                  uVar17 = *puVar36;
                  *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(puVar36 + 1);
                  fVar60 = (float)uVar32 / (float)(uVar19 - 1);
                  *puVar28 = uVar17;
                  uVar17 = *puVar36;
                  puVar25 = (undefined8 *)(lVar24 + uVar48 * uVar42);
                  *(undefined8 **)((long)register0x00000008 + -0x420) = puVar36;
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar36 + 1);
                  *(undefined8 **)((long)register0x00000008 + -0x3b0) = puVar25;
                  *(undefined8 **)((long)register0x00000008 + -0x3a8) = puVar28;
                  *puVar25 = uVar17;
                  lVar16 = (ulong)uVar48 * (ulong)uVar34;
                  lVar15 = uVar48 * uVar42;
                  lVar24 = *(long *)((long)register0x00000008 + -0x3a0);
                  puVar29 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar34);
                  *puVar29 = 0x3f800000;
                  puVar37 = (undefined4 *)(lVar24 + uVar48 * uVar42);
                  *puVar37 = 0xbf800000;
                  iVar45 = *(int *)((long)register0x00000008 + -0x444);
                  fVar58 = fVar60;
                  if (iVar45 < 0x79) {
                    fVar58 = 0.0;
                  }
                  puVar29[1] = fVar58;
                  puVar37[1] = fVar58;
                  *(undefined4 **)((long)register0x00000008 + -0x380) = puVar37;
                  *(undefined4 **)((long)register0x00000008 + -0x378) = puVar29;
                  puVar29[2] = 0;
                  puVar37[2] = 0;
                  lVar24 = *(long *)((long)register0x00000008 + -0x398);
                  puVar37 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar34);
                  *puVar37 = 0;
                  puVar37[1] = 1.0 - fVar60;
                  puVar29 = (undefined4 *)(lVar24 + uVar48 * uVar42);
                  *puVar29 = 0x3f800000;
                  *(undefined4 **)((long)register0x00000008 + -0x3c0) = puVar29;
                  *(undefined4 **)((long)register0x00000008 + -0x3b8) = puVar37;
                  puVar29[1] = 1.0 - fVar60;
                  *(ulong *)((long)register0x00000008 + -0x338) = uVar32;
                  if (uVar32 == 0) {
                    lVar24 = *(long *)((long)register0x00000008 + -0x368);
                    puVar25 = (undefined8 *)(lVar24 + lVar16);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar24 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    lVar24 = 0;
                    if (iVar45 < 0x79) {
                      lVar20 = *(long *)((long)register0x00000008 + -0x380);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x378) + 4) = 0x3f800000
                      ;
                      *(undefined4 *)(lVar20 + 4) = 0x3f800000;
                    }
                  }
                  else {
                    uVar32 = uVar32 - 1;
                    lVar24 = **(long **)((long)register0x00000008 + -0x340);
                    uVar19 = ((*(long **)((long)register0x00000008 + -0x340))[1] - lVar24 >> 2) *
                             -0x5555555555555555;
                    if (uVar19 < uVar32 || uVar19 - uVar32 == 0) goto LAB_10a5f7a1c;
                    puVar28 = (undefined8 *)(lVar24 + uVar32 * 0xc);
                    lVar24 = *(long *)((long)register0x00000008 + -0x368);
                    puVar25 = (undefined8 *)(lVar24 + lVar16);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar24 + lVar15);
                    lVar24 = *(long *)((long)register0x00000008 + -0x338);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                  }
                  lVar20 = **(long **)((long)register0x00000008 + -0x340);
                  uVar19 = ((*(long **)((long)register0x00000008 + -0x340))[1] - lVar20 >> 2) *
                           -0x5555555555555555;
                  *(uint *)((long)register0x00000008 + -0x424) = uVar34;
                  if (lVar24 == uVar19 - 1) {
                    lVar24 = *(long *)((long)register0x00000008 + -0x370);
                    puVar25 = (undefined8 *)(lVar24 + lVar16);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar24 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    if (*(int *)((long)register0x00000008 + -0x444) < 0x79) {
                      lVar24 = *(long *)((long)register0x00000008 + -0x380);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x378) + 4) = 0x40000000
                      ;
                      *(undefined4 *)(lVar24 + 4) = 0x40000000;
                    }
                  }
                  else {
                    uVar32 = lVar24 + 1;
                    if (uVar19 < uVar32 || uVar19 - uVar32 == 0) goto LAB_10a5f7a1c;
                    puVar28 = (undefined8 *)(lVar20 + uVar32 * 0xc);
                    lVar24 = *(long *)((long)register0x00000008 + -0x370);
                    puVar25 = (undefined8 *)(lVar24 + lVar16);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar24 + lVar15);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(undefined4 *)((long)register0x00000008 + -0x418));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  *(undefined4 *)((long)register0x00000008 + -0x424));
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(undefined4 *)((long)register0x00000008 + -0x418));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  *(int *)((long)register0x00000008 + -0x424) + 2);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(undefined4 *)((long)register0x00000008 + -0x418));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(int *)((long)register0x00000008 + -0x418) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  *(int *)((long)register0x00000008 + -0x424) + 3);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(int *)((long)register0x00000008 + -0x418) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(int *)((long)register0x00000008 + -0x418) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                    param_2 = (ulong)(*(int *)((long)register0x00000008 + -0x424) + 2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0));
                  }
                  if (1 < (uint)*(undefined8 *)((long)register0x00000008 + -0x388)) {
                    *(long *)((long)register0x00000008 + -0x3d8) =
                         *(long *)((long)register0x00000008 + -0x370) + lVar15;
                    *(long *)((long)register0x00000008 + -0x3d0) =
                         *(long *)((long)register0x00000008 + -0x370) + lVar16;
                    *(long *)((long)register0x00000008 + -0x3e0) =
                         *(long *)((long)register0x00000008 + -0x368) + lVar16;
                    puVar25 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x368) + lVar15);
                    *(undefined8 *)((long)register0x00000008 + -0x408) = 0;
                    *(ulong *)((long)register0x00000008 + -0x410) =
                         (ulong)(uint)(*(float *)((long)register0x00000008 + -0x44c) +
                                      *(float *)((long)register0x00000008 + -0x450) * fVar60);
                    iVar45 = *(int *)((long)register0x00000008 + -0x418) + -1;
                    iVar38 = *(int *)((long)register0x00000008 + -0x418) + -2;
                    uVar41 = *(uint *)((long)register0x00000008 + -0x448);
                    iVar43 = *(int *)((long)register0x00000008 + -0x424);
                    uVar19 = 1;
                    do {
                      fVar60 = (float)(uint)((int)*(undefined8 *)((long)register0x00000008 + -1000)
                                            + (int)uVar19) /
                               *(float *)((long)register0x00000008 + -0x344);
                      fVar58 = fVar60 * 78.233 + fVar60 * 12.9898;
                      _sinf();
                      fVar58 = fVar58 * 43758.547 - (float)(int)(fVar58 * 43758.547);
                      *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
                      *(ulong *)((long)register0x00000008 + -0x360) = (ulong)(uint)fVar58;
                      fVar58 = fVar58 * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
                      *(ulong *)((long)register0x00000008 + -800) = (ulong)(uint)fVar58;
                      fVar58 = fVar60 * 78.233 + fVar58 * 12.9898;
                      _sinf();
                      fVar58 = (fVar58 * 43758.547 - (float)(int)(fVar58 * 43758.547)) * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x328) = 0;
                      *(ulong *)((long)register0x00000008 + -0x330) = (ulong)(uint)fVar58;
                      fVar58 = fVar58 * 78.233 +
                               (float)*(undefined8 *)((long)register0x00000008 + -800) * 12.9898;
                      _sinf();
                      fVar58 = (fVar58 * 43758.547 - (float)(int)(fVar58 * 43758.547)) * 2.0 + -1.0;
                      if (*(ulong *)((long)register0x00000008 + -0x3f8) < uVar19) {
                        param_2 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x400) +
                                                  0x10);
                        puVar11 = *(uint **)((long)register0x00000008 + -0x3c8);
                        func_0x00010a5f9694(puVar11,param_2,
                                            *(undefined4 *)((long)register0x00000008 + -0x414));
                        uVar14 = *puVar11;
                        uVar32 = (ulong)uVar14;
                        uVar2 = puVar11[1];
                        uVar42 = (ulong)uVar2;
                        if (((int)uVar14 < 0) && ((int)uVar2 < 0)) goto LAB_10a5f5d9c;
                        uVar17 = **(undefined8 **)((long)register0x00000008 + -0x420);
                        fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x420) + 1)
                        ;
                        fVar50 = (float)uVar17;
                        fVar52 = (float)((ulong)uVar17 >> 0x20);
                        fVar51 = fVar59;
                        if (-1 < (int)uVar14) {
                          fVar60 = ((float)uVar41 / *(float *)((long)register0x00000008 + -0x344)) *
                                   78.233 + fVar60 * 12.9898;
                          _sinf();
                          lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x18);
                          uVar21 = (*(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x20) -
                                    lVar24 >> 3) * -0x5555555555555555;
                          if (uVar21 < uVar32 || uVar21 - uVar32 == 0) goto LAB_10a5f7a1c;
                          plVar39 = (long *)(lVar24 + uVar32 * 0x18);
                          lVar24 = *plVar39;
                          uVar32 = (plVar39[1] - lVar24 >> 2) * -0x5555555555555555;
                          uVar21 = *(ulong *)((long)register0x00000008 + -0x338);
                          if (uVar32 < uVar21 || uVar32 - uVar21 == 0) goto LAB_10a5f7a1c;
                          fVar60 = fVar60 * 43758.547 - (float)(int)(fVar60 * 43758.547);
                          puVar28 = (undefined8 *)(lVar24 + uVar21 * 0xc);
                          fVar51 = 1.0 - fVar60;
                          uVar17 = *puVar28;
                          uVar17 = CONCAT44(fVar52 * fVar51 +
                                            (float)((ulong)uVar17 >> 0x20) * fVar60,
                                            fVar50 * fVar51 + (float)uVar17 * fVar60);
                          fVar51 = fVar51 * fVar59 + fVar60 * *(float *)(puVar28 + 1);
                        }
                        if (-1 < (int)uVar2) {
                          lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x18);
                          uVar32 = (*(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x20) -
                                    lVar24 >> 3) * -0x5555555555555555;
                          if (uVar32 < uVar42 || uVar32 - uVar42 == 0) goto LAB_10a5f7a1c;
                          plVar39 = (long *)(lVar24 + uVar42 * 0x18);
                          lVar24 = *plVar39;
                          uVar32 = (plVar39[1] - lVar24 >> 2) * -0x5555555555555555;
                          uVar42 = *(ulong *)((long)register0x00000008 + -0x338);
                          if (uVar32 < uVar42 || uVar32 - uVar42 == 0) goto LAB_10a5f7a1c;
                          puVar28 = (undefined8 *)(lVar24 + uVar42 * 0xc);
                          fVar57 = (float)*(undefined8 *)((long)register0x00000008 + -0x360);
                          fVar60 = 1.0 - fVar57;
                          uVar54 = *puVar28;
                          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar60 +
                                            (float)((ulong)uVar54 >> 0x20) * fVar57,
                                            (float)uVar17 * fVar60 + (float)uVar54 * fVar57);
                          fVar51 = fVar60 * fVar51 + fVar57 * *(float *)(puVar28 + 1);
                        }
                        fVar60 = (float)*(undefined8 *)((long)register0x00000008 + -0x440);
                        fVar50 = (float)*(undefined8 *)((long)register0x00000008 + -800) * fVar60 +
                                 ((float)uVar17 - fVar50);
                        fVar52 = (float)*(undefined8 *)((long)register0x00000008 + -0x330) * fVar60
                                 + ((float)((ulong)uVar17 >> 0x20) - fVar52);
                        fVar60 = fVar60 * fVar58 + (fVar51 - fVar59);
                        uVar49 = 0x40000000;
                      }
                      else {
LAB_10a5f5d9c:
                        fVar60 = (float)*(undefined8 *)((long)register0x00000008 + -0x410);
                        fVar50 = (float)*(undefined8 *)((long)register0x00000008 + -800) * fVar60;
                        fVar52 = (float)*(undefined8 *)((long)register0x00000008 + -0x330) * fVar60;
                        fVar60 = fVar60 * fVar58;
                        uVar49 = 0x3f800000;
                      }
                      uVar2 = iVar40 + iVar43;
                      uVar14 = uVar2 + 1;
                      puVar28 = *(undefined8 **)((long)register0x00000008 + -0x3b0);
                      fVar58 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x3a8) + 1);
                      lVar24 = *(long *)((long)register0x00000008 + -0x390);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x3a8);
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(puVar28 + 1);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14);
                      uVar17 = *puVar28;
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      puVar28 = *(undefined8 **)((long)register0x00000008 + -0x3d8);
                      fVar58 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x3d0) + 1);
                      lVar24 = *(long *)((long)register0x00000008 + -0x370);
                      lVar15 = *(long *)((long)register0x00000008 + -0x368);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x3d0);
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(puVar28 + 1);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14);
                      uVar17 = *puVar28;
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x3e0) + 1);
                      puVar28 = (undefined8 *)(lVar15 + (ulong)uVar48 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x3e0);
                      *puVar28 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar28 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(puVar25 + 1);
                      puVar28 = (undefined8 *)(lVar15 + (ulong)uVar48 * (ulong)uVar14);
                      uVar17 = *puVar25;
                      *puVar28 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar28 + 1) = fVar60 + fVar58;
                      lVar24 = *(long *)((long)register0x00000008 + -0x398);
                      *(undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2) =
                           **(undefined8 **)((long)register0x00000008 + -0x3b8);
                      *(undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14) =
                           **(undefined8 **)((long)register0x00000008 + -0x3c0);
                      puVar29 = *(undefined4 **)((long)register0x00000008 + -0x380);
                      puVar37 = *(undefined4 **)((long)register0x00000008 + -0x378);
                      lVar24 = *(long *)((long)register0x00000008 + -0x3a0);
                      puVar22 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2);
                      *puVar22 = *puVar37;
                      puVar18 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14);
                      *puVar18 = *puVar29;
                      puVar22[1] = puVar37[1];
                      puVar18[1] = puVar29[1];
                      puVar22[2] = uVar49;
                      puVar18[2] = uVar49;
                      if (*(ulong *)((long)register0x00000008 + -0x338) <
                          ((*(long **)((long)register0x00000008 + -0x340))[1] -
                           **(long **)((long)register0x00000008 + -0x340) >> 2) *
                          -0x5555555555555555 - 1U) {
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar38);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),(ulong)uVar2
                                     );
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar38);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 2);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar38);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar45);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 3);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar45);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar45);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                        param_2 = (ulong)(iVar40 + iVar43 + 2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0));
                      }
                      uVar19 = uVar19 + 1;
                      iVar45 = iVar45 + *(int *)((long)register0x00000008 + -0x3ec);
                      iVar38 = iVar38 + *(int *)((long)register0x00000008 + -0x3ec);
                      iVar43 = iVar43 + iVar40;
                      uVar41 = uVar41 - 1;
                    } while (*(ulong *)((long)register0x00000008 + -0x388) != uVar19);
                  }
                  lVar16 = **(long **)((long)register0x00000008 + -0x340);
                  uVar19 = ((*(long **)((long)register0x00000008 + -0x340))[1] - lVar16 >> 2) *
                           -0x5555555555555555;
                  iVar45 = *(int *)((long)register0x00000008 + -0x418) + 2;
                  if (uVar19 - 1 <= *(ulong *)((long)register0x00000008 + -0x338)) {
                    iVar45 = *(int *)((long)register0x00000008 + -0x418);
                  }
                  *(int *)((long)register0x00000008 + -0x418) = iVar45;
                  uVar34 = *(int *)((long)register0x00000008 + -0x424) + 2;
                  uVar32 = *(ulong *)((long)register0x00000008 + -0x338) + 1;
                } while (uVar32 < uVar19);
                lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x18);
                lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x20);
              }
              uVar34 = uVar34 + iVar40 * *(int *)((long)register0x00000008 + -0x454);
              *(int *)((long)register0x00000008 + -0x418) =
                   *(int *)((long)register0x00000008 + -0x418) +
                   *(int *)((long)register0x00000008 + -0x3ec) *
                   *(int *)((long)register0x00000008 + -0x454);
              uVar19 = (ulong)(*(int *)((long)register0x00000008 + -0x414) + 1U);
              uVar32 = (lVar24 - lVar15 >> 3) * -0x5555555555555555;
              *(int *)((long)register0x00000008 + -0x448) =
                   *(int *)((long)register0x00000008 + -0x448) +
                   *(int *)((long)register0x00000008 + -0x458);
              *(long *)((long)register0x00000008 + -1000) =
                   *(long *)((long)register0x00000008 + -1000) +
                   *(long *)((long)register0x00000008 + -0x388);
              *(uint *)((long)register0x00000008 + -0x414) =
                   *(int *)((long)register0x00000008 + -0x414) + 1U;
            } while (uVar19 <= uVar32 && uVar32 - uVar19 != 0);
          }
          lVar24 = **(long **)((long)register0x00000008 + -0x400);
        } while (lVar24 != 0);
      }
    }
    else {
      *(undefined **)((long)register0x00000008 + -0x2d0) = &UNK_10f66a490;
      *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0x3b;
      lVar15 = *(long *)((long)register0x00000008 + -0x3c8);
      if (lVar24 == 0) {
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x2d0));
        goto LAB_10a5f7a1c;
      }
      plVar39 = *(long **)(lVar15 + 0x630);
      if (plVar39 == (long *)0x0) {
        iVar40 = 0;
      }
      else {
        iVar40 = 0;
        do {
          iVar40 = iVar40 + (int)((ulong)(plVar39[4] - plVar39[3]) >> 3) * (int)plVar39[2] *
                            -0x55555555;
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
      uVar41 = *(uint *)(lVar15 + 0x570);
      iVar38 = *(int *)(lVar15 + 0x57c);
      *(ulong *)((long)register0x00000008 + -0x3f8) = (ulong)uVar41;
      iVar45 = iVar38 + uVar41;
      *(int *)((long)register0x00000008 + -0x454) = iVar45;
      uVar41 = iVar45 + 1;
      *(ulong *)((long)register0x00000008 + -0x388) = (ulong)uVar41;
      uVar41 = iVar40 * uVar41;
      if ((uVar41 >> 0xf & 0xffff) != 0) {
        FUN_10a185264((undefined1 *)((long)register0x00000008 + -0x2d0),0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10f66a4cc,0x46);
        __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x1b0),0xffff);
        uVar19 = *(ulong *)((long)register0x00000008 + -0x1a8);
        puVar7 = *(undefined1 **)((long)register0x00000008 + -0x1b0);
        if (-1 < (char)*(byte *)((long)register0x00000008 + -0x199)) {
          uVar19 = (ulong)*(byte *)((long)register0x00000008 + -0x199);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x1b0);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x2d0),puVar7,uVar19);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10f66a513,0x53);
        FUN_10a61d104((undefined1 *)((long)register0x00000008 + -0x2d0));
        goto LAB_10a5f7a1c;
      }
      fVar58 = *(float *)(lVar15 + 0x578);
      *(undefined4 *)((long)register0x00000008 + -0x44c) = *(undefined4 *)(lVar15 + 0x574);
      uVar48 = *(uint *)(lVar15 + 0x580);
      *(undefined8 *)((long)register0x00000008 + -0x438) = 0;
      *(ulong *)((long)register0x00000008 + -0x440) = (ulong)uVar48;
      *(undefined4 *)((long)register0x00000008 + -0x444) =
           *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18);
      FUN_10ab4a154(lVar24,uVar41 * 2);
      param_2 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x388) *
                             (iVar40 * 6 + -6));
      FUN_10ab4cb54(lVar24);
      uVar41 = *(uint *)(lVar24 + 0x110);
      lVar15 = *(long *)(lVar24 + 0x100);
      if (uVar41 == 0xffffffff) {
        lVar20 = 0;
        lVar16 = *(long *)(lVar24 + 0xf8);
      }
      else {
        lVar16 = *(long *)(lVar24 + 0xf8);
        uVar19 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar19 < uVar41 || uVar19 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar20 = lVar16 + (ulong)uVar41 * 0x38;
      }
      lVar27 = lVar16;
      if (lVar16 == lVar15) {
        lVar27 = 0;
        lVar55 = lVar16;
      }
      else {
        do {
          lVar55 = lVar27;
          if (*(long *)(lVar27 + 0x18) == lRam00000001137eb640) break;
          lVar27 = lVar27 + 0x38;
          lVar55 = lVar15;
        } while (lVar27 != lVar15);
        lVar56 = lVar16;
        lVar27 = 0;
        if (lVar55 != lVar15) {
          lVar27 = lVar55;
        }
        do {
          lVar55 = lVar56;
          if (*(long *)(lVar56 + 0x18) == lRam00000001137eb678) break;
          lVar56 = lVar56 + 0x38;
          lVar55 = lVar15;
        } while (lVar56 != lVar15);
      }
      uVar41 = *(uint *)(lVar24 + 0x120);
      lVar56 = lVar16;
      if (uVar41 == 0xffffffff) {
        lVar35 = 0;
      }
      else {
        uVar19 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar19 < uVar41 || uVar19 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar35 = lVar16 + (ulong)uVar41 * 0x38;
      }
      for (; (lVar56 != lVar15 &&
             (lVar16 = lVar56, *(long *)(lVar56 + 0x18) != lRam00000001137eb6e8));
          lVar56 = lVar56 + 0x38) {
        lVar16 = lVar15;
      }
      if ((((((lVar20 == 0) || (*(int *)(lVar20 + 0x24) != 5)) || (lVar27 == 0)) ||
           ((*(int *)(lVar20 + 0x28) != 3 || (*(int *)(lVar27 + 0x24) != 5)))) ||
          ((lVar55 == lVar15 || ((lVar55 == 0 || (*(int *)(lVar27 + 0x28) != 3)))))) ||
         ((*(int *)(lVar55 + 0x24) != 5 ||
          ((((*(int *)(lVar55 + 0x28) != 3 || (lVar35 == 0)) || (*(int *)(lVar35 + 0x24) != 5)) ||
           (((lVar16 == lVar15 || (lVar16 == 0)) ||
            ((*(int *)(lVar35 + 0x28) != 2 ||
             ((*(int *)(lVar16 + 0x24) != 5 || (*(int *)(lVar16 + 0x28) != 4)))))))))))) {
        FUN_10a3ee510(&UNK_10f66a567);
        goto LAB_10a5f7a1c;
      }
      lVar15 = *(long *)(lVar24 + 0x10);
      uVar41 = *(uint *)(lVar20 + 0x30);
      uVar48 = *(uint *)(lVar24 + 0xf0);
      uVar14 = *(uint *)(lVar27 + 0x30);
      uVar2 = *(uint *)(lVar55 + 0x30);
      uVar3 = *(uint *)(lVar35 + 0x30);
      uVar4 = *(uint *)(lVar16 + 0x30);
      FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0x2d0),lVar24);
      lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x3c8) + 0x630);
      if (lVar24 != 0) {
        uVar34 = 0;
        *(undefined4 *)((long)register0x00000008 + -0x418) = 0;
        *(ulong *)((long)register0x00000008 + -0x390) = lVar15 + (ulong)uVar41;
        *(ulong *)((long)register0x00000008 + -0x370) = lVar15 + (ulong)uVar14;
        *(ulong *)((long)register0x00000008 + -0x368) = lVar15 + (ulong)uVar2;
        *(ulong *)((long)register0x00000008 + -0x398) = lVar15 + (ulong)uVar3;
        *(ulong *)((long)register0x00000008 + -0x3a0) = lVar15 + (ulong)uVar4;
        fVar60 = fVar58 * *(float *)((long)register0x00000008 + -0x44c);
        if (0.0 <= fVar58) {
          fVar60 = fVar58;
        }
        *(float *)((long)register0x00000008 + -0x450) = fVar60;
        *(int *)((long)register0x00000008 + -0x458) =
             ~(iVar38 + (int)*(undefined8 *)((long)register0x00000008 + -0x3f8));
        do {
          *(long *)((long)register0x00000008 + -0x400) = lVar24;
          lVar15 = *(long *)(lVar24 + 0x18);
          lVar24 = *(long *)(lVar24 + 0x20);
          if (lVar24 - lVar15 != 0) {
            *(undefined8 *)((long)register0x00000008 + -1000) = 0;
            uVar19 = 0;
            *(undefined4 *)((long)register0x00000008 + -0x414) = 0;
            uVar41 = (int)((ulong)(lVar24 - lVar15) >> 3) *
                     (int)*(undefined8 *)((long)register0x00000008 + -0x388) * -0x55555555;
            *(float *)((long)register0x00000008 + -0x344) = (float)uVar41;
            *(uint *)((long)register0x00000008 + -0x448) = uVar41 - 1;
            do {
              plVar39 = (long *)(lVar15 + uVar19 * 0x18);
              *(long **)((long)register0x00000008 + -0x340) = plVar39;
              lVar16 = *plVar39;
              lVar20 = plVar39[1];
              uVar19 = (lVar20 - lVar16 >> 2) * -0x5555555555555555;
              iVar40 = (int)uVar19 * 2;
              *(int *)((long)register0x00000008 + -0x3ec) = iVar40 + -2;
              if (lVar20 != lVar16) {
                uVar32 = 0;
                do {
                  uVar42 = (ulong)(uVar34 + 1);
                  puVar36 = (undefined8 *)(lVar16 + uVar32 * 0xc);
                  lVar24 = *(long *)((long)register0x00000008 + -0x390);
                  puVar28 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar34);
                  uVar17 = *puVar36;
                  *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(puVar36 + 1);
                  *puVar28 = uVar17;
                  puVar25 = (undefined8 *)(lVar24 + uVar48 * uVar42);
                  uVar17 = *puVar36;
                  *(undefined8 **)((long)register0x00000008 + -0x420) = puVar36;
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar36 + 1);
                  *(undefined8 **)((long)register0x00000008 + -0x3b0) = puVar25;
                  *(undefined8 **)((long)register0x00000008 + -0x3a8) = puVar28;
                  *puVar25 = uVar17;
                  lVar24 = *(long *)((long)register0x00000008 + -0x3a0);
                  puVar29 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar34);
                  *puVar29 = 0x3f800000;
                  puVar37 = (undefined4 *)(lVar24 + uVar48 * uVar42);
                  *puVar37 = 0xbf800000;
                  fVar60 = (float)uVar32 / (float)(uVar19 - 1);
                  lVar15 = (ulong)uVar48 * (ulong)uVar34;
                  lVar24 = uVar48 * uVar42;
                  iVar45 = *(int *)((long)register0x00000008 + -0x444);
                  fVar58 = fVar60;
                  if (iVar45 < 0x79) {
                    fVar58 = 0.0;
                  }
                  puVar29[1] = fVar58;
                  puVar37[1] = fVar58;
                  puVar29[2] = 0;
                  puVar37[2] = 0;
                  *(undefined4 **)((long)register0x00000008 + -0x380) = puVar37;
                  *(undefined4 **)((long)register0x00000008 + -0x378) = puVar29;
                  puVar29[3] = 0;
                  puVar37[3] = 0;
                  lVar16 = *(long *)((long)register0x00000008 + -0x398);
                  puVar37 = (undefined4 *)(lVar16 + (ulong)uVar48 * (ulong)uVar34);
                  *puVar37 = 0;
                  puVar37[1] = 1.0 - fVar60;
                  puVar29 = (undefined4 *)(lVar16 + uVar48 * uVar42);
                  *puVar29 = 0x3f800000;
                  *(undefined4 **)((long)register0x00000008 + -0x3c0) = puVar29;
                  *(undefined4 **)((long)register0x00000008 + -0x3b8) = puVar37;
                  puVar29[1] = 1.0 - fVar60;
                  *(ulong *)((long)register0x00000008 + -0x338) = uVar32;
                  if (uVar32 == 0) {
                    lVar16 = *(long *)((long)register0x00000008 + -0x368);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar16 + lVar24);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    lVar16 = 0;
                    if (iVar45 < 0x79) {
                      lVar20 = *(long *)((long)register0x00000008 + -0x380);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x378) + 4) = 0x3f800000
                      ;
                      *(undefined4 *)(lVar20 + 4) = 0x3f800000;
                    }
                  }
                  else {
                    uVar32 = uVar32 - 1;
                    lVar16 = **(long **)((long)register0x00000008 + -0x340);
                    uVar19 = ((*(long **)((long)register0x00000008 + -0x340))[1] - lVar16 >> 2) *
                             -0x5555555555555555;
                    if (uVar19 < uVar32 || uVar19 - uVar32 == 0) goto LAB_10a5f7a1c;
                    puVar28 = (undefined8 *)(lVar16 + uVar32 * 0xc);
                    lVar16 = *(long *)((long)register0x00000008 + -0x368);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar16 + lVar24);
                    lVar16 = *(long *)((long)register0x00000008 + -0x338);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                  }
                  lVar20 = **(long **)((long)register0x00000008 + -0x340);
                  uVar19 = ((*(long **)((long)register0x00000008 + -0x340))[1] - lVar20 >> 2) *
                           -0x5555555555555555;
                  *(uint *)((long)register0x00000008 + -0x424) = uVar34;
                  if (lVar16 == uVar19 - 1) {
                    lVar16 = *(long *)((long)register0x00000008 + -0x370);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar16 + lVar24);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    if (*(int *)((long)register0x00000008 + -0x444) < 0x79) {
                      lVar16 = *(long *)((long)register0x00000008 + -0x380);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x378) + 4) = 0x40000000
                      ;
                      *(undefined4 *)(lVar16 + 4) = 0x40000000;
                    }
                  }
                  else {
                    uVar32 = lVar16 + 1;
                    if (uVar19 < uVar32 || uVar19 - uVar32 == 0) goto LAB_10a5f7a1c;
                    puVar28 = (undefined8 *)(lVar20 + uVar32 * 0xc);
                    lVar16 = *(long *)((long)register0x00000008 + -0x370);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar16 + lVar24);
                    uVar17 = *puVar28;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar25 = uVar17;
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(undefined4 *)((long)register0x00000008 + -0x418));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  *(undefined4 *)((long)register0x00000008 + -0x424));
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(undefined4 *)((long)register0x00000008 + -0x418));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  *(int *)((long)register0x00000008 + -0x424) + 2);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(undefined4 *)((long)register0x00000008 + -0x418));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(int *)((long)register0x00000008 + -0x418) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  *(int *)((long)register0x00000008 + -0x424) + 3);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(int *)((long)register0x00000008 + -0x418) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                  (undefined1 *)((long)register0x00000008 + -0x2d0),
                                  *(int *)((long)register0x00000008 + -0x418) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                  (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                    param_2 = (ulong)(*(int *)((long)register0x00000008 + -0x424) + 2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0));
                  }
                  if (1 < (uint)*(undefined8 *)((long)register0x00000008 + -0x388)) {
                    *(long *)((long)register0x00000008 + -0x3d8) =
                         *(long *)((long)register0x00000008 + -0x370) + lVar24;
                    *(long *)((long)register0x00000008 + -0x3d0) =
                         *(long *)((long)register0x00000008 + -0x370) + lVar15;
                    *(long *)((long)register0x00000008 + -0x3e0) =
                         *(long *)((long)register0x00000008 + -0x368) + lVar15;
                    puVar25 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x368) + lVar24);
                    *(undefined8 *)((long)register0x00000008 + -0x408) = 0;
                    *(ulong *)((long)register0x00000008 + -0x410) =
                         (ulong)(uint)(*(float *)((long)register0x00000008 + -0x44c) +
                                      *(float *)((long)register0x00000008 + -0x450) * fVar60);
                    iVar45 = *(int *)((long)register0x00000008 + -0x418) + -1;
                    iVar38 = *(int *)((long)register0x00000008 + -0x418) + -2;
                    uVar41 = *(uint *)((long)register0x00000008 + -0x448);
                    iVar43 = *(int *)((long)register0x00000008 + -0x424);
                    uVar19 = 1;
                    do {
                      fVar60 = (float)(uint)((int)*(undefined8 *)((long)register0x00000008 + -1000)
                                            + (int)uVar19) /
                               *(float *)((long)register0x00000008 + -0x344);
                      fVar58 = fVar60 * 78.233 + fVar60 * 12.9898;
                      _sinf();
                      fVar58 = fVar58 * 43758.547 - (float)(int)(fVar58 * 43758.547);
                      *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
                      *(ulong *)((long)register0x00000008 + -0x360) = (ulong)(uint)fVar58;
                      fVar58 = fVar58 * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
                      *(ulong *)((long)register0x00000008 + -800) = (ulong)(uint)fVar58;
                      fVar58 = fVar60 * 78.233 + fVar58 * 12.9898;
                      _sinf();
                      fVar58 = (fVar58 * 43758.547 - (float)(int)(fVar58 * 43758.547)) * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x328) = 0;
                      *(ulong *)((long)register0x00000008 + -0x330) = (ulong)(uint)fVar58;
                      fVar58 = fVar58 * 78.233 +
                               (float)*(undefined8 *)((long)register0x00000008 + -800) * 12.9898;
                      _sinf();
                      fVar58 = (fVar58 * 43758.547 - (float)(int)(fVar58 * 43758.547)) * 2.0 + -1.0;
                      if (*(ulong *)((long)register0x00000008 + -0x3f8) < uVar19) {
                        param_2 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x400) +
                                                  0x10);
                        puVar11 = *(uint **)((long)register0x00000008 + -0x3c8);
                        func_0x00010a5f9694(puVar11,param_2,
                                            *(undefined4 *)((long)register0x00000008 + -0x414));
                        uVar14 = *puVar11;
                        uVar32 = (ulong)uVar14;
                        uVar2 = puVar11[1];
                        uVar42 = (ulong)uVar2;
                        if (((int)uVar14 < 0) && ((int)uVar2 < 0)) goto LAB_10a5f6880;
                        uVar17 = **(undefined8 **)((long)register0x00000008 + -0x420);
                        fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x420) + 1)
                        ;
                        fVar50 = (float)uVar17;
                        fVar52 = (float)((ulong)uVar17 >> 0x20);
                        fVar51 = fVar59;
                        if (-1 < (int)uVar14) {
                          fVar60 = ((float)uVar41 / *(float *)((long)register0x00000008 + -0x344)) *
                                   78.233 + fVar60 * 12.9898;
                          _sinf();
                          lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x18);
                          uVar21 = (*(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x20) -
                                    lVar24 >> 3) * -0x5555555555555555;
                          if (uVar21 < uVar32 || uVar21 - uVar32 == 0) goto LAB_10a5f7a1c;
                          plVar39 = (long *)(lVar24 + uVar32 * 0x18);
                          lVar24 = *plVar39;
                          uVar32 = (plVar39[1] - lVar24 >> 2) * -0x5555555555555555;
                          uVar21 = *(ulong *)((long)register0x00000008 + -0x338);
                          if (uVar32 < uVar21 || uVar32 - uVar21 == 0) goto LAB_10a5f7a1c;
                          fVar60 = fVar60 * 43758.547 - (float)(int)(fVar60 * 43758.547);
                          puVar28 = (undefined8 *)(lVar24 + uVar21 * 0xc);
                          fVar51 = 1.0 - fVar60;
                          uVar17 = *puVar28;
                          uVar17 = CONCAT44(fVar52 * fVar51 +
                                            (float)((ulong)uVar17 >> 0x20) * fVar60,
                                            fVar50 * fVar51 + (float)uVar17 * fVar60);
                          fVar51 = fVar51 * fVar59 + fVar60 * *(float *)(puVar28 + 1);
                        }
                        if (-1 < (int)uVar2) {
                          lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x18);
                          uVar32 = (*(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x20) -
                                    lVar24 >> 3) * -0x5555555555555555;
                          if (uVar32 < uVar42 || uVar32 - uVar42 == 0) goto LAB_10a5f7a1c;
                          plVar39 = (long *)(lVar24 + uVar42 * 0x18);
                          lVar24 = *plVar39;
                          uVar32 = (plVar39[1] - lVar24 >> 2) * -0x5555555555555555;
                          uVar42 = *(ulong *)((long)register0x00000008 + -0x338);
                          if (uVar32 < uVar42 || uVar32 - uVar42 == 0) goto LAB_10a5f7a1c;
                          puVar28 = (undefined8 *)(lVar24 + uVar42 * 0xc);
                          fVar57 = (float)*(undefined8 *)((long)register0x00000008 + -0x360);
                          fVar60 = 1.0 - fVar57;
                          uVar54 = *puVar28;
                          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar60 +
                                            (float)((ulong)uVar54 >> 0x20) * fVar57,
                                            (float)uVar17 * fVar60 + (float)uVar54 * fVar57);
                          fVar51 = fVar60 * fVar51 + fVar57 * *(float *)(puVar28 + 1);
                        }
                        fVar60 = (float)*(undefined8 *)((long)register0x00000008 + -0x440);
                        fVar50 = (float)*(undefined8 *)((long)register0x00000008 + -800) * fVar60 +
                                 ((float)uVar17 - fVar50);
                        fVar52 = (float)*(undefined8 *)((long)register0x00000008 + -0x330) * fVar60
                                 + ((float)((ulong)uVar17 >> 0x20) - fVar52);
                        fVar60 = fVar60 * fVar58 + (fVar51 - fVar59);
                        uVar49 = 0x40000000;
                      }
                      else {
LAB_10a5f6880:
                        fVar60 = (float)*(undefined8 *)((long)register0x00000008 + -0x410);
                        fVar50 = (float)*(undefined8 *)((long)register0x00000008 + -800) * fVar60;
                        fVar52 = (float)*(undefined8 *)((long)register0x00000008 + -0x330) * fVar60;
                        fVar60 = fVar60 * fVar58;
                        uVar49 = 0x3f800000;
                      }
                      uVar2 = iVar40 + iVar43;
                      uVar14 = uVar2 + 1;
                      puVar28 = *(undefined8 **)((long)register0x00000008 + -0x3b0);
                      fVar58 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x3a8) + 1);
                      lVar24 = *(long *)((long)register0x00000008 + -0x390);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x3a8);
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(puVar28 + 1);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14);
                      uVar17 = *puVar28;
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      puVar28 = *(undefined8 **)((long)register0x00000008 + -0x3d8);
                      fVar58 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x3d0) + 1);
                      lVar24 = *(long *)((long)register0x00000008 + -0x370);
                      lVar15 = *(long *)((long)register0x00000008 + -0x368);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x3d0);
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(puVar28 + 1);
                      puVar36 = (undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14);
                      uVar17 = *puVar28;
                      *puVar36 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar36 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x3e0) + 1);
                      puVar28 = (undefined8 *)(lVar15 + (ulong)uVar48 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x3e0);
                      *puVar28 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar28 + 1) = fVar60 + fVar58;
                      fVar58 = *(float *)(puVar25 + 1);
                      puVar28 = (undefined8 *)(lVar15 + (ulong)uVar48 * (ulong)uVar14);
                      uVar17 = *puVar25;
                      *puVar28 = CONCAT44(fVar52 + (float)((ulong)uVar17 >> 0x20),
                                          fVar50 + (float)uVar17);
                      *(float *)(puVar28 + 1) = fVar60 + fVar58;
                      lVar24 = *(long *)((long)register0x00000008 + -0x398);
                      *(undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2) =
                           **(undefined8 **)((long)register0x00000008 + -0x3b8);
                      *(undefined8 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14) =
                           **(undefined8 **)((long)register0x00000008 + -0x3c0);
                      puVar29 = *(undefined4 **)((long)register0x00000008 + -0x380);
                      puVar37 = *(undefined4 **)((long)register0x00000008 + -0x378);
                      lVar24 = *(long *)((long)register0x00000008 + -0x3a0);
                      puVar22 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar2);
                      *puVar22 = *puVar37;
                      puVar18 = (undefined4 *)(lVar24 + (ulong)uVar48 * (ulong)uVar14);
                      *puVar18 = *puVar29;
                      puVar22[1] = puVar37[1];
                      puVar18[1] = puVar29[1];
                      puVar22[2] = uVar49;
                      puVar18[2] = uVar49;
                      puVar22[3] = (float)(uVar19 & 0xffffffff);
                      puVar18[3] = (float)(uVar19 & 0xffffffff);
                      if (*(ulong *)((long)register0x00000008 + -0x338) <
                          ((*(long **)((long)register0x00000008 + -0x340))[1] -
                           **(long **)((long)register0x00000008 + -0x340) >> 2) *
                          -0x5555555555555555 - 1U) {
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar38);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),(ulong)uVar2
                                     );
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar38);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 2);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar38);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar45);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 3);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar45);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      iVar40 + iVar43 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x2e8),
                                      (undefined1 *)((long)register0x00000008 + -0x2d0),
                                      iVar40 + iVar45);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x1b0),
                                      (undefined1 *)((long)register0x00000008 + -0x2e8),2);
                        param_2 = (ulong)(iVar40 + iVar43 + 2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x1b0));
                      }
                      uVar19 = uVar19 + 1;
                      iVar45 = iVar45 + *(int *)((long)register0x00000008 + -0x3ec);
                      iVar38 = iVar38 + *(int *)((long)register0x00000008 + -0x3ec);
                      iVar43 = iVar43 + iVar40;
                      uVar41 = uVar41 - 1;
                    } while (*(ulong *)((long)register0x00000008 + -0x388) != uVar19);
                  }
                  lVar16 = **(long **)((long)register0x00000008 + -0x340);
                  uVar19 = ((*(long **)((long)register0x00000008 + -0x340))[1] - lVar16 >> 2) *
                           -0x5555555555555555;
                  iVar45 = *(int *)((long)register0x00000008 + -0x418) + 2;
                  if (uVar19 - 1 <= *(ulong *)((long)register0x00000008 + -0x338)) {
                    iVar45 = *(int *)((long)register0x00000008 + -0x418);
                  }
                  *(int *)((long)register0x00000008 + -0x418) = iVar45;
                  uVar34 = *(int *)((long)register0x00000008 + -0x424) + 2;
                  uVar32 = *(ulong *)((long)register0x00000008 + -0x338) + 1;
                } while (uVar32 < uVar19);
                lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x18);
                lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0x400) + 0x20);
              }
              uVar34 = uVar34 + iVar40 * *(int *)((long)register0x00000008 + -0x454);
              *(int *)((long)register0x00000008 + -0x418) =
                   *(int *)((long)register0x00000008 + -0x418) +
                   *(int *)((long)register0x00000008 + -0x3ec) *
                   *(int *)((long)register0x00000008 + -0x454);
              uVar19 = (ulong)(*(int *)((long)register0x00000008 + -0x414) + 1U);
              uVar32 = (lVar24 - lVar15 >> 3) * -0x5555555555555555;
              *(int *)((long)register0x00000008 + -0x448) =
                   *(int *)((long)register0x00000008 + -0x448) +
                   *(int *)((long)register0x00000008 + -0x458);
              *(long *)((long)register0x00000008 + -1000) =
                   *(long *)((long)register0x00000008 + -1000) +
                   *(long *)((long)register0x00000008 + -0x388);
              *(uint *)((long)register0x00000008 + -0x414) =
                   *(int *)((long)register0x00000008 + -0x414) + 1U;
            } while (uVar19 <= uVar32 && uVar32 - uVar19 != 0);
          }
          lVar24 = **(long **)((long)register0x00000008 + -0x400);
        } while (lVar24 != 0);
      }
    }
    (**(code **)(**(long **)(*(long *)((long)register0x00000008 + -0x3c8) + 0x5b0) + 0xa0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x168))
    goto LAB_10a5f78a4;
    param_1 = *(long **)((long)register0x00000008 + -0x3c8);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    unaff_x20 = *(long **)((long)register0x00000008 + -0xd0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -200);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0xd8);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x100);
    unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x110);
    unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x108);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x118);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x130);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x128);
    unaff_d13 = *(undefined8 *)((long)register0x00000008 + -0x140);
    unaff_d12 = *(undefined8 *)((long)register0x00000008 + -0x138);
    unaff_d15 = *(undefined8 *)((long)register0x00000008 + -0x150);
    unaff_d14 = *(undefined8 *)((long)register0x00000008 + -0x148);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    goto code_r0x00010a5f9290;
  }
  if ((*(byte *)((long)plVar39 + 0x534) & 1) != 0) {
    if (plVar9 == (long *)0x0) {
LAB_10a5f4e60:
      if ((uint)(*(int *)(*(long *)(plVar39[0x21] + 0x850) + 0x2c) - (int)plVar39[0xa8]) < 2)
      goto LAB_10a5f770c;
      FUN_10a5f4bcc(plVar47);
      if (plVar9 != (long *)0x0) goto LAB_10a5f4f24;
      lVar24 = 0;
    }
    else {
      lVar24 = plVar9[0x45];
      FUN_10a5fbd7c();
      if (lVar24 == plVar39[0xa7]) goto LAB_10a5f4e60;
      FUN_10a5f4bcc(plVar47);
LAB_10a5f4f24:
      lVar24 = plVar9[0x45];
      FUN_10a5fbd7c();
    }
    plVar39[0xa7] = lVar24;
    goto LAB_10a5f770c;
  }
  plVar9 = plVar47;
  FUN_10a5f7bec();
  *(char *)((long)plVar39 + 0x534) = (char)plVar9;
  if ((int)plVar9 == 0) goto LAB_10a5f770c;
  uVar19 = (ulong)*(byte *)(plVar39[0x21] + 0x29);
  if (5 < uVar19) goto LAB_10a5f7a1c;
  plVar9 = *(long **)(plVar39[0x21] + uVar19 * 8 + 0x30);
  (**(code **)(*plVar9 + 0x18))();
  if ((int)plVar9 == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66828f,&UNK_10f668524,0x38c,&UNK_10f66856b);
    }
  }
  else {
    plVar9 = plVar39 + 0xa9;
    plVar39 = (long *)plVar39[0xa9];
    if ((plVar39 == (long *)0x0) || ((**(code **)(*plVar39 + 0x90))(), *plVar39 == 0)) {
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x2d0);
      FUN_10a0d0194((undefined1 *)((long)register0x00000008 + -0x2e8));
      FUN_10ab6e728();
      plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1b0),*puVar25,puVar25[1]);
      }
      else {
        uVar54 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar54;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0x198) = puVar25[3];
      uVar49 = *(undefined4 *)(puVar25 + 6);
      uVar17 = puVar25[4];
      *(undefined8 *)((long)register0x00000008 + -0x188) = puVar25[5];
      *(undefined8 *)((long)register0x00000008 + -400) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x180) = uVar49;
      FUN_10ab6f520((undefined1 *)((long)register0x00000008 + -0x2d0),
                    (undefined1 *)((long)register0x00000008 + -0x1b0),1);
      lVar24 = *(long *)((long)register0x00000008 + -0x2e8);
      *(undefined4 *)(lVar24 + 0xf0) = *(undefined4 *)((long)register0x00000008 + -0x2d0);
      if ((undefined4 *)(lVar24 + 0xf0) != (undefined4 *)((long)register0x00000008 + -0x2d0)) {
        FUN_10a1903c4(lVar24 + 0xf8,*(long *)((long)register0x00000008 + -0x2c8),
                      *(long *)((long)register0x00000008 + -0x2c0),
                      (*(long *)((long)register0x00000008 + -0x2c0) -
                       *(long *)((long)register0x00000008 + -0x2c8) >> 3) * 0x6db6db6db6db6db7);
      }
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
      uVar53 = *(undefined8 *)((long)register0x00000008 + -0x298);
      uVar54 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
      *(undefined8 *)(lVar24 + 0x118) = *(undefined8 *)((long)register0x00000008 + -0x2a8);
      *(undefined8 *)(lVar24 + 0x110) = uVar17;
      *(undefined8 *)(lVar24 + 0x128) = uVar53;
      *(undefined8 *)(lVar24 + 0x120) = uVar54;
      *(undefined8 *)(lVar24 + 0x130) = *(undefined8 *)((long)register0x00000008 + -0x290);
      *(undefined1 **)((long)register0x00000008 + -0x300) =
           (undefined1 *)((long)register0x00000008 + -0x2c8);
      func_0x00010a190844((undefined1 *)((long)register0x00000008 + -0x300));
      *(undefined8 *)(*(long *)((long)register0x00000008 + -0x2e8) + 0xe8) = 0x100000000;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      FUN_10a1995d0((undefined1 *)((long)register0x00000008 + -0x2d0),
                    (undefined1 *)((long)register0x00000008 + -0x300),
                    (undefined1 *)((long)register0x00000008 + -0x1b0),
                    (undefined1 *)((long)register0x00000008 + -0x2e8));
      func_0x00010a19a938(plVar9,(undefined1 *)((long)register0x00000008 + -0x2d0));
      plVar39 = *(long **)((long)register0x00000008 + -0x2c8);
      if (plVar39 != (long *)0x0) {
        plVar10 = plVar39 + 1;
        do {
          lVar24 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
      plVar39 = (long *)*plVar9;
      if (*(char *)((long)plVar39 + 0xb9) != '\0') {
        *(undefined1 *)((long)plVar39 + 0xb9) = 0;
        (**(code **)(*plVar39 + 0xa0))();
      }
      *(long *)((long)register0x00000008 + -0x1b0) = plVar47[0x2e];
      FUN_10a2db3d8((undefined1 *)((long)register0x00000008 + -0x2d0),
                    (undefined1 *)((long)register0x00000008 + -0x1b0),plVar9);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x2d0);
      if (*(long *)((long)register0x00000008 + -0x2c8) != 0) {
        plVar39 = (long *)(*(long *)((long)register0x00000008 + -0x2c8) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar6) {
            *plVar39 = *plVar39 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a426824(plVar47,(undefined1 *)((long)register0x00000008 + -0x1b0));
      plVar39 = *(long **)((long)register0x00000008 + -0x1a8);
      if (plVar39 != (long *)0x0) {
        plVar10 = plVar39 + 1;
        do {
          lVar24 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
      lVar24 = plVar47[0xaa];
      *(long *)((long)register0x00000008 + -0x300) = plVar47[0xa9];
      *(long *)((long)register0x00000008 + -0x2f8) = lVar24;
      if (lVar24 != 0) {
        plVar39 = (long *)(lVar24 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar6) {
            *plVar39 = *plVar39 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a42646c(plVar47,(undefined1 *)((long)register0x00000008 + -0x300));
      plVar39 = *(long **)((long)register0x00000008 + -0x2f8);
      if (plVar39 != (long *)0x0) {
        plVar10 = plVar39 + 1;
        do {
          lVar24 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
      plVar39 = *(long **)((long)register0x00000008 + -0x2c8);
      if (plVar39 != (long *)0x0) {
        plVar10 = plVar39 + 1;
        do {
          lVar24 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
      plVar39 = *(long **)((long)register0x00000008 + -0x2e0);
      if (plVar39 != (long *)0x0) {
        plVar10 = plVar39 + 1;
        do {
          lVar24 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
    }
    plVar39 = (long *)plVar47[0xc6];
    if (plVar39 == (long *)0x0) {
      uVar41 = 0;
    }
    else {
      uVar41 = 0;
      do {
        if (uVar41 <= *(uint *)(plVar39 + 2)) {
          uVar41 = *(uint *)(plVar39 + 2);
        }
        plVar39 = (long *)*plVar39;
      } while (plVar39 != (long *)0x0);
      uVar41 = uVar41 << 1;
    }
    plVar39 = (long *)*plVar9;
    (**(code **)(*plVar39 + 0x90))();
    lVar24 = *plVar39;
    uVar48 = *(uint *)(lVar24 + 0xf0);
    uVar14 = 0;
    if (uVar48 != 0) {
      uVar14 = 0;
      if ((ulong)uVar48 != 0) {
        uVar14 = (uint)((ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar48
                       );
      }
    }
    plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
    if (uVar14 < uVar41) {
      FUN_10ab4a154(lVar24,(ulong)uVar41);
      uVar48 = *(uint *)(lVar24 + 0x110);
      if (uVar48 != 0xffffffff) {
        lVar15 = *(long *)(lVar24 + 0xf8);
        uVar19 = (*(long *)(lVar24 + 0x100) - lVar15 >> 3) * 0x6db6db6db6db6db7;
        if (uVar19 < uVar48 || uVar19 - uVar48 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        if (((lVar15 != 0) && (lVar15 = lVar15 + (ulong)uVar48 * 0x38, *(int *)(lVar15 + 0x24) == 5)
            ) && (*(int *)(lVar15 + 0x28) == 3)) {
          uVar48 = 0;
          uVar19 = 0;
          puVar29 = (undefined4 *)(*(long *)(lVar24 + 0x10) + (ulong)*(uint *)(lVar15 + 0x30));
          uVar14 = *(uint *)(lVar24 + 0xf0);
          do {
            *puVar29 = 0xbf800000;
            puVar29[1] = (float)uVar48;
            puVar29[2] = 0;
            puVar37 = (undefined4 *)((long)puVar29 + (ulong)uVar14);
            *puVar37 = 0x3f800000;
            puVar37[1] = (float)uVar48;
            puVar37[2] = 0;
            uVar19 = uVar19 + 2;
            uVar48 = uVar48 + 1;
            puVar29 = (undefined4 *)((long)puVar29 + (ulong)uVar14 * 2);
          } while (uVar19 < uVar41);
          (**(code **)(*(long *)*plVar9 + 0xa0))();
          plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
          goto LAB_10a5f71ac;
        }
      }
      FUN_10a3ee510(&UNK_10f66859d);
      goto LAB_10a5f7a1c;
    }
  }
LAB_10a5f71ac:
  plVar9 = plVar47;
  FUN_10a5f9ad8(plVar47);
  plVar10 = (long *)plVar47[0xa2];
  for (plVar39 = (long *)plVar47[0xa1]; plVar39 != plVar10; plVar39 = plVar39 + 2) {
    plVar13 = (long *)plVar39[1];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x2c8) = plVar13;
      if (plVar13 != (long *)0x0) {
        lVar24 = *plVar39;
        *(long *)((long)register0x00000008 + -0x2d0) = lVar24;
        if (lVar24 != 0) {
          FUN_10aa19b04();
        }
        plVar46 = plVar13 + 1;
        do {
          lVar24 = *plVar46;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar46,0x10);
          if (bVar6) {
            *plVar46 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  plVar39 = (long *)plVar47[0xc6];
  if (plVar39 == (long *)0x0) {
LAB_10a5f7620:
    if (plVar47[0xc2] != 0) {
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x532,&UNK_10f66863f);
        if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
          *(long *)((long)register0x00000008 + -0x470) = plVar47[0xc2];
          func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x533,&UNK_10f668651);
        }
      }
      uVar41 = uRam000000011330a9e8;
      for (plVar39 = (long *)plVar47[0xc1]; plVar39 != (long *)0x0; plVar39 = (long *)*plVar39) {
        if ((uVar41 >> 2 & 1) != 0) {
          uVar41 = *(uint *)(plVar39 + 2);
          *(long *)((long)register0x00000008 + -0x470) =
               (plVar39[4] - plVar39[3] >> 3) * -0x5555555555555555;
          *(ulong *)((long)register0x00000008 + -0x468) = (ulong)uVar41;
          func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x537,&UNK_10f668669);
          uVar41 = uRam000000011330a9e8;
        }
      }
    }
    FUN_10a5f9290(plVar47);
LAB_10a5f770c:
    *(undefined4 *)(plVar47 + 0xb5) = *(undefined4 *)(*(long *)(plVar47[0x2e] + 0x850) + 0x2c);
    plVar9 = plVar47;
    FUN_10a5f9ad8();
    plVar10 = (long *)plVar47[0xa2];
    for (plVar39 = (long *)plVar47[0xa1]; plVar39 != plVar10; plVar39 = plVar39 + 2) {
      plVar13 = (long *)plVar39[1];
      if (plVar13 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        *(long **)((long)register0x00000008 + -0x2c8) = plVar13;
        if (plVar13 != (long *)0x0) {
          lVar24 = *plVar39;
          *(long *)((long)register0x00000008 + -0x2d0) = lVar24;
          if (lVar24 != 0) {
            FUN_10aa19c3c(lVar24);
            lVar24 = *(long *)(lVar24 + 0x2b0);
            *(long *)((long)register0x00000008 + -0x1b0) = lVar24;
            if (lVar24 != 0) {
              func_0x00010a49db98(plVar47 + 0xcf,(undefined1 *)((long)register0x00000008 + -0x1b0));
            }
          }
          plVar46 = plVar13 + 1;
          do {
            lVar24 = *plVar46;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar46,0x10);
            if (bVar6) {
              *plVar46 = lVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
      }
    }
    plVar39 = plVar47 + 0xbc;
    while (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0) {
      lVar24 = plVar39[3];
      *(undefined8 *)(lVar24 + 0x2d8) = *(undefined8 *)(lVar24 + 0x2d0);
      puVar28 = (undefined8 *)plVar47[0xd0];
      puVar25 = (undefined8 *)plVar47[0xcf];
      if ((undefined8 *)plVar47[0xcf] != puVar28) {
        do {
          lVar24 = plVar39[3];
          puVar36 = puVar25 + 1;
          *(undefined8 *)((long)register0x00000008 + -0x2d0) = *puVar25;
          func_0x00010a8f2d1c(lVar24 + 0x2d0,(undefined1 *)((long)register0x00000008 + -0x2d0));
          puVar25 = puVar36;
        } while (puVar36 != puVar28);
        lVar24 = plVar39[3];
      }
      lVar15 = plVar9[1];
      lVar20 = plVar9[4];
      lVar16 = plVar9[3];
      *(long *)(lVar24 + 0x278) = plVar9[2];
      *(long *)(lVar24 + 0x270) = lVar15;
      *(long *)(lVar24 + 0x288) = lVar20;
      *(long *)(lVar24 + 0x280) = lVar16;
      lVar16 = plVar9[6];
      lVar15 = plVar9[5];
      lVar27 = plVar9[8];
      lVar20 = plVar9[7];
      lVar56 = plVar9[10];
      lVar55 = plVar9[9];
      uVar17 = *(undefined8 *)((long)plVar9 + 0x54);
      *(undefined8 *)(lVar24 + 0x2c4) = *(undefined8 *)((long)plVar9 + 0x5c);
      *(undefined8 *)(lVar24 + 700) = uVar17;
      *(long *)(lVar24 + 0x2a8) = lVar27;
      *(long *)(lVar24 + 0x2a0) = lVar20;
      *(long *)(lVar24 + 0x2b8) = lVar56;
      *(long *)(lVar24 + 0x2b0) = lVar55;
      *(long *)(lVar24 + 0x298) = lVar16;
      *(long *)(lVar24 + 0x290) = lVar15;
      FUN_10a8f47d8((float)*(double *)(*(long *)(plVar47[0x2e] + 0x850) + 0x10),plVar39[3]);
    }
    plVar47[0xd0] = plVar47[0xcf];
LAB_10a5f7850:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x168)) {
      return;
    }
LAB_10a5f78a4:
    ___stack_chk_fail();
LAB_10a5f78a8:
    FUN_10a3ee510(&UNK_10f66a567);
LAB_10a5f7a1c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a5f7a20);
    (*pcVar8)();
  }
  plVar10 = plVar47 + 0xba;
  plVar13 = plVar47 + 0xbc;
  do {
    plVar12 = (long *)0x2758;
    __Znwm();
    FUN_10a8f278c();
    uVar41 = *(uint *)(plVar39 + 2);
    plVar44 = (long *)(ulong)uVar41;
    plVar46 = (long *)plVar47[0xbb];
    if (plVar46 != (long *)0x0) {
      uVar19 = (long)plVar46 - 1;
      uVar48 = (uint)plVar46;
      if (((ulong)plVar46 & uVar19) == 0) {
        plVar47 = (long *)(ulong)(uVar48 - 1 & uVar41);
      }
      else {
        plVar47 = plVar44;
        if (plVar46 <= plVar44) {
          uVar14 = 0;
          if (uVar48 != 0) {
            uVar14 = uVar41 / uVar48;
          }
          plVar47 = (long *)(ulong)(uVar41 - uVar14 * uVar48);
        }
      }
      plVar23 = *(long **)(*plVar10 + (long)plVar47 * 8);
      if (plVar23 != (long *)0x0) {
        do {
          while( true ) {
            plVar23 = (long *)*plVar23;
            if (plVar23 == (long *)0x0) goto LAB_10a5f72e4;
            plVar26 = (long *)plVar23[1];
            if (plVar26 != plVar44) break;
            if (*(uint *)(plVar23 + 2) == uVar41) {
              (**(code **)(*plVar12 + 8))(plVar12);
              plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
              goto LAB_10a5f7588;
            }
          }
          if (((ulong)plVar46 & uVar19) == 0) {
            plVar26 = (long *)((ulong)plVar26 & uVar19);
          }
          else if (plVar46 <= plVar26) {
            uVar32 = 0;
            if (plVar46 != (long *)0x0) {
              uVar32 = (ulong)plVar26 / (ulong)plVar46;
            }
            plVar26 = (long *)((long)plVar26 - uVar32 * (long)plVar46);
          }
        } while (plVar26 == plVar47);
      }
    }
LAB_10a5f72e4:
    plVar23 = (long *)0x20;
    __Znwm();
    *(long **)((long)register0x00000008 + -0x2d0) = plVar23;
    *(long **)((long)register0x00000008 + -0x2c8) = plVar10;
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = 1;
    *plVar23 = 0;
    plVar23[1] = (long)plVar44;
    *(uint *)(plVar23 + 2) = uVar41;
    plVar23[3] = (long)plVar12;
    fVar58 = (float)(*(long *)(*(long *)((long)register0x00000008 + -0x3c8) + 0x5e8) + 1);
    fVar60 = *(float *)(*(long *)((long)register0x00000008 + -0x3c8) + 0x5f0);
    if ((plVar46 == (long *)0x0) || (fVar60 * (float)plVar46 < fVar58)) {
      uVar19 = 1;
      if ((long *)0x2 < plVar46) {
        uVar19 = (ulong)(((ulong)plVar46 & (long)plVar46 - 1U) != 0);
      }
      plVar47 = (long *)(uVar19 | (long)plVar46 << 1);
      plVar12 = (long *)(long)(fVar58 / fVar60);
      if (plVar47 <= plVar12) {
        plVar47 = plVar12;
      }
      if ((long)plVar47 - 1U == 0) {
        plVar47 = (long *)0x2;
        lVar24 = *(long *)((long)register0x00000008 + -0x3c8);
      }
      else {
        lVar24 = *(long *)((long)register0x00000008 + -0x3c8);
        if (((ulong)plVar47 & (long)plVar47 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar46 = *(long **)(lVar24 + 0x5d8);
        }
      }
      if (plVar46 < plVar47) {
LAB_10a5f7390:
        if ((ulong)plVar47 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a5f7a1c;
        }
        lVar15 = (long)plVar47 << 3;
        __Znwm();
        lVar16 = *plVar10;
        *plVar10 = lVar15;
        if (lVar16 != 0) {
          __ZdlPv();
        }
        plVar46 = (long *)0x0;
        *(long **)(lVar24 + 0x5d8) = plVar47;
        do {
          *(undefined8 *)(*plVar10 + (long)plVar46 * 8) = 0;
          plVar46 = (long *)((long)plVar46 + 1);
        } while (plVar47 != plVar46);
        plVar12 = (long *)*plVar13;
        plVar46 = plVar47;
        if (plVar12 != (long *)0x0) {
          plVar26 = (long *)plVar12[1];
          uVar19 = (long)plVar47 - 1;
          if (((ulong)plVar47 & uVar19) == 0) {
            plVar26 = (long *)((ulong)plVar26 & uVar19);
          }
          else if (plVar47 <= plVar26) {
            uVar32 = 0;
            if (plVar47 != (long *)0x0) {
              uVar32 = (ulong)plVar26 / (ulong)plVar47;
            }
            plVar26 = (long *)((long)plVar26 - uVar32 * (long)plVar47);
          }
          *(long **)(*plVar10 + (long)plVar26 * 8) = plVar13;
          plVar30 = (long *)*plVar12;
          while (plVar30 != (long *)0x0) {
            plVar33 = (long *)plVar30[1];
            if (((ulong)plVar47 & uVar19) == 0) {
              plVar33 = (long *)((ulong)plVar33 & uVar19);
            }
            else if (plVar47 <= plVar33) {
              uVar32 = 0;
              if (plVar47 != (long *)0x0) {
                uVar32 = (ulong)plVar33 / (ulong)plVar47;
              }
              plVar33 = (long *)((long)plVar33 - uVar32 * (long)plVar47);
            }
            plVar31 = plVar30;
            if (plVar33 != plVar26) {
              lVar24 = *plVar10;
              if (*(long *)(lVar24 + (long)plVar33 * 8) == 0) {
                *(long **)(lVar24 + (long)plVar33 * 8) = plVar12;
                plVar26 = plVar33;
              }
              else {
                *plVar12 = *plVar30;
                *plVar30 = **(undefined8 **)(lVar24 + (long)plVar33 * 8);
                **(long **)(lVar24 + (long)plVar33 * 8) = (long)plVar30;
                plVar31 = plVar12;
              }
            }
            plVar12 = plVar31;
            plVar30 = (long *)*plVar31;
          }
        }
      }
      else if (plVar47 < plVar46) {
        plVar12 = (long *)(long)((float)*(ulong *)(lVar24 + 0x5e8) / *(float *)(lVar24 + 0x5f0));
        if ((plVar46 < (long *)0x3) || (((ulong)plVar46 & (long)plVar46 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar12) {
          plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
        }
        if (plVar47 <= plVar12) {
          plVar47 = plVar12;
        }
        if (plVar47 < plVar46) {
          if (plVar47 != (long *)0x0) goto LAB_10a5f7390;
          lVar15 = *plVar10;
          *plVar10 = 0;
          if (lVar15 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar24 + 0x5d8) = 0;
          plVar46 = (long *)0x0;
        }
        else {
          plVar46 = *(long **)(lVar24 + 0x5d8);
        }
      }
      if (((ulong)plVar46 & (long)plVar46 - 1U) == 0) {
        plVar47 = (long *)(ulong)((int)plVar46 - 1U & uVar41);
      }
      else {
        plVar47 = plVar44;
        if (plVar46 <= plVar44) {
          uVar19 = 0;
          if (plVar46 != (long *)0x0) {
            uVar19 = (ulong)plVar44 / (ulong)plVar46;
          }
          plVar47 = (long *)((long)plVar44 - uVar19 * (long)plVar46);
        }
      }
    }
    lVar24 = *plVar10;
    plVar12 = *(long **)(lVar24 + (long)plVar47 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar23 = *plVar13;
      *plVar13 = (long)plVar23;
      *(long **)(lVar24 + (long)plVar47 * 8) = plVar13;
      plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
      if (*plVar23 != 0) {
        plVar12 = *(long **)(*plVar23 + 8);
        if (((ulong)plVar46 & (long)plVar46 - 1U) == 0) {
          plVar12 = (long *)((ulong)plVar12 & (long)plVar46 - 1U);
        }
        else if (plVar46 <= plVar12) {
          uVar19 = 0;
          if (plVar46 != (long *)0x0) {
            uVar19 = (ulong)plVar12 / (ulong)plVar46;
          }
          plVar12 = (long *)((long)plVar12 - uVar19 * (long)plVar46);
        }
        *(long **)(*plVar10 + (long)plVar12 * 8) = plVar23;
      }
    }
    else {
      *plVar23 = *plVar12;
      *plVar12 = (long)plVar23;
      plVar47 = *(long **)((long)register0x00000008 + -0x3c8);
    }
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
    plVar47[0xbd] = plVar47[0xbd] + 1;
    FUN_10a61d1d4((undefined1 *)((long)register0x00000008 + -0x2d0));
LAB_10a5f7588:
    plVar46 = plVar10;
    FUN_10a61d22c(plVar10,(int)plVar39[2]);
    if (plVar46 == (long *)0x0) {
LAB_10a5f7898:
      FUN_109ffdddc(&UNK_10f66a46f);
      goto LAB_10a5f78a4;
    }
    func_0x00010a8f2b5c(plVar46[3],plVar39 + 3);
    plVar46 = plVar10;
    FUN_10a61d22c(plVar10,(int)plVar39[2]);
    if (plVar46 == (long *)0x0) goto LAB_10a5f7898;
    FUN_10a8f2de0(plVar46[3],plVar9);
    plVar39 = (long *)*plVar39;
    if (plVar39 == (long *)0x0) goto LAB_10a5f7620;
  } while( true );
}



/* Entry: 10a5f95c8; end: 10a5f95cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a5f7964) */
/* WARNING: Removing unreachable block (ram,0x00010a5f518c) */
/* WARNING: Removing unreachable block (ram,0x00010a5f79e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5f6e90) */

void FUN_10a5f95c8(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  long *plVar34;
  uint uVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined4 *puVar38;
  int iVar39;
  long *unaff_x19;
  long *unaff_x20;
  int iVar40;
  undefined1 *unaff_x21;
  uint uVar41;
  undefined8 unaff_x22;
  ulong uVar42;
  long *plVar43;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  int iVar44;
  long *plVar45;
  undefined8 unaff_x26;
  int iVar46;
  long *plVar47;
  undefined8 unaff_x27;
  long *plVar48;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  long lVar56;
  long lVar57;
  float fVar58;
  float fVar59;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar60;
  undefined8 unaff_d11;
  float fVar61;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
FUN_10a5f4cb0:
  plVar48 = param_1 + -0xd;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0xb8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(param_1 + 0x91) < 0x30) {
LAB_10a5f4d20:
    if ((*(byte *)(param_1 + 0xc1) & 1) != 0) goto LAB_10a5f7850;
  }
  else {
    lVar8 = param_1[0x97];
    if ((lVar8 == 0) || (FUN_10ab3b8d0(), (int)lVar8 != 2)) goto LAB_10a5f7850;
    if (*(uint *)(param_1 + 0x91) < 0x30) goto LAB_10a5f4d20;
  }
  lVar15 = param_1[0x20];
  for (lVar8 = *(long *)(lVar15 + 0x158); lVar8 != lVar15 + 0x150; lVar8 = *(long *)(lVar8 + 8)) {
    if (*(long *)(lVar8 + 0x10) != 0) {
      plVar9 = (long *)(*(long *)(lVar8 + 0x10) + 0xb0);
      (**(code **)(*plVar9 + 0x18))(plVar9,0xd88b8b8a073aaad7);
      if (plVar9 != (long *)0x0) goto LAB_10a5f4d80;
    }
  }
  plVar9 = (long *)0x0;
LAB_10a5f4d80:
  uVar20 = (ulong)*(byte *)(param_1[0x21] + 0x29);
  if (5 < uVar20) goto LAB_10a5f7a1c;
  plVar10 = *(long **)(param_1[0x21] + uVar20 * 8 + 0x30);
  (**(code **)(*plVar10 + 0x18))();
  *(long **)((long)register0x00000008 + -0x318) = plVar48;
  if (((int)plVar10 == 0) || ((*(byte *)((long)param_1 + 0x51e) & 1) != 0)) {
    if ((*(byte *)((long)param_1 + 0x535) & 1) != 0) goto LAB_10a5f7850;
    plVar9 = plVar48;
    FUN_10a5f7bec();
    *(char *)((long)param_1 + 0x535) = (char)plVar9;
    if ((int)plVar9 == 0) goto LAB_10a5f7850;
    plVar9 = (long *)param_1[0xa9];
    if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x90))(), *plVar9 == 0)) {
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x220);
      FUN_10a0d0194((undefined1 *)((long)register0x00000008 + -0x238));
      plVar48 = *(long **)((long)register0x00000008 + -0x318);
      uVar41 = *(uint *)(plVar48 + 0x9e);
      lVar8 = 0xd0;
      if (0x2f < uVar41) {
        lVar8 = 0x108;
      }
      puVar29 = (undefined8 *)0x1137eb698;
      if (0x2f < uVar41) {
        puVar29 = (undefined8 *)0x1137eb6d0;
      }
      FUN_10ab6e728();
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        puVar37 = (undefined8 *)((long)register0x00000008 + -0x220);
        func_0x000107c3192c(puVar37,*puVar25,puVar25[1]);
      }
      else {
        uVar55 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x210) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x218) = uVar55;
        *(undefined8 *)((long)register0x00000008 + -0x220) = uVar17;
        puVar37 = puVar25;
      }
      *(undefined8 *)((long)register0x00000008 + -0x208) = puVar25[3];
      uVar50 = *(undefined4 *)(puVar25 + 6);
      uVar17 = puVar25[4];
      *(undefined8 *)((long)register0x00000008 + -0x1f8) = puVar25[5];
      *(undefined8 *)((long)register0x00000008 + -0x200) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x1f0) = uVar50;
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x1e8);
      if (cRam00000001137eb63f < '\0') {
        func_0x000107c3192c(puVar25,uRam00000001137eb628,uRam00000001137eb630);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = uRam00000001137eb630;
        *puVar25 = uRam00000001137eb628;
        *(ulong *)((long)register0x00000008 + -0x1d8) =
             CONCAT17(cRam00000001137eb63f,uRam00000001137eb638);
        puVar25 = puVar37;
      }
      *(long *)((long)register0x00000008 + -0x1d0) = lRam00000001137eb640;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uRam00000001137eb650;
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = uRam00000001137eb648;
      *(undefined4 *)((long)register0x00000008 + -0x1b8) = uRam00000001137eb658;
      puVar37 = (undefined8 *)((long)register0x00000008 + -0x1b0);
      if (cRam00000001137eb677 < '\0') {
        func_0x000107c3192c(puVar37,uRam00000001137eb660,uRam00000001137eb668);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uRam00000001137eb668;
        *puVar37 = uRam00000001137eb660;
        *(ulong *)((long)register0x00000008 + -0x1a0) =
             CONCAT17(cRam00000001137eb677,uRam00000001137eb670);
        puVar37 = puVar25;
      }
      *(long *)((long)register0x00000008 + -0x198) = lRam00000001137eb678;
      *(undefined8 *)((long)register0x00000008 + -0x188) = uRam00000001137eb688;
      *(undefined8 *)((long)register0x00000008 + -400) = uRam00000001137eb680;
      *(undefined4 *)((long)register0x00000008 + -0x180) = uRam00000001137eb690;
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x178);
      pcVar1 = (char *)0x1137eb6af;
      if (0x2f < uVar41) {
        pcVar1 = (char *)0x1137eb6e7;
      }
      if (*pcVar1 < '\0') {
        puVar29 = (undefined8 *)0x1137eb6a0;
        if (0x2f < uVar41) {
          puVar29 = (undefined8 *)0x1137eb6d8;
        }
        func_0x000107c3192c(puVar25,*(undefined8 *)(lVar8 + 0x1137eb5c8),*puVar29);
      }
      else {
        uVar17 = *puVar29;
        *(undefined8 *)((long)register0x00000008 + -0x170) = puVar29[1];
        *puVar25 = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x168) = puVar29[2];
        puVar25 = puVar37;
      }
      puVar29 = (undefined8 *)0x1137eb6b0;
      if (0x2f < uVar41) {
        puVar29 = (undefined8 *)0x1137eb6e8;
      }
      *(undefined8 *)((long)register0x00000008 + -0x160) = *puVar29;
      puVar29 = (undefined8 *)0x1137eb6b8;
      if (0x2f < uVar41) {
        puVar29 = (undefined8 *)0x1137eb6f0;
      }
      uVar17 = *puVar29;
      *(undefined8 *)((long)register0x00000008 + -0x150) = puVar29[1];
      *(undefined8 *)((long)register0x00000008 + -0x158) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x148) = *(undefined4 *)(puVar29 + 2);
      FUN_10ab6f020();
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c3192c((undefined8 *)((long)register0x00000008 + -0x140),*puVar25,puVar25[1]);
      }
      else {
        uVar55 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x130) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar55;
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0x128) = puVar25[3];
      uVar55 = puVar25[5];
      uVar17 = puVar25[4];
      *(undefined4 *)((long)register0x00000008 + -0x110) = *(undefined4 *)(puVar25 + 6);
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar55;
      *(undefined8 *)((long)register0x00000008 + -0x120) = uVar17;
      FUN_10ab6f520((undefined1 *)((long)register0x00000008 + -0x100),
                    (undefined1 *)((long)register0x00000008 + -0x220),5);
      lVar8 = *(long *)((long)register0x00000008 + -0x238);
      *(undefined4 *)(lVar8 + 0xf0) = *(undefined4 *)((long)register0x00000008 + -0x100);
      if ((undefined4 *)(lVar8 + 0xf0) != (undefined4 *)((long)register0x00000008 + -0x100)) {
        FUN_10a1903c4(lVar8 + 0xf8,*(long *)((long)register0x00000008 + -0xf8),
                      *(long *)((long)register0x00000008 + -0xf0),
                      (*(long *)((long)register0x00000008 + -0xf0) -
                       *(long *)((long)register0x00000008 + -0xf8) >> 3) * 0x6db6db6db6db6db7);
      }
      plVar9 = plVar48 + 0xb6;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar54 = *(undefined8 *)((long)register0x00000008 + -200);
      uVar55 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)(lVar8 + 0x110) = uVar17;
      *(undefined8 *)(lVar8 + 0x128) = uVar54;
      *(undefined8 *)(lVar8 + 0x120) = uVar55;
      *(undefined8 *)(lVar8 + 0x130) = *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0xf8);
      func_0x00010a190844((undefined1 *)((long)register0x00000008 + -0x250));
      lVar8 = 0x118;
      do {
        lVar8 = lVar8 + -0x38;
      } while (lVar8 != 0);
      *(undefined8 *)(*(long *)((long)register0x00000008 + -0x238) + 0xe8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      FUN_10a1995d0((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x250),
                    (undefined1 *)((long)register0x00000008 + -0x100),
                    (undefined1 *)((long)register0x00000008 + -0x238));
      func_0x00010a19a938(plVar9,(undefined1 *)((long)register0x00000008 + -0x220));
      plVar10 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar10 != (long *)0x0) {
        plVar43 = plVar10 + 1;
        do {
          lVar8 = *plVar43;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar6) {
            *plVar43 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)*plVar9;
      if (*(char *)((long)plVar10 + 0xb9) != '\0') {
        *(undefined1 *)((long)plVar10 + 0xb9) = 0;
        (**(code **)(*plVar10 + 0xa0))();
        plVar10 = (long *)*plVar9;
      }
      if (*(char *)((long)plVar10 + 0xba) != '\0') {
        *(undefined1 *)((long)plVar10 + 0xba) = 0;
        (**(code **)(*plVar10 + 0xa0))();
      }
      *(long *)((long)register0x00000008 + -0x100) = plVar48[0x2e];
      FUN_10a2db3d8((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x100),plVar9);
      *(undefined8 *)((long)register0x00000008 + -0x248) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0x250) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      if (*(long *)((long)register0x00000008 + -0x218) != 0) {
        plVar9 = (long *)(*(long *)((long)register0x00000008 + -0x218) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a426824(plVar48,(undefined1 *)((long)register0x00000008 + -0x250));
      plVar9 = *(long **)((long)register0x00000008 + -0x248);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (*(uint *)(plVar48 + 0x9e) < 0x30) {
        lVar8 = plVar48[0xac];
        *(long *)((long)register0x00000008 + -0x260) = plVar48[0xab];
        *(long *)((long)register0x00000008 + -600) = lVar8;
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a42646c(plVar48,(undefined1 *)((long)register0x00000008 + -0x260));
        plVar9 = *(long **)((long)register0x00000008 + -600);
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_10a5f5368:
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      else {
        lVar8 = plVar48[0xaa];
        *(long *)((long)register0x00000008 + -0x260) = plVar48[0xa9];
        *(long *)((long)register0x00000008 + -600) = lVar8;
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a42646c(plVar48,(undefined1 *)((long)register0x00000008 + -0x260));
        plVar9 = *(long **)((long)register0x00000008 + -600);
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a5f5368;
        }
      }
      plVar9 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)((long)register0x00000008 + -0x230);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    uVar41 = *(uint *)(plVar48 + 0x9e);
    plVar48 = (long *)plVar48[0xb6];
    (**(code **)(*plVar48 + 0x90))();
    lVar8 = *plVar48;
    if (uVar41 < 0x30) {
      *(undefined **)((long)register0x00000008 + -0x220) = &UNK_10f66a490;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3b;
      lVar15 = *(long *)((long)register0x00000008 + -0x318);
      if (lVar8 == 0) {
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      plVar48 = *(long **)(lVar15 + 0x630);
      if (plVar48 == (long *)0x0) {
        iVar40 = 0;
      }
      else {
        iVar40 = 0;
        do {
          iVar40 = iVar40 + (int)((ulong)(plVar48[4] - plVar48[3]) >> 3) * (int)plVar48[2] *
                            -0x55555555;
          plVar48 = (long *)*plVar48;
        } while (plVar48 != (long *)0x0);
      }
      uVar41 = *(uint *)(lVar15 + 0x570);
      iVar39 = *(int *)(lVar15 + 0x57c);
      *(ulong *)((long)register0x00000008 + -0x348) = (ulong)uVar41;
      iVar46 = iVar39 + uVar41;
      *(int *)((long)register0x00000008 + -0x3a4) = iVar46;
      uVar41 = iVar46 + 1;
      *(ulong *)((long)register0x00000008 + -0x2d8) = (ulong)uVar41;
      uVar41 = iVar40 * uVar41;
      if ((uVar41 >> 0xf & 0xffff) != 0) {
        FUN_10a185264((undefined1 *)((long)register0x00000008 + -0x220),0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a4cc,0x46);
        __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x100),0xffff);
        uVar20 = *(ulong *)((long)register0x00000008 + -0xf8);
        puVar7 = *(undefined1 **)((long)register0x00000008 + -0x100);
        if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
          uVar20 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x100);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),puVar7,uVar20);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a513,0x53);
        FUN_10a61d104((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      fVar59 = *(float *)(lVar15 + 0x578);
      *(undefined4 *)((long)register0x00000008 + -0x39c) = *(undefined4 *)(lVar15 + 0x574);
      uVar49 = *(uint *)(lVar15 + 0x580);
      *(undefined8 *)((long)register0x00000008 + -0x388) = 0;
      *(ulong *)((long)register0x00000008 + -0x390) = (ulong)uVar49;
      *(undefined4 *)((long)register0x00000008 + -0x394) =
           *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18);
      FUN_10ab4a154(lVar8,uVar41 * 2);
      uVar20 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x2d8) *
                            (iVar40 * 6 + -6));
      FUN_10ab4cb54(lVar8);
      uVar41 = *(uint *)(lVar8 + 0x110);
      lVar15 = *(long *)(lVar8 + 0x100);
      if (uVar41 == 0xffffffff) {
        lVar21 = 0;
        lVar16 = *(long *)(lVar8 + 0xf8);
      }
      else {
        lVar16 = *(long *)(lVar8 + 0xf8);
        uVar27 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar27 < uVar41 || uVar27 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar21 = lVar16 + (ulong)uVar41 * 0x38;
      }
      lVar28 = lVar16;
      if (lVar16 == lVar15) {
        lVar28 = 0;
        lVar56 = lVar16;
      }
      else {
        do {
          lVar56 = lVar28;
          if (*(long *)(lVar28 + 0x18) == lRam00000001137eb640) break;
          lVar28 = lVar28 + 0x38;
          lVar56 = lVar15;
        } while (lVar28 != lVar15);
        lVar57 = lVar16;
        lVar28 = 0;
        if (lVar56 != lVar15) {
          lVar28 = lVar56;
        }
        do {
          lVar56 = lVar57;
          if (*(long *)(lVar57 + 0x18) == lRam00000001137eb678) break;
          lVar57 = lVar57 + 0x38;
          lVar56 = lVar15;
        } while (lVar57 != lVar15);
      }
      uVar41 = *(uint *)(lVar8 + 0x120);
      lVar57 = lVar16;
      if (uVar41 == 0xffffffff) {
        lVar36 = 0;
      }
      else {
        uVar27 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar27 < uVar41 || uVar27 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar36 = lVar16 + (ulong)uVar41 * 0x38;
      }
      for (; (lVar57 != lVar15 &&
             (lVar16 = lVar57, *(long *)(lVar57 + 0x18) != lRam00000001137eb6e8));
          lVar57 = lVar57 + 0x38) {
        lVar16 = lVar15;
      }
      if (((((lVar21 == 0) || (*(int *)(lVar21 + 0x24) != 5)) || (lVar28 == 0)) ||
          ((((*(int *)(lVar21 + 0x28) != 3 || (*(int *)(lVar28 + 0x24) != 5)) ||
            ((lVar56 == lVar15 || ((lVar56 == 0 || (*(int *)(lVar28 + 0x28) != 3)))))) ||
           (*(int *)(lVar56 + 0x24) != 5)))) ||
         ((((((*(int *)(lVar56 + 0x28) != 3 || (lVar36 == 0)) || (*(int *)(lVar36 + 0x24) != 5)) ||
            ((lVar16 == lVar15 || (lVar16 == 0)))) || (*(int *)(lVar36 + 0x28) != 2)) ||
          ((*(int *)(lVar16 + 0x24) != 5 || (*(int *)(lVar16 + 0x28) != 3)))))) goto LAB_10a5f78a8;
      lVar15 = *(long *)(lVar8 + 0x10);
      uVar41 = *(uint *)(lVar21 + 0x30);
      uVar49 = *(uint *)(lVar8 + 0xf0);
      uVar14 = *(uint *)(lVar28 + 0x30);
      uVar2 = *(uint *)(lVar56 + 0x30);
      uVar3 = *(uint *)(lVar36 + 0x30);
      uVar4 = *(uint *)(lVar16 + 0x30);
      FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0x220),lVar8);
      lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x318) + 0x630);
      if (lVar8 != 0) {
        uVar35 = 0;
        *(undefined4 *)((long)register0x00000008 + -0x368) = 0;
        *(ulong *)((long)register0x00000008 + -0x2e0) = lVar15 + (ulong)uVar41;
        *(ulong *)((long)register0x00000008 + -0x2c0) = lVar15 + (ulong)uVar14;
        *(ulong *)((long)register0x00000008 + -0x2b8) = lVar15 + (ulong)uVar2;
        *(ulong *)((long)register0x00000008 + -0x2e8) = lVar15 + (ulong)uVar3;
        *(ulong *)((long)register0x00000008 + -0x2f0) = lVar15 + (ulong)uVar4;
        fVar61 = fVar59 * *(float *)((long)register0x00000008 + -0x39c);
        if (0.0 <= fVar59) {
          fVar61 = fVar59;
        }
        *(float *)((long)register0x00000008 + -0x3a0) = fVar61;
        *(int *)((long)register0x00000008 + -0x3a8) =
             ~(iVar39 + (int)*(undefined8 *)((long)register0x00000008 + -0x348));
        do {
          *(long *)((long)register0x00000008 + -0x350) = lVar8;
          lVar15 = *(long *)(lVar8 + 0x18);
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 - lVar15 != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
            uVar27 = 0;
            *(undefined4 *)((long)register0x00000008 + -0x364) = 0;
            uVar41 = (int)((ulong)(lVar8 - lVar15) >> 3) *
                     (int)*(undefined8 *)((long)register0x00000008 + -0x2d8) * -0x55555555;
            *(float *)((long)register0x00000008 + -0x294) = (float)uVar41;
            *(uint *)((long)register0x00000008 + -0x398) = uVar41 - 1;
            do {
              plVar48 = (long *)(lVar15 + uVar27 * 0x18);
              *(long **)((long)register0x00000008 + -0x290) = plVar48;
              lVar16 = *plVar48;
              lVar21 = plVar48[1];
              uVar27 = (lVar21 - lVar16 >> 2) * -0x5555555555555555;
              iVar40 = (int)uVar27 * 2;
              *(int *)((long)register0x00000008 + -0x33c) = iVar40 + -2;
              if (lVar21 != lVar16) {
                uVar33 = 0;
                do {
                  uVar42 = (ulong)(uVar35 + 1);
                  puVar37 = (undefined8 *)(lVar16 + uVar33 * 0xc);
                  lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                  puVar29 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar35);
                  uVar17 = *puVar37;
                  *(undefined4 *)(puVar29 + 1) = *(undefined4 *)(puVar37 + 1);
                  fVar61 = (float)uVar33 / (float)(uVar27 - 1);
                  *puVar29 = uVar17;
                  uVar17 = *puVar37;
                  puVar25 = (undefined8 *)(lVar8 + uVar49 * uVar42);
                  *(undefined8 **)((long)register0x00000008 + -0x370) = puVar37;
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar37 + 1);
                  *(undefined8 **)((long)register0x00000008 + -0x300) = puVar25;
                  *(undefined8 **)((long)register0x00000008 + -0x2f8) = puVar29;
                  *puVar25 = uVar17;
                  lVar16 = (ulong)uVar49 * (ulong)uVar35;
                  lVar15 = uVar49 * uVar42;
                  lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                  puVar30 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar35);
                  *puVar30 = 0x3f800000;
                  puVar38 = (undefined4 *)(lVar8 + uVar49 * uVar42);
                  *puVar38 = 0xbf800000;
                  iVar46 = *(int *)((long)register0x00000008 + -0x394);
                  fVar59 = fVar61;
                  if (iVar46 < 0x79) {
                    fVar59 = 0.0;
                  }
                  puVar30[1] = fVar59;
                  puVar38[1] = fVar59;
                  *(undefined4 **)((long)register0x00000008 + -0x2d0) = puVar38;
                  *(undefined4 **)((long)register0x00000008 + -0x2c8) = puVar30;
                  puVar30[2] = 0;
                  puVar38[2] = 0;
                  lVar8 = *(long *)((long)register0x00000008 + -0x2e8);
                  puVar38 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar35);
                  *puVar38 = 0;
                  puVar38[1] = 1.0 - fVar61;
                  puVar30 = (undefined4 *)(lVar8 + uVar49 * uVar42);
                  *puVar30 = 0x3f800000;
                  *(undefined4 **)((long)register0x00000008 + -0x310) = puVar30;
                  *(undefined4 **)((long)register0x00000008 + -0x308) = puVar38;
                  puVar30[1] = 1.0 - fVar61;
                  *(ulong *)((long)register0x00000008 + -0x288) = uVar33;
                  if (uVar33 == 0) {
                    lVar8 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    lVar8 = 0;
                    if (iVar46 < 0x79) {
                      lVar21 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x3f800000
                      ;
                      *(undefined4 *)(lVar21 + 4) = 0x3f800000;
                    }
                  }
                  else {
                    uVar33 = uVar33 - 1;
                    lVar8 = **(long **)((long)register0x00000008 + -0x290);
                    uVar27 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar8 >> 2) *
                             -0x5555555555555555;
                    if (uVar27 < uVar33 || uVar27 - uVar33 == 0) goto LAB_10a5f7a1c;
                    puVar29 = (undefined8 *)(lVar8 + uVar33 * 0xc);
                    lVar8 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    lVar8 = *(long *)((long)register0x00000008 + -0x288);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                  }
                  lVar21 = **(long **)((long)register0x00000008 + -0x290);
                  uVar27 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar21 >> 2) *
                           -0x5555555555555555;
                  *(uint *)((long)register0x00000008 + -0x374) = uVar35;
                  if (lVar8 == uVar27 - 1) {
                    lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    if (*(int *)((long)register0x00000008 + -0x394) < 0x79) {
                      lVar8 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x40000000
                      ;
                      *(undefined4 *)(lVar8 + 4) = 0x40000000;
                    }
                  }
                  else {
                    uVar20 = lVar8 + 1;
                    if (uVar27 < uVar20 || uVar27 - uVar20 == 0) goto LAB_10a5f7a1c;
                    puVar29 = (undefined8 *)(lVar21 + uVar20 * 0xc);
                    lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(undefined4 *)((long)register0x00000008 + -0x374));
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 3);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    uVar20 = (ulong)(*(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                  }
                  if (1 < (uint)*(undefined8 *)((long)register0x00000008 + -0x2d8)) {
                    *(long *)((long)register0x00000008 + -0x328) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar15;
                    *(long *)((long)register0x00000008 + -800) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar16;
                    *(long *)((long)register0x00000008 + -0x330) =
                         *(long *)((long)register0x00000008 + -0x2b8) + lVar16;
                    puVar25 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x2b8) + lVar15);
                    *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
                    *(ulong *)((long)register0x00000008 + -0x360) =
                         (ulong)(uint)(*(float *)((long)register0x00000008 + -0x39c) +
                                      *(float *)((long)register0x00000008 + -0x3a0) * fVar61);
                    iVar46 = *(int *)((long)register0x00000008 + -0x368) + -1;
                    iVar39 = *(int *)((long)register0x00000008 + -0x368) + -2;
                    uVar41 = *(uint *)((long)register0x00000008 + -0x398);
                    iVar44 = *(int *)((long)register0x00000008 + -0x374);
                    uVar27 = 1;
                    do {
                      fVar61 = (float)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x338)
                                            + (int)uVar27) /
                               *(float *)((long)register0x00000008 + -0x294);
                      fVar59 = fVar61 * 78.233 + fVar61 * 12.9898;
                      _sinf();
                      fVar59 = fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547);
                      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
                      *(ulong *)((long)register0x00000008 + -0x2b0) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
                      *(ulong *)((long)register0x00000008 + -0x270) = (ulong)(uint)fVar59;
                      fVar59 = fVar61 * 78.233 + fVar59 * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
                      *(ulong *)((long)register0x00000008 + -0x280) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 78.233 +
                               (float)*(undefined8 *)((long)register0x00000008 + -0x270) * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      if (*(ulong *)((long)register0x00000008 + -0x348) < uVar27) {
                        uVar20 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x350) +
                                                 0x10);
                        puVar11 = *(uint **)((long)register0x00000008 + -0x318);
                        func_0x00010a5f9694(puVar11,uVar20,
                                            *(undefined4 *)((long)register0x00000008 + -0x364));
                        uVar14 = *puVar11;
                        uVar33 = (ulong)uVar14;
                        uVar2 = puVar11[1];
                        uVar42 = (ulong)uVar2;
                        if (((int)uVar14 < 0) && ((int)uVar2 < 0)) goto LAB_10a5f5d9c;
                        uVar17 = **(undefined8 **)((long)register0x00000008 + -0x370);
                        fVar60 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x370) + 1)
                        ;
                        fVar51 = (float)uVar17;
                        fVar53 = (float)((ulong)uVar17 >> 0x20);
                        fVar52 = fVar60;
                        if (-1 < (int)uVar14) {
                          fVar61 = ((float)uVar41 / *(float *)((long)register0x00000008 + -0x294)) *
                                   78.233 + fVar61 * 12.9898;
                          _sinf();
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar22 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar22 < uVar33 || uVar22 - uVar33 == 0) goto LAB_10a5f7a1c;
                          plVar48 = (long *)(lVar8 + uVar33 * 0x18);
                          lVar8 = *plVar48;
                          uVar33 = (plVar48[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar22 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar33 < uVar22 || uVar33 - uVar22 == 0) goto LAB_10a5f7a1c;
                          fVar61 = fVar61 * 43758.547 - (float)(int)(fVar61 * 43758.547);
                          puVar29 = (undefined8 *)(lVar8 + uVar22 * 0xc);
                          fVar52 = 1.0 - fVar61;
                          uVar17 = *puVar29;
                          uVar17 = CONCAT44(fVar53 * fVar52 +
                                            (float)((ulong)uVar17 >> 0x20) * fVar61,
                                            fVar51 * fVar52 + (float)uVar17 * fVar61);
                          fVar52 = fVar52 * fVar60 + fVar61 * *(float *)(puVar29 + 1);
                        }
                        if (-1 < (int)uVar2) {
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar33 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar33 < uVar42 || uVar33 - uVar42 == 0) goto LAB_10a5f7a1c;
                          plVar48 = (long *)(lVar8 + uVar42 * 0x18);
                          lVar8 = *plVar48;
                          uVar33 = (plVar48[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar42 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar33 < uVar42 || uVar33 - uVar42 == 0) goto LAB_10a5f7a1c;
                          puVar29 = (undefined8 *)(lVar8 + uVar42 * 0xc);
                          fVar58 = (float)*(undefined8 *)((long)register0x00000008 + -0x2b0);
                          fVar61 = 1.0 - fVar58;
                          uVar55 = *puVar29;
                          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar61 +
                                            (float)((ulong)uVar55 >> 0x20) * fVar58,
                                            (float)uVar17 * fVar61 + (float)uVar55 * fVar58);
                          fVar52 = fVar61 * fVar52 + fVar58 * *(float *)(puVar29 + 1);
                        }
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x390);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61
                                 + ((float)uVar17 - fVar51);
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61
                                 + ((float)((ulong)uVar17 >> 0x20) - fVar53);
                        fVar61 = fVar61 * fVar59 + (fVar52 - fVar60);
                        uVar50 = 0x40000000;
                      }
                      else {
LAB_10a5f5d9c:
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x360);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61;
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61;
                        fVar61 = fVar61 * fVar59;
                        uVar50 = 0x3f800000;
                      }
                      uVar2 = iVar40 + iVar44;
                      uVar14 = uVar2 + 1;
                      puVar29 = *(undefined8 **)((long)register0x00000008 + -0x300);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x2f8) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x2f8);
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar29 + 1);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar29;
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      puVar29 = *(undefined8 **)((long)register0x00000008 + -0x328);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -800) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                      lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -800);
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar29 + 1);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar29;
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x330) + 1);
                      puVar29 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x330);
                      *puVar29 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar29 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar25 + 1);
                      puVar29 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar25;
                      *puVar29 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar29 + 1) = fVar61 + fVar59;
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e8);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2) =
                           **(undefined8 **)((long)register0x00000008 + -0x308);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14) =
                           **(undefined8 **)((long)register0x00000008 + -0x310);
                      puVar30 = *(undefined4 **)((long)register0x00000008 + -0x2d0);
                      puVar38 = *(undefined4 **)((long)register0x00000008 + -0x2c8);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                      puVar23 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      *puVar23 = *puVar38;
                      puVar18 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      *puVar18 = *puVar30;
                      puVar23[1] = puVar38[1];
                      puVar18[1] = puVar30[1];
                      puVar23[2] = uVar50;
                      puVar18[2] = uVar50;
                      if (*(ulong *)((long)register0x00000008 + -0x288) <
                          ((*(long **)((long)register0x00000008 + -0x290))[1] -
                           **(long **)((long)register0x00000008 + -0x290) >> 2) *
                          -0x5555555555555555 - 1U) {
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar39);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),(ulong)uVar2
                                     );
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar39);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 2);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar39);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar46);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 3);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar46);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar46);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        uVar20 = (ulong)(iVar40 + iVar44 + 2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                      }
                      uVar27 = uVar27 + 1;
                      iVar46 = iVar46 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar39 = iVar39 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar44 = iVar44 + iVar40;
                      uVar41 = uVar41 - 1;
                    } while (*(ulong *)((long)register0x00000008 + -0x2d8) != uVar27);
                  }
                  lVar16 = **(long **)((long)register0x00000008 + -0x290);
                  uVar27 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar16 >> 2) *
                           -0x5555555555555555;
                  iVar46 = *(int *)((long)register0x00000008 + -0x368) + 2;
                  if (uVar27 - 1 <= *(ulong *)((long)register0x00000008 + -0x288)) {
                    iVar46 = *(int *)((long)register0x00000008 + -0x368);
                  }
                  *(int *)((long)register0x00000008 + -0x368) = iVar46;
                  uVar35 = *(int *)((long)register0x00000008 + -0x374) + 2;
                  uVar33 = *(ulong *)((long)register0x00000008 + -0x288) + 1;
                } while (uVar33 < uVar27);
                lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20);
              }
              uVar35 = uVar35 + iVar40 * *(int *)((long)register0x00000008 + -0x3a4);
              *(int *)((long)register0x00000008 + -0x368) =
                   *(int *)((long)register0x00000008 + -0x368) +
                   *(int *)((long)register0x00000008 + -0x33c) *
                   *(int *)((long)register0x00000008 + -0x3a4);
              uVar27 = (ulong)(*(int *)((long)register0x00000008 + -0x364) + 1U);
              uVar33 = (lVar8 - lVar15 >> 3) * -0x5555555555555555;
              *(int *)((long)register0x00000008 + -0x398) =
                   *(int *)((long)register0x00000008 + -0x398) +
                   *(int *)((long)register0x00000008 + -0x3a8);
              *(long *)((long)register0x00000008 + -0x338) =
                   *(long *)((long)register0x00000008 + -0x338) +
                   *(long *)((long)register0x00000008 + -0x2d8);
              *(uint *)((long)register0x00000008 + -0x364) =
                   *(int *)((long)register0x00000008 + -0x364) + 1U;
            } while (uVar27 <= uVar33 && uVar33 - uVar27 != 0);
          }
          lVar8 = **(long **)((long)register0x00000008 + -0x350);
        } while (lVar8 != 0);
      }
    }
    else {
      *(undefined **)((long)register0x00000008 + -0x220) = &UNK_10f66a490;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3b;
      lVar15 = *(long *)((long)register0x00000008 + -0x318);
      if (lVar8 == 0) {
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      plVar48 = *(long **)(lVar15 + 0x630);
      if (plVar48 == (long *)0x0) {
        iVar40 = 0;
      }
      else {
        iVar40 = 0;
        do {
          iVar40 = iVar40 + (int)((ulong)(plVar48[4] - plVar48[3]) >> 3) * (int)plVar48[2] *
                            -0x55555555;
          plVar48 = (long *)*plVar48;
        } while (plVar48 != (long *)0x0);
      }
      uVar41 = *(uint *)(lVar15 + 0x570);
      iVar39 = *(int *)(lVar15 + 0x57c);
      *(ulong *)((long)register0x00000008 + -0x348) = (ulong)uVar41;
      iVar46 = iVar39 + uVar41;
      *(int *)((long)register0x00000008 + -0x3a4) = iVar46;
      uVar41 = iVar46 + 1;
      *(ulong *)((long)register0x00000008 + -0x2d8) = (ulong)uVar41;
      uVar41 = iVar40 * uVar41;
      if ((uVar41 >> 0xf & 0xffff) != 0) {
        FUN_10a185264((undefined1 *)((long)register0x00000008 + -0x220),0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a4cc,0x46);
        __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x100),0xffff);
        uVar20 = *(ulong *)((long)register0x00000008 + -0xf8);
        puVar7 = *(undefined1 **)((long)register0x00000008 + -0x100);
        if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
          uVar20 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x100);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),puVar7,uVar20);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a513,0x53);
        FUN_10a61d104((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      fVar59 = *(float *)(lVar15 + 0x578);
      *(undefined4 *)((long)register0x00000008 + -0x39c) = *(undefined4 *)(lVar15 + 0x574);
      uVar49 = *(uint *)(lVar15 + 0x580);
      *(undefined8 *)((long)register0x00000008 + -0x388) = 0;
      *(ulong *)((long)register0x00000008 + -0x390) = (ulong)uVar49;
      *(undefined4 *)((long)register0x00000008 + -0x394) =
           *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18);
      FUN_10ab4a154(lVar8,uVar41 * 2);
      uVar20 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x2d8) *
                            (iVar40 * 6 + -6));
      FUN_10ab4cb54(lVar8);
      uVar41 = *(uint *)(lVar8 + 0x110);
      lVar15 = *(long *)(lVar8 + 0x100);
      if (uVar41 == 0xffffffff) {
        lVar21 = 0;
        lVar16 = *(long *)(lVar8 + 0xf8);
      }
      else {
        lVar16 = *(long *)(lVar8 + 0xf8);
        uVar27 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar27 < uVar41 || uVar27 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar21 = lVar16 + (ulong)uVar41 * 0x38;
      }
      lVar28 = lVar16;
      if (lVar16 == lVar15) {
        lVar28 = 0;
        lVar56 = lVar16;
      }
      else {
        do {
          lVar56 = lVar28;
          if (*(long *)(lVar28 + 0x18) == lRam00000001137eb640) break;
          lVar28 = lVar28 + 0x38;
          lVar56 = lVar15;
        } while (lVar28 != lVar15);
        lVar57 = lVar16;
        lVar28 = 0;
        if (lVar56 != lVar15) {
          lVar28 = lVar56;
        }
        do {
          lVar56 = lVar57;
          if (*(long *)(lVar57 + 0x18) == lRam00000001137eb678) break;
          lVar57 = lVar57 + 0x38;
          lVar56 = lVar15;
        } while (lVar57 != lVar15);
      }
      uVar41 = *(uint *)(lVar8 + 0x120);
      lVar57 = lVar16;
      if (uVar41 == 0xffffffff) {
        lVar36 = 0;
      }
      else {
        uVar27 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar27 < uVar41 || uVar27 - uVar41 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar36 = lVar16 + (ulong)uVar41 * 0x38;
      }
      for (; (lVar57 != lVar15 &&
             (lVar16 = lVar57, *(long *)(lVar57 + 0x18) != lRam00000001137eb6e8));
          lVar57 = lVar57 + 0x38) {
        lVar16 = lVar15;
      }
      if (((((((lVar21 == 0) || (*(int *)(lVar21 + 0x24) != 5)) || (lVar28 == 0)) ||
            ((*(int *)(lVar21 + 0x28) != 3 || (*(int *)(lVar28 + 0x24) != 5)))) ||
           ((lVar56 == lVar15 || ((lVar56 == 0 || (*(int *)(lVar28 + 0x28) != 3)))))) ||
          (*(int *)(lVar56 + 0x24) != 5)) ||
         ((((*(int *)(lVar56 + 0x28) != 3 || (lVar36 == 0)) || (*(int *)(lVar36 + 0x24) != 5)) ||
          (((lVar16 == lVar15 || (lVar16 == 0)) ||
           ((*(int *)(lVar36 + 0x28) != 2 ||
            ((*(int *)(lVar16 + 0x24) != 5 || (*(int *)(lVar16 + 0x28) != 4)))))))))) {
        FUN_10a3ee510(&UNK_10f66a567);
        goto LAB_10a5f7a1c;
      }
      lVar15 = *(long *)(lVar8 + 0x10);
      uVar41 = *(uint *)(lVar21 + 0x30);
      uVar49 = *(uint *)(lVar8 + 0xf0);
      uVar14 = *(uint *)(lVar28 + 0x30);
      uVar2 = *(uint *)(lVar56 + 0x30);
      uVar3 = *(uint *)(lVar36 + 0x30);
      uVar4 = *(uint *)(lVar16 + 0x30);
      FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0x220),lVar8);
      lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x318) + 0x630);
      if (lVar8 != 0) {
        uVar35 = 0;
        *(undefined4 *)((long)register0x00000008 + -0x368) = 0;
        *(ulong *)((long)register0x00000008 + -0x2e0) = lVar15 + (ulong)uVar41;
        *(ulong *)((long)register0x00000008 + -0x2c0) = lVar15 + (ulong)uVar14;
        *(ulong *)((long)register0x00000008 + -0x2b8) = lVar15 + (ulong)uVar2;
        *(ulong *)((long)register0x00000008 + -0x2e8) = lVar15 + (ulong)uVar3;
        *(ulong *)((long)register0x00000008 + -0x2f0) = lVar15 + (ulong)uVar4;
        fVar61 = fVar59 * *(float *)((long)register0x00000008 + -0x39c);
        if (0.0 <= fVar59) {
          fVar61 = fVar59;
        }
        *(float *)((long)register0x00000008 + -0x3a0) = fVar61;
        *(int *)((long)register0x00000008 + -0x3a8) =
             ~(iVar39 + (int)*(undefined8 *)((long)register0x00000008 + -0x348));
        do {
          *(long *)((long)register0x00000008 + -0x350) = lVar8;
          lVar15 = *(long *)(lVar8 + 0x18);
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 - lVar15 != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
            uVar27 = 0;
            *(undefined4 *)((long)register0x00000008 + -0x364) = 0;
            uVar41 = (int)((ulong)(lVar8 - lVar15) >> 3) *
                     (int)*(undefined8 *)((long)register0x00000008 + -0x2d8) * -0x55555555;
            *(float *)((long)register0x00000008 + -0x294) = (float)uVar41;
            *(uint *)((long)register0x00000008 + -0x398) = uVar41 - 1;
            do {
              plVar48 = (long *)(lVar15 + uVar27 * 0x18);
              *(long **)((long)register0x00000008 + -0x290) = plVar48;
              lVar16 = *plVar48;
              lVar21 = plVar48[1];
              uVar27 = (lVar21 - lVar16 >> 2) * -0x5555555555555555;
              iVar40 = (int)uVar27 * 2;
              *(int *)((long)register0x00000008 + -0x33c) = iVar40 + -2;
              if (lVar21 != lVar16) {
                uVar33 = 0;
                do {
                  uVar42 = (ulong)(uVar35 + 1);
                  puVar37 = (undefined8 *)(lVar16 + uVar33 * 0xc);
                  lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                  puVar29 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar35);
                  uVar17 = *puVar37;
                  *(undefined4 *)(puVar29 + 1) = *(undefined4 *)(puVar37 + 1);
                  *puVar29 = uVar17;
                  puVar25 = (undefined8 *)(lVar8 + uVar49 * uVar42);
                  uVar17 = *puVar37;
                  *(undefined8 **)((long)register0x00000008 + -0x370) = puVar37;
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar37 + 1);
                  *(undefined8 **)((long)register0x00000008 + -0x300) = puVar25;
                  *(undefined8 **)((long)register0x00000008 + -0x2f8) = puVar29;
                  *puVar25 = uVar17;
                  lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                  puVar30 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar35);
                  *puVar30 = 0x3f800000;
                  puVar38 = (undefined4 *)(lVar8 + uVar49 * uVar42);
                  *puVar38 = 0xbf800000;
                  fVar61 = (float)uVar33 / (float)(uVar27 - 1);
                  lVar15 = (ulong)uVar49 * (ulong)uVar35;
                  lVar8 = uVar49 * uVar42;
                  iVar46 = *(int *)((long)register0x00000008 + -0x394);
                  fVar59 = fVar61;
                  if (iVar46 < 0x79) {
                    fVar59 = 0.0;
                  }
                  puVar30[1] = fVar59;
                  puVar38[1] = fVar59;
                  puVar30[2] = 0;
                  puVar38[2] = 0;
                  *(undefined4 **)((long)register0x00000008 + -0x2d0) = puVar38;
                  *(undefined4 **)((long)register0x00000008 + -0x2c8) = puVar30;
                  puVar30[3] = 0;
                  puVar38[3] = 0;
                  lVar16 = *(long *)((long)register0x00000008 + -0x2e8);
                  puVar38 = (undefined4 *)(lVar16 + (ulong)uVar49 * (ulong)uVar35);
                  *puVar38 = 0;
                  puVar38[1] = 1.0 - fVar61;
                  puVar30 = (undefined4 *)(lVar16 + uVar49 * uVar42);
                  *puVar30 = 0x3f800000;
                  *(undefined4 **)((long)register0x00000008 + -0x310) = puVar30;
                  *(undefined4 **)((long)register0x00000008 + -0x308) = puVar38;
                  puVar30[1] = 1.0 - fVar61;
                  *(ulong *)((long)register0x00000008 + -0x288) = uVar33;
                  if (uVar33 == 0) {
                    lVar16 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    lVar16 = 0;
                    if (iVar46 < 0x79) {
                      lVar21 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x3f800000
                      ;
                      *(undefined4 *)(lVar21 + 4) = 0x3f800000;
                    }
                  }
                  else {
                    uVar33 = uVar33 - 1;
                    lVar16 = **(long **)((long)register0x00000008 + -0x290);
                    uVar27 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar16 >> 2) *
                             -0x5555555555555555;
                    if (uVar27 < uVar33 || uVar27 - uVar33 == 0) goto LAB_10a5f7a1c;
                    puVar29 = (undefined8 *)(lVar16 + uVar33 * 0xc);
                    lVar16 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    lVar16 = *(long *)((long)register0x00000008 + -0x288);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                  }
                  lVar21 = **(long **)((long)register0x00000008 + -0x290);
                  uVar27 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar21 >> 2) *
                           -0x5555555555555555;
                  *(uint *)((long)register0x00000008 + -0x374) = uVar35;
                  if (lVar16 == uVar27 - 1) {
                    lVar16 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    if (*(int *)((long)register0x00000008 + -0x394) < 0x79) {
                      lVar16 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x40000000
                      ;
                      *(undefined4 *)(lVar16 + 4) = 0x40000000;
                    }
                  }
                  else {
                    uVar20 = lVar16 + 1;
                    if (uVar27 < uVar20 || uVar27 - uVar20 == 0) goto LAB_10a5f7a1c;
                    puVar29 = (undefined8 *)(lVar21 + uVar20 * 0xc);
                    lVar16 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    uVar17 = *puVar29;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar29 + 1);
                    *puVar25 = uVar17;
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(undefined4 *)((long)register0x00000008 + -0x374));
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 3);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar42);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    uVar20 = (ulong)(*(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                  }
                  if (1 < (uint)*(undefined8 *)((long)register0x00000008 + -0x2d8)) {
                    *(long *)((long)register0x00000008 + -0x328) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar8;
                    *(long *)((long)register0x00000008 + -800) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar15;
                    *(long *)((long)register0x00000008 + -0x330) =
                         *(long *)((long)register0x00000008 + -0x2b8) + lVar15;
                    puVar25 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x2b8) + lVar8);
                    *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
                    *(ulong *)((long)register0x00000008 + -0x360) =
                         (ulong)(uint)(*(float *)((long)register0x00000008 + -0x39c) +
                                      *(float *)((long)register0x00000008 + -0x3a0) * fVar61);
                    iVar46 = *(int *)((long)register0x00000008 + -0x368) + -1;
                    iVar39 = *(int *)((long)register0x00000008 + -0x368) + -2;
                    uVar41 = *(uint *)((long)register0x00000008 + -0x398);
                    iVar44 = *(int *)((long)register0x00000008 + -0x374);
                    uVar27 = 1;
                    do {
                      fVar61 = (float)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x338)
                                            + (int)uVar27) /
                               *(float *)((long)register0x00000008 + -0x294);
                      fVar59 = fVar61 * 78.233 + fVar61 * 12.9898;
                      _sinf();
                      fVar59 = fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547);
                      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
                      *(ulong *)((long)register0x00000008 + -0x2b0) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
                      *(ulong *)((long)register0x00000008 + -0x270) = (ulong)(uint)fVar59;
                      fVar59 = fVar61 * 78.233 + fVar59 * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
                      *(ulong *)((long)register0x00000008 + -0x280) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 78.233 +
                               (float)*(undefined8 *)((long)register0x00000008 + -0x270) * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      if (*(ulong *)((long)register0x00000008 + -0x348) < uVar27) {
                        uVar20 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x350) +
                                                 0x10);
                        puVar11 = *(uint **)((long)register0x00000008 + -0x318);
                        func_0x00010a5f9694(puVar11,uVar20,
                                            *(undefined4 *)((long)register0x00000008 + -0x364));
                        uVar14 = *puVar11;
                        uVar33 = (ulong)uVar14;
                        uVar2 = puVar11[1];
                        uVar42 = (ulong)uVar2;
                        if (((int)uVar14 < 0) && ((int)uVar2 < 0)) goto LAB_10a5f6880;
                        uVar17 = **(undefined8 **)((long)register0x00000008 + -0x370);
                        fVar60 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x370) + 1)
                        ;
                        fVar51 = (float)uVar17;
                        fVar53 = (float)((ulong)uVar17 >> 0x20);
                        fVar52 = fVar60;
                        if (-1 < (int)uVar14) {
                          fVar61 = ((float)uVar41 / *(float *)((long)register0x00000008 + -0x294)) *
                                   78.233 + fVar61 * 12.9898;
                          _sinf();
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar22 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar22 < uVar33 || uVar22 - uVar33 == 0) goto LAB_10a5f7a1c;
                          plVar48 = (long *)(lVar8 + uVar33 * 0x18);
                          lVar8 = *plVar48;
                          uVar33 = (plVar48[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar22 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar33 < uVar22 || uVar33 - uVar22 == 0) goto LAB_10a5f7a1c;
                          fVar61 = fVar61 * 43758.547 - (float)(int)(fVar61 * 43758.547);
                          puVar29 = (undefined8 *)(lVar8 + uVar22 * 0xc);
                          fVar52 = 1.0 - fVar61;
                          uVar17 = *puVar29;
                          uVar17 = CONCAT44(fVar53 * fVar52 +
                                            (float)((ulong)uVar17 >> 0x20) * fVar61,
                                            fVar51 * fVar52 + (float)uVar17 * fVar61);
                          fVar52 = fVar52 * fVar60 + fVar61 * *(float *)(puVar29 + 1);
                        }
                        if (-1 < (int)uVar2) {
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar33 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar33 < uVar42 || uVar33 - uVar42 == 0) goto LAB_10a5f7a1c;
                          plVar48 = (long *)(lVar8 + uVar42 * 0x18);
                          lVar8 = *plVar48;
                          uVar33 = (plVar48[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar42 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar33 < uVar42 || uVar33 - uVar42 == 0) goto LAB_10a5f7a1c;
                          puVar29 = (undefined8 *)(lVar8 + uVar42 * 0xc);
                          fVar58 = (float)*(undefined8 *)((long)register0x00000008 + -0x2b0);
                          fVar61 = 1.0 - fVar58;
                          uVar55 = *puVar29;
                          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar61 +
                                            (float)((ulong)uVar55 >> 0x20) * fVar58,
                                            (float)uVar17 * fVar61 + (float)uVar55 * fVar58);
                          fVar52 = fVar61 * fVar52 + fVar58 * *(float *)(puVar29 + 1);
                        }
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x390);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61
                                 + ((float)uVar17 - fVar51);
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61
                                 + ((float)((ulong)uVar17 >> 0x20) - fVar53);
                        fVar61 = fVar61 * fVar59 + (fVar52 - fVar60);
                        uVar50 = 0x40000000;
                      }
                      else {
LAB_10a5f6880:
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x360);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61;
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61;
                        fVar61 = fVar61 * fVar59;
                        uVar50 = 0x3f800000;
                      }
                      uVar2 = iVar40 + iVar44;
                      uVar14 = uVar2 + 1;
                      puVar29 = *(undefined8 **)((long)register0x00000008 + -0x300);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x2f8) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x2f8);
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar29 + 1);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar29;
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      puVar29 = *(undefined8 **)((long)register0x00000008 + -0x328);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -800) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                      lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -800);
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar29 + 1);
                      puVar37 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar29;
                      *puVar37 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar37 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x330) + 1);
                      puVar29 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x330);
                      *puVar29 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar29 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar25 + 1);
                      puVar29 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar25;
                      *puVar29 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar29 + 1) = fVar61 + fVar59;
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e8);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2) =
                           **(undefined8 **)((long)register0x00000008 + -0x308);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14) =
                           **(undefined8 **)((long)register0x00000008 + -0x310);
                      puVar30 = *(undefined4 **)((long)register0x00000008 + -0x2d0);
                      puVar38 = *(undefined4 **)((long)register0x00000008 + -0x2c8);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                      puVar23 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      *puVar23 = *puVar38;
                      puVar18 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      *puVar18 = *puVar30;
                      puVar23[1] = puVar38[1];
                      puVar18[1] = puVar30[1];
                      puVar23[2] = uVar50;
                      puVar18[2] = uVar50;
                      puVar23[3] = (float)(uVar27 & 0xffffffff);
                      puVar18[3] = (float)(uVar27 & 0xffffffff);
                      if (*(ulong *)((long)register0x00000008 + -0x288) <
                          ((*(long **)((long)register0x00000008 + -0x290))[1] -
                           **(long **)((long)register0x00000008 + -0x290) >> 2) *
                          -0x5555555555555555 - 1U) {
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar39);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),(ulong)uVar2
                                     );
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar39);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 2);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar39);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar46);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 3);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar46);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar40 + iVar44 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar40 + iVar46);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        uVar20 = (ulong)(iVar40 + iVar44 + 2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                      }
                      uVar27 = uVar27 + 1;
                      iVar46 = iVar46 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar39 = iVar39 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar44 = iVar44 + iVar40;
                      uVar41 = uVar41 - 1;
                    } while (*(ulong *)((long)register0x00000008 + -0x2d8) != uVar27);
                  }
                  lVar16 = **(long **)((long)register0x00000008 + -0x290);
                  uVar27 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar16 >> 2) *
                           -0x5555555555555555;
                  iVar46 = *(int *)((long)register0x00000008 + -0x368) + 2;
                  if (uVar27 - 1 <= *(ulong *)((long)register0x00000008 + -0x288)) {
                    iVar46 = *(int *)((long)register0x00000008 + -0x368);
                  }
                  *(int *)((long)register0x00000008 + -0x368) = iVar46;
                  uVar35 = *(int *)((long)register0x00000008 + -0x374) + 2;
                  uVar33 = *(ulong *)((long)register0x00000008 + -0x288) + 1;
                } while (uVar33 < uVar27);
                lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20);
              }
              uVar35 = uVar35 + iVar40 * *(int *)((long)register0x00000008 + -0x3a4);
              *(int *)((long)register0x00000008 + -0x368) =
                   *(int *)((long)register0x00000008 + -0x368) +
                   *(int *)((long)register0x00000008 + -0x33c) *
                   *(int *)((long)register0x00000008 + -0x3a4);
              uVar27 = (ulong)(*(int *)((long)register0x00000008 + -0x364) + 1U);
              uVar33 = (lVar8 - lVar15 >> 3) * -0x5555555555555555;
              *(int *)((long)register0x00000008 + -0x398) =
                   *(int *)((long)register0x00000008 + -0x398) +
                   *(int *)((long)register0x00000008 + -0x3a8);
              *(long *)((long)register0x00000008 + -0x338) =
                   *(long *)((long)register0x00000008 + -0x338) +
                   *(long *)((long)register0x00000008 + -0x2d8);
              *(uint *)((long)register0x00000008 + -0x364) =
                   *(int *)((long)register0x00000008 + -0x364) + 1U;
            } while (uVar27 <= uVar33 && uVar33 - uVar27 != 0);
          }
          lVar8 = **(long **)((long)register0x00000008 + -0x350);
        } while (lVar8 != 0);
      }
    }
    (**(code **)(**(long **)(*(long *)((long)register0x00000008 + -0x318) + 0x5b0) + 0xa0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0xb8))
    goto LAB_10a5f78a4;
    unaff_x19 = *(long **)((long)register0x00000008 + -0x318);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_d13 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_d12 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_d15 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_d14 = *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((((*(byte *)((long)unaff_x19 + 0x59c) & 1) != 0) ||
        (*(char *)((long)unaff_x19 + 0x59d) == '\x01')) &&
       (plVar48 = (long *)unaff_x19[0xb1], plVar48 != (long *)0x0)) {
      (**(code **)(*unaff_x19 + 0x50))((undefined1 *)((long)register0x00000008 + -0x80));
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        plVar9 = (long *)(*(long *)((long)register0x00000008 + -0x78) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        unaff_x20 = *(long **)((long)register0x00000008 + -0x78);
        if (unaff_x20 != (long *)0x0) {
          plVar9 = unaff_x20 + 1;
          do {
            lVar8 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            unaff_x19 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if ((char)plVar48[8] == '\x01') {
        pcVar19 = (code *)*plVar48;
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        if (*(long *)((long)register0x00000008 + -0xa8) != 0) {
          plVar9 = (long *)(*(long *)((long)register0x00000008 + -0xa8) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        unaff_x19 = (long *)((long)register0x00000008 + -0x80);
        (*pcVar19)(unaff_x19,plVar48);
        plVar48 = *(long **)((long)register0x00000008 + -0x78);
        if (plVar48 != (long *)0x0) {
          plVar9 = plVar48 + 1;
          do {
            lVar8 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_10a5f93e4:
          if (lVar8 == 0) {
            (**(code **)(*plVar48 + 0x10))(plVar48);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x19 = plVar48;
          }
        }
      }
      else if ((char)plVar48[8] == '\x02') {
        unaff_x20 = plVar48;
        FUN_10a688b40();
        if (unaff_x20 == (long *)0x0) {
          unaff_x19 = (long *)0x0;
          if (uVar20 != 0) {
            lVar15 = plVar48[1];
            lVar8 = *plVar48;
            if (plVar48[1] != 0) {
              plVar48 = (long *)(plVar48[1] + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar48,0x10);
                if (bVar6) {
                  *plVar48 = *plVar48 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar17 = *(undefined8 *)((long)register0x00000008 + -0xb0);
            plVar48 = *(long **)((long)register0x00000008 + -0xa8);
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
            *(long **)((long)register0x00000008 + -0x88) = plVar48;
            if (plVar48 != (long *)0x0) {
              plVar9 = plVar48 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = *plVar9 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *(code **)((long)register0x00000008 + -0x80) = FUN_10a61d4dc;
            *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_FUN_110c00ea0;
            *(long *)((long)register0x00000008 + -0x68) = lVar15;
            *(long *)((long)register0x00000008 + -0x70) = lVar8;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
            *(long **)((long)register0x00000008 + -0x58) = plVar48;
            if (plVar48 != (long *)0x0) {
              plVar9 = plVar48 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = *plVar9 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
            unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x80);
            FUN_10a4634ec(uVar20,(undefined1 *)((long)register0x00000008 + -0x80));
            unaff_x19 = (long *)((long)register0x00000008 + -0x78);
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))();
            if (plVar48 != (long *)0x0) {
              plVar9 = plVar48 + 1;
              do {
                lVar8 = *plVar9;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = lVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plVar48 + 0x10))(plVar48);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar48;
              }
            }
            plVar48 = *(long **)((long)register0x00000008 + -0x98);
            if (plVar48 != (long *)0x0) {
              plVar9 = plVar48 + 1;
              do {
                lVar8 = *plVar9;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = lVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10a5f93e4;
            }
          }
        }
        else {
          *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
          unaff_x19 = (long *)*plVar48;
          FUN_10a61d2d0(unaff_x19,(undefined1 *)((long)register0x00000008 + -0xb0));
          iVar40 = *(int *)((long)unaff_x20 + 4) + -1;
          *(int *)((long)unaff_x20 + 4) = iVar40;
          if (iVar40 == 0) {
            *(undefined4 *)unaff_x20 = 0;
          }
        }
      }
      plVar48 = *(long **)((long)register0x00000008 + -0xa8);
      if (plVar48 != (long *)0x0) {
        plVar9 = plVar48 + 1;
        do {
          lVar8 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar48 + 0x10))(plVar48);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          unaff_x19 = plVar48;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))(unaff_x21 + 8);
    FUN_10a61be10(unaff_x20 + 2);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xa0));
    FUN_10a61be10((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10a5f95c8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    goto FUN_10a5f4cb0;
  }
  if ((*(byte *)((long)param_1 + 0x534) & 1) != 0) {
    if (plVar9 == (long *)0x0) {
LAB_10a5f4e60:
      if ((uint)(*(int *)(*(long *)(param_1[0x21] + 0x850) + 0x2c) - (int)param_1[0xa8]) < 2)
      goto LAB_10a5f770c;
      FUN_10a5f4bcc(plVar48);
      if (plVar9 != (long *)0x0) goto LAB_10a5f4f24;
      lVar8 = 0;
    }
    else {
      lVar8 = plVar9[0x45];
      FUN_10a5fbd7c();
      if (lVar8 == param_1[0xa7]) goto LAB_10a5f4e60;
      FUN_10a5f4bcc(plVar48);
LAB_10a5f4f24:
      lVar8 = plVar9[0x45];
      FUN_10a5fbd7c();
    }
    param_1[0xa7] = lVar8;
    goto LAB_10a5f770c;
  }
  plVar9 = plVar48;
  FUN_10a5f7bec();
  *(char *)((long)param_1 + 0x534) = (char)plVar9;
  if ((int)plVar9 == 0) goto LAB_10a5f770c;
  uVar20 = (ulong)*(byte *)(param_1[0x21] + 0x29);
  if (5 < uVar20) goto LAB_10a5f7a1c;
  plVar9 = *(long **)(param_1[0x21] + uVar20 * 8 + 0x30);
  (**(code **)(*plVar9 + 0x18))();
  if ((int)plVar9 == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66828f,&UNK_10f668524,0x38c,&UNK_10f66856b);
    }
  }
  else {
    plVar9 = param_1 + 0xa9;
    plVar10 = (long *)param_1[0xa9];
    if ((plVar10 == (long *)0x0) || ((**(code **)(*plVar10 + 0x90))(), *plVar10 == 0)) {
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x220);
      FUN_10a0d0194((undefined1 *)((long)register0x00000008 + -0x238));
      FUN_10ab6e728();
      plVar48 = *(long **)((long)register0x00000008 + -0x318);
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x100),*puVar25,puVar25[1]);
      }
      else {
        uVar55 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar55;
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0xe8) = puVar25[3];
      uVar50 = *(undefined4 *)(puVar25 + 6);
      uVar17 = puVar25[4];
      *(undefined8 *)((long)register0x00000008 + -0xd8) = puVar25[5];
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0xd0) = uVar50;
      FUN_10ab6f520((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x100),1);
      lVar8 = *(long *)((long)register0x00000008 + -0x238);
      *(undefined4 *)(lVar8 + 0xf0) = *(undefined4 *)((long)register0x00000008 + -0x220);
      if ((undefined4 *)(lVar8 + 0xf0) != (undefined4 *)((long)register0x00000008 + -0x220)) {
        FUN_10a1903c4(lVar8 + 0xf8,*(long *)((long)register0x00000008 + -0x218),
                      *(long *)((long)register0x00000008 + -0x210),
                      (*(long *)((long)register0x00000008 + -0x210) -
                       *(long *)((long)register0x00000008 + -0x218) >> 3) * 0x6db6db6db6db6db7);
      }
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x200);
      uVar54 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
      uVar55 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
      *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)((long)register0x00000008 + -0x1f8);
      *(undefined8 *)(lVar8 + 0x110) = uVar17;
      *(undefined8 *)(lVar8 + 0x128) = uVar54;
      *(undefined8 *)(lVar8 + 0x120) = uVar55;
      *(undefined8 *)(lVar8 + 0x130) = *(undefined8 *)((long)register0x00000008 + -0x1e0);
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0x218);
      func_0x00010a190844((undefined1 *)((long)register0x00000008 + -0x250));
      *(undefined8 *)(*(long *)((long)register0x00000008 + -0x238) + 0xe8) = 0x100000000;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      FUN_10a1995d0((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x250),
                    (undefined1 *)((long)register0x00000008 + -0x100),
                    (undefined1 *)((long)register0x00000008 + -0x238));
      func_0x00010a19a938(plVar9,(undefined1 *)((long)register0x00000008 + -0x220));
      plVar10 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar10 != (long *)0x0) {
        plVar43 = plVar10 + 1;
        do {
          lVar8 = *plVar43;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar6) {
            *plVar43 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)*plVar9;
      if (*(char *)((long)plVar10 + 0xb9) != '\0') {
        *(undefined1 *)((long)plVar10 + 0xb9) = 0;
        (**(code **)(*plVar10 + 0xa0))();
      }
      *(long *)((long)register0x00000008 + -0x100) = plVar48[0x2e];
      FUN_10a2db3d8((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x100),plVar9);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      if (*(long *)((long)register0x00000008 + -0x218) != 0) {
        plVar10 = (long *)(*(long *)((long)register0x00000008 + -0x218) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a426824(plVar48,(undefined1 *)((long)register0x00000008 + -0x100));
      plVar10 = *(long **)((long)register0x00000008 + -0xf8);
      if (plVar10 != (long *)0x0) {
        plVar43 = plVar10 + 1;
        do {
          lVar8 = *plVar43;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar6) {
            *plVar43 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar8 = plVar48[0xaa];
      *(long *)((long)register0x00000008 + -0x250) = plVar48[0xa9];
      *(long *)((long)register0x00000008 + -0x248) = lVar8;
      if (lVar8 != 0) {
        plVar10 = (long *)(lVar8 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a42646c(plVar48,(undefined1 *)((long)register0x00000008 + -0x250));
      plVar10 = *(long **)((long)register0x00000008 + -0x248);
      if (plVar10 != (long *)0x0) {
        plVar43 = plVar10 + 1;
        do {
          lVar8 = *plVar43;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar6) {
            *plVar43 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar10 != (long *)0x0) {
        plVar43 = plVar10 + 1;
        do {
          lVar8 = *plVar43;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar6) {
            *plVar43 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = *(long **)((long)register0x00000008 + -0x230);
      if (plVar10 != (long *)0x0) {
        plVar43 = plVar10 + 1;
        do {
          lVar8 = *plVar43;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar6) {
            *plVar43 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    plVar48 = (long *)plVar48[0xc6];
    if (plVar48 == (long *)0x0) {
      uVar41 = 0;
    }
    else {
      uVar41 = 0;
      do {
        if (uVar41 <= *(uint *)(plVar48 + 2)) {
          uVar41 = *(uint *)(plVar48 + 2);
        }
        plVar48 = (long *)*plVar48;
      } while (plVar48 != (long *)0x0);
      uVar41 = uVar41 << 1;
    }
    plVar48 = (long *)*plVar9;
    (**(code **)(*plVar48 + 0x90))();
    lVar8 = *plVar48;
    uVar49 = *(uint *)(lVar8 + 0xf0);
    uVar14 = 0;
    if (uVar49 != 0) {
      uVar14 = 0;
      if ((ulong)uVar49 != 0) {
        uVar14 = (uint)((ulong)(*(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10)) / (ulong)uVar49);
      }
    }
    plVar48 = *(long **)((long)register0x00000008 + -0x318);
    if (uVar14 < uVar41) {
      FUN_10ab4a154(lVar8,(ulong)uVar41);
      uVar49 = *(uint *)(lVar8 + 0x110);
      if (uVar49 != 0xffffffff) {
        lVar15 = *(long *)(lVar8 + 0xf8);
        uVar20 = (*(long *)(lVar8 + 0x100) - lVar15 >> 3) * 0x6db6db6db6db6db7;
        if (uVar20 < uVar49 || uVar20 - uVar49 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        if (((lVar15 != 0) && (lVar15 = lVar15 + (ulong)uVar49 * 0x38, *(int *)(lVar15 + 0x24) == 5)
            ) && (*(int *)(lVar15 + 0x28) == 3)) {
          uVar49 = 0;
          uVar20 = 0;
          puVar30 = (undefined4 *)(*(long *)(lVar8 + 0x10) + (ulong)*(uint *)(lVar15 + 0x30));
          uVar14 = *(uint *)(lVar8 + 0xf0);
          do {
            *puVar30 = 0xbf800000;
            puVar30[1] = (float)uVar49;
            puVar30[2] = 0;
            puVar38 = (undefined4 *)((long)puVar30 + (ulong)uVar14);
            *puVar38 = 0x3f800000;
            puVar38[1] = (float)uVar49;
            puVar38[2] = 0;
            uVar20 = uVar20 + 2;
            uVar49 = uVar49 + 1;
            puVar30 = (undefined4 *)((long)puVar30 + (ulong)uVar14 * 2);
          } while (uVar20 < uVar41);
          (**(code **)(*(long *)*plVar9 + 0xa0))();
          plVar48 = *(long **)((long)register0x00000008 + -0x318);
          goto LAB_10a5f71ac;
        }
      }
      FUN_10a3ee510(&UNK_10f66859d);
      goto LAB_10a5f7a1c;
    }
  }
LAB_10a5f71ac:
  plVar10 = plVar48;
  FUN_10a5f9ad8(plVar48);
  plVar43 = (long *)plVar48[0xa2];
  for (plVar9 = (long *)plVar48[0xa1]; plVar9 != plVar43; plVar9 = plVar9 + 2) {
    plVar13 = (long *)plVar9[1];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x218) = plVar13;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar9;
        *(long *)((long)register0x00000008 + -0x220) = lVar8;
        if (lVar8 != 0) {
          FUN_10aa19b04();
        }
        plVar47 = plVar13 + 1;
        do {
          lVar8 = *plVar47;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar6) {
            *plVar47 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  plVar9 = (long *)plVar48[0xc6];
  if (plVar9 != (long *)0x0) {
    plVar43 = plVar48 + 0xba;
    plVar13 = plVar48 + 0xbc;
    do {
      plVar12 = (long *)0x2758;
      __Znwm();
      FUN_10a8f278c();
      uVar41 = *(uint *)(plVar9 + 2);
      plVar45 = (long *)(ulong)uVar41;
      plVar47 = (long *)plVar48[0xbb];
      if (plVar47 != (long *)0x0) {
        uVar20 = (long)plVar47 - 1;
        uVar49 = (uint)plVar47;
        if (((ulong)plVar47 & uVar20) == 0) {
          plVar48 = (long *)(ulong)(uVar49 - 1 & uVar41);
        }
        else {
          plVar48 = plVar45;
          if (plVar47 <= plVar45) {
            uVar14 = 0;
            if (uVar49 != 0) {
              uVar14 = uVar41 / uVar49;
            }
            plVar48 = (long *)(ulong)(uVar41 - uVar14 * uVar49);
          }
        }
        plVar24 = *(long **)(*plVar43 + (long)plVar48 * 8);
        if (plVar24 != (long *)0x0) {
          do {
            while( true ) {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_10a5f72e4;
              plVar26 = (long *)plVar24[1];
              if (plVar26 != plVar45) break;
              if (*(uint *)(plVar24 + 2) == uVar41) {
                (**(code **)(*plVar12 + 8))(plVar12);
                plVar48 = *(long **)((long)register0x00000008 + -0x318);
                goto LAB_10a5f7588;
              }
            }
            if (((ulong)plVar47 & uVar20) == 0) {
              plVar26 = (long *)((ulong)plVar26 & uVar20);
            }
            else if (plVar47 <= plVar26) {
              uVar27 = 0;
              if (plVar47 != (long *)0x0) {
                uVar27 = (ulong)plVar26 / (ulong)plVar47;
              }
              plVar26 = (long *)((long)plVar26 - uVar27 * (long)plVar47);
            }
          } while (plVar26 == plVar48);
        }
      }
LAB_10a5f72e4:
      plVar24 = (long *)0x20;
      __Znwm();
      *(long **)((long)register0x00000008 + -0x220) = plVar24;
      *(long **)((long)register0x00000008 + -0x218) = plVar43;
      *(undefined8 *)((long)register0x00000008 + -0x210) = 1;
      *plVar24 = 0;
      plVar24[1] = (long)plVar45;
      *(uint *)(plVar24 + 2) = uVar41;
      plVar24[3] = (long)plVar12;
      fVar59 = (float)(*(long *)(*(long *)((long)register0x00000008 + -0x318) + 0x5e8) + 1);
      fVar61 = *(float *)(*(long *)((long)register0x00000008 + -0x318) + 0x5f0);
      if ((plVar47 == (long *)0x0) || (fVar61 * (float)plVar47 < fVar59)) {
        uVar20 = 1;
        if ((long *)0x2 < plVar47) {
          uVar20 = (ulong)(((ulong)plVar47 & (long)plVar47 - 1U) != 0);
        }
        plVar48 = (long *)(uVar20 | (long)plVar47 << 1);
        plVar12 = (long *)(long)(fVar59 / fVar61);
        if (plVar48 <= plVar12) {
          plVar48 = plVar12;
        }
        if ((long)plVar48 - 1U == 0) {
          plVar48 = (long *)0x2;
          lVar8 = *(long *)((long)register0x00000008 + -0x318);
        }
        else {
          lVar8 = *(long *)((long)register0x00000008 + -0x318);
          if (((ulong)plVar48 & (long)plVar48 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar47 = *(long **)(lVar8 + 0x5d8);
          }
        }
        if (plVar47 < plVar48) {
LAB_10a5f7390:
          if ((ulong)plVar48 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a5f7a1c;
          }
          lVar15 = (long)plVar48 << 3;
          __Znwm();
          lVar16 = *plVar43;
          *plVar43 = lVar15;
          if (lVar16 != 0) {
            __ZdlPv();
          }
          plVar47 = (long *)0x0;
          *(long **)(lVar8 + 0x5d8) = plVar48;
          do {
            *(undefined8 *)(*plVar43 + (long)plVar47 * 8) = 0;
            plVar47 = (long *)((long)plVar47 + 1);
          } while (plVar48 != plVar47);
          plVar12 = (long *)*plVar13;
          plVar47 = plVar48;
          if (plVar12 != (long *)0x0) {
            plVar26 = (long *)plVar12[1];
            uVar20 = (long)plVar48 - 1;
            if (((ulong)plVar48 & uVar20) == 0) {
              plVar26 = (long *)((ulong)plVar26 & uVar20);
            }
            else if (plVar48 <= plVar26) {
              uVar27 = 0;
              if (plVar48 != (long *)0x0) {
                uVar27 = (ulong)plVar26 / (ulong)plVar48;
              }
              plVar26 = (long *)((long)plVar26 - uVar27 * (long)plVar48);
            }
            *(long **)(*plVar43 + (long)plVar26 * 8) = plVar13;
            plVar31 = (long *)*plVar12;
            while (plVar31 != (long *)0x0) {
              plVar34 = (long *)plVar31[1];
              if (((ulong)plVar48 & uVar20) == 0) {
                plVar34 = (long *)((ulong)plVar34 & uVar20);
              }
              else if (plVar48 <= plVar34) {
                uVar27 = 0;
                if (plVar48 != (long *)0x0) {
                  uVar27 = (ulong)plVar34 / (ulong)plVar48;
                }
                plVar34 = (long *)((long)plVar34 - uVar27 * (long)plVar48);
              }
              plVar32 = plVar31;
              if (plVar34 != plVar26) {
                lVar8 = *plVar43;
                if (*(long *)(lVar8 + (long)plVar34 * 8) == 0) {
                  *(long **)(lVar8 + (long)plVar34 * 8) = plVar12;
                  plVar26 = plVar34;
                }
                else {
                  *plVar12 = *plVar31;
                  *plVar31 = **(undefined8 **)(lVar8 + (long)plVar34 * 8);
                  **(long **)(lVar8 + (long)plVar34 * 8) = (long)plVar31;
                  plVar32 = plVar12;
                }
              }
              plVar12 = plVar32;
              plVar31 = (long *)*plVar32;
            }
          }
        }
        else if (plVar48 < plVar47) {
          plVar12 = (long *)(long)((float)*(ulong *)(lVar8 + 0x5e8) / *(float *)(lVar8 + 0x5f0));
          if ((plVar47 < (long *)0x3) || (((ulong)plVar47 & (long)plVar47 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar12) {
            plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
          }
          if (plVar48 <= plVar12) {
            plVar48 = plVar12;
          }
          if (plVar48 < plVar47) {
            if (plVar48 != (long *)0x0) goto LAB_10a5f7390;
            lVar15 = *plVar43;
            *plVar43 = 0;
            if (lVar15 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(lVar8 + 0x5d8) = 0;
            plVar47 = (long *)0x0;
          }
          else {
            plVar47 = *(long **)(lVar8 + 0x5d8);
          }
        }
        if (((ulong)plVar47 & (long)plVar47 - 1U) == 0) {
          plVar48 = (long *)(ulong)((int)plVar47 - 1U & uVar41);
        }
        else {
          plVar48 = plVar45;
          if (plVar47 <= plVar45) {
            uVar20 = 0;
            if (plVar47 != (long *)0x0) {
              uVar20 = (ulong)plVar45 / (ulong)plVar47;
            }
            plVar48 = (long *)((long)plVar45 - uVar20 * (long)plVar47);
          }
        }
      }
      lVar8 = *plVar43;
      plVar12 = *(long **)(lVar8 + (long)plVar48 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar24 = *plVar13;
        *plVar13 = (long)plVar24;
        *(long **)(lVar8 + (long)plVar48 * 8) = plVar13;
        plVar48 = *(long **)((long)register0x00000008 + -0x318);
        if (*plVar24 != 0) {
          plVar12 = *(long **)(*plVar24 + 8);
          if (((ulong)plVar47 & (long)plVar47 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar47 - 1U);
          }
          else if (plVar47 <= plVar12) {
            uVar20 = 0;
            if (plVar47 != (long *)0x0) {
              uVar20 = (ulong)plVar12 / (ulong)plVar47;
            }
            plVar12 = (long *)((long)plVar12 - uVar20 * (long)plVar47);
          }
          *(long **)(*plVar43 + (long)plVar12 * 8) = plVar24;
        }
      }
      else {
        *plVar24 = *plVar12;
        *plVar12 = (long)plVar24;
        plVar48 = *(long **)((long)register0x00000008 + -0x318);
      }
      *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
      plVar48[0xbd] = plVar48[0xbd] + 1;
      FUN_10a61d1d4((undefined1 *)((long)register0x00000008 + -0x220));
LAB_10a5f7588:
      plVar47 = plVar43;
      FUN_10a61d22c(plVar43,(int)plVar9[2]);
      if (plVar47 == (long *)0x0) {
LAB_10a5f7898:
        FUN_109ffdddc(&UNK_10f66a46f);
        goto LAB_10a5f78a4;
      }
      func_0x00010a8f2b5c(plVar47[3],plVar9 + 3);
      plVar47 = plVar43;
      FUN_10a61d22c(plVar43,(int)plVar9[2]);
      if (plVar47 == (long *)0x0) goto LAB_10a5f7898;
      FUN_10a8f2de0(plVar47[3],plVar10);
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) break;
    } while( true );
  }
  if (plVar48[0xc2] != 0) {
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x532,&UNK_10f66863f);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        *(long *)((long)register0x00000008 + -0x3c0) = plVar48[0xc2];
        func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x533,&UNK_10f668651);
      }
    }
    uVar41 = uRam000000011330a9e8;
    for (plVar9 = (long *)plVar48[0xc1]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if ((uVar41 >> 2 & 1) != 0) {
        uVar41 = *(uint *)(plVar9 + 2);
        *(long *)((long)register0x00000008 + -0x3c0) =
             (plVar9[4] - plVar9[3] >> 3) * -0x5555555555555555;
        *(ulong *)((long)register0x00000008 + -0x3b8) = (ulong)uVar41;
        func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x537,&UNK_10f668669);
        uVar41 = uRam000000011330a9e8;
      }
    }
  }
  FUN_10a5f9290(plVar48);
LAB_10a5f770c:
  *(undefined4 *)(plVar48 + 0xb5) = *(undefined4 *)(*(long *)(plVar48[0x2e] + 0x850) + 0x2c);
  plVar10 = plVar48;
  FUN_10a5f9ad8();
  plVar43 = (long *)plVar48[0xa2];
  for (plVar9 = (long *)plVar48[0xa1]; plVar9 != plVar43; plVar9 = plVar9 + 2) {
    plVar13 = (long *)plVar9[1];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x218) = plVar13;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar9;
        *(long *)((long)register0x00000008 + -0x220) = lVar8;
        if (lVar8 != 0) {
          FUN_10aa19c3c(lVar8);
          lVar8 = *(long *)(lVar8 + 0x2b0);
          *(long *)((long)register0x00000008 + -0x100) = lVar8;
          if (lVar8 != 0) {
            func_0x00010a49db98(plVar48 + 0xcf,(undefined1 *)((long)register0x00000008 + -0x100));
          }
        }
        plVar47 = plVar13 + 1;
        do {
          lVar8 = *plVar47;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar6) {
            *plVar47 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  plVar9 = plVar48 + 0xbc;
  while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
    lVar8 = plVar9[3];
    *(undefined8 *)(lVar8 + 0x2d8) = *(undefined8 *)(lVar8 + 0x2d0);
    puVar29 = (undefined8 *)plVar48[0xd0];
    puVar25 = (undefined8 *)plVar48[0xcf];
    if ((undefined8 *)plVar48[0xcf] != puVar29) {
      do {
        lVar8 = plVar9[3];
        puVar37 = puVar25 + 1;
        *(undefined8 *)((long)register0x00000008 + -0x220) = *puVar25;
        func_0x00010a8f2d1c(lVar8 + 0x2d0,(undefined1 *)((long)register0x00000008 + -0x220));
        puVar25 = puVar37;
      } while (puVar37 != puVar29);
      lVar8 = plVar9[3];
    }
    lVar15 = plVar10[1];
    lVar21 = plVar10[4];
    lVar16 = plVar10[3];
    *(long *)(lVar8 + 0x278) = plVar10[2];
    *(long *)(lVar8 + 0x270) = lVar15;
    *(long *)(lVar8 + 0x288) = lVar21;
    *(long *)(lVar8 + 0x280) = lVar16;
    lVar16 = plVar10[6];
    lVar15 = plVar10[5];
    lVar28 = plVar10[8];
    lVar21 = plVar10[7];
    lVar57 = plVar10[10];
    lVar56 = plVar10[9];
    uVar17 = *(undefined8 *)((long)plVar10 + 0x54);
    *(undefined8 *)(lVar8 + 0x2c4) = *(undefined8 *)((long)plVar10 + 0x5c);
    *(undefined8 *)(lVar8 + 700) = uVar17;
    *(long *)(lVar8 + 0x2a8) = lVar28;
    *(long *)(lVar8 + 0x2a0) = lVar21;
    *(long *)(lVar8 + 0x2b8) = lVar57;
    *(long *)(lVar8 + 0x2b0) = lVar56;
    *(long *)(lVar8 + 0x298) = lVar16;
    *(long *)(lVar8 + 0x290) = lVar15;
    FUN_10a8f47d8((float)*(double *)(*(long *)(plVar48[0x2e] + 0x850) + 0x10),plVar9[3]);
  }
  plVar48[0xd0] = plVar48[0xcf];
LAB_10a5f7850:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb8)) {
    return;
  }
LAB_10a5f78a4:
  ___stack_chk_fail();
LAB_10a5f78a8:
  FUN_10a3ee510(&UNK_10f66a567);
LAB_10a5f7a1c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a5f7a20);
  (*pcVar19)();
}



/* Entry: 10a5f95d0; end: 10a5f960f;  */

undefined8 * FUN_10a5f95d0(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_74;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined4 uStack_14;
  
  param_1 = param_1 + 0x5d0;
  uStack_44 = SUB84(&uStack_14,0);
  uStack_14 = param_2;
  FUN_10a61be68();
  if (param_1 != 0) {
    return (undefined8 *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 8);
  }
  puVar5 = &UNK_10f66a46f;
  FUN_109ffdddc();
  pcStack_28 = FUN_10a5f9610;
  puVar5 = puVar5 + 0x5d0;
  uStack_74 = SUB84(&uStack_44,0);
  uVar8 = param_3;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a61be68();
  if (puVar5 != (undefined *)0x0) {
    lVar9 = *(long *)(puVar5 + 0x18);
    uVar8 = (ulong)(uint)(*(int *)(lVar9 + 0xc) * (int)param_3 + (int)param_4 * 2);
    uVar10 = (*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 2) * -0x5555555555555555;
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      return (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 0xc);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f9688);
    (*pcVar4)();
  }
  puVar5 = &UNK_10f66a46f;
  FUN_109ffdddc();
  uStack_58 = 0x10a5f9694;
  puVar5 = puVar5 + 0x648;
  puVar7 = (undefined8 *)&uStack_74;
  uStack_70 = param_3;
  uStack_68 = param_4;
  ppuStack_60 = &puStack_30;
  func_0x00010a61bf0c();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = (undefined8 *)&UNK_10f66a46f;
    FUN_109ffdddc();
    uVar13 = puVar7[1];
    uVar12 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    plVar11 = (long *)puVar6[1];
    puVar6[1] = uVar13;
    *puVar6 = uVar12;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return puVar6;
  }
  if ((uVar8 & 0xffffffff) < (ulong)(*(long *)(puVar5 + 0x20) - *(long *)(puVar5 + 0x18) >> 3)) {
    return (undefined8 *)(*(long *)(puVar5 + 0x18) + (uVar8 & 0xffffffff) * 8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f96e8);
  (*pcVar4)();
}



/* Entry: 10a5f9610; end: 10a5f9757;  */

undefined8 * FUN_10a5f9610(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_54;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  param_1 = param_1 + 0x5d0;
  uStack_54 = SUB84(&uStack_24,0);
  uVar8 = param_3;
  uStack_24 = param_2;
  FUN_10a61be68();
  if (param_1 != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    uVar8 = (ulong)(uint)(*(int *)(lVar9 + 0xc) * (int)param_3 + (int)param_4 * 2);
    uVar10 = (*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 2) * -0x5555555555555555;
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      return (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 0xc);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f9688);
    (*pcVar4)();
  }
  puVar5 = &UNK_10f66a46f;
  FUN_109ffdddc();
  uStack_38 = 0x10a5f9694;
  puVar5 = puVar5 + 0x648;
  puVar7 = (undefined8 *)&uStack_54;
  uStack_50 = param_3;
  uStack_48 = param_4;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010a61bf0c();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = (undefined8 *)&UNK_10f66a46f;
    FUN_109ffdddc();
    uVar13 = puVar7[1];
    uVar12 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    plVar11 = (long *)puVar6[1];
    puVar6[1] = uVar13;
    *puVar6 = uVar12;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return puVar6;
  }
  if ((uVar8 & 0xffffffff) < (ulong)(*(long *)(puVar5 + 0x20) - *(long *)(puVar5 + 0x18) >> 3)) {
    return (undefined8 *)(*(long *)(puVar5 + 0x18) + (uVar8 & 0xffffffff) * 8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f96e8);
  (*pcVar4)();
}



/* Entry: 10a5f9758; end: 10a5f97cb;  */

void FUN_10a5f9758(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a49d234(param_1 + 0x508,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a5f97cc; end: 10a5f98a3;  */

void FUN_10a5f97cc(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 uStack_41;
  
  lVar7 = *(long *)(param_2 + 0x508);
  if (param_3 < (ulong)((long)*(undefined8 **)(param_2 + 0x510) - lVar7 >> 4)) {
    puVar5 = (undefined8 *)(lVar7 + param_3 * 0x10);
    if (*(undefined8 **)(param_2 + 0x510) == puVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f9898);
      (*pcVar4)();
    }
    puVar6 = (undefined8 *)(lVar7 + param_3 * 0x10 + 0x10);
    FUN_10a4aed98(&uStack_41);
    for (puVar9 = *(undefined8 **)(param_2 + 0x510); puVar9 != puVar6; puVar9 = puVar9 + -2) {
      if (puVar9[-1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(undefined8 **)(param_2 + 0x510) = puVar6;
    if (puVar5 == puVar6) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      lVar7 = puVar5[1];
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        param_1[1] = lVar7;
        if (lVar7 != 0) {
          *param_1 = *puVar5;
        }
      }
    }
    return;
  }
  puVar5 = (undefined8 *)&UNK_10f66838c;
  FUN_10a00946c();
  plVar8 = (long *)puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10a5f98a4; end: 10a5f98ff;  */

void FUN_10a5f98a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a5f9900; end: 10a5f9a9b;  */

void FUN_10a5f9900(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  lVar7 = *(long *)(param_1 + 0x158);
  do {
    if (lVar7 == param_1 + 0x150) {
LAB_10a5f9980:
      for (lVar7 = *(long *)(param_1 + 0x198); lVar7 != param_1 + 400; lVar7 = *(long *)(lVar7 + 8))
      {
        FUN_10a5f9900(*(undefined8 *)(lVar7 + 0x10),param_2);
      }
      return;
    }
    if (*(long *)(lVar7 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
      (**(code **)(*plVar1 + 0x18))(plVar1,0x4173d64b71fe0ae5);
      if (plVar1 != (long *)0x0) {
        if ((((*(ushort *)(plVar1 + 0x30) & 0x17) == 0) && (plVar1[0x3f] - plVar1[0x3e] != 0)) &&
           (uVar5 = (plVar1[0x3f] - plVar1[0x3e] >> 2) * -0x5555555555555555, 2 < uVar5)) {
          puVar6 = (undefined8 *)*param_2;
          lVar7 = param_2[1];
          puVar2 = puVar6;
          func_0x00010a61bfb0(puVar6,lVar7,uVar5);
          if (puVar2 == (undefined8 *)0x0) {
            auStack_68[0] = (undefined4)uVar5;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            FUN_10a61c04c(param_2,uVar5,auStack_68);
            puStack_48 = &uStack_60;
            func_0x00010a60f324(&puStack_48);
            puStack_48 = &uStack_80;
            func_0x00010a60f324(&puStack_48);
            puVar6 = (undefined8 *)*param_2;
            lVar7 = param_2[1];
          }
          puVar2 = puVar6;
          func_0x00010a61bfb0(puVar6,lVar7,uVar5);
          if (puVar2 == (undefined8 *)0x0) {
            puVar3 = &UNK_10f66a46f;
            FUN_109ffdddc();
            puStack_48 = puVar6;
            func_0x00010a60f324(&puStack_48);
            puStack_48 = &uStack_80;
            func_0x00010a60f324(&puStack_48);
            __Unwind_Resume();
            uVar5 = *(ulong *)(puVar3 + 8);
            if (uVar5 < *(ulong *)(puVar3 + 0x10)) {
              FUN_10a60f3b8();
              puVar4 = (undefined *)(uVar5 + 0x18);
            }
            else {
              puVar4 = puVar3;
              FUN_10a60f414();
            }
            *(undefined **)(puVar3 + 8) = puVar4;
            return;
          }
          FUN_10a5f9a9c(puVar2 + 3,plVar1 + 0x3e);
        }
        goto LAB_10a5f9980;
      }
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}



/* Entry: 10a5f9a9c; end: 10a5f9ad7;  */

void FUN_10a5f9a9c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a60f3b8();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10a60f414();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a5f9ad8; end: 10a5fa05b;  */

undefined8 FUN_10a5f9ad8(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  float *pfVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  
  pfVar7 = *(float **)(param_5 + 0x178);
  pfVar5 = pfVar7;
  FUN_10a2f095c();
  if (0x2f < *(uint *)(param_5 + 0x4f0)) {
    FUN_10a2cd058(pfVar7);
    fVar18 = *pfVar5 * 0.0;
    lVar8 = *(long *)(param_5 + 0x5c0);
    fVar9 = (float)*(undefined8 *)(pfVar5 + 1);
    fVar19 = fVar9 * 0.0;
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
    fVar20 = fVar11 * 0.0;
    *(float *)(lVar8 + 8) = *pfVar5;
    *(float *)(lVar8 + 0xc) = fVar18;
    *(float *)(lVar8 + 0x10) = fVar18;
    *(float *)(lVar8 + 0x14) = fVar18;
    *(ulong *)(lVar8 + 0x18) = CONCAT44(fVar9,fVar19);
    *(ulong *)(lVar8 + 0x28) = CONCAT44(fVar20,fVar20);
    *(ulong *)(lVar8 + 0x20) = CONCAT44(fVar19,fVar19);
    *(ulong *)(lVar8 + 0x30) = CONCAT44(fVar20,fVar11);
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0x3f80000000000000;
    *(float *)(lVar8 + 0x48) = param_1;
    *(float *)(lVar8 + 0x4c) = param_2;
    *(float *)(lVar8 + 0x50) = param_3;
    uVar16 = *(undefined8 *)(pfVar5 + 3);
    *(undefined8 *)(lVar8 + 0x5c) = *(undefined8 *)(pfVar5 + 5);
    *(undefined8 *)(lVar8 + 0x54) = uVar16;
LAB_10a5f9fe4:
    return *(undefined8 *)(param_5 + 0x5c0);
  }
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  plVar6 = *(long **)(param_5 + 0x500);
  if ((plVar6 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_88 = plVar6, plVar6 != (long *)0x0)) {
    lVar8 = *(long *)(param_5 + 0x4f8);
    puStack_e0 = &UNK_10f6685c7;
    uStack_d8 = 0x3a;
    lStack_90 = lVar8;
    if (lVar8 != 0) {
      FUN_10a2cd058(*(undefined8 *)(lVar8 + 0x140));
      fVar18 = param_1;
      fVar11 = param_2;
      fVar20 = param_3;
      func_0x00010a2cd08c(*(undefined8 *)(lVar8 + 0x140));
      fVar9 = fVar18;
      fVar19 = fVar11;
      fVar13 = fVar20;
      FUN_10a2cd058(pfVar7);
      uStack_98 = 0;
      uStack_a0 = 0;
      if (*(int *)(*(long *)(*(long *)(param_5 + 0x170) + 0xa20) + 0x18) < 99) {
        uStack_b8 = 0x3f800000;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0x3f80000000000000;
        uVar16 = 0;
        puVar15 = (undefined *)0x3f800000;
        uStack_a4 = 0x3f800000;
        fVar26 = 1.0;
        fVar12 = 1.0;
        fVar10 = 1.0;
      }
      else {
        fVar23 = fVar9;
        fVar24 = fVar19;
        fVar25 = fVar13;
        FUN_10a2f1bb8(*(undefined8 *)(lVar8 + 0x140));
        fVar26 = *pfVar5;
        fVar21 = fVar18 * fVar18;
        fVar22 = fVar11 * fVar11 + fVar20 * fVar20;
        fVar14 = param_4 * param_4 + fVar21 + fVar22;
        fVar17 = param_4 / fVar14;
        fVar10 = -fVar18 / fVar14;
        fVar12 = -fVar11 / fVar14;
        fVar14 = -fVar20 / fVar14;
        fStack_1a0 = (fVar12 * fVar12 + fVar14 * fVar14) * -2.0 + 1.0;
        fStack_19c = fVar10 * fVar12 + fVar14 * fVar17;
        fStack_19c = fStack_19c + fStack_19c;
        fStack_198 = fVar10 * fVar14 - fVar12 * fVar17;
        fStack_198 = fStack_198 + fStack_198;
        fStack_190 = fVar10 * fVar12 - fVar14 * fVar17;
        fStack_190 = fStack_190 + fStack_190;
        fStack_18c = (fVar10 * fVar10 + fVar14 * fVar14) * -2.0 + 1.0;
        fStack_188 = fVar12 * fVar14 + fVar10 * fVar17;
        fStack_188 = fStack_188 + fStack_188;
        fStack_180 = fVar10 * fVar14 + fVar12 * fVar17;
        fStack_180 = fStack_180 + fStack_180;
        fStack_17c = fVar12 * fVar14 - fVar10 * fVar17;
        fStack_17c = fStack_17c + fStack_17c;
        uStack_194 = 0;
        uStack_184 = 0;
        fStack_178 = (fVar10 * fVar10 + fVar12 * fVar12) * -2.0 + 1.0;
        fStack_1dc = fVar26 * 0.0;
        uStack_16c = 0;
        uStack_174 = 0;
        uStack_164 = 0x3f800000;
        fVar12 = (float)*(undefined8 *)(pfVar5 + 1);
        fStack_1d0 = fVar12 * 0.0;
        fVar10 = (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        fStack_1b4 = fVar10 * 0.0;
        uStack_1c0 = CONCAT44(fStack_1b4,fStack_1b4);
        uStack_1c8 = CONCAT44(fStack_1d0,fStack_1d0);
        uStack_1b0 = 0;
        uStack_1a8 = 0x3f80000000000000;
        fStack_1e0 = fVar26;
        fStack_1d8 = fStack_1dc;
        fStack_1d4 = fStack_1dc;
        fStack_1cc = fVar12;
        fStack_1b8 = fVar10;
        func_0x000109519fd0(auStack_160,&fStack_1a0,&fStack_1e0);
        fStack_220 = fVar22 * -2.0 + 1.0;
        fStack_21c = fVar18 * fVar11 + fVar20 * param_4;
        fStack_21c = fStack_21c + fStack_21c;
        fStack_218 = fVar18 * fVar20 - fVar11 * param_4;
        fStack_218 = fStack_218 + fStack_218;
        fStack_210 = fVar18 * fVar11 - fVar20 * param_4;
        fStack_210 = fStack_210 + fStack_210;
        fStack_20c = (fVar21 + fVar20 * fVar20) * -2.0 + 1.0;
        fStack_208 = fVar11 * fVar20 + fVar18 * param_4;
        fStack_208 = fStack_208 + fStack_208;
        fStack_200 = fVar18 * fVar20 + fVar11 * param_4;
        fStack_200 = fStack_200 + fStack_200;
        fStack_1fc = fVar11 * fVar20 - fVar18 * param_4;
        fStack_1fc = fStack_1fc + fStack_1fc;
        uStack_214 = 0;
        uStack_204 = 0;
        fStack_1f8 = (fVar21 + fVar11 * fVar11) * -2.0 + 1.0;
        uStack_1ec = 0;
        uStack_1f4 = 0;
        uStack_1e4 = 0x3f800000;
        func_0x000109519fd0(auStack_120,auStack_160,&fStack_220);
        fStack_25c = fVar23 * 0.0;
        fStack_250 = fVar24 * 0.0;
        fStack_240 = fVar25 * 0.0;
        uStack_230 = 0;
        uStack_228 = 0x3f80000000000000;
        fStack_260 = fVar23;
        fStack_258 = fStack_25c;
        fStack_254 = fStack_25c;
        fStack_24c = fVar24;
        fStack_248 = fStack_250;
        fStack_244 = fStack_250;
        fStack_23c = fStack_240;
        fStack_238 = fVar25;
        fStack_234 = fStack_240;
        func_0x000109519fd0(&puStack_e0,auStack_120,&fStack_260);
        uStack_a0 = uStack_b0;
        uStack_98 = uStack_a8;
        puVar15 = puStack_e0;
        uVar16 = uStack_d8;
      }
      plVar6 = plStack_88;
      param_1 = param_1 * fVar26;
      param_2 = param_2 * fVar12;
      param_3 = param_3 * fVar10;
      fVar26 = pfVar5[3];
      fVar10 = pfVar5[4];
      fVar12 = pfVar5[5];
      fVar23 = pfVar5[6];
      fVar24 = -(param_2 * fVar12) + param_3 * fVar10;
      fVar14 = -(param_3 * fVar26) + param_1 * fVar12;
      fVar21 = -(param_1 * fVar10) + param_2 * fVar26;
      fVar25 = fVar23 * fVar24 + -(fVar14 * fVar12) + fVar21 * fVar10;
      fVar17 = fVar14 * fVar23 + -(fVar21 * fVar26) + fVar24 * fVar12;
      fVar24 = fVar23 * fVar21 + -(fVar24 * fVar10) + fVar14 * fVar26;
      lVar8 = *(long *)(param_5 + 0x5c0);
      *(undefined8 *)(lVar8 + 0x10) = uVar16;
      *(undefined **)(lVar8 + 8) = puVar15;
      *(undefined8 *)(lVar8 + 0x20) = uStack_c8;
      *(undefined8 *)(lVar8 + 0x18) = uStack_d0;
      *(undefined8 *)(lVar8 + 0x30) = uStack_b8;
      *(undefined8 *)(lVar8 + 0x28) = uStack_c0;
      *(undefined8 *)(lVar8 + 0x38) = uStack_a0;
      *(undefined4 *)(lVar8 + 0x40) = uStack_98;
      *(undefined4 *)(lVar8 + 0x44) = uStack_a4;
      *(float *)(lVar8 + 0x48) = fVar9 + param_1 + fVar25 + fVar25;
      *(float *)(lVar8 + 0x4c) = fVar19 + param_2 + fVar17 + fVar17;
      *(float *)(lVar8 + 0x50) = fVar13 + param_3 + fVar24 + fVar24;
      *(float *)(lVar8 + 0x54) =
           (param_4 * fVar26 + fVar18 * fVar23 + fVar20 * fVar10) - fVar11 * fVar12;
      *(float *)(lVar8 + 0x58) =
           (param_4 * fVar10 + fVar11 * fVar23 + fVar18 * fVar12) - fVar20 * fVar26;
      *(float *)(lVar8 + 0x5c) =
           (param_4 * fVar12 + fVar20 * fVar23 + fVar11 * fVar26) - fVar18 * fVar10;
      *(float *)(lVar8 + 0x60) =
           ((-(fVar26 * fVar18) + param_4 * fVar23) - fVar11 * fVar10) - fVar20 * fVar12;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      goto LAB_10a5f9fe4;
    }
  }
  uStack_d8 = 0x3a;
  puStack_e0 = &UNK_10f6685c7;
  FUN_10a0edfc4(&puStack_e0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5fa02c);
  (*pcVar4)();
}



/* Entry: 10a5fa05c; end: 10a5fa2b3;  */

float FUN_10a5fa05c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = *param_2;
  fVar3 = param_1[2];
  fVar1 = (-(param_2[1] * fVar3) + param_2[2] * fVar1) * param_1[3] +
          -((-(param_2[2] * *param_1) + fVar2 * fVar3) * fVar3) +
          (-(fVar2 * fVar1) + param_2[1] * *param_1) * fVar1;
  return fVar2 + fVar1 + fVar1;
}



/* Entry: 10a5fa2b4; end: 10a5fa39f;  */

void FUN_10a5fa2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,undefined8 param_6,undefined8 *param_7,long *param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iStack_64;
  
  iStack_64 = param_5;
  func_0x000109febdc8(param_7,&iStack_64);
  lVar2 = *param_8;
  lVar3 = param_8[1];
  uVar6 = lVar3 - lVar2 >> 3;
  if ((ulong)(long)iStack_64 < uVar6) {
    *(int *)(lVar2 + (long)iStack_64 * 8) = (int)param_6;
    uVar7 = (ulong)iStack_64;
    iVar1 = (int)param_6;
    if ((int)param_3 != 1) {
      iVar1 = iStack_64;
    }
    uVar5 = *param_4;
    func_0x00010a5fa0d0(param_1,param_2,uVar5,param_4[1],lVar2,lVar3,*param_7,param_7[1],iVar1);
    if (-1 < (int)uVar5) {
      if (uVar6 <= uVar7) goto LAB_10a5fa39c;
      *(int *)(lVar2 + uVar7 * 8 + 4) = (int)uVar5;
      FUN_10a5fa2b4(param_1,param_2,param_3,param_4,param_6,uVar5,param_7,param_8);
    }
    return;
  }
LAB_10a5fa39c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5fa3a0);
  (*pcVar4)();
}



/* Entry: 10a5fa3a0; end: 10a5fa457;  */

undefined1  [16] FUN_10a5fa3a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f662581;
  return auVar1;
}



/* Entry: 10a5fa458; end: 10a5fadfb;  */

void FUN_10a5fa458(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662581,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bfe378;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bfe378;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f6686e7,FUN_10a61de0c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f6686fd,FUN_10a61df80,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f668728,FUN_10a61e0fc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f66874c,FUN_10a61e210,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x132,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f668770,FUN_10a61e350,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f653597,FUN_10a61e410,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f66877e,FUN_10a61e4f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x131,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f668790,FUN_10a61e644,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f66879c,FUN_10a61e728,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f6687aa,FUN_10a61e80c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f6535ac,FUN_10a61e928,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f65822b,FUN_10a61ea08,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x131,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f6687be,FUN_10a61eb4c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x131,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f6687cf,FUN_10a61ec28,1,*(undefined8 *)(param_1 + 0x40));
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f6687dc;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a61ed24(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f6687f6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a61ed24();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f668817,FUN_10a61ee9c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f66882b,FUN_10a61ef70,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f66883d,FUN_10a61f078,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5faddc;
    FUN_10a054dac(param_1,&UNK_10f668853,FUN_10a61f198,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ec4,FUN_10a61f2c4,FUN_10a61f384);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66886d,FUN_10a61f460,FUN_10a61f570);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f668881,FUN_10a61f68c,FUN_10a61f7b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66888e,FUN_10a61f91c,FUN_10a61f9d8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66889c,FUN_10a61fb34,FUN_10a61fc3c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65237d,FUN_10a61fcf4,FUN_10a61fe04);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a61febc,FUN_10a61ff78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a62007c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c00fa8,FUN_10a620134);
    FUN_10a0605c4(param_1,&UNK_10f6688b0,FUN_10a620f3c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662581,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5faddc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5fade0);
  (*pcVar6)();
}



/* Entry: 10a5fadfc; end: 10a5faefb;  */

void FUN_10a5fadfc(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6688c2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5faefc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6688d1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10a5faf54(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6688db;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10a5faf54(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5faefc; end: 10a5faf53;  */

ulong FUN_10a5faefc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a5faf54; end: 10a5fafab;  */

ulong FUN_10a5faf54(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a621070(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a5fafac; end: 10a5fb163;  */

undefined8 * FUN_10a5fafac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x46] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x49) = 0x100;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bfa788,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110bfa7a0);
  *param_1 = &PTR_FUN_110bfa440;
  param_1[2] = &PTR_DAT_110bfa578;
  param_1[7] = &PTR_DAT_110bfa5d0;
  param_1[0xd] = &PTR_DAT_110bfa5f0;
  param_1[0x46] = &PTR_DAT_110bfa748;
  param_1[0x16] = &PTR_DAT_110bfa660;
  param_1[0x17] = &PTR_DAT_110bfa690;
  param_1[0x3e] = &PTR_DAT_110bfa6c8;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c00fd0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c01020;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a621410;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x43] = puVar1 + 3;
  param_1[0x44] = puVar1;
  param_1[0x45] = 0;
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((long)puVar1 + 0xc) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 5) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = &PTR_FUN_110bc3560;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)((long)puVar1 + 0xa4) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((long)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  param_1[0x45] = puVar1;
  return param_1;
}



/* Entry: 10a5fb164; end: 10a5fb1c7;  */

undefined8 * FUN_10a5fb164(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5fb1c8; end: 10a5fb2f7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10a5fb1c8(float param_1,ulong param_2,float param_3,float param_4,long *param_5,
                    long *param_6,long *param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  undefined8 *******pppppppuVar21;
  code *pcVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  
  plVar10 = (long *)param_5[6];
  iVar19 = (int)param_6;
  plVar12 = param_6;
  if (plVar10 == (long *)0x0) {
    lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*param_5 + 0x168) + 0x120) + 0x8c0) + 0x18);
    if (lVar14 == 0) {
      if (iVar19 == 0) {
        if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
          return (long *)0x0;
        }
        func_0x00010ae06f08(1,2,&UNK_10f66893b,&UNK_10f66896b,0x9b,&UNK_10f6689ce);
        return (long *)0x0;
      }
      goto LAB_10a5fb2e0;
    }
    lVar14 = *(long *)(lVar14 + 0x68);
    plVar12 = (long *)(ulong)*(uint *)(param_5 + 0xb);
    plVar10 = param_5 + 0x17;
    func_0x00010ab17e00();
    if (lVar14 != 0) {
      piVar13 = *(int **)(lVar14 + 0x28);
      piVar16 = *(int **)(lVar14 + 0x30);
      if (piVar13 == piVar16) {
LAB_10a5fb2b4:
        if ((piVar13 != piVar16) && (piVar13 != (int *)0x0)) {
          return (long *)(piVar13 + 2);
        }
      }
      else {
        do {
          if ((*piVar13 == (int)plVar10) && (piVar13[1] == (int)((ulong)plVar10 >> 0x20)))
          goto LAB_10a5fb2b4;
          piVar13 = piVar13 + 0x88;
        } while (piVar13 != piVar16);
      }
    }
    if (iVar19 == 0) {
      return (long *)0x0;
    }
  }
  else {
    (**(code **)(*plVar10 + 0x10))();
    if (*plVar10 != plVar10[1]) {
      return (long *)(param_5[6] + 0x10);
    }
    if (iVar19 == 0) {
      return (long *)0x0;
    }
LAB_10a5fb2e0:
    FUN_10a00946c(&UNK_10f668919);
  }
  plVar10 = (long *)&UNK_10f668a10;
  FUN_10a00946c();
  fVar30 = (float)param_2;
  pplVar9 = &plStack_100;
  pcStack_38 = FUN_10a5fb2f8;
  pppppppuVar21 = &pppppppuStack_40;
  if (plVar12 == (long *)0x0) {
    return plVar10;
  }
  lVar14 = *plVar10;
  plVar18 = *(long **)(*(long *)(lVar14 + 0x168) + 0x140);
  uVar31 = *(uint *)(plVar10 + 1);
  plVar11 = (long *)(ulong)uVar31;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (uVar31 == 3) goto LAB_10a5fb39c;
  if (uVar31 == 5) {
    if (param_7 == (long *)0x0) {
      return (long *)5;
    }
    lVar15 = param_7[0x3f];
  }
  else if (uVar31 == 4) {
    if (param_7 == (long *)0x0) {
      return (long *)4;
    }
    lVar15 = param_7[0x3d];
  }
  else {
    if ((param_8 & 1) == 0) {
      if ((uVar31 != 0) || (*(int *)(*(long *)(*(long *)(lVar14 + 0x170) + 0xa20) + 0x18) < 0x121))
      goto LAB_10a5fb3e8;
    }
    else if (uVar31 != 0) {
LAB_10a5fb3e8:
      if (6 < uVar31 - 6) {
        if ((char)plVar12[5] != '\x01') {
          return plVar11;
        }
        func_0x00010a14cc28();
        func_0x0001096bb814((undefined *)((long)plVar12 + 0xc));
        fVar27 = param_4 * param_4 + param_1 * param_1 + fVar30 * fVar30 + param_3 * param_3;
        if (fVar27 == 0.0) {
          fStack_c4 = 1.0;
          param_1 = 0.0;
          fVar30 = 0.0;
          param_3 = 0.0;
        }
        else {
          fVar27 = 1.0 / SQRT(fVar27);
          fStack_c4 = param_4 * fVar27;
          param_1 = param_1 * fVar27;
          fVar30 = fVar30 * fVar27;
          param_3 = param_3 * fVar27;
        }
        uStack_d0 = CONCAT44(fVar30,param_1);
        fStack_c8 = param_3;
        if (*(uint *)(plVar10 + 1) < 2) {
          fVar30 = *(float *)(plVar12 + 3);
          fVar27 = *(float *)(plVar12 + 5);
          fVar24 = *(float *)(plVar12 + 7);
          fVar29 = fVar27 * 10.4;
          fVar28 = fVar24 * 10.4;
          uStack_e0 = CONCAT44(fVar29,fVar30 * 10.4);
          fStack_d8 = fVar28;
          if (*(uint *)(plVar10 + 1) == 0) {
            fVar26 = 0.0;
            uStack_f0 = 0xc0f0000000000000;
            uStack_e8 = 0xc1100000;
            FUN_10a5fa05c(&uStack_d0,&uStack_f0);
            uStack_e0 = CONCAT44(fVar29 + fVar27,fVar30 * 10.4 + fVar26);
            fStack_d8 = fVar28 + fVar24;
          }
        }
        else {
          iVar19 = 0;
          fVar24 = 0.0;
          fVar28 = 0.0;
          fVar27 = 0.0;
          plStack_100 = plVar18;
          do {
            pfVar3 = (float *)((long)plVar10 + 0x1c);
            plVar18 = plVar10 + 2;
            if (iVar19 == 1) {
              pfVar3 = (float *)(plVar10 + 4);
              plVar18 = (long *)((long)plVar10 + 0x14);
            }
            pfVar4 = (float *)((long)plVar10 + 0x24);
            plVar11 = plVar10 + 3;
            if (iVar19 != 2) {
              pfVar4 = pfVar3;
              plVar11 = plVar18;
            }
            FUN_10a14abe0(plVar12,(int)*plVar11);
            fVar26 = *pfVar4;
            param_1 = param_1 * fVar26;
            fVar29 = fVar30 * fVar26;
            fVar30 = fVar26 * param_3;
            fVar24 = fVar24 + param_1;
            fVar28 = fVar28 + fVar29;
            fVar27 = fVar27 + fVar30;
            iVar19 = iVar19 + 1;
          } while (iVar19 != 3);
          uStack_e0 = CONCAT44(fVar28 * 10.4,fVar24 * 10.4);
          fStack_d8 = fVar27 * 10.4;
          plVar18 = plStack_100;
        }
        FUN_10a3e82bc(plVar18,&uStack_d0);
        FUN_10a3e3894(plVar18,&uStack_e0);
        if ((char)plVar10[5] == '\x01') {
          FUN_10a5fb8d4(plVar10);
          return plVar10;
        }
        return plVar18;
      }
      if (param_7 == (long *)0x0) {
        return plVar11;
      }
      if (param_7[0x39] == 0) {
        return plVar11;
      }
      plVar10 = param_7;
      if (*(int *)(*(long *)(*(long *)(lVar14 + 0x170) + 0xa20) + 0x18) < 0x14d) {
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar31);
        plVar12 = &uStack_d0;
        FUN_10a5fe890(plVar11,plVar12);
        uVar31 = (uint)plVar11;
      }
      fVar30 = (float)param_2;
      uVar17 = 0;
      piVar13 = (int *)&UNK_10e4cf720;
      while( true ) {
        for (; piVar16 = (int *)(&UNK_10e4cf6b0 + uVar17 * 0x10), *piVar16 < (int)uVar31;
            uVar17 = uVar17 * 2 + 2) {
          piVar16 = piVar13;
          if (2 < uVar17) goto LAB_10a5fb62c;
        }
        if (2 < uVar17) break;
        uVar17 = uVar17 << 1 | 1;
        piVar13 = piVar16;
      }
LAB_10a5fb62c:
      if ((piVar16 != (int *)&UNK_10e4cf720) &&
         (*piVar16 <= (int)uVar31 && piVar16 != (int *)&UNK_10e4cf720)) {
        uVar17 = 0;
        iVar19 = piVar16[1];
        iVar5 = piVar16[2];
        iVar6 = piVar16[3];
        piVar13 = (int *)&UNK_10e4cf794;
        while( true ) {
          for (; piVar16 = (int *)(&UNK_10e4cf724 + uVar17 * 0x10), *piVar16 < (int)uVar31;
              uVar17 = uVar17 * 2 + 2) {
            piVar16 = piVar13;
            if (2 < uVar17) goto LAB_10a5fb6a4;
          }
          if (2 < uVar17) break;
          uVar17 = uVar17 << 1 | 1;
          piVar13 = piVar16;
        }
LAB_10a5fb6a4:
        if ((piVar16 != (int *)&UNK_10e4cf794) &&
           (*piVar16 <= (int)uVar31 && piVar16 != (int *)&UNK_10e4cf794)) {
          iVar20 = 0;
          lVar14 = 0;
          fVar30 = 0.0;
          uVar31 = piVar16[3];
          do {
            fVar27 = (float)param_2;
            iVar1 = iVar19;
            if (iVar20 == 1) {
              iVar1 = iVar5;
            }
            iVar2 = iVar6;
            if (iVar20 != 2) {
              iVar2 = iVar1;
            }
            if (iVar2 != -1) {
              puVar8 = (uint *)(piVar16 + 1);
              iVar1 = iVar19;
              if (iVar20 == 1) {
                puVar8 = (uint *)(piVar16 + 2);
                iVar1 = iVar5;
              }
              uVar7 = uVar31;
              iVar2 = iVar6;
              if (iVar20 != 2) {
                uVar7 = *puVar8;
                iVar2 = iVar1;
              }
              plVar12 = (long *)(ulong)uVar7;
              uStack_f8 = 0;
              plStack_100 = plVar12;
              func_0x0001096b966c(param_7 + 0x38,iVar2);
              fVar24 = SUB84(plStack_100,0);
              param_2 = (ulong)(uint)(fVar24 * param_3);
              lVar14 = CONCAT44((float)((ulong)lVar14 >> 0x20) + fVar27 * fVar24,
                                (float)lVar14 + SUB84(plVar12,0) * fVar24);
              fVar30 = fVar30 + fVar24 * param_3;
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 != 3);
          uStack_d0 = lVar14;
          fStack_c8 = fVar30;
          FUN_10a5fb808(plVar18,param_7[0x39] + 0x30);
          FUN_10a3e3894(plVar18,&uStack_d0);
          return plVar18;
        }
      }
      iVar19 = 0xf61d92d;
      pcVar22 = FUN_10a5fb78c;
      func_0x0001093fd0ac();
      goto code_r0x00010a5fb78c;
    }
LAB_10a5fb39c:
    if (param_7 == (long *)0x0) {
      return plVar11;
    }
    lVar15 = param_7[0x39];
  }
  if (lVar15 == 0) {
    return plVar11;
  }
  iVar19 = *(int *)(*(long *)(*(long *)(lVar14 + 0x170) + 0xa20) + 0x18);
  plVar10 = (long *)(lVar15 + 0x30);
  pcVar22 = FUN_10a5fb2f8;
  pplVar9 = (long **)&stack0xffffffffffffffd0;
  plVar12 = plVar18;
  plVar18 = param_6;
  param_7 = param_5;
  pppppppuVar21 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x00010a5fb78c:
  *(long **)((long)pplVar9 + -0x20) = param_7;
  *(long **)((long)pplVar9 + -0x18) = plVar18;
  *(undefined8 ********)((long)pplVar9 + -0x10) = pppppppuVar21;
  *(code **)((long)pplVar9 + -8) = pcVar22;
  if (iVar19 < 0x92) {
    func_0x0001096bb814(plVar10);
    *(float *)((long)pplVar9 + -0x30) = param_1;
    *(float *)((long)pplVar9 + -0x2c) = fVar30;
    *(float *)((long)pplVar9 + -0x28) = param_3;
    *(float *)((long)pplVar9 + -0x24) = param_4;
    FUN_10a3e82bc(plVar12,(undefined1 *)((long)pplVar9 + -0x30));
  }
  else {
    FUN_10a5fb808(plVar12,plVar10);
  }
  uVar23 = *(undefined4 *)((long)plVar10 + 0x1c);
  uVar25 = *(undefined4 *)((long)plVar10 + 0x2c);
  *(undefined4 *)((long)pplVar9 + -0x30) = *(undefined4 *)((long)plVar10 + 0xc);
  *(undefined4 *)((long)pplVar9 + -0x2c) = uVar23;
  *(undefined4 *)((long)pplVar9 + -0x28) = uVar25;
  FUN_10a3e3894(plVar12,(undefined1 *)((long)pplVar9 + -0x30));
  return plVar12;
}



/* Entry: 10a5fb2f8; end: 10a5fb78b;  */

void FUN_10a5fb2f8(float param_1,ulong param_2,float param_3,float param_4,long *param_5,
                  undefined8 *param_6,long param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 *unaff_x19;
  undefined8 *puVar19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  code *unaff_x30;
  undefined8 *puVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  uint uVar31;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  
  fVar30 = (float)param_2;
  ppuVar12 = &puStack_d0;
  puVar20 = &stack0xfffffffffffffff0;
  if (param_6 == (undefined8 *)0x0) {
    return;
  }
  lVar14 = *param_5;
  puVar19 = *(undefined8 **)(*(long *)(lVar14 + 0x168) + 0x140);
  iVar13 = (int)param_5[1];
  if (iVar13 == 3) goto LAB_10a5fb39c;
  if (iVar13 == 5) {
    if (param_7 == 0) {
      return;
    }
    lVar15 = *(long *)(param_7 + 0x1f8);
  }
  else if (iVar13 == 4) {
    if (param_7 == 0) {
      return;
    }
    lVar15 = *(long *)(param_7 + 0x1e8);
  }
  else {
    if ((param_8 & 1) == 0) {
      if ((iVar13 != 0) || (*(int *)(*(long *)(*(long *)(lVar14 + 0x170) + 0xa20) + 0x18) < 0x121))
      goto LAB_10a5fb3e8;
    }
    else if (iVar13 != 0) {
LAB_10a5fb3e8:
      if (6 < iVar13 - 6U) {
        if (*(char *)(param_6 + 5) != '\x01') {
          return;
        }
        func_0x00010a14cc28();
        func_0x0001096bb814((long)param_6 + 0xc);
        fVar26 = param_4 * param_4 + param_1 * param_1 + fVar30 * fVar30 + param_3 * param_3;
        if (fVar26 == 0.0) {
          fStack_94 = 1.0;
          param_1 = 0.0;
          fVar30 = 0.0;
          param_3 = 0.0;
        }
        else {
          fVar26 = 1.0 / SQRT(fVar26);
          fStack_94 = param_4 * fVar26;
          param_1 = param_1 * fVar26;
          fVar30 = fVar30 * fVar26;
          param_3 = param_3 * fVar26;
        }
        uStack_a0 = CONCAT44(fVar30,param_1);
        fStack_98 = param_3;
        if (*(uint *)(param_5 + 1) < 2) {
          fVar30 = *(float *)(param_6 + 3);
          fVar26 = *(float *)(param_6 + 5);
          fVar23 = *(float *)(param_6 + 7);
          fVar28 = fVar26 * 10.4;
          fVar27 = fVar23 * 10.4;
          uStack_b0 = CONCAT44(fVar28,fVar30 * 10.4);
          fStack_a8 = fVar27;
          if (*(uint *)(param_5 + 1) == 0) {
            fVar25 = 0.0;
            uStack_c0 = 0xc0f0000000000000;
            uStack_b8 = 0xc1100000;
            FUN_10a5fa05c(&uStack_a0,&uStack_c0);
            uStack_b0 = CONCAT44(fVar28 + fVar26,fVar30 * 10.4 + fVar25);
            fStack_a8 = fVar27 + fVar23;
          }
        }
        else {
          iVar13 = 0;
          fVar23 = 0.0;
          fVar27 = 0.0;
          fVar26 = 0.0;
          puStack_d0 = puVar19;
          do {
            pfVar3 = (float *)((long)param_5 + 0x1c);
            plVar10 = param_5 + 2;
            if (iVar13 == 1) {
              pfVar3 = (float *)(param_5 + 4);
              plVar10 = (long *)((long)param_5 + 0x14);
            }
            pfVar4 = (float *)((long)param_5 + 0x24);
            plVar11 = param_5 + 3;
            if (iVar13 != 2) {
              pfVar4 = pfVar3;
              plVar11 = plVar10;
            }
            FUN_10a14abe0(param_6,(int)*plVar11);
            fVar25 = *pfVar4;
            param_1 = param_1 * fVar25;
            fVar28 = fVar30 * fVar25;
            fVar30 = fVar25 * param_3;
            fVar23 = fVar23 + param_1;
            fVar27 = fVar27 + fVar28;
            fVar26 = fVar26 + fVar30;
            iVar13 = iVar13 + 1;
          } while (iVar13 != 3);
          uStack_b0 = CONCAT44(fVar27 * 10.4,fVar23 * 10.4);
          fStack_a8 = fVar26 * 10.4;
          puVar19 = puStack_d0;
        }
        FUN_10a3e82bc(puVar19,&uStack_a0);
        FUN_10a3e3894(puVar19,&uStack_b0);
        if ((char)param_5[5] != '\x01') {
          return;
        }
        FUN_10a5fb8d4(param_5);
        return;
      }
      if (param_7 == 0) {
        return;
      }
      if (*(long *)(param_7 + 0x1c8) == 0) {
        return;
      }
      lVar15 = param_7;
      if (*(int *)(*(long *)(*(long *)(lVar14 + 0x170) + 0xa20) + 0x18) < 0x14d) {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar13);
        param_6 = &uStack_a0;
        FUN_10a5fe890(iVar13,param_6);
      }
      fVar30 = (float)param_2;
      uVar18 = 0;
      piVar16 = (int *)&UNK_10e4cf720;
      while( true ) {
        for (; piVar17 = (int *)(&UNK_10e4cf6b0 + uVar18 * 0x10), *piVar17 < iVar13;
            uVar18 = uVar18 * 2 + 2) {
          piVar17 = piVar16;
          if (2 < uVar18) goto LAB_10a5fb62c;
        }
        if (2 < uVar18) break;
        uVar18 = uVar18 << 1 | 1;
        piVar16 = piVar17;
      }
LAB_10a5fb62c:
      if ((piVar17 != (int *)&UNK_10e4cf720) &&
         (*piVar17 <= iVar13 && piVar17 != (int *)&UNK_10e4cf720)) {
        uVar18 = 0;
        iVar5 = piVar17[1];
        iVar6 = piVar17[2];
        iVar7 = piVar17[3];
        piVar16 = (int *)&UNK_10e4cf794;
        while( true ) {
          for (; piVar17 = (int *)(&UNK_10e4cf724 + uVar18 * 0x10), *piVar17 < iVar13;
              uVar18 = uVar18 * 2 + 2) {
            piVar17 = piVar16;
            if (2 < uVar18) goto LAB_10a5fb6a4;
          }
          if (2 < uVar18) break;
          uVar18 = uVar18 << 1 | 1;
          piVar16 = piVar17;
        }
LAB_10a5fb6a4:
        if ((piVar17 != (int *)&UNK_10e4cf794) &&
           (*piVar17 <= iVar13 && piVar17 != (int *)&UNK_10e4cf794)) {
          iVar13 = 0;
          uVar29 = 0;
          fVar30 = 0.0;
          uVar31 = piVar17[3];
          do {
            fVar26 = (float)param_2;
            iVar1 = iVar5;
            if (iVar13 == 1) {
              iVar1 = iVar6;
            }
            iVar2 = iVar7;
            if (iVar13 != 2) {
              iVar2 = iVar1;
            }
            if (iVar2 != -1) {
              puVar9 = (uint *)(piVar17 + 1);
              iVar1 = iVar5;
              if (iVar13 == 1) {
                puVar9 = (uint *)(piVar17 + 2);
                iVar1 = iVar6;
              }
              uVar8 = uVar31;
              iVar2 = iVar7;
              if (iVar13 != 2) {
                uVar8 = *puVar9;
                iVar2 = iVar1;
              }
              puVar21 = (undefined8 *)(ulong)uVar8;
              uStack_c8 = 0;
              puStack_d0 = puVar21;
              func_0x0001096b966c(param_7 + 0x1c0,iVar2);
              fVar23 = SUB84(puStack_d0,0);
              param_2 = (ulong)(uint)(fVar23 * param_3);
              uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar26 * fVar23,
                                (float)uVar29 + SUB84(puVar21,0) * fVar23);
              fVar30 = fVar30 + fVar23 * param_3;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 != 3);
          uStack_a0 = uVar29;
          fStack_98 = fVar30;
          FUN_10a5fb808(puVar19,*(long *)(param_7 + 0x1c8) + 0x30);
          FUN_10a3e3894(puVar19,&uStack_a0);
          return;
        }
      }
      iVar13 = 0xf61d92d;
      unaff_x30 = FUN_10a5fb78c;
      func_0x0001093fd0ac();
      goto code_r0x00010a5fb78c;
    }
LAB_10a5fb39c:
    if (param_7 == 0) {
      return;
    }
    lVar15 = *(long *)(param_7 + 0x1c8);
  }
  if (lVar15 == 0) {
    return;
  }
  iVar13 = *(int *)(*(long *)(*(long *)(lVar14 + 0x170) + 0xa20) + 0x18);
  lVar15 = lVar15 + 0x30;
  ppuVar12 = (undefined8 **)register0x00000008;
  param_6 = puVar19;
  puVar19 = unaff_x19;
  param_7 = unaff_x20;
  puVar20 = unaff_x29;
code_r0x00010a5fb78c:
  *(long *)((long)ppuVar12 + -0x20) = param_7;
  *(undefined8 **)((long)ppuVar12 + -0x18) = puVar19;
  *(undefined1 **)((long)ppuVar12 + -0x10) = puVar20;
  *(code **)((long)ppuVar12 + -8) = unaff_x30;
  if (iVar13 < 0x92) {
    func_0x0001096bb814(lVar15);
    *(float *)((long)ppuVar12 + -0x30) = param_1;
    *(float *)((long)ppuVar12 + -0x2c) = fVar30;
    *(float *)((long)ppuVar12 + -0x28) = param_3;
    *(float *)((long)ppuVar12 + -0x24) = param_4;
    FUN_10a3e82bc(param_6,(undefined1 *)((long)ppuVar12 + -0x30));
  }
  else {
    FUN_10a5fb808(param_6,lVar15);
  }
  uVar22 = *(undefined4 *)(lVar15 + 0x1c);
  uVar24 = *(undefined4 *)(lVar15 + 0x2c);
  *(undefined4 *)((long)ppuVar12 + -0x30) = *(undefined4 *)(lVar15 + 0xc);
  *(undefined4 *)((long)ppuVar12 + -0x2c) = uVar22;
  *(undefined4 *)((long)ppuVar12 + -0x28) = uVar24;
  FUN_10a3e3894(param_6,(undefined1 *)((long)ppuVar12 + -0x30));
  return;
}



/* Entry: 10a5fb78c; end: 10a5fb807;  */

void FUN_10a5fb78c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined8 param_6,long param_7)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_5 < 0x92) {
    func_0x0001096bb814(param_7);
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
    FUN_10a3e82bc(param_6,&uStack_30);
  }
  else {
    FUN_10a5fb808(param_6,param_7);
  }
  uStack_30 = *(undefined4 *)(param_7 + 0xc);
  uStack_2c = *(undefined4 *)(param_7 + 0x1c);
  uStack_28 = *(undefined4 *)(param_7 + 0x2c);
  FUN_10a3e3894(param_6,&uStack_30);
  return;
}



/* Entry: 10a5fb808; end: 10a5fb8d3;  */

void FUN_10a5fb808(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  fVar3 = *param_6;
  fVar4 = param_6[1];
  fVar2 = param_6[2];
  func_0x0001096bb814(param_6);
  fVar1 = param_4 * param_4 + param_1 * param_1 + param_2 * param_2 + param_3 * param_3;
  if (fVar1 == 0.0) {
    fStack_44 = 1.0;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fStack_48 = 1.0 / SQRT(fVar1);
    fStack_44 = param_4 * fStack_48;
    fStack_50 = param_1 * fStack_48;
    fStack_4c = param_2 * fStack_48;
    fStack_48 = param_3 * fStack_48;
  }
  fStack_5c = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  fStack_58 = fStack_5c;
  fStack_54 = fStack_5c;
  FUN_10a3e38dc(param_5,&fStack_5c);
  return;
}



/* Entry: 10a5fb8d4; end: 10a5fbb87;  */

void FUN_10a5fb8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar7 = param_4;
  FUN_10a5fb1c8(param_4,0);
  lVar13 = *(long *)(*(long *)(*param_4 + 0x168) + 0x188);
  do {
    if (lVar13 == 0) {
      lStack_88 = 0;
      plStack_80 = (long *)0x0;
      goto LAB_10a5fbadc;
    }
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_10a45360c(lVar13,&plStack_78,1);
    plVar5 = plStack_78;
    do {
      if (plVar5 == plStack_70) {
        lVar13 = *(long *)(lVar13 + 0x188);
        bVar15 = true;
        if (plStack_78 == (long *)0x0) goto LAB_10a5fb964;
        goto LAB_10a5fb95c;
      }
      lVar9 = *plVar5;
      plVar5 = plVar5 + 1;
    } while (*(char *)(lVar9 + 0x288) != '\0');
    FUN_10a38cc90(&lStack_88,lVar9);
    bVar15 = false;
    if (plStack_78 != (long *)0x0) {
LAB_10a5fb95c:
      plStack_70 = plStack_78;
      __ZdlPv();
    }
LAB_10a5fb964:
    fVar17 = (float)param_2;
    fVar16 = (float)param_1;
    fVar18 = (float)param_3;
  } while (bVar15);
  if ((lStack_88 != 0) && (plVar7 != (long *)0x0)) {
    uVar12 = *(undefined8 *)(*(long *)(*param_4 + 0x170) + 0xa80);
    FUN_10a2cd058(*(undefined8 *)(*(long *)(lStack_88 + 0x168) + 0x140));
    func_0x00010a14cc28();
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_10a14ac34();
    if (plVar7[0x1d] != 0) {
      piVar14 = (int *)plVar7[0x1c];
      piVar1 = piVar14 + plVar7[0x1d] * 2;
      do {
        iVar2 = *piVar14;
        uVar11 = ((long)plStack_70 - (long)plStack_78 >> 2) * -0x5555555555555555;
        if ((uVar11 < (ulong)(long)iVar2 || uVar11 - (long)iVar2 == 0) ||
           (iVar3 = piVar14[1], uVar11 < (ulong)(long)iVar3 || uVar11 - (long)iVar3 == 0)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5fbb38);
          (*pcVar6)();
        }
        puVar10 = (undefined8 *)((long)plStack_78 + (long)iVar2 * 0xc);
        puVar8 = (undefined8 *)((long)plStack_78 + (long)iVar3 * 0xc);
        fStack_90 = fVar18 + *(float *)(puVar10 + 1) * 10.4;
        uVar19 = *puVar10;
        uStack_98 = CONCAT44(fVar17 + (float)((ulong)uVar19 >> 0x20) * 10.4,
                             fVar16 + (float)uVar19 * 10.4);
        fStack_a0 = fVar18 + *(float *)(puVar8 + 1) * 10.4;
        uVar19 = *puVar8;
        uStack_a8 = CONCAT44(fVar17 + (float)((ulong)uVar19 >> 0x20) * 10.4,
                             fVar16 + (float)uVar19 * 10.4);
        uStack_b8 = 0x3f80000000000000;
        uStack_c0 = 0x3f800000;
        FUN_10aaf962c(uVar12,&UNK_10e482b48,&uStack_98,&uStack_a8,&uStack_c0,0);
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar1);
    }
    if (plStack_78 != (long *)0x0) {
      plStack_70 = plStack_78;
      __ZdlPv();
    }
  }
LAB_10a5fbadc:
  plVar7 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
    do {
      lVar13 = *plVar5;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *plVar5 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a5fbb88; end: 10a5fbcc3;  */

void FUN_10a5fbb88(float param_1,ulong param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  ulong uVar20;
  long *unaff_x19;
  int *unaff_x20;
  undefined1 *puVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  
  lVar16 = *param_5 + 0x1f0;
  (**(code **)(*(long *)(*param_5 + 0x1f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar16 != 0) {
    return;
  }
  plVar11 = param_5;
  FUN_10a5fb1c8(param_5,0);
  plVar12 = (long *)param_5[6];
  if (plVar12 == (long *)0x0) {
    lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*param_5 + 0x168) + 0x120) + 0x8c0) + 0x18);
    if (lVar16 != 0) {
      lVar16 = *(long *)(lVar16 + 0x68);
      plVar12 = param_5 + 0x17;
      func_0x00010ab17e00(plVar12,(int)param_5[0xb]);
      if (lVar16 != 0) {
        piVar13 = *(int **)(lVar16 + 0x28);
        piVar18 = *(int **)(lVar16 + 0x30);
        if (piVar13 == piVar18) {
LAB_10a5fbcb8:
          piVar14 = (int *)0x0;
          if (piVar13 != piVar18) {
            piVar14 = piVar13;
          }
          goto LAB_10a5fbc68;
        }
        do {
          if ((*piVar13 == (int)plVar12) && (piVar13[1] == (int)((ulong)plVar12 >> 0x20)))
          goto LAB_10a5fbcb8;
          piVar13 = piVar13 + 0x88;
        } while (piVar13 != piVar18);
      }
    }
LAB_10a5fbc64:
    piVar14 = (int *)0x0;
  }
  else {
    (**(code **)(*plVar12 + 0x10))();
    if (*plVar12 == plVar12[1]) goto LAB_10a5fbc64;
    piVar14 = (int *)(param_5[6] + 8);
  }
LAB_10a5fbc68:
  fVar29 = (float)param_2;
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*param_5 + 0x168) + 0x120) + 0x8c0) +
                              0x18) + 0x68);
  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x40), lVar16 == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = 2 < *(int *)(lVar16 + 0x30);
  }
  pplVar10 = &plStack_d0;
  puVar21 = &stack0xfffffffffffffff0;
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar16 = *param_5;
  plVar12 = *(long **)(*(long *)(lVar16 + 0x168) + 0x140);
  iVar22 = (int)param_5[1];
  if (iVar22 == 3) goto LAB_10a5fb39c;
  if (iVar22 == 5) {
    if (piVar14 == (int *)0x0) {
      return;
    }
    lVar17 = *(long *)(piVar14 + 0x7e);
  }
  else if (iVar22 == 4) {
    if (piVar14 == (int *)0x0) {
      return;
    }
    lVar17 = *(long *)(piVar14 + 0x7a);
  }
  else {
    if (bVar15) {
      if (iVar22 != 0) {
LAB_10a5fb3e8:
        if (6 < iVar22 - 6U) {
          if ((char)plVar11[5] != '\x01') {
            return;
          }
          func_0x00010a14cc28();
          func_0x0001096bb814((long)plVar11 + 0xc);
          fVar26 = param_4 * param_4 + param_1 * param_1 + fVar29 * fVar29 + param_3 * param_3;
          if (fVar26 == 0.0) {
            fStack_94 = 1.0;
            param_1 = 0.0;
            fVar29 = 0.0;
            param_3 = 0.0;
          }
          else {
            fVar26 = 1.0 / SQRT(fVar26);
            fStack_94 = param_4 * fVar26;
            param_1 = param_1 * fVar26;
            fVar29 = fVar29 * fVar26;
            param_3 = param_3 * fVar26;
          }
          uStack_a0 = CONCAT44(fVar29,param_1);
          fStack_98 = param_3;
          if (*(uint *)(param_5 + 1) < 2) {
            fVar29 = *(float *)(plVar11 + 3);
            fVar26 = *(float *)(plVar11 + 5);
            fVar23 = *(float *)(plVar11 + 7);
            fVar28 = fVar26 * 10.4;
            fVar27 = fVar23 * 10.4;
            uStack_b0 = CONCAT44(fVar28,fVar29 * 10.4);
            fStack_a8 = fVar27;
            if (*(uint *)(param_5 + 1) == 0) {
              fVar25 = 0.0;
              uStack_c0 = 0xc0f0000000000000;
              uStack_b8 = 0xc1100000;
              FUN_10a5fa05c(&uStack_a0,&uStack_c0);
              uStack_b0 = CONCAT44(fVar28 + fVar26,fVar29 * 10.4 + fVar25);
              fStack_a8 = fVar27 + fVar23;
            }
          }
          else {
            iVar22 = 0;
            fVar23 = 0.0;
            fVar27 = 0.0;
            fVar26 = 0.0;
            plStack_d0 = plVar12;
            do {
              pfVar3 = (float *)((long)param_5 + 0x1c);
              plVar12 = param_5 + 2;
              if (iVar22 == 1) {
                pfVar3 = (float *)(param_5 + 4);
                plVar12 = (long *)((long)param_5 + 0x14);
              }
              pfVar4 = (float *)((long)param_5 + 0x24);
              plVar9 = param_5 + 3;
              if (iVar22 != 2) {
                pfVar4 = pfVar3;
                plVar9 = plVar12;
              }
              FUN_10a14abe0(plVar11,(int)*plVar9);
              fVar25 = *pfVar4;
              param_1 = param_1 * fVar25;
              fVar28 = fVar29 * fVar25;
              fVar29 = fVar25 * param_3;
              fVar23 = fVar23 + param_1;
              fVar27 = fVar27 + fVar28;
              fVar26 = fVar26 + fVar29;
              iVar22 = iVar22 + 1;
            } while (iVar22 != 3);
            uStack_b0 = CONCAT44(fVar27 * 10.4,fVar23 * 10.4);
            fStack_a8 = fVar26 * 10.4;
            plVar12 = plStack_d0;
          }
          FUN_10a3e82bc(plVar12,&uStack_a0);
          FUN_10a3e3894(plVar12,&uStack_b0);
          if ((char)param_5[5] != '\x01') {
            return;
          }
          FUN_10a5fb8d4(param_5);
          return;
        }
        if (piVar14 == (int *)0x0) {
          return;
        }
        if (*(long *)(piVar14 + 0x72) == 0) {
          return;
        }
        piVar13 = piVar14;
        if (*(int *)(*(long *)(*(long *)(lVar16 + 0x170) + 0xa20) + 0x18) < 0x14d) {
          uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar22);
          plVar11 = &uStack_a0;
          FUN_10a5fe890(iVar22,plVar11);
        }
        fVar29 = (float)param_2;
        uVar20 = 0;
        piVar18 = (int *)&UNK_10e4cf720;
        while( true ) {
          for (; piVar19 = (int *)(&UNK_10e4cf6b0 + uVar20 * 0x10), *piVar19 < iVar22;
              uVar20 = uVar20 * 2 + 2) {
            piVar19 = piVar18;
            if (2 < uVar20) goto LAB_10a5fb62c;
          }
          if (2 < uVar20) break;
          uVar20 = uVar20 << 1 | 1;
          piVar18 = piVar19;
        }
LAB_10a5fb62c:
        if ((piVar19 != (int *)&UNK_10e4cf720) &&
           (*piVar19 <= iVar22 && piVar19 != (int *)&UNK_10e4cf720)) {
          uVar20 = 0;
          iVar24 = piVar19[1];
          iVar5 = piVar19[2];
          iVar6 = piVar19[3];
          piVar18 = (int *)&UNK_10e4cf794;
          while( true ) {
            for (; piVar19 = (int *)(&UNK_10e4cf724 + uVar20 * 0x10), *piVar19 < iVar22;
                uVar20 = uVar20 * 2 + 2) {
              piVar19 = piVar18;
              if (2 < uVar20) goto LAB_10a5fb6a4;
            }
            if (2 < uVar20) break;
            uVar20 = uVar20 << 1 | 1;
            piVar18 = piVar19;
          }
LAB_10a5fb6a4:
          if ((piVar19 != (int *)&UNK_10e4cf794) &&
             (*piVar19 <= iVar22 && piVar19 != (int *)&UNK_10e4cf794)) {
            iVar22 = 0;
            lVar16 = 0;
            fVar29 = 0.0;
            uVar30 = piVar19[3];
            do {
              fVar26 = (float)param_2;
              iVar1 = iVar24;
              if (iVar22 == 1) {
                iVar1 = iVar5;
              }
              iVar2 = iVar6;
              if (iVar22 != 2) {
                iVar2 = iVar1;
              }
              if (iVar2 != -1) {
                puVar8 = (uint *)(piVar19 + 1);
                iVar1 = iVar24;
                if (iVar22 == 1) {
                  puVar8 = (uint *)(piVar19 + 2);
                  iVar1 = iVar5;
                }
                uVar7 = uVar30;
                iVar2 = iVar6;
                if (iVar22 != 2) {
                  uVar7 = *puVar8;
                  iVar2 = iVar1;
                }
                plVar11 = (long *)(ulong)uVar7;
                uStack_c8 = 0;
                plStack_d0 = plVar11;
                func_0x0001096b966c(piVar14 + 0x70,iVar2);
                fVar23 = SUB84(plStack_d0,0);
                param_2 = (ulong)(uint)(fVar23 * param_3);
                lVar16 = CONCAT44((float)((ulong)lVar16 >> 0x20) + fVar26 * fVar23,
                                  (float)lVar16 + SUB84(plVar11,0) * fVar23);
                fVar29 = fVar29 + fVar23 * param_3;
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 != 3);
            uStack_a0 = lVar16;
            fStack_98 = fVar29;
            FUN_10a5fb808(plVar12,*(long *)(piVar14 + 0x72) + 0x30);
            FUN_10a3e3894(plVar12,&uStack_a0);
            return;
          }
        }
        iVar22 = 0xf61d92d;
        unaff_x30 = FUN_10a5fb78c;
        func_0x0001093fd0ac();
        goto code_r0x00010a5fb78c;
      }
    }
    else if ((iVar22 != 0) ||
            (*(int *)(*(long *)(*(long *)(lVar16 + 0x170) + 0xa20) + 0x18) < 0x121))
    goto LAB_10a5fb3e8;
LAB_10a5fb39c:
    if (piVar14 == (int *)0x0) {
      return;
    }
    lVar17 = *(long *)(piVar14 + 0x72);
  }
  if (lVar17 == 0) {
    return;
  }
  iVar22 = *(int *)(*(long *)(*(long *)(lVar16 + 0x170) + 0xa20) + 0x18);
  piVar13 = (int *)(lVar17 + 0x30);
  pplVar10 = (long **)register0x00000008;
  plVar11 = plVar12;
  plVar12 = unaff_x19;
  piVar14 = unaff_x20;
  puVar21 = unaff_x29;
code_r0x00010a5fb78c:
  *(int **)((long)pplVar10 + -0x20) = piVar14;
  *(long **)((long)pplVar10 + -0x18) = plVar12;
  *(undefined1 **)((long)pplVar10 + -0x10) = puVar21;
  *(code **)((long)pplVar10 + -8) = unaff_x30;
  if (iVar22 < 0x92) {
    func_0x0001096bb814(piVar13);
    *(float *)((long)pplVar10 + -0x30) = param_1;
    *(float *)((long)pplVar10 + -0x2c) = fVar29;
    *(float *)((long)pplVar10 + -0x28) = param_3;
    *(float *)((long)pplVar10 + -0x24) = param_4;
    FUN_10a3e82bc(plVar11,(undefined1 *)((long)pplVar10 + -0x30));
  }
  else {
    FUN_10a5fb808(plVar11,piVar13);
  }
  iVar22 = piVar13[7];
  iVar24 = piVar13[0xb];
  *(int *)((long)pplVar10 + -0x30) = piVar13[3];
  *(int *)((long)pplVar10 + -0x2c) = iVar22;
  *(int *)((long)pplVar10 + -0x28) = iVar24;
  FUN_10a3e3894(plVar11,(undefined1 *)((long)pplVar10 + -0x30));
  return;
}



/* Entry: 10a5fbcc4; end: 10a5fbd7b;  */

float FUN_10a5fbcc4(long param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_10a5fb1c8(param_1,1);
  if (param_1 == 0) {
    FUN_10a00946c(&UNK_10f668ad5);
  }
  else if ((-1 < param_2) &&
          ((ulong)(long)param_2 <
           (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3))) {
    return *(float *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8) /
           (float)*(int *)(param_1 + 0x180);
  }
  FUN_10a0ee900(auStack_38,&UNK_10f668a69,0x20);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5fbd60);
  (*pcVar1)();
}



/* Entry: 10a5fbd7c; end: 10a5fbe27;  */

long FUN_10a5fbd7c(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(*param_1 + 0x168) + 0x120) + 0x8c0) + 0x18);
  if (lVar4 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66893b,&UNK_10f668c20,0x1bd,&UNK_10f668c5e);
    }
  }
  else {
    plVar1 = param_1 + 0x17;
    func_0x00010ab17e00(plVar1,(int)param_1[0xb]);
    lVar4 = *(long *)(lVar4 + 0x68);
    if (lVar4 != 0) {
      piVar2 = *(int **)(lVar4 + 0x28);
      if (piVar2 != *(int **)(lVar4 + 0x30)) {
        iVar3 = 0;
        do {
          if (*piVar2 == (int)plVar1) {
            iVar3 = iVar3 + 1;
          }
          piVar2 = piVar2 + 0x88;
        } while (piVar2 != *(int **)(lVar4 + 0x30));
        return (long)iVar3;
      }
    }
  }
  return 0;
}



/* Entry: 10a5fbe28; end: 10a5fbe37;  */

void FUN_10a5fbe28(float param_1,ulong param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  long *unaff_x19;
  int *unaff_x20;
  undefined1 *puVar22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  int iVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  
  plVar13 = *(long **)(param_5 + 0x228);
  lVar17 = *plVar13 + 0x1f0;
  (**(code **)(*(long *)(*plVar13 + 0x1f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar17 != 0) {
    return;
  }
  plVar11 = plVar13;
  FUN_10a5fb1c8(plVar13,0);
  plVar12 = (long *)plVar13[6];
  if (plVar12 == (long *)0x0) {
    lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(*plVar13 + 0x168) + 0x120) + 0x8c0) + 0x18);
    if (lVar17 != 0) {
      lVar17 = *(long *)(lVar17 + 0x68);
      plVar12 = plVar13 + 0x17;
      func_0x00010ab17e00(plVar12,(int)plVar13[0xb]);
      if (lVar17 != 0) {
        piVar14 = *(int **)(lVar17 + 0x28);
        piVar19 = *(int **)(lVar17 + 0x30);
        if (piVar14 == piVar19) {
LAB_10a5fbcb8:
          piVar15 = (int *)0x0;
          if (piVar14 != piVar19) {
            piVar15 = piVar14;
          }
          goto LAB_10a5fbc68;
        }
        do {
          if ((*piVar14 == (int)plVar12) && (piVar14[1] == (int)((ulong)plVar12 >> 0x20)))
          goto LAB_10a5fbcb8;
          piVar14 = piVar14 + 0x88;
        } while (piVar14 != piVar19);
      }
    }
LAB_10a5fbc64:
    piVar15 = (int *)0x0;
  }
  else {
    (**(code **)(*plVar12 + 0x10))();
    if (*plVar12 == plVar12[1]) goto LAB_10a5fbc64;
    piVar15 = (int *)(plVar13[6] + 8);
  }
LAB_10a5fbc68:
  fVar30 = (float)param_2;
  lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*plVar13 + 0x168) + 0x120) + 0x8c0) +
                              0x18) + 0x68);
  if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x40), lVar17 == 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = 2 < *(int *)(lVar17 + 0x30);
  }
  pplVar10 = &plStack_d0;
  puVar22 = &stack0xfffffffffffffff0;
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar17 = *plVar13;
  plVar12 = *(long **)(*(long *)(lVar17 + 0x168) + 0x140);
  iVar23 = (int)plVar13[1];
  if (iVar23 == 3) goto LAB_10a5fb39c;
  if (iVar23 == 5) {
    if (piVar15 == (int *)0x0) {
      return;
    }
    lVar18 = *(long *)(piVar15 + 0x7e);
  }
  else if (iVar23 == 4) {
    if (piVar15 == (int *)0x0) {
      return;
    }
    lVar18 = *(long *)(piVar15 + 0x7a);
  }
  else {
    if (bVar16) {
      if (iVar23 != 0) {
LAB_10a5fb3e8:
        if (6 < iVar23 - 6U) {
          if ((char)plVar11[5] != '\x01') {
            return;
          }
          func_0x00010a14cc28();
          func_0x0001096bb814((long)plVar11 + 0xc);
          fVar27 = param_4 * param_4 + param_1 * param_1 + fVar30 * fVar30 + param_3 * param_3;
          if (fVar27 == 0.0) {
            fStack_94 = 1.0;
            param_1 = 0.0;
            fVar30 = 0.0;
            param_3 = 0.0;
          }
          else {
            fVar27 = 1.0 / SQRT(fVar27);
            fStack_94 = param_4 * fVar27;
            param_1 = param_1 * fVar27;
            fVar30 = fVar30 * fVar27;
            param_3 = param_3 * fVar27;
          }
          uStack_a0 = CONCAT44(fVar30,param_1);
          fStack_98 = param_3;
          if (*(uint *)(plVar13 + 1) < 2) {
            fVar30 = *(float *)(plVar11 + 3);
            fVar27 = *(float *)(plVar11 + 5);
            fVar24 = *(float *)(plVar11 + 7);
            fVar29 = fVar27 * 10.4;
            fVar28 = fVar24 * 10.4;
            uStack_b0 = CONCAT44(fVar29,fVar30 * 10.4);
            fStack_a8 = fVar28;
            if (*(uint *)(plVar13 + 1) == 0) {
              fVar26 = 0.0;
              uStack_c0 = 0xc0f0000000000000;
              uStack_b8 = 0xc1100000;
              FUN_10a5fa05c(&uStack_a0,&uStack_c0);
              uStack_b0 = CONCAT44(fVar29 + fVar27,fVar30 * 10.4 + fVar26);
              fStack_a8 = fVar28 + fVar24;
            }
          }
          else {
            iVar23 = 0;
            fVar24 = 0.0;
            fVar28 = 0.0;
            fVar27 = 0.0;
            plStack_d0 = plVar12;
            do {
              pfVar3 = (float *)((long)plVar13 + 0x1c);
              plVar12 = plVar13 + 2;
              if (iVar23 == 1) {
                pfVar3 = (float *)(plVar13 + 4);
                plVar12 = (long *)((long)plVar13 + 0x14);
              }
              pfVar4 = (float *)((long)plVar13 + 0x24);
              plVar9 = plVar13 + 3;
              if (iVar23 != 2) {
                pfVar4 = pfVar3;
                plVar9 = plVar12;
              }
              FUN_10a14abe0(plVar11,(int)*plVar9);
              fVar26 = *pfVar4;
              param_1 = param_1 * fVar26;
              fVar29 = fVar30 * fVar26;
              fVar30 = fVar26 * param_3;
              fVar24 = fVar24 + param_1;
              fVar28 = fVar28 + fVar29;
              fVar27 = fVar27 + fVar30;
              iVar23 = iVar23 + 1;
            } while (iVar23 != 3);
            uStack_b0 = CONCAT44(fVar28 * 10.4,fVar24 * 10.4);
            fStack_a8 = fVar27 * 10.4;
            plVar12 = plStack_d0;
          }
          FUN_10a3e82bc(plVar12,&uStack_a0);
          FUN_10a3e3894(plVar12,&uStack_b0);
          if ((char)plVar13[5] != '\x01') {
            return;
          }
          FUN_10a5fb8d4(plVar13);
          return;
        }
        if (piVar15 == (int *)0x0) {
          return;
        }
        if (*(long *)(piVar15 + 0x72) == 0) {
          return;
        }
        piVar14 = piVar15;
        if (*(int *)(*(long *)(*(long *)(lVar17 + 0x170) + 0xa20) + 0x18) < 0x14d) {
          uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar23);
          plVar11 = &uStack_a0;
          FUN_10a5fe890(iVar23,plVar11);
        }
        fVar30 = (float)param_2;
        uVar21 = 0;
        piVar19 = (int *)&UNK_10e4cf720;
        while( true ) {
          for (; piVar20 = (int *)(&UNK_10e4cf6b0 + uVar21 * 0x10), *piVar20 < iVar23;
              uVar21 = uVar21 * 2 + 2) {
            piVar20 = piVar19;
            if (2 < uVar21) goto LAB_10a5fb62c;
          }
          if (2 < uVar21) break;
          uVar21 = uVar21 << 1 | 1;
          piVar19 = piVar20;
        }
LAB_10a5fb62c:
        if ((piVar20 != (int *)&UNK_10e4cf720) &&
           (*piVar20 <= iVar23 && piVar20 != (int *)&UNK_10e4cf720)) {
          uVar21 = 0;
          iVar25 = piVar20[1];
          iVar5 = piVar20[2];
          iVar6 = piVar20[3];
          piVar19 = (int *)&UNK_10e4cf794;
          while( true ) {
            for (; piVar20 = (int *)(&UNK_10e4cf724 + uVar21 * 0x10), *piVar20 < iVar23;
                uVar21 = uVar21 * 2 + 2) {
              piVar20 = piVar19;
              if (2 < uVar21) goto LAB_10a5fb6a4;
            }
            if (2 < uVar21) break;
            uVar21 = uVar21 << 1 | 1;
            piVar19 = piVar20;
          }
LAB_10a5fb6a4:
          if ((piVar20 != (int *)&UNK_10e4cf794) &&
             (*piVar20 <= iVar23 && piVar20 != (int *)&UNK_10e4cf794)) {
            iVar23 = 0;
            lVar17 = 0;
            fVar30 = 0.0;
            uVar31 = piVar20[3];
            do {
              fVar27 = (float)param_2;
              iVar1 = iVar25;
              if (iVar23 == 1) {
                iVar1 = iVar5;
              }
              iVar2 = iVar6;
              if (iVar23 != 2) {
                iVar2 = iVar1;
              }
              if (iVar2 != -1) {
                puVar8 = (uint *)(piVar20 + 1);
                iVar1 = iVar25;
                if (iVar23 == 1) {
                  puVar8 = (uint *)(piVar20 + 2);
                  iVar1 = iVar5;
                }
                uVar7 = uVar31;
                iVar2 = iVar6;
                if (iVar23 != 2) {
                  uVar7 = *puVar8;
                  iVar2 = iVar1;
                }
                plVar13 = (long *)(ulong)uVar7;
                uStack_c8 = 0;
                plStack_d0 = plVar13;
                func_0x0001096b966c(piVar15 + 0x70,iVar2);
                fVar24 = SUB84(plStack_d0,0);
                param_2 = (ulong)(uint)(fVar24 * param_3);
                lVar17 = CONCAT44((float)((ulong)lVar17 >> 0x20) + fVar27 * fVar24,
                                  (float)lVar17 + SUB84(plVar13,0) * fVar24);
                fVar30 = fVar30 + fVar24 * param_3;
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 != 3);
            uStack_a0 = lVar17;
            fStack_98 = fVar30;
            FUN_10a5fb808(plVar12,*(long *)(piVar15 + 0x72) + 0x30);
            FUN_10a3e3894(plVar12,&uStack_a0);
            return;
          }
        }
        iVar23 = 0xf61d92d;
        unaff_x30 = FUN_10a5fb78c;
        func_0x0001093fd0ac();
        goto code_r0x00010a5fb78c;
      }
    }
    else if ((iVar23 != 0) ||
            (*(int *)(*(long *)(*(long *)(lVar17 + 0x170) + 0xa20) + 0x18) < 0x121))
    goto LAB_10a5fb3e8;
LAB_10a5fb39c:
    if (piVar15 == (int *)0x0) {
      return;
    }
    lVar18 = *(long *)(piVar15 + 0x72);
  }
  if (lVar18 == 0) {
    return;
  }
  iVar23 = *(int *)(*(long *)(*(long *)(lVar17 + 0x170) + 0xa20) + 0x18);
  piVar14 = (int *)(lVar18 + 0x30);
  pplVar10 = (long **)register0x00000008;
  plVar11 = plVar12;
  plVar12 = unaff_x19;
  piVar15 = unaff_x20;
  puVar22 = unaff_x29;
code_r0x00010a5fb78c:
  *(int **)((long)pplVar10 + -0x20) = piVar15;
  *(long **)((long)pplVar10 + -0x18) = plVar12;
  *(undefined1 **)((long)pplVar10 + -0x10) = puVar22;
  *(code **)((long)pplVar10 + -8) = unaff_x30;
  if (iVar23 < 0x92) {
    func_0x0001096bb814(piVar14);
    *(float *)((long)pplVar10 + -0x30) = param_1;
    *(float *)((long)pplVar10 + -0x2c) = fVar30;
    *(float *)((long)pplVar10 + -0x28) = param_3;
    *(float *)((long)pplVar10 + -0x24) = param_4;
    FUN_10a3e82bc(plVar11,(undefined1 *)((long)pplVar10 + -0x30));
  }
  else {
    FUN_10a5fb808(plVar11,piVar14);
  }
  iVar23 = piVar14[7];
  iVar25 = piVar14[0xb];
  *(int *)((long)pplVar10 + -0x30) = piVar14[3];
  *(int *)((long)pplVar10 + -0x2c) = iVar23;
  *(int *)((long)pplVar10 + -0x28) = iVar25;
  FUN_10a3e3894(plVar11,(undefined1 *)((long)pplVar10 + -0x30));
  return;
}



/* Entry: 10a5fbe38; end: 10a5fbebf;  */

void FUN_10a5fbe38(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  lVar2 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar2 != 0) {
    FUN_10a3a75a8(lVar2 + 0xb8);
    FUN_10a22d0f8(lVar2 + 0x60);
    func_0x00010a05248c(lVar2 + 0x40);
    FUN_10a6210e4(lVar2 + 0x30);
    __ZdlPv(lVar2);
  }
  func_0x00010a62113c(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110bfe2c8;
  param_1[0x46] = &PTR_FUN_110bfe340;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bfe078;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x46] = &PTR_DAT_110bfe1a8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a5fbec0; end: 10a5fbf03;  */

void FUN_10a5fbec0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  lVar2 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar2 != 0) {
    FUN_10a3a75a8(lVar2 + 0xb8);
    FUN_10a22d0f8(lVar2 + 0x60);
    func_0x00010a05248c(lVar2 + 0x40);
    FUN_10a6210e4(lVar2 + 0x30);
    __ZdlPv(lVar2);
  }
  func_0x00010a62113c(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110bfe2c8;
  param_1[0x46] = &PTR_FUN_110bfe340;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bfe078;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x46] = &PTR_DAT_110bfe1a8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a5fbf04; end: 10a5fbfa7;  */

void FUN_10a5fbf04(void)

{
  FUN_10a5fbe38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5fbfa8; end: 10a5fbfd7;  */

void FUN_10a5fbfa8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a5fbe38((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a5fbfd8; end: 10a5fc07b;  */

void FUN_10a5fbfd8(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long *plVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar4 = param_1;
    puVar2 = puVar1 + -0x50;
    puVar3 = puVar1 + -0x50;
    param_1 = (long *)(puVar1 + -0x50);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    iVar6 = *(int *)((long)plVar4 + 0xac);
    iVar5 = (int)param_2;
    if (iVar6 == iVar5) {
      return;
    }
    if (iVar5 == -1) break;
    *(undefined **)(puVar1 + -0x50) = &UNK_10f668d28;
    *(undefined8 *)(puVar1 + -0x48) = 0x38;
    if (iVar6 == -1) {
      FUN_10aabfb48(puVar1 + -0x50,2 < iVar5,param_2);
      *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
      FUN_10a0426d8(puVar1 + -0x38);
      goto LAB_10a5fc05c;
    }
    unaff_x30 = FUN_10a5fc07c;
    uVar7 = param_2;
    FUN_10a0edfc4();
    iVar6 = (int)uVar7;
    *(int *)(param_1 + 1) = iVar6;
    unaff_x19 = param_2;
    unaff_x20 = plVar4;
    if (iVar6 - 4U < 9) {
      puVar1 = puVar1 + -0x50;
      param_2 = 3;
    }
    else {
      if (iVar6 == 0) {
        bVar8 = 0x120 < *(int *)(*(long *)(*(long *)(*param_1 + 0x170) + 0xa20) + 0x18);
      }
      else {
        bVar8 = false;
      }
      uVar9 = 2;
      if (iVar6 != 3) {
        uVar9 = 3;
      }
      puVar1 = puVar1 + -0x50;
      param_2 = (ulong)uVar9;
      if ((iVar6 != 3) && (puVar1 = puVar2, !bVar8)) {
        if ((*(byte *)((long)param_1 + 0x29) & 1) != 0) {
          return;
        }
        puVar1 = puVar3;
        param_2 = 0xffffffff;
      }
    }
  }
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined8 *)(puVar1 + -0x40) = 0;
  *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
  func_0x00010a2e17b4(puVar1 + -0x38);
LAB_10a5fc05c:
  *(int *)((long)plVar4 + 0xac) = iVar5;
  return;
}



/* Entry: 10a5fc07c; end: 10a5fc0df;  */

void FUN_10a5fc07c(long *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar1 = param_1;
    iVar3 = (int)param_2;
    *(int *)(plVar1 + 1) = iVar3;
    if (iVar3 - 4U < 9) {
      uVar4 = 3;
    }
    else {
      if (iVar3 == 0) {
        bVar5 = 0x120 < *(int *)(*(long *)(*(long *)(*plVar1 + 0x170) + 0xa20) + 0x18);
      }
      else {
        bVar5 = false;
      }
      uVar6 = 2;
      if (iVar3 != 3) {
        uVar6 = 3;
      }
      uVar4 = (ulong)uVar6;
      if ((iVar3 != 3) && (!bVar5)) {
        if ((*(byte *)((long)plVar1 + 0x29) & 1) != 0) {
          return;
        }
        uVar4 = 0xffffffff;
      }
    }
    param_1 = (long *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    iVar3 = *(int *)((long)plVar1 + 0xac);
    iVar2 = (int)uVar4;
    if (iVar3 == iVar2) {
      return;
    }
    if (iVar2 == -1) break;
    *(undefined **)((long)register0x00000008 + -0x50) = &UNK_10f668d28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0x38;
    if (iVar3 == -1) {
      FUN_10aabfb48((undefined1 *)((long)register0x00000008 + -0x50),2 < iVar2,uVar4);
      *(undefined1 **)((long)register0x00000008 + -0x38) =
           (undefined1 *)((long)register0x00000008 + -0x50);
      FUN_10a0426d8((undefined1 *)((long)register0x00000008 + -0x38));
LAB_10a5fc05c:
      *(int *)((long)plVar1 + 0xac) = iVar2;
      return;
    }
    unaff_x30 = FUN_10a5fc07c;
    param_2 = uVar4;
    FUN_10a0edfc4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = uVar4;
    unaff_x20 = plVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x38) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  func_0x00010a2e17b4((undefined1 *)((long)register0x00000008 + -0x38));
  goto LAB_10a5fc05c;
}



/* Entry: 10a5fc0e0; end: 10a5fc263;  */

void FUN_10a5fc0e0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  uint *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *(long *)(param_1 + 0x228);
    unaff_x19 = param_1;
    puVar2 = param_2;
    if (*(long *)(lVar3 + 0x30) == 0) {
      if (*(int *)(lVar3 + 0xac) == -1) {
        uVar4 = 0;
LAB_10a5fc164:
        uVar4 = uVar4 | 0x10;
      }
      else {
        uVar5 = 0x80;
        if ((*(uint *)(lVar3 + 8) & 0xfffffffe) != 4) {
          uVar5 = 0x20;
        }
        uVar4 = uVar5 | 0x40;
        if (6 < *(uint *)(lVar3 + 8) - 6) {
          uVar4 = uVar5;
        }
        if (*(char *)(lVar3 + 0x29) == '\x01') goto LAB_10a5fc164;
      }
      uVar5 = uVar4 | 0x240;
      if (*(char *)(lVar3 + 0xc) == '\0') {
        uVar5 = uVar4;
      }
      unaff_x21 = (uint *)(lVar3 + 0xa0);
      *unaff_x21 = uVar5;
      if (*(long *)(*(long *)(param_1 + 0x218) + 0x30) != 0) {
        *unaff_x21 = uVar5 | 1;
      }
      FUN_10a22d054((undefined1 *)((long)register0x00000008 + -0xf0),lVar3 + 0x60);
      uVar6 = *(undefined8 *)unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar3 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0xa3) = *(undefined8 *)(lVar3 + 0xad);
      puVar2 = (undefined1 *)(*(long *)(param_1 + 0x228) + 0xb8);
      FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0x98),
                    (undefined1 *)((long)register0x00000008 + -0xf0),puVar2,
                    *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x58));
      if (*(char *)((long)register0x00000008 + -0x40) == '\x01') {
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x98);
        FUN_10a4c3ba4(param_2 + 0x58);
        if (*(char *)((long)register0x00000008 + -0x40) == '\x01') {
          FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x98));
        }
      }
      FUN_10a22d0f8();
      unaff_x19 = puVar1;
      unaff_x20 = param_1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    param_2 = puVar2;
    if (*(char *)((long)register0x00000008 + -0x40) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x98));
      param_2 = puVar2;
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xf0));
    unaff_x30 = FUN_10a5fc264;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 10a5fc264; end: 10a5fc26b;  */

void FUN_10a5fc264(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  uint *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *(long *)(param_1 + 0x38);
    unaff_x19 = param_1 + -0x1f0;
    puVar2 = param_2;
    if (*(long *)(lVar3 + 0x30) == 0) {
      if (*(int *)(lVar3 + 0xac) == -1) {
        uVar4 = 0;
LAB_10a5fc164:
        uVar4 = uVar4 | 0x10;
      }
      else {
        uVar5 = 0x80;
        if ((*(uint *)(lVar3 + 8) & 0xfffffffe) != 4) {
          uVar5 = 0x20;
        }
        uVar4 = uVar5 | 0x40;
        if (6 < *(uint *)(lVar3 + 8) - 6) {
          uVar4 = uVar5;
        }
        if (*(char *)(lVar3 + 0x29) == '\x01') goto LAB_10a5fc164;
      }
      uVar5 = uVar4 | 0x240;
      if (*(char *)(lVar3 + 0xc) == '\0') {
        uVar5 = uVar4;
      }
      unaff_x21 = (uint *)(lVar3 + 0xa0);
      *unaff_x21 = uVar5;
      if (*(long *)(*(long *)(param_1 + 0x28) + 0x30) != 0) {
        *unaff_x21 = uVar5 | 1;
      }
      FUN_10a22d054((undefined1 *)((long)register0x00000008 + -0xf0),lVar3 + 0x60);
      uVar6 = *(undefined8 *)unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar3 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0xa3) = *(undefined8 *)(lVar3 + 0xad);
      puVar2 = (undefined1 *)(*(long *)(param_1 + 0x38) + 0xb8);
      FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0x98),
                    (undefined1 *)((long)register0x00000008 + -0xf0),puVar2,
                    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x58));
      if (*(char *)((long)register0x00000008 + -0x40) == '\x01') {
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x98);
        FUN_10a4c3ba4(param_2 + 0x58);
        if (*(char *)((long)register0x00000008 + -0x40) == '\x01') {
          FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x98));
        }
      }
      FUN_10a22d0f8();
      unaff_x19 = puVar1;
      unaff_x20 = param_1 + -0x1f0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    param_2 = puVar2;
    if (*(char *)((long)register0x00000008 + -0x40) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x98));
      param_2 = puVar2;
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xf0));
    unaff_x30 = FUN_10a5fc264;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 10a5fc26c; end: 10a5fc5af;  */

void FUN_10a5fc26c(double param_1,long param_2,long *param_3)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  ulong *puVar20;
  undefined1 **ppuVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  func_0x00010a3c7a18();
  ppuVar18 = *(undefined ***)(param_2 + 0x228);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0xd0))(param_3,&PTR_DAT_110bf8b00,0);
  *(int *)(ppuVar18 + 0xb) = (int)plVar4;
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,&PTR_DAT_110bfa7c8,0xffffffff);
  FUN_10a5fbfd8(ppuVar18,plVar4);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110bfa7e8,0);
  *(char *)((long)ppuVar18 + 0x29) = (char)plVar4;
  if ((int)plVar4 != 0) {
    lVar17 = *(long *)(*ppuVar18 + 0x170);
    func_0x000107c2b054(auStack_88,&UNK_10f668c97);
    if (lVar17 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar17 + 0x8d8),auStack_88);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
  }
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,&PTR_DAT_110bfa808,0);
  FUN_10a5fc07c(ppuVar18,plVar4);
  iVar9 = *(int *)(ppuVar18 + 1);
  if (iVar9 == 0) {
    plVar4 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110bfa828,0);
    *(char *)((long)ppuVar18 + 0xc) = (char)plVar4;
    if ((int)plVar4 != 0) {
      FUN_10a5fbfd8(ppuVar18,3);
    }
    iVar9 = *(int *)(ppuVar18 + 1);
  }
  ppuVar2 = ppuVar18;
  if (iVar9 == 2) {
    lVar17 = 0;
    ppuStack_90 = (undefined **)((long)ppuVar18 + 0x14);
    fVar24 = 0.0;
    ppuVar2 = &PTR_DAT_110bfa8a8;
    ppuVar19 = &PTR_DAT_110bfa848;
    ppuStack_98 = ppuVar18;
    do {
      plVar4 = param_3;
      (**(code **)(*param_3 + 0xd0))(param_3,ppuVar19,0);
      ppuVar16 = (undefined **)((long)ppuVar18 + 0x1c);
      ppuVar11 = ppuVar18 + 2;
      if ((int)lVar17 == 1) {
        ppuVar16 = ppuVar18 + 4;
        ppuVar11 = ppuStack_90;
      }
      ppuVar12 = (undefined **)((long)ppuVar18 + 0x24);
      ppuVar3 = ppuVar18 + 3;
      if ((int)lVar17 != 2) {
        ppuVar12 = ppuVar16;
        ppuVar3 = ppuVar11;
      }
      *(int *)ppuVar3 = (int)plVar4;
      fVar22 = 0.0;
      ppuVar11 = ppuVar2;
      (**(code **)(*param_3 + 0x48))(param_3);
      ppuVar16 = ppuStack_98;
      *(float *)ppuVar12 = fVar22;
      fVar24 = fVar24 + fVar22;
      lVar17 = lVar17 + 1;
      ppuVar2 = ppuVar2 + 4;
      ppuVar19 = ppuVar19 + 4;
    } while (lVar17 != 3);
    param_1 = ABS((double)fVar24 + -1.0);
    ppuVar2 = ppuStack_98;
    if (0.01 <= param_1) {
      pppuVar1 = (undefined ***)&UNK_10f668cbb;
      FUN_10a00946c();
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      pppuVar5 = pppuVar1;
      __Unwind_Resume();
      ppuStack_c8 = ppuVar16;
      pcStack_a8 = FUN_10a5fc5b0;
      ppuVar21 = &puStack_b0;
      ppuStack_c0 = (undefined **)((long)ppuVar18 + 0x1c);
      pppuStack_b8 = pppuVar1;
      puStack_b0 = &stack0xfffffffffffffff0;
      func_0x00010a3c7928();
      ppuVar18 = pppuVar5[0x45];
      (**(code **)(*ppuVar11 + 0x50))(ppuVar11,&PTR_DAT_110bf8b00,*(undefined4 *)(ppuVar18 + 0xb));
      if (0 < *(int *)((long)ppuVar18 + 0xac)) {
        (**(code **)(*ppuVar11 + 0x40))(ppuVar11,&PTR_DAT_110bfa7c8);
      }
      (**(code **)(*ppuVar11 + 0x70))
                (ppuVar11,&PTR_DAT_110bfa7e8,*(undefined1 *)((long)ppuVar18 + 0x29));
      (**(code **)(*ppuVar11 + 0x40))(ppuVar11,&PTR_DAT_110bfa808,*(undefined4 *)(ppuVar18 + 1));
      iVar9 = *(int *)(ppuVar18 + 1);
      if (iVar9 == 0) {
        (**(code **)(*ppuVar11 + 0x70))
                  (ppuVar11,&PTR_DAT_110bfa828,*(undefined1 *)((long)ppuVar18 + 0xc));
        iVar9 = *(int *)(ppuVar18 + 1);
      }
      ppuVar2 = ppuVar18;
      if (iVar9 == 2) {
        lVar17 = 0;
        ppuStack_118 = (undefined **)((long)ppuVar18 + 0x14);
        fVar24 = 0.0;
        ppuVar2 = &PTR_DAT_110bfa8a8;
        ppuVar19 = &PTR_DAT_110bfa848;
        ppuStack_120 = ppuVar18;
        do {
          ppuVar16 = (undefined **)((long)ppuVar18 + 0x1c);
          ppuVar12 = ppuVar18 + 2;
          if ((int)lVar17 == 1) {
            ppuVar16 = ppuVar18 + 4;
            ppuVar12 = ppuStack_118;
          }
          ppuVar3 = (undefined **)((long)ppuVar18 + 0x24);
          ppuVar10 = ppuVar18 + 3;
          if ((int)lVar17 != 2) {
            ppuVar3 = ppuVar16;
            ppuVar10 = ppuVar12;
          }
          uVar13 = (ulong)*(uint *)ppuVar10;
          (**(code **)(*ppuVar11 + 0x50))(ppuVar11,ppuVar19);
          ppuVar12 = ppuVar2;
          (**(code **)(*ppuVar11 + 0x60))(*(float *)ppuVar3,ppuVar11,ppuVar2);
          ppuVar16 = ppuStack_120;
          fVar24 = fVar24 + *(float *)ppuVar3;
          lVar17 = lVar17 + 1;
          ppuVar2 = ppuVar2 + 4;
          ppuVar19 = ppuVar19 + 4;
        } while (lVar17 != 3);
        ppuVar2 = ppuStack_120;
        if (0.01 <= ABS(fVar24 + -1.0)) {
          puVar6 = &UNK_10f668cbb;
          FUN_10a00946c();
          pcStack_128 = FUN_10a5fc7d0;
          lVar17 = 0x138;
          puVar20 = (ulong *)&UNK_110c009c8;
          do {
            if (*puVar20 == uVar13) {
              uVar7 = puVar20[-1];
              _memcmp(uVar7,ppuVar12,uVar13);
              if ((int)uVar7 == 0) goto LAB_10a5fc834;
            }
            puVar20 = puVar20 + 3;
            lVar17 = lVar17 + -0x18;
          } while (lVar17 != 0);
          do {
            FUN_10a26f290(&UNK_10f61d92d);
LAB_10a5fc834:
          } while (lVar17 == 0);
          ppuVar12 = (undefined **)(ulong)(uint)puVar20[-2];
          pppuVar1 = &ppuStack_120;
          ppuVar2 = *(undefined ***)(puVar6 + 0x228);
          while( true ) {
            ppuVar3 = ppuVar2;
            iVar9 = (int)ppuVar12;
            *(int *)(ppuVar3 + 1) = iVar9;
            if (iVar9 - 4U < 9) {
              ppuVar10 = (undefined **)0x3;
            }
            else {
              if (iVar9 == 0) {
                bVar14 = 0x120 < *(int *)(*(long *)(*(long *)(*ppuVar3 + 0x170) + 0xa20) + 0x18);
              }
              else {
                bVar14 = false;
              }
              uVar15 = 2;
              if (iVar9 != 3) {
                uVar15 = 3;
              }
              ppuVar10 = (undefined **)(ulong)uVar15;
              if ((iVar9 != 3) && (!bVar14)) {
                if ((*(byte *)((long)ppuVar3 + 0x29) & 1) != 0) {
                  return;
                }
                ppuVar10 = (undefined **)0xffffffff;
              }
            }
            ppuVar2 = (undefined **)((long)pppuVar1 + -0x50);
            *(undefined ***)((long)pppuVar1 + -0x30) = (undefined **)((long)ppuVar18 + 0x1c);
            *(undefined ***)((long)pppuVar1 + -0x28) = ppuVar19;
            *(undefined ***)((long)pppuVar1 + -0x20) = ppuVar16;
            *(undefined ***)((long)pppuVar1 + -0x18) = ppuVar11;
            *(undefined1 ***)((long)pppuVar1 + -0x10) = ppuVar21;
            *(code **)((long)pppuVar1 + -8) = pcStack_128;
            ppuVar21 = (undefined1 **)((long)pppuVar1 + -0x10);
            iVar9 = *(int *)((long)ppuVar3 + 0xac);
            iVar8 = (int)ppuVar10;
            if (iVar9 == iVar8) {
              return;
            }
            if (iVar8 == -1) break;
            *(undefined **)((long)pppuVar1 + -0x50) = &UNK_10f668d28;
            *(undefined8 *)((long)pppuVar1 + -0x48) = 0x38;
            if (iVar9 == -1) {
              FUN_10aabfb48((undefined1 *)((long)pppuVar1 + -0x50),2 < iVar8,ppuVar10);
              *(undefined1 **)((long)pppuVar1 + -0x38) = (undefined1 *)((long)pppuVar1 + -0x50);
              FUN_10a0426d8((undefined1 *)((long)pppuVar1 + -0x38));
LAB_10a5fc05c:
              *(int *)((long)ppuVar3 + 0xac) = iVar8;
              return;
            }
            pcStack_128 = FUN_10a5fc07c;
            ppuVar12 = ppuVar10;
            FUN_10a0edfc4();
            pppuVar1 = (undefined ***)((long)pppuVar1 + -0x50);
            ppuVar11 = ppuVar10;
            ppuVar16 = ppuVar3;
          }
          *(undefined8 *)((long)pppuVar1 + -0x50) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x48) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x40) = 0;
          *(undefined1 **)((long)pppuVar1 + -0x38) = (undefined1 *)((long)pppuVar1 + -0x50);
          func_0x00010a2e17b4((undefined1 *)((long)pppuVar1 + -0x38));
          goto LAB_10a5fc05c;
        }
      }
      (**(code **)(*ppuVar11 + 0x70))(ppuVar11,&PTR_DAT_110bfa908,*(undefined1 *)(ppuVar2 + 5));
      if (*(char *)(ppuVar2 + 0x15) == '\x01') {
        (**(code **)(*ppuVar11 + 0x60))
                  (*(undefined4 *)((long)ppuVar2 + 0xa4),ppuVar11,&PTR_DAT_110bfa928);
      }
      ppuStack_c0 = &PTR_DAT_110bb3700;
      ppuStack_c8 = ppuVar11;
      if (*(uint *)(ppuVar2 + 0x19) != 0xffffffff) {
        pppuStack_b8 = &ppuStack_c8;
        (*(code *)(&PTR_FUN_110be7398)[*(uint *)(ppuVar2 + 0x19)])(&pppuStack_b8,ppuVar2 + 0x17);
        return;
      }
      FUN_10a0d459c();
      return;
    }
  }
  uVar23 = SUB84(param_1,0);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110bfa908,0);
  *(char *)(ppuVar2 + 5) = (char)plVar4;
  if ((int)plVar4 != 0) {
    lVar17 = *(long *)(*ppuVar2 + 0x170);
    func_0x000107c2b054(auStack_88,&UNK_10f668cef);
    if (lVar17 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar17 + 0x8d8),auStack_88);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
  }
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110bfa928);
  if ((int)plVar4 != 0) {
    lVar17 = *(long *)(*ppuVar2 + 0x170);
    func_0x000107c2b054(auStack_88,&UNK_10f668d15);
    if (lVar17 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar17 + 0x8d8),auStack_88);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110bfa928);
    *(undefined4 *)((long)ppuVar2 + 0xa4) = uVar23;
    *(undefined1 *)(ppuVar2 + 0x15) = 1;
  }
  FUN_10a4c3348(param_3,&PTR_DAT_110bb3700,ppuVar2 + 0x17);
  return;
}



/* Entry: 10a5fc5b0; end: 10a5fc7cf;  */

void FUN_10a5fc5b0(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint *puVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined **ppuVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  ulong *puVar24;
  long lVar25;
  float fVar26;
  code *pcStack_88;
  long *plStack_80;
  uint *puStack_78;
  undefined1 *puVar7;
  
  FUN_10a3c7928();
  plVar21 = *(long **)(param_1 + 0x228);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bf8b00,(int)plVar21[0xb]);
  if (0 < *(int *)((long)plVar21 + 0xac)) {
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bfa7c8);
  }
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa7e8,*(undefined1 *)((long)plVar21 + 0x29));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bfa808,(int)plVar21[1]);
  iVar13 = (int)plVar21[1];
  if (iVar13 == 0) {
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa828,*(undefined1 *)((long)plVar21 + 0xc));
    iVar13 = (int)plVar21[1];
  }
  plVar20 = plVar21;
  if (iVar13 == 2) {
    lVar25 = 0;
    puStack_78 = (uint *)((long)plVar21 + 0x14);
    fVar26 = 0.0;
    ppuVar22 = &PTR_DAT_110bfa8a8;
    ppuVar23 = &PTR_DAT_110bfa848;
    plStack_80 = plVar21;
    do {
      pfVar1 = (float *)((long)plVar21 + 0x1c);
      puVar3 = (uint *)(plVar21 + 2);
      if ((int)lVar25 == 1) {
        pfVar1 = (float *)(plVar21 + 4);
        puVar3 = puStack_78;
      }
      pfVar2 = (float *)((long)plVar21 + 0x24);
      puVar4 = (uint *)(plVar21 + 3);
      if ((int)lVar25 != 2) {
        pfVar2 = pfVar1;
        puVar4 = puVar3;
      }
      uVar17 = (ulong)*puVar4;
      (**(code **)(*param_2 + 0x50))(param_2,ppuVar23);
      ppuVar15 = ppuVar22;
      (**(code **)(*param_2 + 0x60))(*pfVar2,param_2,ppuVar22);
      plVar20 = plStack_80;
      fVar26 = fVar26 + *pfVar2;
      lVar25 = lVar25 + 1;
      ppuVar22 = ppuVar22 + 4;
      ppuVar23 = ppuVar23 + 4;
    } while (lVar25 != 3);
    if (0.01 <= ABS(fVar26 + -1.0)) {
      puVar10 = &UNK_10f668cbb;
      FUN_10a00946c();
      pcStack_88 = FUN_10a5fc7d0;
      lVar25 = 0x138;
      puVar24 = (ulong *)&UNK_110c009c8;
      do {
        if (*puVar24 == uVar17) {
          uVar11 = puVar24[-1];
          _memcmp(uVar11,ppuVar15,uVar17);
          if ((int)uVar11 == 0) goto LAB_10a5fc834;
        }
        puVar24 = puVar24 + 3;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
      do {
        FUN_10a26f290(&UNK_10f61d92d);
LAB_10a5fc834:
      } while (lVar25 == 0);
      plVar16 = (long *)(ulong)(uint)puVar24[-2];
      pplVar5 = &plStack_80;
      plVar8 = *(long **)(puVar10 + 0x228);
      puVar6 = (undefined1 *)register0x00000008;
      while( true ) {
        plVar9 = plVar8;
        puVar7 = (undefined1 *)pplVar5;
        iVar13 = (int)plVar16;
        *(int *)(plVar9 + 1) = iVar13;
        if (iVar13 - 4U < 9) {
          plVar14 = (long *)0x3;
        }
        else {
          if (iVar13 == 0) {
            bVar18 = 0x120 < *(int *)(*(long *)(*(long *)(*plVar9 + 0x170) + 0xa20) + 0x18);
          }
          else {
            bVar18 = false;
          }
          uVar19 = 2;
          if (iVar13 != 3) {
            uVar19 = 3;
          }
          plVar14 = (long *)(ulong)uVar19;
          if ((iVar13 != 3) && (!bVar18)) {
            if ((*(byte *)((long)plVar9 + 0x29) & 1) != 0) {
              return;
            }
            plVar14 = (long *)0xffffffff;
          }
        }
        plVar8 = (long *)(puVar7 + -0x50);
        *(float **)(puVar7 + -0x30) = (float *)((long)plVar21 + 0x1c);
        *(undefined ***)(puVar7 + -0x28) = ppuVar23;
        *(long **)(puVar7 + -0x20) = plVar20;
        *(long **)(puVar7 + -0x18) = param_2;
        *(undefined1 **)(puVar7 + -0x10) = puVar6 + -0x10;
        *(code **)(puVar7 + -8) = pcStack_88;
        iVar13 = *(int *)((long)plVar9 + 0xac);
        iVar12 = (int)plVar14;
        if (iVar13 == iVar12) {
          return;
        }
        if (iVar12 == -1) break;
        *(undefined **)(puVar7 + -0x50) = &UNK_10f668d28;
        *(undefined8 *)(puVar7 + -0x48) = 0x38;
        if (iVar13 == -1) {
          FUN_10aabfb48(puVar7 + -0x50,2 < iVar12,plVar14);
          *(undefined1 **)(puVar7 + -0x38) = puVar7 + -0x50;
          FUN_10a0426d8(puVar7 + -0x38);
LAB_10a5fc05c:
          *(int *)((long)plVar9 + 0xac) = iVar12;
          return;
        }
        pcStack_88 = FUN_10a5fc07c;
        plVar16 = plVar14;
        FUN_10a0edfc4();
        pplVar5 = (long **)(puVar7 + -0x50);
        param_2 = plVar14;
        plVar20 = plVar9;
        puVar6 = puVar7;
      }
      *(undefined8 *)(puVar7 + -0x50) = 0;
      *(undefined8 *)(puVar7 + -0x48) = 0;
      *(undefined8 *)(puVar7 + -0x40) = 0;
      *(undefined1 **)(puVar7 + -0x38) = puVar7 + -0x50;
      func_0x00010a2e17b4(puVar7 + -0x38);
      goto LAB_10a5fc05c;
    }
  }
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa908,(char)plVar20[5]);
  if ((char)plVar20[0x15] == '\x01') {
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)plVar20 + 0xa4),param_2,&PTR_DAT_110bfa928)
    ;
  }
  if (*(uint *)(plVar20 + 0x19) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110be7398)[*(uint *)(plVar20 + 0x19)])
              (&stack0xffffffffffffffe8,plVar20 + 0x17);
    return;
  }
  FUN_10a0d459c();
  return;
}



/* Entry: 10a5fc7d0; end: 10a5fc853;  */

void FUN_10a5fc7d0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar11;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  lVar11 = 0x138;
  plVar2 = (long *)&UNK_110c009c8;
  do {
    if (*plVar2 == param_3) {
      lVar4 = plVar2[-1];
      _memcmp(lVar4,param_2,param_3);
      if ((int)lVar4 == 0) goto LAB_10a5fc834;
    }
    plVar2 = plVar2 + 3;
    lVar11 = lVar11 + -0x18;
  } while (lVar11 != 0);
  do {
    FUN_10a26f290(&UNK_10f61d92d);
LAB_10a5fc834:
  } while (lVar11 == 0);
  uVar8 = (ulong)*(uint *)(plVar2 + -2);
  puVar1 = (undefined1 *)register0x00000008;
  plVar2 = *(long **)(param_1 + 0x228);
  while( true ) {
    plVar3 = plVar2;
    iVar6 = (int)uVar8;
    *(int *)(plVar3 + 1) = iVar6;
    if (iVar6 - 4U < 9) {
      uVar7 = 3;
    }
    else {
      if (iVar6 == 0) {
        bVar9 = 0x120 < *(int *)(*(long *)(*(long *)(*plVar3 + 0x170) + 0xa20) + 0x18);
      }
      else {
        bVar9 = false;
      }
      uVar10 = 2;
      if (iVar6 != 3) {
        uVar10 = 3;
      }
      uVar7 = (ulong)uVar10;
      if ((iVar6 != 3) && (!bVar9)) {
        if ((*(byte *)((long)plVar3 + 0x29) & 1) != 0) {
          return;
        }
        uVar7 = 0xffffffff;
      }
    }
    plVar2 = (long *)(puVar1 + -0x50);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    iVar6 = *(int *)((long)plVar3 + 0xac);
    iVar5 = (int)uVar7;
    if (iVar6 == iVar5) {
      return;
    }
    if (iVar5 == -1) break;
    *(undefined **)(puVar1 + -0x50) = &UNK_10f668d28;
    *(undefined8 *)(puVar1 + -0x48) = 0x38;
    if (iVar6 == -1) {
      FUN_10aabfb48(puVar1 + -0x50,2 < iVar5,uVar7);
      *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
      FUN_10a0426d8(puVar1 + -0x38);
LAB_10a5fc05c:
      *(int *)((long)plVar3 + 0xac) = iVar5;
      return;
    }
    unaff_x30 = FUN_10a5fc07c;
    uVar8 = uVar7;
    FUN_10a0edfc4();
    puVar1 = puVar1 + -0x50;
    unaff_x19 = uVar7;
    unaff_x20 = plVar3;
  }
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined8 *)(puVar1 + -0x40) = 0;
  *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
  func_0x00010a2e17b4(puVar1 + -0x38);
  goto LAB_10a5fc05c;
}



/* Entry: 10a5fc854; end: 10a5fc8c3;  */

void FUN_10a5fc854(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f668dad);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a5fc8c4; end: 10a5fc94b;  */

void FUN_10a5fc8c4(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f668de6);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x228) + 0x28) = param_2;
  return;
}



/* Entry: 10a5fc94c; end: 10a5fc9a3;  */

void FUN_10a5fc94c(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(param_2 + 0x228);
  FUN_10a5fb1c8(lVar3,0);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  uVar4 = *(long *)(lVar3 + 0x18) - lVar1 >> 3;
  uVar5 = *(undefined8 *)(lVar3 + 0x180);
  FUN_10a05077c();
  if (uVar4 != 0) {
    uVar6 = 0;
    uVar5 = NEON_scvtf(uVar5,4);
    uVar7 = NEON_fmov(0x3f800000,4);
    do {
      if ((ulong)(param_1[1] - *param_1 >> 3) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14d4a8);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(lVar1 + uVar6 * 8);
      *(ulong *)(*param_1 + uVar6 * 8) =
           CONCAT44(((float)((ulong)uVar7 >> 0x20) / (float)((ulong)uVar5 >> 0x20)) *
                    (float)((ulong)uVar8 >> 0x20),((float)uVar7 / (float)uVar5) * (float)uVar8);
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



/* Entry: 10a5fc9a4; end: 10a5fca8f;  */

float FUN_10a5fc9a4(float param_1,long param_2,int param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined *puStack_38;
  undefined8 uStack_30;
  
  plVar3 = *(long **)(param_2 + 0x228);
  plVar2 = plVar3;
  FUN_10a5fb1c8(plVar3,1);
  if ((plVar2 == (long *)0x0) || ((*(ushort *)(*(long *)(*plVar3 + 0x168) + 0x118) & 1) != 0)) {
    return 0.0;
  }
  puStack_38 = &UNK_10f668a25;
  uStack_30 = 0x43;
  if ((*(byte *)(plVar2 + 5) & 1) == 0) {
    FUN_10a0edfc4(&puStack_38);
  }
  else {
    func_0x00010a14cc28();
    if ((-1 < param_3) && ((ulong)(long)param_3 < (ulong)plVar2[8])) {
      FUN_10a14abe0();
      return param_1 * 10.4;
    }
  }
  FUN_10a0ee900(&puStack_38,&UNK_10f668a69,0x20);
  FUN_10a0029c0(&puStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5fca74);
  (*pcVar1)();
}



/* Entry: 10a5fca90; end: 10a5fcc0b;  */

float FUN_10a5fca90(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined **ppuVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined *puStack_78;
  undefined8 uStack_70;
  char cStack_61;
  
  plVar9 = *(long **)(param_1 + 0x228);
  plVar4 = (long *)0x1;
  plVar2 = plVar9;
  FUN_10a5fb1c8();
  if ((plVar2 != (long *)0x0) && ((*(ushort *)(*(long *)(*plVar9 + 0x168) + 0x118) & 1) == 0)) {
    puStack_78 = &UNK_10f668a8a;
    uStack_70 = 0x4a;
    if ((*(byte *)(plVar2 + 5) & 1) == 0) {
      ppuVar3 = &puStack_78;
      FUN_10a0edfc4();
      if (cStack_61 < '\0') {
        __ZdlPv(puStack_78);
      }
      __Unwind_Resume();
      puVar11 = ppuVar3[0x2e];
      func_0x000107c2b054(auStack_d8,&UNK_10f668e21);
      if (puVar11 != (undefined *)0x0) {
        FUN_10a76c080(*(undefined8 *)(puVar11 + 0x8d8),auStack_d8);
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(auStack_d8[0]);
      }
      puVar11 = ppuVar3[0x45];
      FUN_10a5fb1c8(puVar11,1);
      if (puVar11 == (undefined *)0x0) {
        fVar15 = 0.0;
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(0,0,1,2,&UNK_10f66893b,&UNK_10f668b0e,0x199,&UNK_10f668b73);
          fVar15 = 0.0;
        }
      }
      else {
        lVar6 = plVar4[1] - *plVar4;
        if (lVar6 == 0) {
          fVar15 = 0.0;
        }
        else {
          lVar6 = lVar6 >> 3;
          fVar15 = 0.0;
          pfVar7 = (float *)(*plVar4 + 4);
          do {
            iVar8 = (int)pfVar7[-1];
            if ((iVar8 < 0) ||
               ((ulong)(*(long *)(puVar11 + 0x18) - *(long *)(puVar11 + 0x10) >> 3) <=
                (ulong)(long)iVar8)) {
              FUN_10a0ee900(auStack_d8,&UNK_10f668a69,0x20);
              FUN_10a0029c0(auStack_d8);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5fcd64);
              (*pcVar1)();
            }
            fVar15 = fVar15 + (float)*(undefined8 *)(*(long *)(puVar11 + 0x10) + (long)iVar8 * 8) *
                              *pfVar7;
            lVar6 = lVar6 + -1;
            pfVar7 = pfVar7 + 2;
          } while (lVar6 != 0);
        }
        fVar15 = fVar15 / (float)*(int *)(puVar11 + 0x180);
      }
      return fVar15;
    }
    func_0x00010a14cc28();
    lVar6 = *param_2;
    if (param_2[1] != lVar6) {
      lVar12 = 0;
      uVar13 = 0;
      uVar10 = plVar2[8];
      fVar15 = 0.0;
      while( true ) {
        fVar14 = *(float *)(lVar6 + lVar12);
        if (((int)fVar14 < 0) || (uVar10 <= (ulong)(long)(int)fVar14)) break;
        FUN_10a14abe0(plVar2);
        lVar6 = *param_2;
        uVar5 = param_2[1] - lVar6 >> 3;
        if (uVar5 <= uVar13) goto LAB_10a5fcbe4;
        fVar15 = fVar15 + fVar14 * *(float *)(lVar6 + lVar12 + 4);
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 8;
        if (uVar5 <= uVar13) {
          return fVar15 * 10.4;
        }
      }
      FUN_10a0ee900(&puStack_78,&UNK_10f668a69,0x20);
      FUN_10a0029c0(&puStack_78);
LAB_10a5fcbe4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5fcbe8);
      (*pcVar1)();
    }
  }
  return 0.0;
}



/* Entry: 10a5fcc0c; end: 10a5fcd83;  */

float FUN_10a5fcc0c(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar5 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f668e21);
  if (lVar5 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar5 = *(long *)(param_1 + 0x228);
  FUN_10a5fb1c8(lVar5,1);
  if (lVar5 == 0) {
    fVar6 = 0.0;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(0,0,1,2,&UNK_10f66893b,&UNK_10f668b0e,0x199,&UNK_10f668b73);
      fVar6 = 0.0;
    }
  }
  else {
    lVar2 = param_2[1] - *param_2;
    if (lVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      lVar2 = lVar2 >> 3;
      fVar6 = 0.0;
      pfVar3 = (float *)(*param_2 + 4);
      do {
        iVar4 = (int)pfVar3[-1];
        if ((iVar4 < 0) ||
           ((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10) >> 3) <= (ulong)(long)iVar4))
        {
          FUN_10a0ee900(auStack_48,&UNK_10f668a69,0x20);
          FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5fcd64);
          (*pcVar1)();
        }
        fVar6 = fVar6 + (float)*(undefined8 *)(*(long *)(lVar5 + 0x10) + (long)iVar4 * 8) * *pfVar3;
        lVar2 = lVar2 + -1;
        pfVar3 = pfVar3 + 2;
      } while (lVar2 != 0);
    }
    fVar6 = fVar6 / (float)*(int *)(lVar5 + 0x180);
  }
  return fVar6;
}



/* Entry: 10a5fcd84; end: 10a5fcf17;  */

undefined4 FUN_10a5fcd84(long param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  lVar5 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_58,&UNK_10f668e3b);
  if (lVar5 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_58);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8c0) + 0x18) + 0x68);
  lVar5 = *(long *)(param_1 + 0x228) + 0xb8;
  func_0x00010ab17e00(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x228) + 0x58));
  if (lVar6 != 0) {
    piVar4 = *(int **)(lVar6 + 0x28);
    piVar1 = *(int **)(lVar6 + 0x30);
    if (piVar4 == piVar1) {
LAB_10a5fce34:
      if (((piVar4 != piVar1) && (piVar4 != (int *)0x0)) && (*(long *)(piVar4 + 0x72) != 0)) {
        if ((-1 < (int)param_2) &&
           ((int)param_2 < *(int *)(*(long *)(*(long *)(piVar4 + 0x6e) + 0x10) + 0x10))) {
          return *(undefined4 *)(*(long *)(*(long *)(piVar4 + 0x6e) + 0x18) + (ulong)param_2 * 4);
        }
        if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
          return 0;
        }
        puVar3 = &UNK_10f668eda;
        uVar2 = 0x305;
        goto LAB_10a5fcea0;
      }
    }
    else {
      do {
        if ((*piVar4 == (int)lVar5) && (piVar4[1] == (int)((ulong)lVar5 >> 0x20)))
        goto LAB_10a5fce34;
        piVar4 = piVar4 + 0x88;
      } while (piVar4 != piVar1);
    }
  }
  if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
    return 0;
  }
  puVar3 = &UNK_10f668e9b;
  uVar2 = 0x2fe;
LAB_10a5fcea0:
  func_0x00010ae06f08(1,2,&UNK_10f66893b,&UNK_10f668e55,uVar2,puVar3);
  return 0;
}



/* Entry: 10a5fcf18; end: 10a5fd00b;  */

bool FUN_10a5fcf18(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f668f55);
  if (lVar2 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8c0) + 0x18);
  FUN_10aac1a00(lVar2,2);
  if (lVar2 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66893b,&UNK_10f668f71,0x318,&UNK_10f668fc5,in_x6,in_x7,param_2
                         );
    }
    bVar1 = false;
  }
  else {
    lVar2 = lVar2 + 8;
    FUN_10a6214a0(lVar2,param_2,param_3);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10a5fd00c; end: 10a5fd123;  */

long FUN_10a5fd00c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  long *extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long *plVar15;
  long lStack_b0;
  long *plStack_a8;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  lVar12 = *(long *)(param_2 + 0x170);
  func_0x000107c2b054(auStack_58,&UNK_10f669010);
  if (lVar12 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar12 + 0x8d8),auStack_58);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x170) + 0x8c0) + 0x18);
  FUN_10aac1a00(lVar12,2);
  if (lVar12 == 0) {
    param_1 = 0;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66893b,&UNK_10f669030,0x324,&UNK_10f669089);
    }
  }
  else {
    lVar12 = lVar12 + 8;
    FUN_10a6214a0(lVar12,param_3);
    if (lVar12 == 0) {
      puVar8 = &UNK_10f66a46f;
      FUN_109ffdddc();
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      __Unwind_Resume();
      if (param_4 == 0) {
        puVar14 = puVar8;
        uVar13 = param_3;
        func_0x00010a0fda30();
      }
      else {
        plStack_a8 = *(long **)(puVar8 + 0x48);
        param_1 = *(long *)(puVar8 + 0x40);
        param_4 = param_4 + 0x88;
        lStack_b0 = param_1;
        func_0x00010a35bf90(param_4,&lStack_b0);
        puVar4 = (undefined8 *)((ulong)&lStack_b0 | 8);
        plVar9 = &lStack_b0;
        if (param_4 != 0) {
          puVar4 = (undefined8 *)(param_4 + 0x28);
          plVar9 = (long *)(param_4 + 0x20);
        }
        uVar13 = *puVar4;
        puVar14 = (undefined *)*plVar9;
      }
      lVar12 = *(long *)(puVar8 + 0x170);
      FUN_10a3dd220(lVar12);
      FUN_10a5751c0(lVar12,puVar14,uVar13);
      plVar9 = (long *)0x28;
      __Znwm();
      plVar15 = plVar9 + 1;
      *plVar15 = 0;
      *plVar9 = (long)&PTR_FUN_110c01078;
      plVar9[2] = 0;
      plVar9[3] = lVar12;
      plVar9[4] = (long)FUN_10a3df8cc;
      if (lVar12 != 0) {
        if (*(long *)(lVar12 + 0x30) == 0) {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = *plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar1 = plVar9 + 2;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          *(long *)(lVar12 + 0x28) = lVar12;
          *(long **)(lVar12 + 0x30) = plVar9;
        }
        else {
          if (*(long *)(*(long *)(lVar12 + 0x30) + 8) != -1) goto LAB_10a5fd288;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = *plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar1 = plVar9 + 2;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          *(long *)(lVar12 + 0x28) = lVar12;
          *(long **)(lVar12 + 0x30) = plVar9;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        do {
          lVar10 = *plVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
LAB_10a5fd288:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar12 + 0x150,puVar8 + 0x150);
      uVar2 = (*(ushort *)(puVar8 + 0x180) >> 1 & 1) << 1;
      uVar3 = *(ushort *)(lVar12 + 0x180) & 0xfffc;
      *(ushort *)(lVar12 + 0x180) = uVar3 | *(ushort *)(lVar12 + 0x180) & 1 | uVar2;
      *(ushort *)(lVar12 + 0x180) = uVar3 | uVar2 | *(ushort *)(puVar8 + 0x180) & 1;
      if (plVar9 != (long *)0x0) {
        plVar15 = plVar9 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = *plVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lStack_b0 = lVar12;
      plStack_a8 = plVar9;
      FUN_10a3c7ce8(param_3,&lStack_b0);
      plVar15 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar10 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      lVar10 = *(long *)(puVar8 + 0x228);
      lVar11 = *(long *)(lVar12 + 0x228);
      *(undefined4 *)(lVar11 + 0x58) = *(undefined4 *)(lVar10 + 0x58);
      *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(lVar10 + 8);
      uVar5 = *(undefined4 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
      *(undefined4 *)(lVar11 + 0x18) = uVar5;
      lVar10 = *(long *)(lVar12 + 0x228);
      uVar5 = *(undefined4 *)(*(long *)(puVar8 + 0x228) + 0x24);
      *(undefined8 *)(lVar10 + 0x1c) = *(undefined8 *)(*(long *)(puVar8 + 0x228) + 0x1c);
      *(undefined4 *)(lVar10 + 0x24) = uVar5;
      *(undefined1 *)(*(long *)(lVar12 + 0x228) + 0x28) =
           *(undefined1 *)(*(long *)(puVar8 + 0x228) + 0x28);
      *extraout_x8 = lVar12;
      extraout_x8[1] = (long)plVar9;
      return param_1;
    }
    FUN_10a5fcd84(param_2,*(undefined4 *)(lVar12 + 0x20));
  }
  return param_1;
}



/* Entry: 10a5fd124; end: 10a5fd3d3;  */

void FUN_10a5fd124(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar8 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar8 = (long *)(param_4 + 0x20);
    }
    uVar10 = *puVar4;
    lVar11 = *plVar8;
  }
  lVar12 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar12);
  FUN_10a5751c0(lVar12,lVar11,uVar10);
  plVar8 = (long *)0x28;
  __Znwm();
  plVar13 = plVar8 + 1;
  *plVar13 = 0;
  *plVar8 = (long)&PTR_FUN_110c01078;
  plVar8[2] = 0;
  plVar8[3] = lVar12;
  plVar8[4] = (long)FUN_10a3df8cc;
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar8;
    }
    else {
      if (*(long *)(*(long *)(lVar12 + 0x30) + 8) != -1) goto LAB_10a5fd288;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar11 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a5fd288:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar12 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar12 + 0x180) & 0xfffc;
  *(ushort *)(lVar12 + 0x180) = uVar3 | *(ushort *)(lVar12 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar12 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar8 != (long *)0x0) {
    plVar13 = plVar8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_50 = lVar12;
  plStack_48 = plVar8;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar13 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar11 = *(long *)(param_2 + 0x228);
  lVar9 = *(long *)(lVar12 + 0x228);
  *(undefined4 *)(lVar9 + 0x58) = *(undefined4 *)(lVar11 + 0x58);
  *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(lVar11 + 8);
  uVar5 = *(undefined4 *)(lVar11 + 0x18);
  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  *(undefined4 *)(lVar9 + 0x18) = uVar5;
  lVar11 = *(long *)(lVar12 + 0x228);
  uVar5 = *(undefined4 *)(*(long *)(param_2 + 0x228) + 0x24);
  *(undefined8 *)(lVar11 + 0x1c) = *(undefined8 *)(*(long *)(param_2 + 0x228) + 0x1c);
  *(undefined4 *)(lVar11 + 0x24) = uVar5;
  *(undefined1 *)(*(long *)(lVar12 + 0x228) + 0x28) =
       *(undefined1 *)(*(long *)(param_2 + 0x228) + 0x28);
  *param_1 = lVar12;
  param_1[1] = (long)plVar8;
  return;
}



/* Entry: 10a5fd3d4; end: 10a5fd56f;  */

/* WARNING: Removing unreachable block (ram,0x00010a5fd970) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd940) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd950) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd980) */

void FUN_10a5fd3d4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  undefined1 **ppuVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x8;
  long lVar14;
  long *plVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 *puStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 ***pppuStack_248;
  ulong uStack_240;
  byte bStack_231;
  undefined8 ***pppuStack_230;
  ulong uStack_228;
  byte bStack_219;
  undefined8 ***pppuStack_218;
  ulong uStack_210;
  byte bStack_201;
  undefined8 ***pppuStack_200;
  ulong uStack_1f8;
  byte bStack_1e9;
  undefined8 ***apppuStack_1e8 [2];
  char cStack_1d1;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long lStack_48;
  long *plStack_40;
  char cStack_31;
  
  lVar14 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(&lStack_48,&UNK_10f6690d4);
  if (lVar14 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar14 + 0x8d8),&lStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(lStack_48);
  }
  plVar15 = *(long **)(param_1 + 0x228);
  lVar14 = *param_2;
  if (lVar14 == 0) {
    lStack_48 = 0;
    plStack_40 = (long *)0x0;
    FUN_10a5fb164(plVar15 + 6,&lStack_48);
    plVar15 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  else {
    lVar8 = *(long *)(lVar14 + 0x268);
    if ((lVar8 == 0) ||
       (___dynamic_cast(lVar8,&PTR_DAT_110bb3788,&PTR_DAT_110bab2b8,0xfffffffffffffffe), lVar8 == 0)
       ) {
      lStack_48 = 0;
      plStack_40 = (long *)0x0;
    }
    else {
      plStack_40 = *(long **)(lVar14 + 0x270);
      lStack_48 = lVar8;
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    FUN_10a5fb164(plVar15 + 6,&lStack_48);
    plVar1 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar2 = plStack_40 + 1;
      do {
        lVar14 = *plVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plVar15[6] == 0) {
      puVar9 = &UNK_10f6688e1;
      FUN_10a00946c();
      if (cStack_31 < '\0') {
        __ZdlPv(lStack_48);
      }
      __Unwind_Resume();
      lVar14 = *(long *)(**(long **)(puVar9 + 0x228) + 0x178);
      func_0x00010a0d8ae0(lVar14);
      fVar22 = *(float *)(lVar14 + 0x54);
      fVar24 = *(float *)(lVar14 + 0x58);
      fVar25 = *(float *)(lVar14 + 0x5c);
      fVar23 = *(float *)(lVar14 + 0x60);
      fVar16 = fVar22 * fVar23 + fVar25 * fVar24;
      fVar16 = fVar16 + fVar16;
      uVar17 = (ulong)(uint)fVar16;
      fVar16 = ABS(fVar16);
      bVar6 = false;
      bVar7 = true;
      if (ABS(((-(fVar22 * fVar22) + fVar23 * fVar23) - fVar24 * fVar24) + fVar25 * fVar25) <=
          1.1920929e-07) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar16)) {
          bVar6 = fVar16 == 1.1920929e-07;
          bVar7 = 1.1920929e-07 <= fVar16;
        }
      }
      if (!bVar7 || bVar6) {
        fVar16 = fVar22;
        _atan2f(fVar22,fVar23);
        uVar17 = (ulong)(uint)(fVar16 + fVar16);
      }
      else {
        _atan2f();
      }
      fVar16 = fVar25 * fVar23 + fVar24 * fVar22;
      fVar16 = fVar16 + fVar16;
      uVar18 = (ulong)(uint)fVar16;
      fVar16 = ABS(fVar16);
      bVar6 = false;
      bVar7 = true;
      if (ABS((fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * -fVar24) - fVar25 * fVar25) <=
          1.1920929e-07) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar16)) {
          bVar6 = fVar16 == 1.1920929e-07;
          bVar7 = 1.1920929e-07 <= fVar16;
        }
      }
      uVar21 = 0;
      if (bVar7 && !bVar6) {
        _atan2f();
        uVar21 = uVar18;
      }
      fVar22 = (-(fVar23 * fVar24) + fVar25 * fVar22) * -2.0;
      fVar16 = -1.0;
      if (-1.0 <= fVar22) {
        fVar16 = fVar22;
      }
      fVar22 = 1.0;
      if (fVar16 <= 1.0) {
        fVar22 = fVar16;
      }
      uVar19 = (ulong)(uint)fVar22;
      _asinf(uVar19);
      FUN_10a3c829c(&pppuStack_d8,puVar9);
      uVar18 = uStack_d0;
      if (-1 < (char)bStack_c1) {
        uVar18 = (ulong)bStack_c1;
      }
      FUN_10a003c90(apppuStack_1e8,uVar18 + 0xd,&pppuStack_200);
      ppppuVar3 = (undefined8 ****)apppuStack_1e8[0];
      if (-1 < cStack_1d1) {
        ppppuVar3 = apppuStack_1e8;
      }
      if (uVar18 != 0) {
        ppppuVar10 = (undefined8 ****)pppuStack_d8;
        if (-1 < (char)bStack_c1) {
          ppppuVar10 = &pppuStack_d8;
        }
        _memmove(ppppuVar3,ppppuVar10,uVar18);
      }
      puVar13 = (undefined8 *)((long)ppppuVar3 + uVar18);
      *puVar13 = 0x6e4965636166202c;
      *(undefined8 *)((long)puVar13 + 5) = 0x203a7865646e4965;
      *(undefined1 *)((long)puVar13 + 0xd) = 0;
      __ZNSt3__19to_stringEi(&pppuStack_200,*(undefined4 *)(*(long *)(puVar9 + 0x228) + 0x58));
      ppppuVar3 = (undefined8 ****)pppuStack_200;
      if (-1 < (char)bStack_1e9) {
        uStack_1f8 = (ulong)bStack_1e9;
        ppppuVar3 = &pppuStack_200;
      }
      ppppuVar10 = apppuStack_1e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar10,ppppuVar3,uStack_1f8);
      ppuStack_1c8 = ppppuVar10[1];
      ppuStack_1d0 = *ppppuVar10;
      ppuStack_1c0 = ppppuVar10[2];
      ppppuVar10[1] = (undefined8 ***)0x0;
      ppppuVar10[2] = (undefined8 ***)0x0;
      *ppppuVar10 = (undefined8 ***)0x0;
      pppuVar11 = &ppuStack_1d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar11,&UNK_10f66910e,0xe);
      puStack_1a8 = pppuVar11[1];
      puStack_1b0 = *pppuVar11;
      puStack_1a0 = pppuVar11[2];
      pppuVar11[1] = (undefined8 **)0x0;
      pppuVar11[2] = (undefined8 **)0x0;
      *pppuVar11 = (undefined8 **)0x0;
      FUN_10a5fbd7c(*(undefined8 *)(puVar9 + 0x228));
      __ZNSt3__19to_stringEm(&pppuStack_218);
      ppppuVar3 = (undefined8 ****)pppuStack_218;
      if (-1 < (char)bStack_201) {
        uStack_210 = (ulong)bStack_201;
        ppppuVar3 = &pppuStack_218;
      }
      ppuVar12 = &puStack_1b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar12,ppppuVar3,uStack_210);
      uStack_188 = ppuVar12[1];
      uStack_190 = *ppuVar12;
      lStack_180 = (long)ppuVar12[2];
      ppuVar12[1] = (undefined8 *)0x0;
      ppuVar12[2] = (undefined8 *)0x0;
      *ppuVar12 = (undefined8 *)0x0;
      puVar13 = &uStack_190;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar13,&UNK_10f66911d,0x14);
      uStack_168 = puVar13[1];
      uStack_170 = *puVar13;
      lStack_160 = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      __ZNSt3__19to_stringEf(&pppuStack_230,uVar17);
      ppppuVar3 = (undefined8 ****)pppuStack_230;
      if (-1 < (char)bStack_219) {
        uStack_228 = (ulong)bStack_219;
        ppppuVar3 = &pppuStack_230;
      }
      puVar13 = &uStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar13,ppppuVar3,uStack_228);
      uStack_148 = puVar13[1];
      uStack_150 = *puVar13;
      uStack_140 = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar13 = &uStack_150;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar13,&UNK_10f667c87,5);
      uStack_128 = puVar13[1];
      uStack_130 = *puVar13;
      uStack_120 = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      __ZNSt3__19to_stringEf(&pppuStack_248,uVar19);
      ppppuVar3 = (undefined8 ****)pppuStack_248;
      if (-1 < (char)bStack_231) {
        uStack_240 = (ulong)bStack_231;
        ppppuVar3 = &pppuStack_248;
      }
      puVar13 = &uStack_130;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar13,ppppuVar3,uStack_240);
      uStack_108 = puVar13[1];
      uStack_110 = *puVar13;
      uStack_100 = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar13 = &uStack_110;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar13,&UNK_10f667c8d,5);
      uStack_e8 = puVar13[1];
      uStack_f0 = *puVar13;
      uStack_e0 = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      __ZNSt3__19to_stringEf(&puStack_260,uVar21);
      ppuVar5 = (undefined1 **)puStack_260;
      if (-1 < (char)bStack_249) {
        uStack_258 = (ulong)bStack_249;
        ppuVar5 = &puStack_260;
      }
      puVar13 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar13,ppuVar5,uStack_258);
      uVar20 = *puVar13;
      extraout_x8[1] = puVar13[1];
      *extraout_x8 = uVar20;
      extraout_x8[2] = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      if ((char)bStack_249 < '\0') {
        __ZdlPv(puStack_260);
      }
      if ((char)bStack_231 < '\0') {
        __ZdlPv(pppuStack_248);
      }
      if ((char)bStack_219 < '\0') {
        __ZdlPv(pppuStack_230);
      }
      if (lStack_160 < 0) {
        __ZdlPv(uStack_170);
      }
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      if ((char)bStack_201 < '\0') {
        __ZdlPv(pppuStack_218);
      }
      if ((long)puStack_1a0 < 0) {
        __ZdlPv(puStack_1b0);
      }
      if ((long)ppuStack_1c0 < 0) {
        __ZdlPv(ppuStack_1d0);
      }
      if ((char)bStack_1e9 < '\0') {
        __ZdlPv(pppuStack_200);
      }
      if (cStack_1d1 < '\0') {
        __ZdlPv(apppuStack_1e8[0]);
      }
      if ((char)bStack_c1 < '\0') {
        __ZdlPv(pppuStack_d8);
      }
      return;
    }
    func_0x00010a04a704(plVar15 + 8,param_2);
    *(undefined1 *)(*(long *)(*(long *)(*plVar15 + 0x170) + 3000) + 0x120) = 1;
  }
  return;
}



/* Entry: 10a5fd570; end: 10a5fdba7;  */

/* WARNING: Removing unreachable block (ram,0x00010a5fd970) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd940) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd950) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd980) */

void FUN_10a5fd570(undefined8 *param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 *puStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  undefined8 ***pppuStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  undefined8 ***pppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined8 ***pppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined8 ***apppuStack_198 [2];
  char cStack_181;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  
  lVar9 = *(long *)(**(long **)(param_2 + 0x228) + 0x178);
  func_0x00010a0d8ae0(lVar9);
  fVar16 = *(float *)(lVar9 + 0x54);
  fVar18 = *(float *)(lVar9 + 0x58);
  fVar19 = *(float *)(lVar9 + 0x5c);
  fVar17 = *(float *)(lVar9 + 0x60);
  fVar10 = fVar16 * fVar17 + fVar19 * fVar18;
  fVar10 = fVar10 + fVar10;
  uVar11 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS(((-(fVar16 * fVar16) + fVar17 * fVar17) - fVar18 * fVar18) + fVar19 * fVar19) <=
      1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  if (!bVar4 || bVar3) {
    fVar10 = fVar16;
    _atan2f(fVar16,fVar17);
    uVar11 = (ulong)(uint)(fVar10 + fVar10);
  }
  else {
    _atan2f();
  }
  fVar10 = fVar19 * fVar17 + fVar18 * fVar16;
  fVar10 = fVar10 + fVar10;
  uVar12 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS((fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * -fVar18) - fVar19 * fVar19) <= 1.1920929e-07
     ) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  uVar15 = 0;
  if (bVar4 && !bVar3) {
    _atan2f();
    uVar15 = uVar12;
  }
  fVar16 = (-(fVar17 * fVar18) + fVar19 * fVar16) * -2.0;
  fVar10 = -1.0;
  if (-1.0 <= fVar16) {
    fVar10 = fVar16;
  }
  fVar16 = 1.0;
  if (fVar10 <= 1.0) {
    fVar16 = fVar10;
  }
  uVar13 = (ulong)(uint)fVar16;
  _asinf(uVar13);
  FUN_10a3c829c(&pppuStack_88,param_2);
  uVar12 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar12 = (ulong)bStack_71;
  }
  FUN_10a003c90(apppuStack_198,uVar12 + 0xd,&pppuStack_1b0);
  ppppuVar1 = (undefined8 ****)apppuStack_198[0];
  if (-1 < cStack_181) {
    ppppuVar1 = apppuStack_198;
  }
  if (uVar12 != 0) {
    ppppuVar5 = (undefined8 ****)pppuStack_88;
    if (-1 < (char)bStack_71) {
      ppppuVar5 = &pppuStack_88;
    }
    _memmove(ppppuVar1,ppppuVar5,uVar12);
  }
  puVar8 = (undefined8 *)((long)ppppuVar1 + uVar12);
  *puVar8 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar8 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar8 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&pppuStack_1b0,*(undefined4 *)(*(long *)(param_2 + 0x228) + 0x58));
  ppppuVar1 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar1 = &pppuStack_1b0;
  }
  ppppuVar5 = apppuStack_198;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar5,ppppuVar1,uStack_1a8);
  ppuStack_178 = ppppuVar5[1];
  ppuStack_180 = *ppppuVar5;
  ppuStack_170 = ppppuVar5[2];
  ppppuVar5[1] = (undefined8 ***)0x0;
  ppppuVar5[2] = (undefined8 ***)0x0;
  *ppppuVar5 = (undefined8 ***)0x0;
  pppuVar6 = &ppuStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,&UNK_10f66910e,0xe);
  puStack_158 = pppuVar6[1];
  puStack_160 = *pppuVar6;
  puStack_150 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  FUN_10a5fbd7c(*(undefined8 *)(param_2 + 0x228));
  __ZNSt3__19to_stringEm(&pppuStack_1c8);
  ppppuVar1 = (undefined8 ****)pppuStack_1c8;
  if (-1 < (char)bStack_1b1) {
    uStack_1c0 = (ulong)bStack_1b1;
    ppppuVar1 = &pppuStack_1c8;
  }
  ppuVar7 = &puStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,ppppuVar1,uStack_1c0);
  uStack_138 = ppuVar7[1];
  uStack_140 = *ppuVar7;
  lStack_130 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  puVar8 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f66911d,0x14);
  uStack_118 = puVar8[1];
  uStack_120 = *puVar8;
  lStack_110 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_1e0,uVar11);
  ppppuVar1 = (undefined8 ****)pppuStack_1e0;
  if (-1 < (char)bStack_1c9) {
    uStack_1d8 = (ulong)bStack_1c9;
    ppppuVar1 = &pppuStack_1e0;
  }
  puVar8 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppppuVar1,uStack_1d8);
  uStack_f8 = puVar8[1];
  uStack_100 = *puVar8;
  uStack_f0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f667c87,5);
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  uStack_d0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_1f8,uVar13);
  ppppuVar1 = (undefined8 ****)pppuStack_1f8;
  if (-1 < (char)bStack_1e1) {
    uStack_1f0 = (ulong)bStack_1e1;
    ppppuVar1 = &pppuStack_1f8;
  }
  puVar8 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppppuVar1,uStack_1f0);
  uStack_b8 = puVar8[1];
  uStack_c0 = *puVar8;
  uStack_b0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f667c8d,5);
  uStack_98 = puVar8[1];
  uStack_a0 = *puVar8;
  uStack_90 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&puStack_210,uVar15);
  ppuVar2 = (undefined1 **)puStack_210;
  if (-1 < (char)bStack_1f9) {
    uStack_208 = (ulong)bStack_1f9;
    ppuVar2 = &puStack_210;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppuVar2,uStack_208);
  uVar14 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar14;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)bStack_1f9 < '\0') {
    __ZdlPv(puStack_210);
  }
  if ((char)bStack_1e1 < '\0') {
    __ZdlPv(pppuStack_1f8);
  }
  if ((char)bStack_1c9 < '\0') {
    __ZdlPv(pppuStack_1e0);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if ((char)bStack_1b1 < '\0') {
    __ZdlPv(pppuStack_1c8);
  }
  if ((long)puStack_150 < 0) {
    __ZdlPv(puStack_160);
  }
  if ((long)ppuStack_170 < 0) {
    __ZdlPv(ppuStack_180);
  }
  if ((char)bStack_199 < '\0') {
    __ZdlPv(pppuStack_1b0);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(apppuStack_198[0]);
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppuStack_88);
  }
  return;
}



/* Entry: 10a5fdba8; end: 10a5fdbaf;  */

/* WARNING: Removing unreachable block (ram,0x00010a5fd970) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd940) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd950) */
/* WARNING: Removing unreachable block (ram,0x00010a5fd980) */

void FUN_10a5fdba8(undefined8 *param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 *puStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  undefined8 ***pppuStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  undefined8 ***pppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined8 ***pppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined8 ***apppuStack_198 [2];
  char cStack_181;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  
  lVar9 = *(long *)(**(long **)(param_2 + 0x218) + 0x178);
  func_0x00010a0d8ae0(lVar9);
  fVar16 = *(float *)(lVar9 + 0x54);
  fVar18 = *(float *)(lVar9 + 0x58);
  fVar19 = *(float *)(lVar9 + 0x5c);
  fVar17 = *(float *)(lVar9 + 0x60);
  fVar10 = fVar16 * fVar17 + fVar19 * fVar18;
  fVar10 = fVar10 + fVar10;
  uVar11 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS(((-(fVar16 * fVar16) + fVar17 * fVar17) - fVar18 * fVar18) + fVar19 * fVar19) <=
      1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  if (!bVar4 || bVar3) {
    fVar10 = fVar16;
    _atan2f(fVar16,fVar17);
    uVar11 = (ulong)(uint)(fVar10 + fVar10);
  }
  else {
    _atan2f();
  }
  fVar10 = fVar19 * fVar17 + fVar18 * fVar16;
  fVar10 = fVar10 + fVar10;
  uVar12 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS((fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * -fVar18) - fVar19 * fVar19) <= 1.1920929e-07
     ) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  uVar15 = 0;
  if (bVar4 && !bVar3) {
    _atan2f();
    uVar15 = uVar12;
  }
  fVar16 = (-(fVar17 * fVar18) + fVar19 * fVar16) * -2.0;
  fVar10 = -1.0;
  if (-1.0 <= fVar16) {
    fVar10 = fVar16;
  }
  fVar16 = 1.0;
  if (fVar10 <= 1.0) {
    fVar16 = fVar10;
  }
  uVar13 = (ulong)(uint)fVar16;
  _asinf(uVar13);
  FUN_10a3c829c(&pppuStack_88,param_2 + -0x10);
  uVar12 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar12 = (ulong)bStack_71;
  }
  FUN_10a003c90(apppuStack_198,uVar12 + 0xd,&pppuStack_1b0);
  ppppuVar1 = (undefined8 ****)apppuStack_198[0];
  if (-1 < cStack_181) {
    ppppuVar1 = apppuStack_198;
  }
  if (uVar12 != 0) {
    ppppuVar5 = (undefined8 ****)pppuStack_88;
    if (-1 < (char)bStack_71) {
      ppppuVar5 = &pppuStack_88;
    }
    _memmove(ppppuVar1,ppppuVar5,uVar12);
  }
  puVar8 = (undefined8 *)((long)ppppuVar1 + uVar12);
  *puVar8 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar8 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar8 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&pppuStack_1b0,*(undefined4 *)(*(long *)(param_2 + 0x218) + 0x58));
  ppppuVar1 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar1 = &pppuStack_1b0;
  }
  ppppuVar5 = apppuStack_198;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar5,ppppuVar1,uStack_1a8);
  ppuStack_178 = ppppuVar5[1];
  ppuStack_180 = *ppppuVar5;
  ppuStack_170 = ppppuVar5[2];
  ppppuVar5[1] = (undefined8 ***)0x0;
  ppppuVar5[2] = (undefined8 ***)0x0;
  *ppppuVar5 = (undefined8 ***)0x0;
  pppuVar6 = &ppuStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,&UNK_10f66910e,0xe);
  puStack_158 = pppuVar6[1];
  puStack_160 = *pppuVar6;
  puStack_150 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  FUN_10a5fbd7c(*(undefined8 *)(param_2 + 0x218));
  __ZNSt3__19to_stringEm(&pppuStack_1c8);
  ppppuVar1 = (undefined8 ****)pppuStack_1c8;
  if (-1 < (char)bStack_1b1) {
    uStack_1c0 = (ulong)bStack_1b1;
    ppppuVar1 = &pppuStack_1c8;
  }
  ppuVar7 = &puStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,ppppuVar1,uStack_1c0);
  uStack_138 = ppuVar7[1];
  uStack_140 = *ppuVar7;
  lStack_130 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  puVar8 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f66911d,0x14);
  uStack_118 = puVar8[1];
  uStack_120 = *puVar8;
  lStack_110 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_1e0,uVar11);
  ppppuVar1 = (undefined8 ****)pppuStack_1e0;
  if (-1 < (char)bStack_1c9) {
    uStack_1d8 = (ulong)bStack_1c9;
    ppppuVar1 = &pppuStack_1e0;
  }
  puVar8 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppppuVar1,uStack_1d8);
  uStack_f8 = puVar8[1];
  uStack_100 = *puVar8;
  uStack_f0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f667c87,5);
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  uStack_d0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_1f8,uVar13);
  ppppuVar1 = (undefined8 ****)pppuStack_1f8;
  if (-1 < (char)bStack_1e1) {
    uStack_1f0 = (ulong)bStack_1e1;
    ppppuVar1 = &pppuStack_1f8;
  }
  puVar8 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppppuVar1,uStack_1f0);
  uStack_b8 = puVar8[1];
  uStack_c0 = *puVar8;
  uStack_b0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f667c8d,5);
  uStack_98 = puVar8[1];
  uStack_a0 = *puVar8;
  uStack_90 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&puStack_210,uVar15);
  ppuVar2 = (undefined1 **)puStack_210;
  if (-1 < (char)bStack_1f9) {
    uStack_208 = (ulong)bStack_1f9;
    ppuVar2 = &puStack_210;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppuVar2,uStack_208);
  uVar14 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar14;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)bStack_1f9 < '\0') {
    __ZdlPv(puStack_210);
  }
  if ((char)bStack_1e1 < '\0') {
    __ZdlPv(pppuStack_1f8);
  }
  if ((char)bStack_1c9 < '\0') {
    __ZdlPv(pppuStack_1e0);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if ((char)bStack_1b1 < '\0') {
    __ZdlPv(pppuStack_1c8);
  }
  if ((long)puStack_150 < 0) {
    __ZdlPv(puStack_160);
  }
  if ((long)ppuStack_170 < 0) {
    __ZdlPv(ppuStack_180);
  }
  if ((char)bStack_199 < '\0') {
    __ZdlPv(pppuStack_1b0);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(apppuStack_198[0]);
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppuStack_88);
  }
  return;
}



/* Entry: 10a5fdbb0; end: 10a5fe283;  */

uint FUN_10a5fdbb0(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  undefined **ppuVar12;
  long unaff_x19;
  long *unaff_x20;
  long lVar13;
  int iVar14;
  long *unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  code *unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar7 = *(long *)(param_1 + 0x228);
    plVar4 = *(long **)(lVar7 + 0x30);
    if (plVar4 == (long *)0x0) {
      lVar13 = *(long *)(param_2 + 0x68);
      lVar15 = lVar7 + 0xb8;
      func_0x00010ab17e00(lVar15,*(undefined4 *)(lVar7 + 0x58));
      unaff_x20 = (long *)0x0;
      if (lVar13 != 0) {
        plVar4 = *(long **)(lVar13 + 0x28);
        plVar11 = *(long **)(lVar13 + 0x30);
        if (plVar4 == plVar11) {
LAB_10a5fdc64:
          unaff_x20 = (long *)0x0;
          if (plVar4 != plVar11) {
            unaff_x20 = plVar4;
          }
        }
        else {
          do {
            if (((int)*plVar4 == (int)lVar15) &&
               (*(int *)((long)plVar4 + 4) == (int)((ulong)lVar15 >> 0x20))) goto LAB_10a5fdc64;
            plVar4 = plVar4 + 0x44;
          } while (plVar4 != plVar11);
          unaff_x20 = (long *)0x0;
        }
      }
      if ((*(long *)(param_2 + 0x68) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0x68) + 0x40), lVar7 == 0)) {
        unaff_x21 = (long *)0x0;
        if (unaff_x20 != (long *)0x0) goto LAB_10a5fdc9c;
LAB_10a5fdc8c:
        unaff_x22 = (undefined **)0x0;
      }
      else {
        unaff_x21 = (long *)(ulong)(2 < *(int *)(lVar7 + 0x30));
        if (unaff_x20 == (long *)0x0) goto LAB_10a5fdc8c;
LAB_10a5fdc9c:
        iVar3 = *(int *)(*(long *)(param_1 + 0x228) + 8);
        if (iVar3 == 3) {
LAB_10a5fdcac:
          lVar7 = unaff_x20[0x39];
LAB_10a5fdcb0:
          unaff_x22 = (undefined **)(ulong)(lVar7 != 0);
        }
        else {
          iVar14 = 0;
          if (iVar3 == 0) {
            iVar14 = (int)unaff_x21;
          }
          if ((iVar14 != 0) || (iVar3 - 6U < 7)) goto LAB_10a5fdcac;
          if (iVar3 == 5) {
            lVar7 = unaff_x20[0x3f];
            goto LAB_10a5fdcb0;
          }
          if (iVar3 == 4) {
            lVar7 = unaff_x20[0x3d];
            goto LAB_10a5fdcb0;
          }
          unaff_x22 = (undefined **)(ulong)*(byte *)(unaff_x20 + 6);
        }
      }
      lVar7 = param_1 + 0x1f0;
      (**(code **)(*(long *)(param_1 + 0x1f0) + 0x30))();
      FUN_10ab6e450();
      if (lVar7 != 0) {
        plVar4 = (long *)0x0;
        if (unaff_x20 != (long *)0x0) {
          plVar4 = unaff_x20 + 1;
        }
        FUN_10a5fb2f8(*(undefined8 *)(param_1 + 0x228),plVar4,unaff_x20,unaff_x21);
      }
      unaff_x23 = *(long *)(param_1 + 0x218);
      if (*(long *)(unaff_x23 + 0x30) != 0) {
        if (unaff_x20 == (long *)0x0) {
          *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        }
        else {
          FUN_10a14d430((undefined1 *)((long)register0x00000008 + -0x138),unaff_x20[3],
                        unaff_x20[4] - unaff_x20[3] >> 3,unaff_x20[0x31]);
          unaff_x23 = *(long *)(param_1 + 0x218);
        }
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x100) = *(undefined4 *)(unaff_x23 + 0x38);
        FUN_10a62033c((undefined1 *)((long)register0x00000008 + -0x120),
                      *(undefined8 *)(unaff_x23 + 0x20));
        *(int *)((long)register0x00000008 + -0x13c) = (int)unaff_x22;
        plVar4 = *(long **)(unaff_x23 + 0x28);
        if (plVar4 != (long *)0x0) {
          unaff_x24 = (undefined1 *)0x9ddfea08eb382d69;
          unaff_x26 = (undefined1 *)0x3;
          do {
            uVar8 = plVar4[2];
            uVar10 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
            uVar10 = (uVar8 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
            unaff_x27 = (code *)((uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297);
            unaff_x28 = *(undefined ***)((long)register0x00000008 + -0x118);
            if (unaff_x28 != (undefined **)0x0) {
              pcVar9 = (code *)((long)unaff_x28 + -1);
              if (((ulong)unaff_x28 & (ulong)pcVar9) == 0) {
                unaff_x22 = (undefined **)((ulong)unaff_x27 & (ulong)pcVar9);
              }
              else {
                unaff_x22 = (undefined **)unaff_x27;
                if (unaff_x28 <= unaff_x27) {
                  uVar10 = 0;
                  if (unaff_x28 != (undefined **)0x0) {
                    uVar10 = (ulong)unaff_x27 / (ulong)unaff_x28;
                  }
                  unaff_x22 = (undefined **)((long)unaff_x27 - uVar10 * (long)unaff_x28);
                }
              }
              plVar11 = *(long **)(*(long *)((long)register0x00000008 + -0x120) +
                                  (long)unaff_x22 * 8);
              if (plVar11 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar11 = (long *)*plVar11;
                    if (plVar11 == (long *)0x0) goto LAB_10a5fde4c;
                    ppuVar12 = (undefined **)plVar11[1];
                    if (ppuVar12 != (undefined **)unaff_x27) break;
                    if (plVar11[2] == uVar8) goto LAB_10a5fdfac;
                  }
                  if (((ulong)unaff_x28 & (ulong)pcVar9) == 0) {
                    ppuVar12 = (undefined **)((ulong)ppuVar12 & (ulong)pcVar9);
                  }
                  else if (unaff_x28 <= ppuVar12) {
                    uVar10 = 0;
                    if (unaff_x28 != (undefined **)0x0) {
                      uVar10 = (ulong)ppuVar12 / (ulong)unaff_x28;
                    }
                    ppuVar12 = (undefined **)((long)ppuVar12 - uVar10 * (long)unaff_x28);
                  }
                } while (ppuVar12 == unaff_x22);
              }
            }
LAB_10a5fde4c:
            unaff_x20 = (long *)0x68;
            __Znwm();
            *unaff_x20 = 0;
            unaff_x20[1] = (long)unaff_x27;
            lVar7 = plVar4[3];
            lVar15 = plVar4[2];
            unaff_x20[3] = plVar4[3];
            unaff_x20[2] = lVar15;
            if (lVar7 != 0) {
              plVar11 = (long *)(lVar7 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar2) {
                  *plVar11 = *plVar11 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *(undefined1 *)(unaff_x20 + 0xc) = 3;
            *(long **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
            if ((char)plVar4[0xc] == '\0') {
              uVar6 = 0;
            }
            else {
              FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0),plVar4 + 4);
              uVar6 = (undefined1)plVar4[0xc];
            }
            *(undefined1 *)(unaff_x20 + 0xc) = uVar6;
            if ((unaff_x28 == (undefined **)0x0) ||
               (*(float *)((long)register0x00000008 + -0x100) * (float)unaff_x28 <
                (float)(*(long *)((long)register0x00000008 + -0x108) + 1))) {
              uVar8 = 1;
              if ((undefined **)0x2 < unaff_x28) {
                uVar8 = (ulong)(((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) != 0);
              }
              uVar8 = uVar8 | (long)unaff_x28 << 1;
              uVar10 = (ulong)((float)(*(long *)((long)register0x00000008 + -0x108) + 1) /
                              *(float *)((long)register0x00000008 + -0x100));
              if (uVar8 <= uVar10) {
                uVar8 = uVar10;
              }
              FUN_10a62033c((undefined1 *)((long)register0x00000008 + -0x120),uVar8);
              unaff_x28 = *(undefined ***)((long)register0x00000008 + -0x118);
              if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
                unaff_x22 = (undefined **)((ulong)((long)unaff_x28 + -1) & (ulong)unaff_x27);
              }
              else {
                unaff_x22 = (undefined **)unaff_x27;
                if (unaff_x28 <= unaff_x27) {
                  uVar8 = 0;
                  if (unaff_x28 != (undefined **)0x0) {
                    uVar8 = (ulong)unaff_x27 / (ulong)unaff_x28;
                  }
                  unaff_x22 = (undefined **)((long)unaff_x27 - uVar8 * (long)unaff_x28);
                }
              }
            }
            lVar7 = *(long *)((long)register0x00000008 + -0x120);
            plVar11 = *(long **)(lVar7 + (long)unaff_x22 * 8);
            if (plVar11 == (long *)0x0) {
              *unaff_x20 = *(long *)((long)register0x00000008 + -0x110);
              *(long **)((long)register0x00000008 + -0x110) = unaff_x20;
              *(undefined1 **)(lVar7 + (long)unaff_x22 * 8) =
                   (undefined1 *)((long)register0x00000008 + -0x110);
              if (*unaff_x20 != 0) {
                ppuVar12 = *(undefined ***)(*unaff_x20 + 8);
                if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
                  ppuVar12 = (undefined **)((ulong)ppuVar12 & (ulong)((long)unaff_x28 + -1));
                }
                else if (unaff_x28 <= ppuVar12) {
                  uVar8 = 0;
                  if (unaff_x28 != (undefined **)0x0) {
                    uVar8 = (ulong)ppuVar12 / (ulong)unaff_x28;
                  }
                  ppuVar12 = (undefined **)((long)ppuVar12 - uVar8 * (long)unaff_x28);
                }
                *(long **)(*(long *)((long)register0x00000008 + -0x120) + (long)ppuVar12 * 8) =
                     unaff_x20;
              }
            }
            else {
              *unaff_x20 = *plVar11;
              *plVar11 = (long)unaff_x20;
            }
            *(long *)((long)register0x00000008 + -0x108) =
                 *(long *)((long)register0x00000008 + -0x108) + 1;
LAB_10a5fdfac:
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        unaff_x21 = (long *)0x0;
        plVar4 = *(long **)((long)register0x00000008 + -0x110);
        if (plVar4 != (long *)0x0) {
          unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xf0);
          unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xc0);
          unaff_x27 = FUN_10a621830;
          unaff_d8 = 0x100000001;
          unaff_x28 = &PTR_FUN_110c010b8;
          do {
            plVar11 = (long *)plVar4[2];
            lVar7 = unaff_x23 + 0x18;
            FUN_10a620d4c();
            if (lVar7 != 0) {
              if ((char)plVar4[0xc] == '\x01') {
                (*(code *)plVar4[4])((undefined1 *)((long)register0x00000008 + -0x138),plVar4 + 4);
              }
              else if ((char)plVar4[0xc] == '\x02') {
                plVar5 = plVar4 + 4;
                FUN_10a688b40();
                if (plVar5 == (long *)0x0) {
                  unaff_x20 = plVar11;
                  if (plVar11 != (long *)0x0) {
                    lVar7 = plVar4[5];
                    lVar15 = plVar4[4];
                    *(long *)((long)register0x00000008 + -0xe8) = plVar4[5];
                    *(long *)((long)register0x00000008 + -0xf0) = lVar15;
                    if (lVar7 != 0) {
                      plVar5 = (long *)(lVar7 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                        if (bVar2) {
                          *plVar5 = *plVar5 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
                    FUN_10a07b634((undefined1 *)((long)register0x00000008 + -0xe0),
                                  *(long *)((long)register0x00000008 + -0x138),
                                  *(long *)((long)register0x00000008 + -0x130),
                                  *(long *)((long)register0x00000008 + -0x130) -
                                  *(long *)((long)register0x00000008 + -0x138) >> 3);
                    *(code **)((long)register0x00000008 + -0xc0) = FUN_10a621830;
                    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c010b8;
                    unaff_x21 = (long *)0x28;
                    __Znwm();
                    lVar7 = *(long *)((long)register0x00000008 + -0xf0);
                    unaff_x21[1] = *(long *)((long)register0x00000008 + -0xe8);
                    *unaff_x21 = lVar7;
                    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                    unaff_x21[3] = 0;
                    unaff_x21[4] = 0;
                    unaff_x21[2] = 0;
                    FUN_10a07b634();
                    *(long **)((long)register0x00000008 + -0xb0) = unaff_x21;
                    FUN_10a4634ec(plVar11,(undefined1 *)((long)register0x00000008 + -0xc0));
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                              ((undefined1 *)((long)register0x00000008 + -0xb8));
                    if (*(long *)((long)register0x00000008 + -0xe0) != 0) {
                      *(long *)((long)register0x00000008 + -0xd8) =
                           *(long *)((long)register0x00000008 + -0xe0);
                      __ZdlPv();
                    }
                    unaff_x20 = *(long **)((long)register0x00000008 + -0xe8);
                    if (unaff_x20 != (long *)0x0) {
                      plVar11 = unaff_x20 + 1;
                      do {
                        lVar7 = *plVar11;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar2) {
                          *plVar11 = lVar7 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar7 == 0) {
                        (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
                      }
                    }
                  }
                }
                else {
                  *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
                  FUN_10a621660(plVar4[4],(undefined1 *)((long)register0x00000008 + -0x138));
                  iVar3 = *(int *)((long)plVar5 + 4) + -1;
                  *(int *)((long)plVar5 + 4) = iVar3;
                  unaff_x21 = plVar5;
                  if (iVar3 == 0) {
                    *(undefined4 *)plVar5 = 0;
                  }
                }
              }
            }
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        unaff_x25 = 0;
        FUN_10a621420((undefined1 *)((long)register0x00000008 + -0x120));
        if (*(long *)((long)register0x00000008 + -0x138) != 0) {
          *(long *)((long)register0x00000008 + -0x130) =
               *(long *)((long)register0x00000008 + -0x138);
          __ZdlPv();
        }
        unaff_x22 = (undefined **)(ulong)*(uint *)((long)register0x00000008 + -0x13c);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x10))();
      unaff_x22 = (undefined **)(ulong)(*plVar4 != plVar4[1]);
    }
    unaff_x19 = *(long *)(param_1 + 0x168);
    param_2 = (ulong)((uint)unaff_x22 & 1);
    FUN_10a3e4548();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return (uint)unaff_x22 & 1;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))(unaff_x24 + 8);
    FUN_10a621800((undefined1 *)((long)register0x00000008 + -0xf0));
    FUN_10a621420((undefined1 *)((long)register0x00000008 + -0x120));
    if (*(long *)((long)register0x00000008 + -0x138) != 0) {
      *(long *)((long)register0x00000008 + -0x130) = *(long *)((long)register0x00000008 + -0x138);
      __ZdlPv();
    }
    unaff_x30 = FUN_10a5fe284;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
  } while( true );
}



/* Entry: 10a5fe284; end: 10a5fe28b;  */

uint FUN_10a5fe284(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  undefined **ppuVar12;
  long *unaff_x19;
  long lVar13;
  long *unaff_x20;
  int iVar14;
  long *unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  code *unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar7 = param_1[7];
    plVar4 = *(long **)(lVar7 + 0x30);
    if (plVar4 == (long *)0x0) {
      lVar13 = *(long *)(param_2 + 0x68);
      lVar15 = lVar7 + 0xb8;
      func_0x00010ab17e00(lVar15,*(undefined4 *)(lVar7 + 0x58));
      unaff_x20 = (long *)0x0;
      if (lVar13 != 0) {
        plVar4 = *(long **)(lVar13 + 0x28);
        plVar11 = *(long **)(lVar13 + 0x30);
        if (plVar4 == plVar11) {
LAB_10a5fdc64:
          unaff_x20 = (long *)0x0;
          if (plVar4 != plVar11) {
            unaff_x20 = plVar4;
          }
        }
        else {
          do {
            if (((int)*plVar4 == (int)lVar15) &&
               (*(int *)((long)plVar4 + 4) == (int)((ulong)lVar15 >> 0x20))) goto LAB_10a5fdc64;
            plVar4 = plVar4 + 0x44;
          } while (plVar4 != plVar11);
          unaff_x20 = (long *)0x0;
        }
      }
      if ((*(long *)(param_2 + 0x68) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0x68) + 0x40), lVar7 == 0)) {
        unaff_x21 = (long *)0x0;
        if (unaff_x20 != (long *)0x0) goto LAB_10a5fdc9c;
LAB_10a5fdc8c:
        unaff_x22 = (undefined **)0x0;
      }
      else {
        unaff_x21 = (long *)(ulong)(2 < *(int *)(lVar7 + 0x30));
        if (unaff_x20 == (long *)0x0) goto LAB_10a5fdc8c;
LAB_10a5fdc9c:
        iVar3 = *(int *)(param_1[7] + 8);
        if (iVar3 == 3) {
LAB_10a5fdcac:
          lVar7 = unaff_x20[0x39];
LAB_10a5fdcb0:
          unaff_x22 = (undefined **)(ulong)(lVar7 != 0);
        }
        else {
          iVar14 = 0;
          if (iVar3 == 0) {
            iVar14 = (int)unaff_x21;
          }
          if ((iVar14 != 0) || (iVar3 - 6U < 7)) goto LAB_10a5fdcac;
          if (iVar3 == 5) {
            lVar7 = unaff_x20[0x3f];
            goto LAB_10a5fdcb0;
          }
          if (iVar3 == 4) {
            lVar7 = unaff_x20[0x3d];
            goto LAB_10a5fdcb0;
          }
          unaff_x22 = (undefined **)(ulong)*(byte *)(unaff_x20 + 6);
        }
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x30))();
      FUN_10ab6e450();
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)0x0;
        if (unaff_x20 != (long *)0x0) {
          plVar4 = unaff_x20 + 1;
        }
        FUN_10a5fb2f8(param_1[7],plVar4,unaff_x20,unaff_x21);
      }
      unaff_x23 = param_1[5];
      if (*(long *)(unaff_x23 + 0x30) != 0) {
        if (unaff_x20 == (long *)0x0) {
          *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        }
        else {
          FUN_10a14d430((undefined1 *)((long)register0x00000008 + -0x138),unaff_x20[3],
                        unaff_x20[4] - unaff_x20[3] >> 3,unaff_x20[0x31]);
          unaff_x23 = param_1[5];
        }
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x100) = *(undefined4 *)(unaff_x23 + 0x38);
        FUN_10a62033c((undefined1 *)((long)register0x00000008 + -0x120),
                      *(undefined8 *)(unaff_x23 + 0x20));
        *(int *)((long)register0x00000008 + -0x13c) = (int)unaff_x22;
        plVar4 = *(long **)(unaff_x23 + 0x28);
        if (plVar4 != (long *)0x0) {
          unaff_x24 = (undefined1 *)0x9ddfea08eb382d69;
          unaff_x26 = (undefined1 *)0x3;
          do {
            uVar8 = plVar4[2];
            uVar10 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
            uVar10 = (uVar8 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
            unaff_x27 = (code *)((uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297);
            unaff_x28 = *(undefined ***)((long)register0x00000008 + -0x118);
            if (unaff_x28 != (undefined **)0x0) {
              pcVar9 = (code *)((long)unaff_x28 + -1);
              if (((ulong)unaff_x28 & (ulong)pcVar9) == 0) {
                unaff_x22 = (undefined **)((ulong)unaff_x27 & (ulong)pcVar9);
              }
              else {
                unaff_x22 = (undefined **)unaff_x27;
                if (unaff_x28 <= unaff_x27) {
                  uVar10 = 0;
                  if (unaff_x28 != (undefined **)0x0) {
                    uVar10 = (ulong)unaff_x27 / (ulong)unaff_x28;
                  }
                  unaff_x22 = (undefined **)((long)unaff_x27 - uVar10 * (long)unaff_x28);
                }
              }
              plVar11 = *(long **)(*(long *)((long)register0x00000008 + -0x120) +
                                  (long)unaff_x22 * 8);
              if (plVar11 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar11 = (long *)*plVar11;
                    if (plVar11 == (long *)0x0) goto LAB_10a5fde4c;
                    ppuVar12 = (undefined **)plVar11[1];
                    if (ppuVar12 != (undefined **)unaff_x27) break;
                    if (plVar11[2] == uVar8) goto LAB_10a5fdfac;
                  }
                  if (((ulong)unaff_x28 & (ulong)pcVar9) == 0) {
                    ppuVar12 = (undefined **)((ulong)ppuVar12 & (ulong)pcVar9);
                  }
                  else if (unaff_x28 <= ppuVar12) {
                    uVar10 = 0;
                    if (unaff_x28 != (undefined **)0x0) {
                      uVar10 = (ulong)ppuVar12 / (ulong)unaff_x28;
                    }
                    ppuVar12 = (undefined **)((long)ppuVar12 - uVar10 * (long)unaff_x28);
                  }
                } while (ppuVar12 == unaff_x22);
              }
            }
LAB_10a5fde4c:
            unaff_x20 = (long *)0x68;
            __Znwm();
            *unaff_x20 = 0;
            unaff_x20[1] = (long)unaff_x27;
            lVar7 = plVar4[3];
            lVar15 = plVar4[2];
            unaff_x20[3] = plVar4[3];
            unaff_x20[2] = lVar15;
            if (lVar7 != 0) {
              plVar11 = (long *)(lVar7 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar2) {
                  *plVar11 = *plVar11 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *(undefined1 *)(unaff_x20 + 0xc) = 3;
            *(long **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
            if ((char)plVar4[0xc] == '\0') {
              uVar6 = 0;
            }
            else {
              FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0),plVar4 + 4);
              uVar6 = (undefined1)plVar4[0xc];
            }
            *(undefined1 *)(unaff_x20 + 0xc) = uVar6;
            if ((unaff_x28 == (undefined **)0x0) ||
               (*(float *)((long)register0x00000008 + -0x100) * (float)unaff_x28 <
                (float)(*(long *)((long)register0x00000008 + -0x108) + 1))) {
              uVar8 = 1;
              if ((undefined **)0x2 < unaff_x28) {
                uVar8 = (ulong)(((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) != 0);
              }
              uVar8 = uVar8 | (long)unaff_x28 << 1;
              uVar10 = (ulong)((float)(*(long *)((long)register0x00000008 + -0x108) + 1) /
                              *(float *)((long)register0x00000008 + -0x100));
              if (uVar8 <= uVar10) {
                uVar8 = uVar10;
              }
              FUN_10a62033c((undefined1 *)((long)register0x00000008 + -0x120),uVar8);
              unaff_x28 = *(undefined ***)((long)register0x00000008 + -0x118);
              if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
                unaff_x22 = (undefined **)((ulong)((long)unaff_x28 + -1) & (ulong)unaff_x27);
              }
              else {
                unaff_x22 = (undefined **)unaff_x27;
                if (unaff_x28 <= unaff_x27) {
                  uVar8 = 0;
                  if (unaff_x28 != (undefined **)0x0) {
                    uVar8 = (ulong)unaff_x27 / (ulong)unaff_x28;
                  }
                  unaff_x22 = (undefined **)((long)unaff_x27 - uVar8 * (long)unaff_x28);
                }
              }
            }
            lVar7 = *(long *)((long)register0x00000008 + -0x120);
            plVar11 = *(long **)(lVar7 + (long)unaff_x22 * 8);
            if (plVar11 == (long *)0x0) {
              *unaff_x20 = *(long *)((long)register0x00000008 + -0x110);
              *(long **)((long)register0x00000008 + -0x110) = unaff_x20;
              *(undefined1 **)(lVar7 + (long)unaff_x22 * 8) =
                   (undefined1 *)((long)register0x00000008 + -0x110);
              if (*unaff_x20 != 0) {
                ppuVar12 = *(undefined ***)(*unaff_x20 + 8);
                if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
                  ppuVar12 = (undefined **)((ulong)ppuVar12 & (ulong)((long)unaff_x28 + -1));
                }
                else if (unaff_x28 <= ppuVar12) {
                  uVar8 = 0;
                  if (unaff_x28 != (undefined **)0x0) {
                    uVar8 = (ulong)ppuVar12 / (ulong)unaff_x28;
                  }
                  ppuVar12 = (undefined **)((long)ppuVar12 - uVar8 * (long)unaff_x28);
                }
                *(long **)(*(long *)((long)register0x00000008 + -0x120) + (long)ppuVar12 * 8) =
                     unaff_x20;
              }
            }
            else {
              *unaff_x20 = *plVar11;
              *plVar11 = (long)unaff_x20;
            }
            *(long *)((long)register0x00000008 + -0x108) =
                 *(long *)((long)register0x00000008 + -0x108) + 1;
LAB_10a5fdfac:
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        unaff_x21 = (long *)0x0;
        plVar4 = *(long **)((long)register0x00000008 + -0x110);
        if (plVar4 != (long *)0x0) {
          unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xf0);
          unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xc0);
          unaff_x27 = FUN_10a621830;
          unaff_d8 = 0x100000001;
          unaff_x28 = &PTR_FUN_110c010b8;
          do {
            plVar11 = (long *)plVar4[2];
            lVar7 = unaff_x23 + 0x18;
            FUN_10a620d4c();
            if (lVar7 != 0) {
              if ((char)plVar4[0xc] == '\x01') {
                (*(code *)plVar4[4])((undefined1 *)((long)register0x00000008 + -0x138),plVar4 + 4);
              }
              else if ((char)plVar4[0xc] == '\x02') {
                plVar5 = plVar4 + 4;
                FUN_10a688b40();
                if (plVar5 == (long *)0x0) {
                  unaff_x20 = plVar11;
                  if (plVar11 != (long *)0x0) {
                    lVar7 = plVar4[5];
                    lVar15 = plVar4[4];
                    *(long *)((long)register0x00000008 + -0xe8) = plVar4[5];
                    *(long *)((long)register0x00000008 + -0xf0) = lVar15;
                    if (lVar7 != 0) {
                      plVar5 = (long *)(lVar7 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                        if (bVar2) {
                          *plVar5 = *plVar5 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
                    FUN_10a07b634((undefined1 *)((long)register0x00000008 + -0xe0),
                                  *(long *)((long)register0x00000008 + -0x138),
                                  *(long *)((long)register0x00000008 + -0x130),
                                  *(long *)((long)register0x00000008 + -0x130) -
                                  *(long *)((long)register0x00000008 + -0x138) >> 3);
                    *(code **)((long)register0x00000008 + -0xc0) = FUN_10a621830;
                    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c010b8;
                    unaff_x21 = (long *)0x28;
                    __Znwm();
                    lVar7 = *(long *)((long)register0x00000008 + -0xf0);
                    unaff_x21[1] = *(long *)((long)register0x00000008 + -0xe8);
                    *unaff_x21 = lVar7;
                    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                    unaff_x21[3] = 0;
                    unaff_x21[4] = 0;
                    unaff_x21[2] = 0;
                    FUN_10a07b634();
                    *(long **)((long)register0x00000008 + -0xb0) = unaff_x21;
                    FUN_10a4634ec(plVar11,(undefined1 *)((long)register0x00000008 + -0xc0));
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                              ((undefined1 *)((long)register0x00000008 + -0xb8));
                    if (*(long *)((long)register0x00000008 + -0xe0) != 0) {
                      *(long *)((long)register0x00000008 + -0xd8) =
                           *(long *)((long)register0x00000008 + -0xe0);
                      __ZdlPv();
                    }
                    unaff_x20 = *(long **)((long)register0x00000008 + -0xe8);
                    if (unaff_x20 != (long *)0x0) {
                      plVar11 = unaff_x20 + 1;
                      do {
                        lVar7 = *plVar11;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar2) {
                          *plVar11 = lVar7 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar7 == 0) {
                        (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
                      }
                    }
                  }
                }
                else {
                  *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
                  FUN_10a621660(plVar4[4],(undefined1 *)((long)register0x00000008 + -0x138));
                  iVar3 = *(int *)((long)plVar5 + 4) + -1;
                  *(int *)((long)plVar5 + 4) = iVar3;
                  unaff_x21 = plVar5;
                  if (iVar3 == 0) {
                    *(undefined4 *)plVar5 = 0;
                  }
                }
              }
            }
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        unaff_x25 = 0;
        FUN_10a621420((undefined1 *)((long)register0x00000008 + -0x120));
        if (*(long *)((long)register0x00000008 + -0x138) != 0) {
          *(long *)((long)register0x00000008 + -0x130) =
               *(long *)((long)register0x00000008 + -0x138);
          __ZdlPv();
        }
        unaff_x22 = (undefined **)(ulong)*(uint *)((long)register0x00000008 + -0x13c);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x10))();
      unaff_x22 = (undefined **)(ulong)(*plVar4 != plVar4[1]);
    }
    unaff_x19 = (long *)param_1[-0x11];
    param_2 = (ulong)((uint)unaff_x22 & 1);
    FUN_10a3e4548();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return (uint)unaff_x22 & 1;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))(unaff_x24 + 8);
    FUN_10a621800((undefined1 *)((long)register0x00000008 + -0xf0));
    FUN_10a621420((undefined1 *)((long)register0x00000008 + -0x120));
    if (*(long *)((long)register0x00000008 + -0x138) != 0) {
      *(long *)((long)register0x00000008 + -0x130) = *(long *)((long)register0x00000008 + -0x138);
      __ZdlPv();
    }
    unaff_x30 = FUN_10a5fe284;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
  } while( true );
}



/* Entry: 10a5fe28c; end: 10a5fe307;  */

void FUN_10a5fe28c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5fe308; end: 10a5fe357;  */

void FUN_10a5fe308(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a5fe358; end: 10a5fe88f;  */

void FUN_10a5fe358(undefined8 param_1)

{
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f654e71;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  puStack_60 = &UNK_10f667746;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_50 = &UNK_10f667746;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f669132;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66913d;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66914b;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66915f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66916e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f669180;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f669193;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66919f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6691a4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6691ad;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6691ba;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6691c8;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6691d2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b054(auStack_a0);
  FUN_10a296430(param_1,&puStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a5fe890; end: 10a5fe9df;  */

int FUN_10a5fe890(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar3 = (int *)&UNK_10e4cf864;
  uVar4 = 0;
  do {
    for (; piVar1 = (int *)(&UNK_10e4cf844 + uVar4 * 8), param_1 <= *piVar1; uVar4 = uVar4 << 1 | 1)
    {
      piVar3 = piVar1;
      if (1 < uVar4) goto LAB_10a5fe8e4;
    }
    bVar2 = uVar4 == 0;
    uVar4 = 2;
  } while (bVar2);
LAB_10a5fe8e4:
  if ((piVar3 == (int *)&UNK_10e4cf864) || (param_1 < *piVar3)) {
    piVar3 = (int *)&UNK_10e4cf864;
  }
  if (piVar3 != (int *)&UNK_10e4cf864) {
    param_2 = piVar3 + 1;
  }
  return *param_2;
}



/* Entry: 10a5fe9e0; end: 10a5feafb;  */

void FUN_10a5fe9e0(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f667746;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f667746;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a5feafc(param_1,&puStack_a8);
  puStack_b8 = &UNK_10f6691e6;
  puStack_b0 = &UNK_10f6691ed;
  puStack_a8 = &UNK_10f6691dd;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f667746;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10a621994();
  puStack_b8 = &UNK_10f6691e6;
  puStack_a8 = &UNK_10f6691f6;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f667746;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  func_0x00010a621bd0(param_1,&puStack_a8,0);
  FUN_10a621d50(param_1);
  return;
}



/* Entry: 10a5feafc; end: 10a5febd3;  */

/* WARNING: Removing unreachable block (ram,0x00010a5feb94) */

undefined1  [16] FUN_10a5feafc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f669fcb,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a621898(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a5febd4; end: 10a5fec0b;  */

void FUN_10a5febd4(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *extraout_x8;
  ushort uVar9;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (param_2 != (long *)0x0) {
    if ((*(ushort *)(param_1 + 0x180) >> 6 & 1) != 0) {
      FUN_10a3c6548(param_1,&UNK_10f65373c,&UNK_10f653878);
      FUN_10a3c7c48();
      func_0x00010a0d77bc(&uStack_70,*(undefined8 *)(param_1 + 0x168));
      extraout_x8[1] = plStack_68;
      *extraout_x8 = uStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar7 = plStack_68 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      return;
    }
    (**(code **)(*param_2 + 0xa8))
              (&stack0xffffffffffffffc8,param_2,&PTR_DAT_110bd14e8,&UNK_10f653596,0);
    if (*(char *)(param_1 + 0x167) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x150));
    }
    *(undefined8 *)(param_1 + 0x158) = in_stack_ffffffffffffffd0;
    *(undefined8 *)(param_1 + 0x150) = in_stack_ffffffffffffffc8;
    *(undefined8 *)(param_1 + 0x160) = in_stack_ffffffffffffffd8;
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd0088,1);
    uVar9 = 0;
    if ((int)plVar7 == 0) {
      uVar9 = 2;
    }
    *(ushort *)(param_1 + 0x180) = *(ushort *)(param_1 + 0x180) & 0xfffd | uVar9;
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd00a8,0);
    uVar9 = 0x100;
    if ((int)plVar7 == 0) {
      uVar9 = 0;
    }
    *(ushort *)(param_1 + 0x180) = *(ushort *)(param_1 + 0x180) & 0xfeff | uVar9;
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd00c8,*(undefined4 *)(param_1 + 0x184));
    *(int *)(param_1 + 0x184) = (int)plVar7;
    lVar8 = *(long *)(param_1 + 0x170);
    if (*(int *)(*(long *)(lVar8 + 0xa20) + 0x18) < 0xe2) {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd00e8);
      if (((ulong)plVar7 & 1) == 0) {
        lVar8 = *(long *)(param_1 + 0x170);
      }
      else {
        (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd00e8,*(undefined4 *)(param_1 + 0x188));
        *(int *)(param_1 + 0x188) = (int)param_2;
        lVar8 = *(long *)(param_1 + 0x170);
        *(ushort *)(lVar8 + 0xd1e) = *(ushort *)(lVar8 + 0xd1e) | 0x10;
      }
    }
    uVar1 = *(uint *)(lVar8 + 0xd10);
    if (*(uint *)(lVar8 + 0xd10) <= *(uint *)(param_1 + 0x188)) {
      uVar1 = *(uint *)(param_1 + 0x188);
    }
    *(uint *)(lVar8 + 0xd10) = uVar1;
    FUN_10a3c7800(param_1);
    return;
  }
  plVar7 = (long *)&UNK_10f656ee2;
  FUN_10a00946c();
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x140))(param_2,&PTR_DAT_110bd3000,plVar7[8],plVar7[9]);
    (**(code **)(*plVar7 + 0x38))();
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd11d8,&stack0xffffffffffffffc0);
    FUN_10a00d760(param_2,&PTR_DAT_110bd14e8,plVar7 + 0x2a);
    plVar4 = plVar7;
    (**(code **)(*plVar7 + 0x60))(plVar7);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd0088,plVar4);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd00a8,*(ushort *)(plVar7 + 0x30) >> 8 & 1);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd00c8,*(undefined4 *)((long)plVar7 + 0x184))
    ;
    return;
  }
  puVar6 = &UNK_10f656ee2;
  FUN_10a00946c();
  plVar7 = *(long **)(*(long *)(*(long *)(puVar6 + 0x170) + 0xba0) + 8);
  if (plVar7 == (long *)0x0) {
    return;
  }
  if (*(char *)((long)plVar7 + 0x3f) < '\0') {
    if (plVar7[6] == 0) {
      return;
    }
  }
  else if (*(char *)((long)plVar7 + 0x3f) == '\0') {
    return;
  }
  if (*(float *)(plVar7 + 8) <= (float)*(double *)(*(long *)(*(long *)(puVar6 + 0x170) + 0x850) + 8)
     ) {
    if (*(char *)((long)plVar7 + 0x3f) < '\0') {
      if (plVar7[6] == 0) {
        return;
      }
      *(undefined1 *)plVar7[5] = 0;
      plVar7[6] = 0;
    }
    else {
      if (*(char *)((long)plVar7 + 0x3f) == '\0') {
        return;
      }
      *(undefined1 *)(plVar7 + 5) = 0;
      *(undefined1 *)((long)plVar7 + 0x3f) = 0;
    }
    plVar4 = (long *)plVar7[1];
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      plVar5 = (long *)*plVar7;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5,plVar7 + 2);
      }
      plVar7 = plVar4 + 1;
      do {
        lVar8 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a5fec0c; end: 10a5fec6b;  */

void FUN_10a5fec0c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x170) + 0xba0) + 8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (*(char *)((long)plVar5 + 0x3f) < '\0') {
    if (plVar5[6] == 0) {
      return;
    }
  }
  else if (*(char *)((long)plVar5 + 0x3f) == '\0') {
    return;
  }
  if (*(float *)(plVar5 + 8) <=
      (float)*(double *)(*(long *)(*(long *)(param_1 + 0x170) + 0x850) + 8)) {
    if (*(char *)((long)plVar5 + 0x3f) < '\0') {
      if (plVar5[6] == 0) {
        return;
      }
      *(undefined1 *)plVar5[5] = 0;
      plVar5[6] = 0;
    }
    else {
      if (*(char *)((long)plVar5 + 0x3f) == '\0') {
        return;
      }
      *(undefined1 *)(plVar5 + 5) = 0;
      *(undefined1 *)((long)plVar5 + 0x3f) = 0;
    }
    plVar3 = (long *)plVar5[1];
    if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0)
       ) {
      plVar4 = (long *)*plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,plVar5 + 2);
      }
      plVar5 = plVar3 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a5fec6c; end: 10a5feecb;  */

void FUN_10a5fec6c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a57b594(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c010e0;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a5fedd0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a5fedd0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  param_1[1] = (long)plVar7;
  *param_1 = lVar10;
  return;
}



/* Entry: 10a5feecc; end: 10a5fef87;  */

undefined1  [16] FUN_10a5feecc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f662d3d;
  return auVar1;
}



/* Entry: 10a5fef88; end: 10a5ff28f;  */

void FUN_10a5fef88(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662d3d,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bfee08;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bfee08;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6528fb,FUN_10a621ed8,FUN_10a621f90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652901,FUN_10a622134,FUN_10a6221ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6691ff,FUN_10a6222c0,FUN_10a62237c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d0f37,FUN_10a622450,FUN_10a62251c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0dc,FUN_10a6225f8,FUN_10a6226c4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662d3d,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5ff274);
  (*pcVar6)();
}



/* Entry: 10a5ff290; end: 10a5ff33f;  */

void FUN_10a5ff290(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[0xa7] = &PTR_FUN_110c383b8;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0x100;
  FUN_10a4213cc(param_1,&PTR_PTR_110bfb048,param_2,param_3,0xb);
  *param_1 = &PTR_DAT_110bfac58;
  param_1[2] = &PTR_FUN_110bfae88;
  param_1[7] = &PTR_DAT_110bfaee0;
  param_1[0xd] = &PTR_DAT_110bfaf00;
  param_1[0xa7] = &PTR_DAT_110bfb000;
  param_1[0x16] = &PTR_DAT_110bfaf70;
  param_1[0x17] = &PTR_DAT_110bfafa0;
  param_1[0x9f] = 0x3f8000003f800000;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)((long)param_1 + 0x504) = 2;
  uVar1 = NEON_fmov(0x3f800000,4);
  param_1[0xa1] = uVar1;
  *(undefined4 *)(param_1 + 0xa2) = 0x3f800000;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  return;
}



/* Entry: 10a5ff340; end: 10a5ff4c3;  */

void FUN_10a5ff340(long param_1,long *param_2)

{
  FUN_10a2d5884();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c00af0,*(undefined1 *)(param_1 + 0x500));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c00b10,*(undefined1 *)(param_1 + 0x501));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bfb088,*(undefined2 *)(param_1 + 0x502));
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110c00b30,param_1 + 0x4f0);
                    /* WARNING: Could not recover jumptable at 0x00010a5ff3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110c00b50,param_1 + 0x4f8);
  return;
}



/* Entry: 10a5ff4c4; end: 10a5ff67b;  */

void FUN_10a5ff4c4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x528) == 0) {
    func_0x00010a5ffb54(&uStack_40);
    func_0x00010a2e19d8(param_1 + 0x528,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a199b74(&uStack_40,&uStack_21,&uStack_48,param_1 + 0x528);
    func_0x00010a193034(param_1 + 0x518,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a2e1a3c(&uStack_40,&uStack_48,param_1 + 0x518);
    plStack_58 = plStack_38;
    uStack_60 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(param_1,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  func_0x00010a5ffbac(param_1);
  return;
}



/* Entry: 10a5ff67c; end: 10a5ff6b7;  */

bool FUN_10a5ff67c(long param_1)

{
  return *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x179;
}



/* Entry: 10a5ff6b8; end: 10a5ff70f;  */

void FUN_10a5ff6b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_6c [40];
  undefined1 auStack_44 [36];
  
  FUN_10a5ff710(auStack_44);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0xa20);
  FUN_10a5ffa14(param_1);
  FUN_10a5ff7cc(auStack_6c,uVar1,auStack_44);
  FUN_10a5ffa8c(param_1,auStack_6c);
  return;
}



/* Entry: 10a5ff710; end: 10a5ff7cb;  */

void FUN_10a5ff710(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x168) + 0x248);
  lVar1 = *(long *)(*(long *)(param_2 + 0x170) + 0xa20);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(bool *)param_1 = lVar3 != 0;
  *(bool *)(param_1 + 1) = 0x60 < *(int *)(lVar1 + 0x18);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x308);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x308);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x30a);
  lVar1 = *(long *)(param_2 + 0x178);
  func_0x00010a0d8ae0(lVar1);
  uVar4 = *(undefined4 *)(lVar1 + 0x50);
  uVar6 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x4f8);
    puVar2 = (undefined8 *)(param_2 + 0x4f0);
  }
  else {
    FUN_10a394a64(lVar3);
    uVar5 = (undefined4)uVar6;
    func_0x00010acae698(lVar3 + 0x268);
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    puVar2 = (undefined8 *)(lVar3 + 0x2a0);
  }
  *(undefined8 *)(param_1 + 0x10) = *puVar2;
  return;
}



/* Entry: 10a5ff7cc; end: 10a5ffa13;  */

void FUN_10a5ff7cc(char *param_1,undefined4 param_2,float param_3,undefined8 param_4,char *param_5)

{
  char *pcVar1;
  char cVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  
  *param_1 = '\x02';
  auVar4 = NEON_fmov(0x3f800000,4);
  *(long *)(param_1 + 0xc) = auVar4._8_8_;
  *(long *)(param_1 + 4) = auVar4._0_8_;
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = -0x80;
  param_1[0x17] = '?';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = -0x80;
  param_1[0x1b] = '?';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  cVar2 = param_5[2];
  uVar10 = NEON_fmov(0x3f800000,4);
  pcVar1 = param_5 + 8;
  uStack_88 = *(undefined8 *)pcVar1;
  uStack_80 = 0x3f800000;
  uStack_7c = param_2;
  uStack_78 = uVar10;
  if (*param_5 == '\x01') {
    uStack_b0 = NEON_fmov(0xbf800000,4);
    uStack_a8 = 0xbf000000;
    uStack_b8 = 0x3f000000;
    uStack_c0 = uVar10;
    FUN_10a3962dc(&fStack_a0,param_4,pcVar1,param_5 + 0x10,param_5 + 3,&uStack_b0,&uStack_c0,1);
    if (cVar2 == '\x05') {
      fVar3 = (float)FUN_10a425d3c(5,&uStack_88,&uStack_7c);
      *(float *)(param_1 + 0x10) = fStack_a0;
      *(float *)(param_1 + 0x14) = fStack_9c;
      *(float *)(param_1 + 0x18) = fStack_98;
      *(undefined4 *)(param_1 + 0x1c) = uStack_94;
      *(undefined4 *)(param_1 + 0x20) = uStack_90;
      *(undefined4 *)(param_1 + 0x24) = uStack_8c;
      fVar3 = fVar3 * 0.5;
      param_3 = param_3 * 0.5;
      goto LAB_10a5ff9e4;
    }
    *(float *)(param_1 + 0x10) = fStack_a0;
    *(float *)(param_1 + 0x14) = fStack_9c;
    *(float *)(param_1 + 0x18) = fStack_98;
    *(undefined4 *)(param_1 + 0x1c) = uStack_94;
    *(undefined4 *)(param_1 + 0x20) = uStack_90;
    *(undefined4 *)(param_1 + 0x24) = uStack_8c;
  }
  else {
    fVar7 = (float)uStack_88;
    fVar8 = (float)((ulong)uStack_88 >> 0x20);
    uStack_b0 = CONCAT44(fVar8 * -0.5,fVar7 * -0.5);
    uStack_a8 = 0xbf000000;
    uStack_c0 = CONCAT44(fVar8 * 0.5,fVar7 * 0.5);
    uStack_b8 = 0x3f000000;
    FUN_10a3962dc(&fStack_a0,param_4,pcVar1,param_5 + 0x10,param_5 + 3,&uStack_b0,&uStack_c0,0);
    uVar12 = CONCAT44(uStack_90,uStack_94);
    uVar5 = *(ulong *)(param_5 + 0x18);
    uVar10 = uVar10 ^ (uVar10 ^ uVar5) &
                      ~CONCAT44(-(uint)(ABS((float)(uVar5 >> 0x20)) <= 1e-06),
                                -(uint)(ABS((float)uVar5) <= 1e-06));
    param_3 = ABS(*(float *)(param_5 + 0x20));
    fVar6 = 1e-06;
    fVar13 = 1.0;
    if (1e-06 < param_3) {
      fVar13 = *(float *)(param_5 + 0x20);
    }
    fVar9 = (float)uVar10;
    fStack_a0 = fVar7 * fVar9;
    fVar11 = (float)(uVar10 >> 0x20);
    fStack_9c = fVar8 * fVar11;
    fStack_98 = fVar13;
    fVar3 = (float)FUN_10a425d3c(cVar2,&fStack_a0,&uStack_7c);
    if (param_5[1] == '\x01') {
      uVar12 = CONCAT44(fVar8 * (param_3 / fStack_9c) *
                                (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) * -0.5,
                        fVar7 * (fVar3 / fStack_a0) * (float)*(undefined8 *)(param_5 + 0x10) * -0.5)
      ;
      uStack_8c = 0x80000000;
    }
    fVar3 = fVar3 * 0.5;
    param_3 = param_3 * 0.5;
    *(ulong *)(param_1 + 0x10) = CONCAT44(param_3 / fVar11,fVar3 / fVar9);
    *(float *)(param_1 + 0x18) = fVar6 / fVar13;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    *(undefined4 *)(param_1 + 0x24) = uStack_8c;
    if (cVar2 == '\x05') goto LAB_10a5ff9e4;
  }
  param_2 = 0x3f800000;
  cVar2 = '\x02';
  fVar3 = 1.0;
  param_3 = 1.0;
LAB_10a5ff9e4:
  *param_1 = cVar2;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(float *)(param_1 + 8) = fVar3;
  *(float *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10a5ffa14; end: 10a5ffa8b;  */

float FUN_10a5ffa14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  
  FUN_10a424150();
  lVar3 = *param_1;
  fVar4 = 1.0;
  if ((lVar3 != 0) && (plVar1 = *(long **)(lVar3 + 0x268), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0xb0))();
    plVar2 = *(long **)(lVar3 + 0x268);
    if ((plVar2 != (long *)0x0) &&
       ((**(code **)(*plVar2 + 0xb8))(), (int)plVar1 != 0 && (int)plVar2 != 0)) {
      fVar4 = (float)((ulong)plVar1 & 0xffffffff) / (float)((ulong)plVar2 & 0xffffffff);
    }
  }
  return fVar4;
}



/* Entry: 10a5ffa8c; end: 10a5ffb53;  */

void FUN_10a5ffa8c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  FUN_10a425f00(param_1,1);
  lVar5 = param_1[0x60];
  FUN_10a3e814c(lVar5,param_2 + 0x10);
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_1 + 0x502));
  uVar7 = 0x3f000000;
  fVar6 = fVar6 * 0.017453292 * 0.5;
  ___sincosf_stret();
  fStack_40 = fVar6 * 0.0;
  fStack_3c = fStack_40;
  fStack_38 = fVar6;
  uStack_34 = uVar7;
  FUN_10a3e82bc(lVar5,&fStack_40);
  FUN_10a3e3894(lVar5,param_2 + 0x1c);
  (**(code **)(*param_1 + 0x210))(param_1,*(undefined8 *)(param_1[0x2d] + 0x248));
  *(undefined1 *)((long)param_1 + 0x504) = *param_2;
  *(undefined4 *)(param_1 + 0xa1) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((long)param_1 + 0x50c) = *(undefined8 *)(param_2 + 8);
  if ((param_1[0xa5] != 0) && (param_1[0xa3] != 0)) {
    FUN_10a5fff84(param_1[0xa5],param_1 + 0xa0);
    lVar5 = param_1[0xa3];
    plVar4 = *(long **)(lVar5 + 0xd8);
    if (*(char *)((long)plVar4 + 0x1ec) == '\x01') {
      (**(code **)(*plVar4 + 0x40))(plVar4);
      *(undefined1 *)((long)plVar4 + 0x1ec) = 0;
      *(byte *)(lVar5 + 0xd0) = *(byte *)(lVar5 + 0xd0) | 1;
      if ((*(long *)(lVar5 + 0xc0) == 0) ||
         ((*(char *)(lVar5 + 0xb9) != '\0' && (*(char *)(lVar5 + 0xba) != '\0')))) {
        return;
      }
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
      }
      plVar4 = *(long **)(lVar5 + 200);
      *(long *)(lVar5 + 0xc0) = 0;
      *(undefined8 *)(lVar5 + 200) = 0;
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
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a5ffb54; end: 10a5ffc17;  */

void FUN_10a5ffb54(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 uStack_21;
  
  FUN_10a199aa4(&uStack_21);
  lVar2 = *param_1;
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x208) == 2.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x20c)))) {
    bVar1 = *(float *)(lVar2 + 0x20c) == 2.0;
  }
  if (!bVar1) {
    *(undefined8 *)(lVar2 + 0x208) = 0x4000000040000000;
    *(undefined1 *)(lVar2 + 0x1ec) = 1;
  }
  return;
}



/* Entry: 10a5ffc18; end: 10a5ffc3b;  */

void FUN_10a5ffc18(long param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x528) == 0) {
    return;
  }
  cVar3 = *(char *)(param_1 + 0x308);
  if (cVar3 != '\x05') {
    cVar3 = '\x02';
  }
  *(char *)(param_1 + 0x504) = cVar3;
  if ((*(long *)(param_1 + 0x528) != 0) && (*(long *)(param_1 + 0x518) != 0)) {
    FUN_10a5fff84(*(long *)(param_1 + 0x528),param_1 + 0x500);
    lVar4 = *(long *)(param_1 + 0x518);
    plVar5 = *(long **)(lVar4 + 0xd8);
    if (*(char *)((long)plVar5 + 0x1ec) == '\x01') {
      (**(code **)(*plVar5 + 0x40))(plVar5);
      *(undefined1 *)((long)plVar5 + 0x1ec) = 0;
      *(byte *)(lVar4 + 0xd0) = *(byte *)(lVar4 + 0xd0) | 1;
      if ((*(long *)(lVar4 + 0xc0) == 0) ||
         ((*(char *)(lVar4 + 0xb9) != '\0' && (*(char *)(lVar4 + 0xba) != '\0')))) {
        return;
      }
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
      }
      plVar5 = *(long **)(lVar4 + 200);
      *(long *)(lVar4 + 0xc0) = 0;
      *(undefined8 *)(lVar4 + 200) = 0;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *plVar1 = lVar4 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a5ffc3c; end: 10a5ffc6b;  */

void FUN_10a5ffc3c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  FUN_10a66ac20();
  FUN_10a425f00(param_1,1);
  if (*(long *)(param_1 + 0x528) == 0) {
    func_0x00010a5ffb54(&uStack_40);
    func_0x00010a2e19d8(param_1 + 0x528,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a199b74(&uStack_40,&uStack_21,&uStack_48,param_1 + 0x528);
    func_0x00010a193034(param_1 + 0x518,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a2e1a3c(&uStack_40,&uStack_48,param_1 + 0x518);
    plStack_58 = plStack_38;
    uStack_60 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(param_1,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  func_0x00010a5ffbac(param_1);
  return;
}



/* Entry: 10a5ffc6c; end: 10a5ffc73;  */

void FUN_10a5ffc6c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  lVar5 = param_1 + -0x68;
  FUN_10a66ac20();
  FUN_10a425f00(lVar5,1);
  if (*(long *)(param_1 + 0x4c0) == 0) {
    func_0x00010a5ffb54(&uStack_40);
    func_0x00010a2e19d8(param_1 + 0x4c0,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x108);
    FUN_10a199b74(&uStack_40,&uStack_21,&uStack_48,param_1 + 0x4c0);
    func_0x00010a193034(param_1 + 0x4b0,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x108);
    FUN_10a2e1a3c(&uStack_40,&uStack_48,param_1 + 0x4b0);
    plStack_58 = plStack_38;
    uStack_60 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(lVar5,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  func_0x00010a5ffbac(lVar5);
  return;
}



/* Entry: 10a5ffc74; end: 10a5fff83;  */

void FUN_10a5ffc74(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    lVar9 = param_4 + 0x88;
    func_0x00010a35bf90(lVar9,&plStack_60);
    puVar4 = (undefined8 *)((ulong)&plStack_60 | 8);
    pplVar7 = &plStack_60;
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar9 + 0x28);
      pplVar7 = (long **)(lVar9 + 0x20);
    }
    uVar10 = *puVar4;
    plVar11 = *pplVar7;
  }
  plVar12 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar12);
  FUN_10a578020(plVar12,plVar11,uVar10);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar8 = plVar11 + 1;
  *plVar8 = 0;
  *plVar11 = (long)&PTR_FUN_110c01130;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar12;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (plVar12 != (long *)0x0) {
    if (plVar12[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
    }
    else {
      if (*(long *)(plVar12[6] + 8) != -1) goto LAB_10a5ffde0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a5ffde0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar12 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar12 + 0x30) & 0xfffc;
  *(ushort *)(plVar12 + 0x30) = uVar3 | *(ushort *)(plVar12 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar12 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_60 = plVar12;
  plStack_58 = plVar11;
  FUN_10a3c7ce8(param_3,&plStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar12 + 0x130))(plVar12,plVar8);
  (**(code **)(*param_2 + 0x218))(param_2,plVar12,param_4);
  FUN_10a5ff4c4(plVar12);
  if ((char)plVar12[0xa0] != (char)param_2[0xa0]) {
    *(char *)(plVar12 + 0xa0) = (char)param_2[0xa0];
    func_0x00010a5ffbac(plVar12);
  }
  if (*(char *)((long)plVar12 + 0x501) != *(char *)((long)param_2 + 0x501)) {
    *(char *)((long)plVar12 + 0x501) = *(char *)((long)param_2 + 0x501);
    func_0x00010a5ffbac(plVar12);
  }
  if (*(short *)((long)plVar12 + 0x502) != *(short *)((long)param_2 + 0x502)) {
    *(short *)((long)plVar12 + 0x502) = *(short *)((long)param_2 + 0x502);
    func_0x00010a5ffbac(plVar12);
  }
  *param_1 = (long)plVar12;
  param_1[1] = (long)plVar11;
  return;
}



/* Entry: 10a5fff84; end: 10a600057;  */

undefined * FUN_10a5fff84(undefined *param_1,char *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1[0x1f0] != *param_2) {
    param_1[0x1f0] = *param_2;
    param_1[0x1ec] = 1;
  }
  if (param_1[0x1f1] != param_2[1]) {
    param_1[0x1f1] = param_2[1];
    param_1[0x1ec] = 1;
  }
  if (*(short *)(param_1 + 0x1f2) != *(short *)(param_2 + 2)) {
    *(short *)(param_1 + 0x1f2) = *(short *)(param_2 + 2);
    param_1[0x1ec] = 1;
  }
  if (param_1[500] != param_2[4]) {
    param_1[500] = param_2[4];
    param_1[0x1ec] = 1;
  }
  fVar2 = *(float *)(param_2 + 8);
  if (*(float *)(param_1 + 0x210) != fVar2) {
    if (fVar2 <= 0.0) {
      FUN_10a00946c(&UNK_10f660f37);
      return &UNK_10f669fe4;
    }
    *(float *)(param_1 + 0x210) = fVar2;
    param_1[0x1ec] = 1;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x218) == *(float *)(param_2 + 0xc)) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x21c)) && !NAN(*(float *)(param_2 + 0x10)))) {
    bVar1 = *(float *)(param_1 + 0x21c) == *(float *)(param_2 + 0x10);
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0xc);
    param_1[0x1ec] = 1;
  }
  return param_1;
}



/* Entry: 10a600058; end: 10a60011f;  */

undefined1  [16] FUN_10a600058(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f669fe4;
  return auVar1;
}



/* Entry: 10a600120; end: 10a600173;  */

void FUN_10a600120(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10a600174(param_1,&uStack_58);
  FUN_10a622984();
  return;
}



/* Entry: 10a600174; end: 10a60024b;  */

/* WARNING: Removing unreachable block (ram,0x00010a60020c) */

undefined1  [16] FUN_10a600174(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f669fe4,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a622888(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a60024c; end: 10a6004cb;  */

void FUN_10a60024c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    lStack_50 = param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar9 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar9 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    plVar9 = (long *)*plVar9;
  }
  lVar10 = param_2[0x2e];
  FUN_10a3dd220(lVar10);
  FUN_10a581d60(lVar10,plVar9,uVar8);
  plVar9 = (long *)0x28;
  __Znwm();
  plVar11 = plVar9 + 1;
  *plVar11 = 0;
  *plVar9 = (long)&PTR_FUN_110c01180;
  plVar9[2] = 0;
  plVar9[3] = lVar10;
  plVar9[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar9;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a6003b0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar7 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
LAB_10a6003b0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar9;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar10 + 0x20c) = 0;
  *(int *)(lVar10 + 0x210) = (int)param_2;
  *param_1 = lVar10;
  param_1[1] = (long)plVar9;
  return;
}



/* Entry: 10a6004cc; end: 10a6004d3;  */

void FUN_10a6004cc(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  FUN_10a422a34();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bbdfa0);
  lVar3 = *(long *)(param_1 + 0x2a8);
  for (lVar2 = *(long *)(param_1 + 0x2a0); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a02e230(param_2,&PTR_DAT_110bbdf80,lVar2,&UNK_10f64c7e1,0xe);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  uVar1 = param_1 + 0x390;
  FUN_10a0300fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2d5978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bbdfc0,param_1 + 0x390);
  return;
}



/* Entry: 10a6004d4; end: 10a600707;  */

void FUN_10a6004d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  long *plVar4;
  undefined1 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10a66ac20();
    *(undefined1 *)(param_1 + 0x43) = 3;
    FUN_10a38fbbc((undefined1 *)((long)register0x00000008 + -0x80),param_1[0x2e]);
    lVar5 = *(long *)((long)register0x00000008 + -0x80);
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f66920d);
    if (*(char *)(lVar5 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar5 + 0x58));
    }
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)(lVar5 + 0x58) = uVar6;
    *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined1 *)((long)register0x00000008 + -0x81) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x80);
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb0),&UNK_10f669229);
    FUN_10ab45dcc((undefined1 *)((long)register0x00000008 + -0x70),uVar6,
                  (undefined1 *)((long)register0x00000008 + -0xb0),1);
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    lVar5 = *(long *)((long)register0x00000008 + -0x70);
    *(undefined4 *)(lVar5 + 0x21e) = 0x10101;
    func_0x00010a332700(lVar5 + 0x21a,0);
    func_0x00010a332748(*(long *)((long)register0x00000008 + -0x70) + 0x219,0);
    *(undefined8 *)((long)register0x00000008 + -0xb8) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    if (*(long *)((long)register0x00000008 + -0x78) != 0) {
      plVar4 = (long *)(*(long *)((long)register0x00000008 + -0x78) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a2d54dc(param_1,(undefined1 *)((long)register0x00000008 + -0xc0));
    plVar4 = *(long **)((long)register0x00000008 + -0xb8);
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x19 = (long *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    plVar4 = *(long **)((long)register0x00000008 + -0x78);
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = plVar4;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0xc0));
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x70);
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10a600708;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10a600708; end: 10a60070f;  */

void FUN_10a600708(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 uVar6;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10a66ac20();
    *(undefined1 *)(param_1 + 0x36) = 3;
    FUN_10a38fbbc((undefined1 *)((long)register0x00000008 + -0x80),param_1[0x21]);
    lVar5 = *(long *)((long)register0x00000008 + -0x80);
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f66920d);
    if (*(char *)(lVar5 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar5 + 0x58));
    }
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)(lVar5 + 0x58) = uVar6;
    *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined1 *)((long)register0x00000008 + -0x81) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x80);
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb0),&UNK_10f669229);
    FUN_10ab45dcc((undefined1 *)((long)register0x00000008 + -0x70),uVar6,
                  (undefined1 *)((long)register0x00000008 + -0xb0),1);
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    lVar5 = *(long *)((long)register0x00000008 + -0x70);
    *(undefined4 *)(lVar5 + 0x21e) = 0x10101;
    func_0x00010a332700(lVar5 + 0x21a,0);
    func_0x00010a332748(*(long *)((long)register0x00000008 + -0x70) + 0x219,0);
    *(undefined8 *)((long)register0x00000008 + -0xb8) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    if (*(long *)((long)register0x00000008 + -0x78) != 0) {
      plVar4 = (long *)(*(long *)((long)register0x00000008 + -0x78) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a2d54dc(param_1 + -0xd,(undefined1 *)((long)register0x00000008 + -0xc0));
    plVar4 = *(long **)((long)register0x00000008 + -0xb8);
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x19 = (long *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    plVar4 = *(long **)((long)register0x00000008 + -0x78);
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = plVar4;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0xc0));
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x70);
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10a600708;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10a600710; end: 10a6007eb;  */

undefined8 * FUN_10a600710(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110bfb510;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar4 = (long *)0x68;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c011d0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_30 = plVar4 + 3;
  *plStack_30 = (long)&PTR_DAT_110befda0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xc] = 0;
  plStack_28 = plVar4;
  FUN_10a6007ec(param_1 + 3,&plStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10a6007ec; end: 10a60084f;  */

undefined8 * FUN_10a6007ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a600850; end: 10a600867;  */

void FUN_10a600850(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18) = param_2;
  return;
}



/* Entry: 10a600868; end: 10a6008af;  */

undefined1  [16] FUN_10a600868(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auVar6._8_8_ = param_3;
    auVar6._0_8_ = param_2;
    return auVar6;
  }
  FUN_10a00946c(&UNK_10f66923d);
  auVar7._8_8_ = 0x1e;
  auVar7._0_8_ = &UNK_10f64cb48;
  return auVar7;
}



/* Entry: 10a6008b0; end: 10a600997;  */

undefined1  [16] FUN_10a6008b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f64cb48;
  return auVar1;
}



/* Entry: 10a600998; end: 10a6014b3;  */

void FUN_10a600998(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64cb48,0x1e);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c02120;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x8d;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c02120;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a601494;
    FUN_10a054dac(param_1,&UNK_10f66927a,FUN_10a622ba4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a601494;
    FUN_10a054dac(param_1,&UNK_10f64bcae,FUN_10a622d08,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a601494;
    FUN_10a054dac(param_1,&UNK_10f669294,FUN_10a622e20,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a601494;
    FUN_10a054dac(param_1,&UNK_10f6692a2,FUN_10a622fb4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a601494;
    FUN_10a054dac(param_1,&UNK_10f6692b3,FUN_10a62306c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a601494;
    FUN_10a054dac(param_1,&UNK_10f6692c7,FUN_10a623190,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6692db,FUN_10a623280,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f34e513,FUN_10a62333c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6692e5,FUN_10a6233f8,FUN_10a6234b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf19c8,FUN_10a623578);
    FUN_10a0605c4(param_1,&DAT_10f477b49,FUN_10a624380,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf19e0,FUN_10a6244b0);
    FUN_10a0605c4(param_1,&UNK_10f6692f7,FUN_10a6252b8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf19f8,FUN_10a6253ec);
    FUN_10a0605c4(param_1,&DAT_10f477b56,FUN_10a6261f4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1a10,FUN_10a626328);
    FUN_10a0605c4(param_1,"onTap",FUN_10a6272c0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1a28,FUN_10a6273f4);
    FUN_10a0605c4(param_1,&DAT_10f477a86,FUN_10a6281fc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1a40,FUN_10a628330);
    FUN_10a0605c4(param_1,&UNK_10f669303,FUN_10a629138,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1a58,FUN_10a62926c);
    FUN_10a0605c4(param_1,&UNK_10f669314,FUN_10a62a074,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1a70,FUN_10a62a1a8);
    FUN_10a0605c4(param_1,&UNK_10f669323,FUN_10a62afb0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1a88,FUN_10a62b0e4);
    FUN_10a0605c4(param_1,&UNK_10f66932e,FUN_10a62beec,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1aa0,FUN_10a62c020);
    FUN_10a0605c4(param_1,&UNK_10f669338,FUN_10a62ce28,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1ab8,FUN_10a62cf5c);
    FUN_10a0605c4(param_1,&UNK_10f669341,FUN_10a62dd64,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1ad0,FUN_10a62de98);
    FUN_10a0605c4(param_1,&UNK_10f66934e,FUN_10a62eca0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1ae8,FUN_10a62edd4);
    FUN_10a0605c4(param_1,&UNK_10f66935a,FUN_10a62fbdc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b00,FUN_10a62fd10);
    FUN_10a0605c4(param_1,&UNK_10f669365,FUN_10a630bb8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b18,FUN_10a630cec);
    FUN_10a0605c4(param_1,&UNK_10f669372,FUN_10a631b94,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b30,FUN_10a631cc8);
    FUN_10a0605c4(param_1,&UNK_10f66937d,FUN_10a632b70,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b48,FUN_10a632ca4);
    FUN_10a0605c4(param_1,&UNK_10f66938b,FUN_10a633b4c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b60,FUN_10a633c80);
    FUN_10a0605c4(param_1,&UNK_10f669397,FUN_10a634a88,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b78,FUN_10a634bbc);
    FUN_10a0605c4(param_1,&UNK_10f6693a8,FUN_10a6359c4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1b90,FUN_10a635af8);
    FUN_10a0605c4(param_1,&UNK_10f6693b0,FUN_10a636900,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bf1ba8,FUN_10a636a34);
    FUN_10a0605c4(param_1,&UNK_10f6693bd,FUN_10a63783c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64cb48,0x1e);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a601494:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a601498);
  (*pcVar6)();
}



/* Entry: 10a6014b4; end: 10a601dff;  */

void FUN_10a6014b4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,ulong param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined1 uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uStack_1e4;
  uint uStack_194;
  long lStack_190;
  ulong uStack_188;
  long *plStack_180;
  ulong uStack_178;
  float fStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  float fStack_140;
  ulong uStack_13c;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined1 auStack_f0 [80];
  
  uStack_188 = 0;
  lStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  fStack_170 = 1.0;
  uStack_194 = 0;
  if (param_7 != 0) {
    uVar12 = 0;
    uVar25 = 0;
    uStack_1e4 = 0xffffffff;
    uVar39 = 0x7f7fffff;
    do {
      uVar28 = *(ulong *)(param_6 + uVar12 * 8);
      uVar12 = uVar28;
      FUN_10a601e00();
      uVar4 = uStack_1e4;
      if (((param_9 == 0) || (lVar9 = param_9, func_0x00010925b970(param_9,&uStack_194), lVar9 == 0)
          ) && (uVar7 = uVar28, FUN_10a601f04(uVar28,param_8), (uVar7 & 1) != 0)) {
        uVar7 = uVar12;
        if (uVar25 != 0) {
          uVar7 = uVar25;
        }
        uVar25 = uVar28;
        FUN_10a601e00();
        plVar8 = (long *)0x30;
        __Znwm();
        pfVar29 = (float *)(plVar8 + 3);
        pfVar29[0] = 0.0;
        pfVar29[1] = 0.0;
        uVar15 = ((ulong)(uint)((int)uVar25 << 3) + 8 ^ uVar25 >> 0x20) * -0x622015f714c7d297;
        uVar15 = (uVar25 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
        uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
        plVar8[4] = 0;
        plVar8[5] = 0;
        *plVar8 = 0;
        plVar8[1] = uVar15;
        plVar8[2] = uVar25;
        if (uStack_188 != 0) {
          uVar16 = uStack_188 - 1;
          if ((uStack_188 & uVar16) == 0) {
            uVar18 = uVar16 & uVar15;
          }
          else {
            uVar18 = uVar15;
            if (uStack_188 <= uVar15) {
              uVar18 = 0;
              if (uStack_188 != 0) {
                uVar18 = uVar15 / uStack_188;
              }
              uVar18 = uVar15 - uVar18 * uStack_188;
            }
          }
          puVar20 = *(undefined8 **)(lStack_190 + uVar18 * 8);
          if (puVar20 != (undefined8 *)0x0) {
            for (plVar26 = (long *)*puVar20; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
              uVar21 = plVar26[1];
              if (uVar21 == uVar15) {
                if (plVar26[2] == uVar25) {
                  __ZdlPv(plVar8);
                  pfVar29 = (float *)(plVar26 + 3);
                  goto LAB_10a601924;
                }
              }
              else {
                if ((uStack_188 & uVar16) == 0) {
                  uVar21 = uVar21 & uVar16;
                }
                else if (uStack_188 <= uVar21) {
                  uVar3 = 0;
                  if (uStack_188 != 0) {
                    uVar3 = uVar21 / uStack_188;
                  }
                  uVar21 = uVar21 - uVar3 * uStack_188;
                }
                if (uVar21 != uVar18) break;
              }
            }
          }
        }
        fVar30 = (float)(uStack_178 + 1);
        uVar25 = param_4;
        fVar37 = fStack_170;
        if ((uStack_188 == 0) ||
           (uVar25 = (ulong)(uint)(fStack_170 * (float)uStack_188),
           fStack_170 * (float)uStack_188 < fVar30)) {
          uVar15 = 1;
          if (2 < uStack_188) {
            uVar15 = (ulong)((uStack_188 & uStack_188 - 1) != 0);
          }
          uVar15 = uVar15 | uStack_188 << 1;
          fVar30 = fVar30 / fStack_170;
          if (uVar15 <= (ulong)(long)fVar30) {
            uVar15 = (long)fVar30;
          }
          if (uVar15 - 1 == 0) {
            uVar15 = 2;
          }
          else if ((uVar15 & uVar15 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          uVar16 = uStack_188;
          if (uStack_188 < uVar15) {
LAB_10a601708:
            if (uVar15 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a601dc0;
            }
            lVar9 = uVar15 << 3;
            __Znwm();
            bVar6 = lStack_190 != 0;
            lStack_190 = lVar9;
            if (bVar6) {
              __ZdlPv();
            }
            uVar16 = 0;
            do {
              *(undefined8 *)(lStack_190 + uVar16 * 8) = 0;
              uVar16 = uVar16 + 1;
            } while (uVar15 != uVar16);
            uStack_188 = uVar15;
            if (plStack_180 != (long *)0x0) {
              uVar16 = plStack_180[1];
              uVar18 = uVar15 - 1;
              if ((uVar15 & uVar18) == 0) {
                uVar16 = uVar16 & uVar18;
              }
              else if (uVar15 <= uVar16) {
                uVar21 = 0;
                if (uVar15 != 0) {
                  uVar21 = uVar16 / uVar15;
                }
                uVar16 = uVar16 - uVar21 * uVar15;
              }
              *(long ***)(lStack_190 + uVar16 * 8) = &plStack_180;
              plVar26 = (long *)*plStack_180;
              plVar27 = plStack_180;
              while (plVar26 != (long *)0x0) {
                uVar21 = plVar26[1];
                if ((uVar15 & uVar18) == 0) {
                  uVar21 = uVar21 & uVar18;
                }
                else if (uVar15 <= uVar21) {
                  uVar3 = 0;
                  if (uVar15 != 0) {
                    uVar3 = uVar21 / uVar15;
                  }
                  uVar21 = uVar21 - uVar3 * uVar15;
                }
                plVar10 = plVar26;
                if (uVar21 != uVar16) {
                  if (*(long *)(lStack_190 + uVar21 * 8) == 0) {
                    *(long **)(lStack_190 + uVar21 * 8) = plVar27;
                    uVar16 = uVar21;
                  }
                  else {
                    *plVar27 = *plVar26;
                    *plVar26 = **(long **)(lStack_190 + uVar21 * 8);
                    **(undefined8 **)(lStack_190 + uVar21 * 8) = plVar26;
                    plVar10 = plVar27;
                  }
                }
                plVar27 = plVar10;
                plVar26 = (long *)*plVar10;
              }
            }
          }
          else if (uVar15 < uStack_188) {
            fVar30 = (float)uStack_178 / fStack_170;
            uVar18 = (ulong)fVar30;
            fVar37 = fStack_170;
            if ((uStack_188 < 3) || ((uStack_188 & uStack_188 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar18) {
              uVar18 = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
            }
            lVar9 = lStack_190;
            if (uVar15 <= uVar18) {
              uVar15 = uVar18;
            }
            if (uVar15 < uVar16) {
              if (uVar15 != 0) goto LAB_10a601708;
              lStack_190 = 0;
              if (lVar9 != 0) {
                __ZdlPv();
              }
              uStack_188 = 0;
            }
          }
        }
        uVar16 = plVar8[1];
        uVar15 = uStack_188 - 1;
        if ((uStack_188 & uVar15) == 0) {
          uVar16 = uVar15 & uVar16;
        }
        else if (uStack_188 <= uVar16) {
          uVar18 = 0;
          if (uStack_188 != 0) {
            uVar18 = uVar16 / uStack_188;
          }
          uVar16 = uVar16 - uVar18 * uStack_188;
        }
        plVar26 = *(long **)(lStack_190 + uVar16 * 8);
        if (plVar26 == (long *)0x0) {
          *plVar8 = (long)plStack_180;
          *(long ***)(lStack_190 + uVar16 * 8) = &plStack_180;
          plStack_180 = plVar8;
          if (*plVar8 != 0) {
            uVar16 = *(ulong *)(*plVar8 + 8);
            if ((uStack_188 & uVar15) == 0) {
              uVar16 = uVar16 & uVar15;
            }
            else if (uStack_188 <= uVar16) {
              uVar15 = 0;
              if (uStack_188 != 0) {
                uVar15 = uVar16 / uStack_188;
              }
              uVar16 = uVar16 - uVar15 * uStack_188;
            }
            plVar26 = (long *)(lStack_190 + uVar16 * 8);
            goto LAB_10a6018dc;
          }
        }
        else {
          *plVar8 = *plVar26;
LAB_10a6018dc:
          *plVar26 = (long)plVar8;
        }
        uStack_178 = uStack_178 + 1;
        func_0x00010a42d044(uVar12,param_8);
        param_4 = uVar25;
        fVar31 = fVar30;
        fVar35 = fVar37;
        func_0x00010a42d020(uVar12,param_8);
        *(float *)(plVar8 + 3) = fVar30;
        *(float *)((long)plVar8 + 0x1c) = fVar37;
        *(int *)(plVar8 + 4) = (int)uVar25;
        *(float *)((long)plVar8 + 0x24) = fVar31;
        *(float *)(plVar8 + 5) = fVar35;
        *(int *)((long)plVar8 + 0x2c) = (int)param_4;
        plVar26 = plVar8;
LAB_10a601924:
        plVar27 = *(long **)(uVar28 + 0x390);
        uVar15 = 0x7f7fffff;
        for (plVar8 = *(long **)(uVar28 + 0x388); fVar37 = (float)uVar15, plVar8 != plVar27;
            plVar8 = plVar8 + 2) {
          plVar10 = (long *)plVar8[1];
          if ((plVar10 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 != (long *)0x0)) {
            lVar9 = *plVar8;
            plVar1 = plVar10 + 1;
            do {
              lVar17 = *plVar1;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x260) != 0)) {
              func_0x00010a424420(auStack_f0,lVar9);
              func_0x0001094f5708(&uStack_130,auStack_f0);
              fVar30 = *pfVar29;
              fVar31 = pfVar29[1];
              fVar33 = pfVar29[2];
              fVar34 = (float)((ulong)uStack_130 >> 0x20);
              fVar40 = (float)((ulong)uStack_120 >> 0x20);
              fVar35 = (float)((ulong)uStack_110 >> 0x20);
              fVar41 = (float)((ulong)uStack_100 >> 0x20);
              fVar42 = (float)uStack_130 * fVar30 + (float)uStack_120 * fVar31 +
                       (float)uStack_110 * fVar33 + (float)uStack_100;
              fVar43 = fVar34 * fVar30 + fVar40 * fVar31 + fVar35 * fVar33 + fVar41;
              fVar38 = fVar30 * fStack_128 + fVar31 * fStack_118 + fVar33 * fStack_108 + fStack_f8;
              fVar30 = *(float *)((long)plVar26 + 0x24);
              fVar31 = *(float *)(plVar26 + 5);
              fVar36 = *(float *)((long)plVar26 + 0x2c);
              fVar33 = ((float)uStack_130 * fVar30 + (float)uStack_120 * fVar31 +
                       (float)uStack_100 + (float)uStack_110 * fVar36) - fVar42;
              fVar35 = (fVar34 * fVar30 + fVar40 * fVar31 + fVar41 + fVar35 * fVar36) - fVar43;
              param_4 = CONCAT44(fVar35,fVar33);
              fVar30 = (fStack_128 * fVar30 + fStack_118 * fVar31 + fStack_f8 + fStack_108 * fVar36)
                       - fVar38;
              fVar31 = fVar30 * fVar30;
              if (1.1920929e-07 <= fVar31 + fVar33 * fVar33 + fVar35 * fVar35) {
                uStack_148 = CONCAT44(fVar43,fVar42);
                uVar32 = NEON_fmov(0x3f800000,4);
                uVar25 = CONCAT44((float)((ulong)uVar32 >> 0x20) / fVar35,(float)uVar32 / fVar33);
                fStack_134 = 3.4028235e+38;
                if (fVar30 != 0.0) {
                  fStack_134 = 1.0 / fVar30;
                }
                param_4 = (ulong)(uint)fStack_134;
                uVar16 = uVar25 ^ (uVar25 ^ 0x7f7fffff7f7fffff) &
                                  CONCAT44(-(uint)(fVar35 == 0.0),-(uint)(fVar33 == 0.0));
                plVar10 = *(long **)(lVar9 + 0x260);
                fStack_140 = fVar38;
                uStack_13c = uVar16;
                FUN_10a347d04();
                fVar36 = (float)uVar25;
                if (plVar10 == (long *)0x0) {
                  uVar16 = 0;
                  uStack_158 = 0xff7fffff00000000;
                  uStack_160 = 0;
                  uStack_150 = 0xff7fffffff7fffff;
                }
                else {
                  (**(code **)(*plVar10 + 0x38))(&uStack_160);
                }
                FUN_10a005840(&uStack_160,&uStack_148);
                if (fVar36 < (float)uVar16) {
                  fVar36 = -fVar35 * fVar35 - fVar33 * fVar33;
                  fVar34 = ABS(fVar36 - fVar31);
                  param_4 = (ulong)(uint)fVar34;
                  if (1.1920929e-07 < fVar34) {
                    fVar30 = (0.0 - fVar38) * fVar30;
                    param_4 = (ulong)(uint)fVar30;
                    fVar30 = (((0.0 - fVar43) * -fVar35 - (0.0 - fVar42) * fVar33) - fVar30) /
                             (fVar36 - fVar31);
                    uVar16 = (ulong)(uint)fVar30;
                    if (-1e-05 < fVar30) goto LAB_10a601b64;
                  }
                  goto LAB_10a601b70;
                }
              }
              else {
                uVar16 = 0x7f7fffff;
              }
LAB_10a601b64:
              if ((float)uVar16 < fVar37) {
                uVar15 = uVar16;
              }
            }
          }
LAB_10a601b70:
        }
        uVar25 = uVar7;
        if (*(char *)(uVar28 + 0x3b2) == '\x01') {
          uVar28 = *(ulong *)(*(long *)(uVar28 + 0x168) + 0x248);
          bVar6 = false;
          if ((uVar28 != 0) && (bVar6 = false, !NAN(fVar37))) {
            bVar6 = fVar37 == 3.4028235e+38;
          }
          if (bVar6) {
            FUN_10a606504(uVar28,pfVar29,(long)plVar26 + 0x24);
            uVar15 = uVar28 & 0xffffffff;
            bVar6 = false;
            if ((uVar28 >> 0x20 != 0) && (bVar6 = false, !NAN((float)uVar28))) {
              bVar6 = (float)uVar28 < 3.4028235e+38;
            }
            if (!bVar6) goto LAB_10a601cfc;
          }
        }
        fVar37 = (float)uVar15;
        if (fVar37 != 3.4028235e+38) {
          if (param_9 != 0) {
            func_0x000107c2ab1c(param_9,&uStack_194,&uStack_194);
          }
          fVar30 = (float)uVar39;
          if (((fVar30 <= 0.0) || (3.4028235e+38 <= fVar30)) || (uVar7 == 0)) {
            if (uVar7 != 0) {
              iVar11 = *(int *)(uVar12 + 500);
              iVar14 = *(int *)(uVar7 + 500);
              goto LAB_10a601c1c;
            }
          }
          else {
            iVar11 = *(int *)(uVar12 + 500);
            iVar14 = *(int *)(uVar7 + 500);
            if (iVar11 < iVar14) goto LAB_10a601cfc;
LAB_10a601c1c:
            fVar31 = 3.4028235e+38;
            if (iVar11 <= iVar14) {
              fVar31 = fVar30;
            }
            uVar39 = (ulong)(uint)fVar31;
            uVar25 = uVar12;
            if (iVar11 <= iVar14) {
              uVar25 = uVar7;
            }
          }
          fVar30 = (float)uVar39;
          bVar6 = false;
          if ((ABS(fVar37 - fVar30) < 1e-06) && (bVar6 = false, !NAN(fVar37))) {
            bVar6 = fVar37 < 3.4028235e+38;
          }
          if ((bVar6) && (-1 < (int)uStack_1e4)) {
            if ((param_7 <= uStack_1e4) || (param_7 <= (ulong)(long)(int)uStack_194))
            goto LAB_10a601dc0;
            lVar17 = *(long *)(param_6 + (ulong)uStack_1e4 * 8);
            lVar19 = *(long *)(param_6 + (long)(int)uStack_194 * 8);
            lVar23 = *(long *)(lVar17 + 0x168);
            lVar9 = *(long *)(lVar23 + 0x188);
            do {
              lVar22 = lVar23;
              if (lVar9 == 0) break;
              plVar8 = (long *)(lVar9 + 0x188);
              lVar22 = lVar9;
              lVar9 = *plVar8;
            } while (*plVar8 != 0);
            lVar23 = *(long *)(lVar19 + 0x168);
            lVar9 = *(long *)(lVar23 + 0x188);
            do {
              lVar24 = lVar23;
              if (lVar9 == 0) break;
              plVar8 = (long *)(lVar9 + 0x188);
              lVar24 = lVar9;
              lVar9 = *plVar8;
            } while (*plVar8 != 0);
            bVar6 = *(int *)(lVar19 + 0x3d0) <= *(int *)(lVar17 + 0x3d0);
            if (lVar22 != lVar24 || bVar6) {
              fVar37 = fVar30;
            }
            uVar39 = (ulong)(uint)fVar37;
            uVar4 = uStack_194;
            if (lVar22 != lVar24 || bVar6) {
              uVar4 = uStack_1e4;
            }
          }
          else if (fVar37 < fVar30) {
            uStack_1e4 = uStack_194;
            uVar39 = uVar15;
            uVar4 = uStack_1e4;
          }
        }
      }
LAB_10a601cfc:
      uStack_1e4 = uVar4;
      uVar12 = (long)(int)uStack_194 + 1;
      uStack_194 = (uint)uVar12;
    } while (uVar12 < param_7);
    if (-1 < (int)uStack_1e4) {
      if (param_7 <= uStack_1e4) {
LAB_10a601dc0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a601dc4);
        (*pcVar5)();
      }
      uVar32 = *(undefined8 *)(param_6 + (ulong)uStack_1e4 * 8);
      *param_1 = (int)uVar39;
      *(undefined8 *)(param_1 + 2) = uVar32;
      uVar13 = 1;
      goto LAB_10a601d80;
    }
  }
  uVar13 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10a601d80:
  *(undefined1 *)(param_1 + 4) = uVar13;
  FUN_10a601f7c(&lStack_190);
  return;
}



/* Entry: 10a601e00; end: 10a601f03;  */

long FUN_10a601e00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_1 + 0x380);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_1 + 0x378);
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar6 != 0) {
      return lVar6;
    }
  }
  lVar6 = *(long *)(param_1 + 0x168);
  func_0x00010a42b410(lVar6);
  FUN_10a38cc90(&lStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(param_1 + 0x380);
  *(long **)(param_1 + 0x380) = plStack_38;
  *(long *)(param_1 + 0x378) = lStack_40;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return lVar6;
}



/* Entry: 10a601f04; end: 10a601f7b;  */

undefined8 FUN_10a601f04(long param_1,float *param_2)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  bVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xba8) + 0x18) != 1;
  fVar5 = 0.5;
  if (bVar3) {
    fVar5 = param_2[1];
  }
  fVar6 = 0.5;
  if (bVar3) {
    fVar6 = *param_2;
  }
  if (*(float **)(param_1 + 0x438) != *(float **)(param_1 + 0x440)) {
    pfVar4 = *(float **)(param_1 + 0x438) + 3;
    do {
      fVar7 = pfVar4[-2];
      bVar3 = false;
      bVar2 = true;
      if (pfVar4[-3] <= fVar6) {
        bVar3 = false;
        bVar2 = true;
        if (!NAN(fVar7) && !NAN(fVar5)) {
          bVar3 = fVar7 == fVar5;
          bVar2 = fVar5 <= fVar7;
        }
      }
      if (!bVar2 || bVar3) {
        fVar7 = *pfVar4;
        bVar3 = false;
        bVar2 = true;
        if (fVar6 <= pfVar4[-1]) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar5) && !NAN(fVar7)) {
            bVar3 = fVar5 == fVar7;
            bVar2 = fVar7 <= fVar5;
          }
        }
        if (!bVar2 || bVar3) {
          return 1;
        }
      }
      pfVar1 = pfVar4 + 2;
      pfVar4 = pfVar4 + 5;
    } while (pfVar1 != *(float **)(param_1 + 0x440));
  }
  return 0;
}



/* Entry: 10a601f7c; end: 10a601fc3;  */

long * FUN_10a601f7c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a601fc4; end: 10a60229f;  */

void FUN_10a601fc4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  plVar8 = *(long **)(param_1 + 0x380);
  if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0))
  {
    lVar15 = *(long *)(param_1 + 0x378);
    plVar9 = plVar8 + 1;
    do {
      lVar11 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    if (lVar15 != 0) goto LAB_10a6020b8;
  }
  func_0x00010a42b410(*(undefined8 *)(param_1 + 0x168));
  FUN_10a38cc90(&plStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar15 = *(long *)(param_1 + 0x380);
  *(long **)(param_1 + 0x380) = plStack_88;
  *(long *)(param_1 + 0x378) = (long)plStack_90;
  if (lVar15 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar15 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a6020b8:
  if (*(long *)(param_1 + 0x390) == *(long *)(param_1 + 0x388)) {
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    puStack_a8 = (undefined8 *)0x0;
    FUN_10a5d2154(*(undefined8 *)(param_1 + 0x168),&puStack_a8,0);
    puVar6 = puStack_a0;
    if (puStack_a0 != puStack_a8) {
      plVar8 = (long *)(param_1 + 0x388);
      puVar14 = puStack_a8;
      do {
        FUN_10a447c64(&uStack_c0,*puVar14);
        puVar10 = *(undefined8 **)(param_1 + 0x390);
        if (puVar10 < *(undefined8 **)(param_1 + 0x398)) {
          puVar10[1] = plStack_b8;
          *puVar10 = uStack_c0;
          if (plStack_b8 != (long *)0x0) {
            plVar9 = plStack_b8 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar10 = puVar10 + 2;
        }
        else {
          lVar15 = (long)puVar10 - *plVar8;
          uVar1 = (lVar15 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a60f824();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a60226c);
            (*pcVar7)();
          }
          uVar12 = (long)*(undefined8 **)(param_1 + 0x398) - *plVar8;
          uVar13 = (long)uVar12 >> 3;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7fffffffffffffef < uVar12) {
            uVar13 = 0xfffffffffffffff;
          }
          plVar9 = plVar8;
          plStack_70 = plVar8;
          FUN_10a60f838();
          puVar3 = (undefined8 *)((long)plVar9 + lVar15);
          puVar3[1] = plStack_b8;
          *puVar3 = uStack_c0;
          if (plStack_b8 != (long *)0x0) {
            plVar2 = plStack_b8 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar10 = puVar3 + 2;
          lVar15 = (long)puVar3 - (*(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388));
          _memcpy(lVar15);
          plStack_90 = *(long **)(param_1 + 0x388);
          *(long *)(param_1 + 0x388) = lVar15;
          *(undefined8 **)(param_1 + 0x390) = puVar10;
          uStack_78 = *(undefined8 *)(param_1 + 0x398);
          *(long **)(param_1 + 0x398) = plVar9 + uVar13 * 2;
          plStack_88 = plStack_90;
          plStack_80 = plStack_90;
          func_0x00010a60f86c(&plStack_90);
        }
        plVar9 = plStack_b8;
        *(undefined8 **)(param_1 + 0x390) = puVar10;
        if (plStack_b8 != (long *)0x0) {
          plVar2 = plStack_b8 + 1;
          do {
            lVar15 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar6);
    }
    if (puStack_a8 != (undefined8 *)0x0) {
      puStack_a0 = puStack_a8;
      __ZdlPv(puStack_a8);
    }
  }
  return;
}



/* Entry: 10a6022a0; end: 10a6022a7;  */

void FUN_10a6022a0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  plVar8 = *(long **)(param_1 + 0x318);
  if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0))
  {
    lVar15 = *(long *)(param_1 + 0x310);
    plVar9 = plVar8 + 1;
    do {
      lVar11 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    if (lVar15 != 0) goto LAB_10a6020b8;
  }
  func_0x00010a42b410(*(undefined8 *)(param_1 + 0x100));
  FUN_10a38cc90(&plStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar15 = *(long *)(param_1 + 0x318);
  *(long **)(param_1 + 0x318) = plStack_88;
  *(long *)(param_1 + 0x310) = (long)plStack_90;
  if (lVar15 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar15 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a6020b8:
  if (*(long *)(param_1 + 0x328) == *(long *)(param_1 + 800)) {
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    puStack_a8 = (undefined8 *)0x0;
    FUN_10a5d2154(*(undefined8 *)(param_1 + 0x100),&puStack_a8,0);
    puVar6 = puStack_a0;
    if (puStack_a0 != puStack_a8) {
      plVar8 = (long *)(param_1 + 800);
      puVar14 = puStack_a8;
      do {
        FUN_10a447c64(&uStack_c0,*puVar14);
        puVar10 = *(undefined8 **)(param_1 + 0x328);
        if (puVar10 < *(undefined8 **)(param_1 + 0x330)) {
          puVar10[1] = plStack_b8;
          *puVar10 = uStack_c0;
          if (plStack_b8 != (long *)0x0) {
            plVar9 = plStack_b8 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar10 = puVar10 + 2;
        }
        else {
          lVar15 = (long)puVar10 - *plVar8;
          uVar1 = (lVar15 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a60f824();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a60226c);
            (*pcVar7)();
          }
          uVar12 = (long)*(undefined8 **)(param_1 + 0x330) - *plVar8;
          uVar13 = (long)uVar12 >> 3;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7fffffffffffffef < uVar12) {
            uVar13 = 0xfffffffffffffff;
          }
          plVar9 = plVar8;
          plStack_70 = plVar8;
          FUN_10a60f838();
          puVar3 = (undefined8 *)((long)plVar9 + lVar15);
          puVar3[1] = plStack_b8;
          *puVar3 = uStack_c0;
          if (plStack_b8 != (long *)0x0) {
            plVar2 = plStack_b8 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar10 = puVar3 + 2;
          lVar15 = (long)puVar3 - (*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800));
          _memcpy(lVar15);
          plStack_90 = *(long **)(param_1 + 800);
          *(long *)(param_1 + 800) = lVar15;
          *(undefined8 **)(param_1 + 0x328) = puVar10;
          uStack_78 = *(undefined8 *)(param_1 + 0x330);
          *(long **)(param_1 + 0x330) = plVar9 + uVar13 * 2;
          plStack_88 = plStack_90;
          plStack_80 = plStack_90;
          func_0x00010a60f86c(&plStack_90);
        }
        plVar9 = plStack_b8;
        *(undefined8 **)(param_1 + 0x328) = puVar10;
        if (plStack_b8 != (long *)0x0) {
          plVar2 = plStack_b8 + 1;
          do {
            lVar15 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar6);
    }
    if (puStack_a8 != (undefined8 *)0x0) {
      puStack_a0 = puStack_a8;
      __ZdlPv(puStack_a8);
    }
  }
  return;
}



/* Entry: 10a6022a8; end: 10a6023df;  */

void FUN_10a6022a8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_10a3c7928();
  FUN_10a1dde30(param_2,&PTR_s_camera_110c00b70,param_1 + 0x378,&UNK_10f652b9b,0x10);
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bfb550,param_1 + 0x3b8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x1f0),param_2,&PTR_DAT_110bfb570);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfb590,*(char *)(param_1 + 0x3b1) == '\x01');
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bfb5b0);
  lVar2 = *(long *)(param_1 + 0x390);
  for (lVar1 = *(long *)(param_1 + 0x388); lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a2dcd60(param_2,&PTR_DAT_110bfb5d0,lVar1,&UNK_10f64c9c0,0x18);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a6023dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}


