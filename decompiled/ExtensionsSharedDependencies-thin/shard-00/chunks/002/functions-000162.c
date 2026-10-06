/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003f77cc; end: 003f783b;  */

void FUN_003f77cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00339d8c(param_1[1]);
  if (*(char *)((long)param_1 + 0x89) == '\0') {
    *(undefined1 *)((long)param_1 + 0x89) = 1;
    plVar1 = param_1 + 0xf;
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
      FUN_003f816c(param_1);
    }
  }
  func_0x00339da8(param_1[1]);
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003f783c; end: 003f7893;  */

void FUN_003f783c(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x20) == param_1) {
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
               ,0x11e,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f7890);
  (*pcVar1)();
}



/* Entry: 003f7894; end: 003f78e3;  */

undefined8 FUN_003f7894(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x78);
  lVar5 = *plVar1;
  if (*plVar1 == 0) {
    return 0;
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 == lVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    lVar5 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 003f78e4; end: 003f7ac7;  */

/* WARNING: Possible PIC construction at 0x003f79e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003f79e4) */
/* WARNING: Removing unreachable block (ram,0x003f79ec) */
/* WARNING: Removing unreachable block (ram,0x003f79f4) */
/* WARNING: Removing unreachable block (ram,0x003f79f8) */
/* WARNING: Removing unreachable block (ram,0x003f7a00) */
/* WARNING: Removing unreachable block (ram,0x003f7a08) */
/* WARNING: Removing unreachable block (ram,0x003f7a24) */
/* WARNING: Removing unreachable block (ram,0x003f7a50) */
/* WARNING: Removing unreachable block (ram,0x003f7a58) */
/* WARNING: Removing unreachable block (ram,0x003f7a60) */
/* WARNING: Removing unreachable block (ram,0x003f7a64) */
/* WARNING: Removing unreachable block (ram,0x003f7a6c) */
/* WARNING: Removing unreachable block (ram,0x003f7a70) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f78e4(long param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5,
                   ulong param_6)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  uint uVar22;
  long unaff_x19;
  byte *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char acStack_301 [137];
  char acStack_278 [536];
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [8];
  
  puVar5 = auStack_60;
  puVar19 = &stack0xfffffffffffffff0;
  uVar10 = param_1 + 0x48;
  lVar20 = *(long *)param_3;
  *(byte **)(param_6 + 8) = param_2;
  *(byte **)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_5;
  *(ulong *)(param_6 + 0x20) = lVar20 == 0 | uVar10;
  pbVar17 = param_2;
  func_0x00339d8c(*(undefined8 *)(param_1 + 8));
  plVar1 = (long *)(param_1 + 0x80);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(ulong *)(*(long *)(param_1 + 0x70) + 0x20) =
       *(ulong *)(*(long *)(param_1 + 0x70) + 0x20) & 1 | param_6;
  *(ulong *)(param_1 + 0x70) = param_6;
  plVar1 = (long *)(param_1 + 0x78);
  do {
    lVar20 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar20 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar20 + -1 == 0) {
    FUN_003f816c(param_1);
    pbVar13 = *(byte **)(param_1 + 8);
    puVar5 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    param_6 = unaff_x21;
    uVar10 = unaff_x22;
    puVar19 = unaff_x29;
  }
  else {
    uVar8 = (ulong)*(uint *)(param_1 + 0x8c);
    if (0 < (int)*(uint *)(param_1 + 0x8c)) {
      puVar21 = (undefined8 *)(param_1 + 0x98);
      do {
        if ((byte *)*puVar21 == param_2) {
          pbVar17 = *(byte **)puVar21[-1];
          goto LAB_003f79c4;
        }
        puVar21 = puVar21 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    pbVar17 = (byte *)0x0;
LAB_003f79c4:
    (**(code **)(*(long *)(param_1 + 0x18) + 0x18))
              (auStack_38,uVar10 + *(long *)(*(long *)(param_1 + 0x10) + 8));
    pbVar13 = *(byte **)(param_1 + 8);
    unaff_x30 = 0x3f79e4;
  }
  *(undefined1 **)(puVar5 + -0x10) = puVar19;
  *(undefined8 *)(puVar5 + -8) = unaff_x30;
  _pthread_mutex_unlock();
  if ((int)pbVar13 == 0) {
    return pbVar13;
  }
  func_0x00770db4();
  *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
  *(undefined8 *)(puVar5 + -0x18) = 0x339dc4;
  _pthread_mutex_trylock();
  if (((uint)pbVar13 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar13 == 0);
  }
  func_0x00770de8();
  *(byte **)(puVar5 + -0x40) = param_2;
  *(long *)(puVar5 + -0x38) = param_1;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x20;
  *(code **)(puVar5 + -0x28) = FUN_00339df0;
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar9 = puVar5 + -0x58;
  _pthread_condattr_init();
  if ((int)pbVar9 == 0) {
    pbVar17 = puVar5 + -0x58;
    pbVar9 = pbVar13;
    _pthread_cond_init();
    if ((int)pbVar9 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar5 + -0x48)) {
      return pbVar9;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x30;
  *(code **)(puVar5 + -0x68) = FUN_00339e64;
  _pthread_cond_destroy();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770e84();
  *(ulong *)(puVar5 + -0xa0) = uVar10;
  *(ulong *)(puVar5 + -0x98) = param_6;
  *(byte **)(puVar5 + -0x90) = param_2;
  *(byte **)(puVar5 + -0x88) = pbVar13;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x70;
  *(code **)(puVar5 + -0x78) = FUN_00339e80;
  uVar10 = (ulong)param_4 >> 0x20;
  pbVar13 = pbVar17;
  func_0x0033a068(uVar10);
  pbVar11 = param_3;
  FUN_00339fc4(param_3,param_4,uVar10);
  pbVar12 = pbVar9;
  pbVar16 = pbVar17;
  if ((int)pbVar11 == 0) {
    _pthread_cond_wait();
    pbVar11 = param_4;
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar10 = (ulong)param_4 >> 0x20;
    pbVar13 = param_4;
    FUN_0033a598(uVar10);
    pbVar11 = param_3;
    pbVar15 = param_4;
    FUN_0033a01c(param_3,param_4,uVar10);
    *(byte **)(puVar5 + -0xb0) = pbVar11;
    *(long *)(puVar5 + -0xa8) = (long)(int)pbVar15;
    _pthread_cond_timedwait(pbVar9,pbVar17,puVar5 + -0xb0);
    pbVar11 = param_3;
    param_3 = param_4;
  }
  if (((uint)pbVar12 < 0x3d) && ((1L << ((ulong)pbVar12 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar12 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x80;
  *(code **)(puVar5 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pbVar12 == 0) {
    return pbVar12;
  }
  func_0x00770eec();
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0xc0;
  *(undefined8 *)(puVar5 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pbVar12 == 0) {
    return pbVar12;
  }
  func_0x00770f20();
  *(undefined1 **)(puVar5 + -0xe0) = puVar5 + -0xd0;
  *(undefined8 *)(puVar5 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar12 == 0) {
    return pbVar12;
  }
  func_0x00770f54();
  *(undefined1 **)(puVar5 + -0x120) = unaff_x24;
  *(byte **)(puVar5 + -0x118) = unaff_x23;
  *(byte **)(puVar5 + -0x110) = param_3;
  *(byte **)(puVar5 + -0x108) = pbVar11;
  *(byte **)(puVar5 + -0x100) = pbVar9;
  *(byte **)(puVar5 + -0xf8) = pbVar17;
  *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xe0;
  *(code **)(puVar5 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar17 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = pbVar16;
  FUN_00338e58();
  if ((int)pbVar17 != 0) {
    *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0xe0;
    puVar19 = puVar5 + -0x168;
    _vsnprintf(puVar19,0x40,pbVar13,puVar5 + -0xe0);
    if ((int)(uint)puVar19 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar13 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar19;
      if ((uint)puVar19 < 0x40) {
        pbVar13 = (byte *)0x0;
        unaff_x23 = puVar5 + -0x168;
      }
      else {
        pbVar13 = (byte *)(((ulong)puVar19 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0xe0;
        _vsnprintf();
        unaff_x23 = pbVar13;
      }
    }
    pbVar9 = pbVar16;
    FUN_00338e80(pbVar12,pbVar16,2,unaff_x23);
    pbVar17 = pbVar13;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar5 + -0x128)) {
    return pbVar17;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar5 + -0x1b0) = unaff_x24;
  *(byte **)(puVar5 + -0x1a8) = unaff_x23;
  *(byte **)(puVar5 + -0x1a0) = pbVar13;
  *(byte **)(puVar5 + -0x198) = pbVar12;
  *(byte **)(puVar5 + -400) = pbVar16;
  *(undefined8 *)(puVar5 + -0x188) = 2;
  *(undefined1 **)(puVar5 + -0x180) = puVar5 + -0xf0;
  *(code **)(puVar5 + -0x178) = FUN_00339178;
  *(undefined8 *)(puVar5 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar6 = 1;
  FUN_0033a598();
  *(undefined8 *)(puVar5 + -0x268) = uVar6;
  lVar20 = *(long *)pbVar17;
  lVar7 = lVar20;
  _strrchr(lVar20,0x2f);
  if (lVar7 != 0) {
    lVar20 = lVar7 + 1;
  }
  puVar19 = puVar5 + -0x268;
  _localtime_r(puVar19,puVar5 + -0x2a0);
  if (puVar19 == (undefined1 *)0x0) {
    builtin_strncpy(puVar5 + -0x260,"error:localtime",0x10);
  }
  else {
    puVar19 = puVar5 + -0x260;
    _strftime(puVar19,0x40,"%m%d %H:%M:%S",puVar5 + -0x2a0);
    if (puVar19 == (undefined1 *)0x0) {
      builtin_strncpy(puVar5 + -0x260,"error:strftime",0xf);
    }
  }
  uVar8 = (ulong)*(uint *)(pbVar17 + 0xc);
  func_0x00338e1c();
  uVar10 = uVar8;
  _pthread_self();
  *(ulong *)(puVar5 + -0x218) = uVar8;
  *(undefined8 *)(puVar5 + -0x210) = 0x560e98;
  *(undefined1 **)(puVar5 + -0x208) = puVar5 + -0x260;
  *(undefined8 *)(puVar5 + -0x200) = 0x560e98;
  *(ulong *)(puVar5 + -0x1f8) = (ulong)pbVar9 & 0xffffffff;
  *(undefined8 *)(puVar5 + -0x1f0) = 0x5606ac;
  *(ulong *)(puVar5 + -0x1e8) = uVar10;
  *(code **)(puVar5 + -0x1e0) = FUN_00560738;
  *(long *)(puVar5 + -0x1d8) = lVar20;
  *(undefined8 *)(puVar5 + -0x1d0) = 0x560e98;
  *(ulong *)(puVar5 + -0x1c8) = (ulong)*(uint *)(pbVar17 + 8);
  *(undefined8 *)(puVar5 + -0x1c0) = 0x5606ac;
  puVar19 = puVar5 + -0x218;
  FUN_0056189c(puVar5 + -0x2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar19,6);
  uVar18 = *(uint *)(pbVar17 + 0xc);
  func_0x00338e6c();
  if (uVar18 == 0) {
    puVar5[-0x218] = 0;
    puVar5[-0x200] = 0;
LAB_00339300:
    pbVar13 = *(byte **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)(puVar5 + -0x2b8);
    if (-1 < (char)puVar5[-0x2a1]) {
      puVar2 = puVar5 + -0x2b8;
    }
    lVar20 = *(long *)(pbVar17 + 0x10);
    *(undefined1 **)(puVar5 + -0x2d0) = puVar2;
    *(long *)(puVar5 + -0x2c8) = lVar20;
    pcVar14 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(puVar5 + -0x218);
    if (puVar5[-0x200] == '\0') goto LAB_00339300;
    pbVar13 = *(byte **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)(puVar5 + -0x2b8);
    if (-1 < (char)puVar5[-0x2a1]) {
      puVar2 = puVar5 + -0x2b8;
    }
    *(long *)(puVar5 + -0x2c8) = *(long *)(pbVar17 + 0x10);
    *(undefined1 **)(puVar5 + -0x2c0) = puVar5 + -0x218;
    *(undefined1 **)(puVar5 + -0x2d0) = puVar2;
    pcVar14 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if ((char)puVar5[-0x2a1] < '\0') {
    pbVar13 = *(byte **)(puVar5 + -0x2b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar5 + -0x1b8)) {
    return pbVar13;
  }
  ___stack_chk_fail();
  if ((char)puVar5[-0x2a1] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + -0x2b8));
  }
  __Unwind_Resume();
  uVar18 = (uint)puVar19;
  if ((char *)0x3 < pcVar14) {
    uVar10 = (ulong)pcVar14 >> 2;
    pbVar17 = pbVar13;
    do {
      uVar18 = (*(int *)pbVar17 * 0x16a88000 | (uint)(*(int *)pbVar17 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar19;
      uVar18 = (uVar18 >> 0x13 | uVar18 << 0xd) * 5 + 0xe6546b64;
      puVar19 = (undefined1 *)(ulong)uVar18;
      uVar10 = uVar10 - 1;
      pbVar17 = pbVar17 + 4;
    } while (uVar10 != 0);
    pbVar13 = pbVar13 + ((ulong)pcVar14 & 0xfffffffffffffffc);
  }
  uVar22 = 0;
  uVar10 = (ulong)pcVar14 & 3;
  if (uVar10 != 1) {
    if (uVar10 != 2) {
      if (uVar10 != 3) goto LAB_00339464;
      uVar22 = (uint)pbVar13[2] << 0x10;
    }
    uVar22 = uVar22 | (uint)pbVar13[1] << 8;
  }
  uVar18 = ((uVar22 ^ *pbVar13) * 0x16a88000 | (uVar22 ^ *pbVar13) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar18;
LAB_00339464:
  uVar18 = uVar18 ^ (uint)pcVar14;
  uVar18 = (uVar18 ^ uVar18 >> 0x10) * -0x7a143595;
  uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar18 ^ uVar18 >> 0x10);
}



/* Entry: 003f7ac8; end: 003f7e63;  */

undefined1  [16]
FUN_003f7ac8(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long lVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined ***pppuStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined ***pppuStack_f8;
  undefined **appuStack_f0 [9];
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_78;
  undefined8 auStack_70 [2];
  
  auStack_70[0] = 0;
  if (param_5 == 0) {
    plVar1 = param_1 + 9;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = *param_1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    func_0x00339d8c(param_1[1]);
    FUN_003b8b9c(param_3,param_4);
    lStack_a0 = param_1[0x10];
    lStack_88 = 0;
    uVar14 = 1;
    cStack_78 = '\x01';
    pppuVar8 = appuStack_f0;
    plStack_98 = param_1;
    lStack_90 = param_3;
    lStack_80 = param_2;
    FUN_003c2a78(pppuVar8,0);
    plStack_a8 = &lStack_a0;
    appuStack_f0[0] = &PTR_FUN_009e1c88;
    do {
      plVar13 = plVar1;
      if (lStack_88 != 0) {
        func_0x00339da8(param_1[1]);
        lVar6 = lStack_88;
        lStack_88 = 0;
        param_2 = *(long *)(lVar6 + 8);
        uVar11 = *(ulong *)(lVar6 + 0x20);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 0x18));
LAB_003f7d0c:
        uVar11 = uVar11 & 1;
        uVar14 = 2;
        goto LAB_003f7d14;
      }
      while( true ) {
        plVar12 = plVar13;
        plVar13 = (long *)(plVar12[4] & 0xfffffffffffffffe);
        if (plVar1 == plVar13) break;
        if (plVar13[1] == param_2) {
          plVar12[4] = plVar13[4] & 0xfffffffffffffffeU | plVar12[4] & 1U;
          if ((long *)param_1[0xe] == plVar13) {
            param_1[0xe] = (long)plVar12;
          }
          func_0x00339da8(param_1[1]);
          param_2 = plVar13[1];
          uVar11 = plVar13[4];
          (*(code *)plVar13[2])(plVar13[3],plVar13);
          goto LAB_003f7d0c;
        }
      }
      if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
        func_0x00339da8(param_1[1]);
        uVar14 = 0;
        break;
      }
      iVar2 = *(int *)((long)param_1 + 0x8c);
      if (iVar2 == 6) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                     ,0x502,0,
                     "Too many outstanding grpc_completion_queue_pluck calls: maximum is %d");
LAB_003f7dc0:
        func_0x00339da8(param_1[1]);
        uVar14 = 1;
        break;
      }
      param_1[(long)iVar2 * 2 + 0x12] = (long)auStack_70;
      (param_1 + (long)iVar2 * 2 + 0x12)[1] = param_2;
      *(int *)((long)param_1 + 0x8c) = iVar2 + 1;
      if (cStack_78 == '\0') {
        func_0x003c1f6c();
        ppuVar9 = *pppuVar8;
        FUN_003c1e28();
        if (param_3 <= (long)ppuVar9) {
          func_0x003f81b8(param_1,param_2,auStack_70);
          goto LAB_003f7dc0;
        }
      }
      *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      (**(code **)(param_1[3] + 0x20))
                (&pppuStack_f8,(long)plVar1 + *(long *)(param_1[2] + 8),auStack_70,param_3);
      pppuVar5 = pppuStack_f8;
      if (pppuStack_f8 == (undefined ***)0x0) {
        cStack_78 = '\0';
        func_0x003f81b8(param_1,param_2,auStack_70);
      }
      else {
        func_0x003f81b8(param_1,param_2,auStack_70);
        func_0x00339da8(param_1[1]);
        pppuStack_118 = pppuStack_f8;
        if (((ulong)pppuStack_f8 & 1) != 0) {
          piVar10 = (int *)((long)pppuStack_f8 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_003be004(auStack_110,&pppuStack_118);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                     ,0x51c,2,"Completion queue pluck failed: %s");
        if (cStack_f9 < '\0') {
          __ZdlPv(auStack_110[0]);
        }
        if (((ulong)pppuStack_118 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pppuVar8 = pppuStack_f8;
      if (((ulong)pppuStack_f8 & 1) != 0) {
        FUN_0055293c();
      }
    } while (pppuVar5 == (undefined ***)0x0);
    uVar11 = 0;
LAB_003f7d14:
    FUN_003f6d30(param_1);
    if (lStack_88 == 0) {
      FUN_00341470(appuStack_f0);
      auVar15._0_8_ = uVar14 | uVar11 << 0x20;
      auVar15._8_8_ = param_2;
      return auVar15;
    }
  }
  else {
    func_0x007759f8();
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
               ,0x52b,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x3f7e08);
  (*pcVar7)();
}



/* Entry: 003f7e64; end: 003f7e77;  */

void FUN_003f7e64(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  return;
}



/* Entry: 003f7e78; end: 003f7ef7;  */

void FUN_003f7e78(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00339d8c(param_1[1]);
  if ((char)param_1[10] == '\0') {
    plVar1 = param_1 + 9;
    *(undefined1 *)(param_1 + 10) = 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00339da8(param_1[1]);
    if (lVar4 == 1) {
      FUN_003f8338(param_1);
    }
  }
  else {
    func_0x00339da8(param_1[1]);
  }
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(param_1[2] + 0x20))(param_1 + 9);
    (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 003f7ef8; end: 003f7f4b;  */

void FUN_003f7ef8(void)

{
  return;
}



/* Entry: 003f7f4c; end: 003f807b;  */

void FUN_003f7f4c(long *param_1,long *param_2,ulong *param_3,code *param_4,long *param_5,
                 undefined8 param_6,ulong param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  undefined8 extraout_x8;
  ulong uStack_48;
  
  plVar1 = param_1 + 9;
  (*param_4)(param_5,param_6);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    FUN_003f8338();
    param_5 = param_1;
  }
  if (((param_7 & 1) != 0) || ((int)param_2[1] != 0)) {
    func_0x003c1f8c();
    if (*param_5 != 0) goto LAB_003f7fc0;
  }
  iVar4 = (int)param_5;
  FUN_003c3188();
  if (iVar4 == 0) {
    pcVar5 = segment_command_00000020.segname + 8;
    FUN_00338c74();
    *(code **)pcVar5 = FUN_003f844c;
    *(long **)(pcVar5 + 8) = param_2;
    *(code **)(pcVar5 + 0x18) = FUN_0033df34;
    *(char **)(pcVar5 + 0x20) = pcVar5;
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    uStack_48 = *param_3;
    if ((uStack_48 & 1) != 0) {
      piVar7 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003c2968(pcVar5 + 0x10,&uStack_48,0,0);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
LAB_003f7fc0:
  *(uint *)((long)param_2 + 0xc) = (uint)(*param_3 == 0);
  param_2[2] = 0;
  func_0x003c1f8c(param_2);
  lVar6 = *param_2;
  if (*(long *)(lVar6 + 8) == 0) {
    *(undefined8 *)(lVar6 + 8) = extraout_x8;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10) = extraout_x8;
  }
  *(undefined8 *)(lVar6 + 0x10) = extraout_x8;
  return;
}



/* Entry: 003f807c; end: 003f807f;  */

undefined8 * FUN_003f807c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_009db970;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  FUN_003c1d50();
  func_0x003c1f6c(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
    FUN_0033a9f8();
  }
  return param_1;
}



/* Entry: 003f8080; end: 003f8097;  */

void FUN_003f8080(void)

{
  code *pcVar1;
  
  FUN_00341470();
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f8094);
  (*pcVar1)();
}



/* Entry: 003f8098; end: 003f816b;  */

long * FUN_003f8098(char *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint extraout_w8;
  uint uVar4;
  ulong uVar5;
  long *extraout_x9;
  long *plVar6;
  long *extraout_x10;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_31;
  
  plVar7 = *(long **)((long)param_1 + 0x48);
  if (plVar7[3] != 0) {
    func_0x00775a2c();
    if (*(char *)((long)param_1 + 0x89) == '\0') {
      func_0x00775a60();
    }
    else if ((*(byte *)((long)param_1 + 0x88) & 1) == 0) {
      *(char *)((long)param_1 + 0x88) = '\x01';
      plVar7 = (long *)((long)param_1 + *(long *)(*(long *)((long)param_1 + 0x10) + 8) + 0x48);
                    /* WARNING: Could not recover jumptable at 0x003f81ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)((long)param_1 + 0x18) + 0x28))(plVar7,(long *)((long)param_1 + 0x20));
      return plVar7;
    }
    func_0x00775a94();
    uVar4 = *(uint *)((long)param_1 + 0x8c);
    uVar5 = (ulong)uVar4;
    if (0 < (int)uVar4) {
      plVar7 = (long *)((long)param_1 + 0x90);
      plVar6 = plVar7;
      do {
        if ((plVar6[1] == param_2) && (*plVar6 == param_3)) goto LAB_003f8218;
        plVar6 = plVar6 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = "return";
    func_0x00338df0("return",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                    ,0x488);
    plVar7 = extraout_x9;
    plVar6 = extraout_x10;
    uVar4 = extraout_w8;
LAB_003f8218:
    lVar3 = (long)(int)uVar4 + -1;
    *(int *)((long)param_1 + 0x8c) = (int)lVar3;
    lVar9 = plVar6[1];
    lVar8 = *plVar6;
    lVar10 = plVar7[lVar3 * 2];
    plVar6[1] = (plVar7 + lVar3 * 2)[1];
    *plVar6 = lVar10;
    (plVar7 + lVar3 * 2)[1] = lVar9;
    plVar7[lVar3 * 2] = lVar8;
    return (long *)param_1;
  }
  lVar3 = plVar7[1];
  if (*(long *)(lVar3 + 0xa8) != *plVar7) {
    plVar6 = (long *)(lVar3 + 0x48);
    *plVar7 = *(long *)(lVar3 + 0xa8);
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        goto LAB_003f8128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_31 = 0;
    lVar8 = lVar3 + 0x50;
    FUN_0033b3e4(lVar8,&uStack_31);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    param_1 = (char *)0x0;
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar3 + 0xa0);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7[3] = lVar8;
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
LAB_003f8128:
    plVar7[3] = 0;
  }
  if ((char)plVar7[5] == '\0') {
    func_0x003c1f6c();
    lVar3 = *(long *)param_1;
    FUN_003c1e28(lVar3);
    plVar7 = (long *)(ulong)(plVar7[2] < lVar3);
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}



/* Entry: 003f816c; end: 003f823f;  */

void FUN_003f816c(char *param_1,long param_2,long param_3)

{
  uint extraout_w8;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *extraout_x9;
  long *plVar4;
  long *plVar5;
  long *extraout_x10;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1[0x89] == '\0') {
    func_0x00775a60();
  }
  else if ((param_1[0x88] & 1U) == 0) {
    param_1[0x88] = '\x01';
                    /* WARNING: Could not recover jumptable at 0x003f81ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x18) + 0x28))
              (param_1 + *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x48,param_1 + 0x20);
    return;
  }
  func_0x00775a94();
  uVar1 = *(uint *)(param_1 + 0x8c);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar4 = (long *)(param_1 + 0x90);
    plVar5 = plVar4;
    do {
      if ((plVar5[1] == param_2) && (*plVar5 == param_3)) goto LAB_003f8218;
      plVar5 = plVar5 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_1 = "return";
  func_0x00338df0("return",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                  ,0x488);
  plVar4 = extraout_x9;
  plVar5 = extraout_x10;
  uVar1 = extraout_w8;
LAB_003f8218:
  lVar3 = (long)(int)uVar1 + -1;
  *(int *)(param_1 + 0x8c) = (int)lVar3;
  lVar7 = plVar5[1];
  lVar6 = *plVar5;
  lVar8 = plVar4[lVar3 * 2];
  plVar5[1] = (plVar4 + lVar3 * 2)[1];
  *plVar5 = lVar8;
  (plVar4 + lVar3 * 2)[1] = lVar7;
  plVar4[lVar3 * 2] = lVar6;
  return;
}



/* Entry: 003f8240; end: 003f8243;  */

undefined8 * FUN_003f8240(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_009db970;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  FUN_003c1d50();
  func_0x003c1f6c(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
    FUN_0033a9f8();
  }
  return param_1;
}



/* Entry: 003f8244; end: 003f825b;  */

void FUN_003f8244(void)

{
  code *pcVar1;
  
  FUN_00341470();
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f8258);
  (*pcVar1)();
}



/* Entry: 003f825c; end: 003f8337;  */

long * FUN_003f825c(long *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  code *pcVar9;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  plVar5 = (long *)param_1[9];
  if (plVar5[3] != 0) {
    func_0x00775ac8();
    puVar1 = auStack_60;
    pcStack_38 = FUN_003f8338;
    ppppuVar8 = &pppuStack_40;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((char)param_1[10] == '\0') {
      func_0x00775afc();
      func_0x0040cf10();
      FUN_0033c494(&plStack_58);
      pcVar9 = FUN_003f840c;
      __Unwind_Resume();
    }
    else {
      plVar5 = (long *)param_1[0xb];
      lVar3 = (long)param_1 + *(long *)(param_1[2] + 8) + 0x48;
      (**(code **)(param_1[3] + 0x28))(lVar3,param_1 + 4);
      iVar2 = (int)lVar3;
      FUN_003c3188();
      if (iVar2 == 0) {
        pcVar4 = segment_command_00000020.segname + 8;
        FUN_00338c74();
        *(code **)pcVar4 = FUN_003f844c;
        *(long **)(pcVar4 + 8) = plVar5;
        *(code **)(pcVar4 + 0x18) = FUN_0033df34;
        *(char **)(pcVar4 + 0x20) = pcVar4;
        *(undefined8 *)(pcVar4 + 0x28) = 0;
        plStack_58 = (long *)0x0;
        FUN_003c2968(pcVar4 + 0x10,&plStack_58,0,0);
        if (((ulong)plStack_58 & 1) != 0) {
          FUN_0055293c();
        }
        return plStack_58;
      }
      param_2 = 1;
      puVar1 = &stack0xffffffffffffffd0;
      param_1 = plVar5;
      ppppuVar8 = (undefined8 ****)pppuStack_40;
      pcVar9 = pcStack_38;
    }
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar8;
    *(code **)(puVar1 + -8) = pcVar9;
    *(undefined4 *)((long)param_1 + 0xc) = param_2;
    param_1[2] = 0;
    func_0x003c1f8c(param_1);
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 8) == 0) {
      *(undefined8 *)(lVar3 + 8) = extraout_x8;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10) = extraout_x8;
    }
    *(undefined8 *)(lVar3 + 0x10) = extraout_x8;
    return param_1;
  }
  lVar3 = plVar5[1];
  if (*(long *)(lVar3 + 0x80) == *plVar5) {
LAB_003f82fc:
    if ((char)plVar5[5] == '\0') {
      func_0x003c1f6c();
      lVar3 = *param_1;
      FUN_003c1e28(lVar3);
      plVar5 = (long *)(ulong)(plVar5[2] < lVar3);
    }
    else {
      plVar5 = (long *)0x0;
    }
  }
  else {
    func_0x00339d8c(*(undefined8 *)(lVar3 + 8));
    *plVar5 = *(long *)(lVar3 + 0x80);
    uVar7 = lVar3 + 0x48U;
    do {
      uVar6 = uVar7;
      uVar7 = *(ulong *)(uVar6 + 0x20) & 0xfffffffffffffffe;
      if (lVar3 + 0x48U == uVar7) {
        param_1 = *(long **)(lVar3 + 8);
        func_0x00339da8();
        goto LAB_003f82fc;
      }
    } while (*(long *)(uVar7 + 8) != plVar5[4]);
    *(ulong *)(uVar6 + 0x20) =
         *(ulong *)(uVar7 + 0x20) & 0xfffffffffffffffe | *(ulong *)(uVar6 + 0x20) & 1;
    if (*(ulong *)(lVar3 + 0x70) == uVar7) {
      *(ulong *)(lVar3 + 0x70) = uVar6;
    }
    func_0x00339da8(*(undefined8 *)(lVar3 + 8));
    plVar5[3] = uVar7;
    plVar5 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  return plVar5;
}



/* Entry: 003f8338; end: 003f840b;  */

void FUN_003f8338(long *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  code *unaff_x30;
  undefined1 auStack_30 [8];
  ulong uStack_28;
  
  puVar1 = auStack_30;
  puVar6 = &stack0xfffffffffffffff0;
  if ((char)param_1[10] == '\0') {
    func_0x00775afc();
    func_0x0040cf10();
    FUN_0033c494(&uStack_28);
    unaff_x30 = FUN_003f840c;
    __Unwind_Resume();
  }
  else {
    plVar5 = (long *)param_1[0xb];
    lVar4 = (long)param_1 + *(long *)(param_1[2] + 8) + 0x48;
    (**(code **)(param_1[3] + 0x28))(lVar4,param_1 + 4);
    iVar2 = (int)lVar4;
    FUN_003c3188();
    if (iVar2 == 0) {
      pcVar3 = segment_command_00000020.segname + 8;
      FUN_00338c74();
      *(code **)pcVar3 = FUN_003f844c;
      *(long **)(pcVar3 + 8) = plVar5;
      *(code **)(pcVar3 + 0x18) = FUN_0033df34;
      *(char **)(pcVar3 + 0x20) = pcVar3;
      *(undefined8 *)(pcVar3 + 0x28) = 0;
      uStack_28 = 0;
      FUN_003c2968(pcVar3 + 0x10,&uStack_28,0,0);
      if ((uStack_28 & 1) != 0) {
        FUN_0055293c();
      }
      return;
    }
    param_2 = 1;
    puVar1 = (undefined1 *)register0x00000008;
    param_1 = plVar5;
    puVar6 = unaff_x29;
  }
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(code **)(puVar1 + -8) = unaff_x30;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  func_0x003c1f8c(param_1);
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 8) == 0) {
    *(undefined8 *)(lVar4 + 8) = extraout_x8;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10) = extraout_x8;
  }
  *(undefined8 *)(lVar4 + 0x10) = extraout_x8;
  return;
}



/* Entry: 003f840c; end: 003f844b;  */

void FUN_003f840c(long *param_1,undefined4 param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  func_0x003c1f8c(param_1);
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 8) == 0) {
    *(undefined8 *)(lVar1 + 8) = extraout_x8;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10) = extraout_x8;
  }
  *(undefined8 *)(lVar1 + 0x10) = extraout_x8;
  return;
}



/* Entry: 003f844c; end: 003f8467;  */

void FUN_003f844c(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003f845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1,*param_2 == 0);
  return;
}



/* Entry: 003f8468; end: 003f84df;  */

void FUN_003f8468(undefined8 param_1,undefined8 *param_2)

{
  FUN_00339d50();
  *param_2 = param_1;
  return;
}



/* Entry: 003f84e0; end: 003f868f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte *****
FUN_003f84e0(undefined8 *param_1,byte *****param_2,byte *****param_3,byte *****param_4,
            byte *****param_5)

{
  byte *****pppppbVar1;
  undefined8 uVar2;
  byte ****ppppbVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *****pppppbVar7;
  ulong uVar8;
  byte *****pppppbVar9;
  byte *****pppppbVar10;
  byte *****pppppbVar11;
  char *pcVar12;
  byte *****pppppbVar13;
  uint uVar14;
  ulong *puVar15;
  uint uVar16;
  byte *****unaff_x20;
  byte *****pppppbVar17;
  byte ****ppppbVar18;
  byte *****unaff_x21;
  byte *****pppppbVar19;
  byte *****unaff_x22;
  byte *****unaff_x23;
  byte *****unaff_x24;
  byte ****appppbStack_3b8 [2];
  char cStack_3a1;
  undefined1 auStack_3a0 [56];
  undefined8 uStack_368;
  undefined7 uStack_360;
  undefined1 uStack_359;
  undefined7 uStack_358;
  undefined1 uStack_351;
  ulong auStack_318 [2];
  undefined7 *puStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  code *pcStack_2e0;
  byte ***pppbStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  byte ****ppppbStack_2b0;
  byte ****ppppbStack_2a8;
  byte ****ppppbStack_2a0;
  byte ****ppppbStack_298;
  byte ****ppppbStack_290;
  undefined8 uStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined1 **ppuStack_270;
  byte ***apppbStack_268 [8];
  long lStack_228;
  byte ****ppppbStack_220;
  byte ****ppppbStack_218;
  byte ****ppppbStack_210;
  byte ****ppppbStack_208;
  byte ****ppppbStack_200;
  byte ****ppppbStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  byte ****ppppbStack_1b0;
  long lStack_1a8;
  byte ****ppppbStack_1a0;
  byte ****ppppbStack_198;
  byte ****ppppbStack_190;
  byte ****ppppbStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  byte ***apppbStack_158 [2];
  long lStack_148;
  byte ****ppppbStack_140;
  byte ****ppppbStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  byte ****ppppbStack_e0;
  undefined1 uStack_d1;
  byte ****ppppbStack_d0;
  byte ****ppppbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte ***pppbStack_a8;
  undefined1 uStack_99;
  byte ****ppppbStack_98;
  byte ***apppbStack_90 [6];
  char cStack_60;
  byte ***pppbStack_58;
  byte ***pppbStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppbVar17 = param_3;
  ppppbStack_98 = (byte ****)param_4;
  if (param_2[10] == (byte ****)0x0) {
    if (*(char *)(param_2 + 8) == '\0') {
      FUN_00339df0(apppbStack_90);
      if (param_3 != (byte *****)0x0) {
        *param_3 = apppbStack_90;
      }
      unaff_x24 = param_2 + 9;
      pppbStack_58 = (byte ***)*unaff_x24;
      if ((byte ****)pppbStack_58 == (byte ****)0x0) {
        pppbStack_58 = (byte ***)apppbStack_90;
        pppppbVar17 = unaff_x24;
        pppbStack_50 = pppbStack_58;
      }
      else {
        pppbStack_50 = (byte ***)pppbStack_58[8];
        pppbStack_50[7] = (byte **)apppbStack_90;
        pppppbVar17 = (byte *****)(pppbStack_58 + 8);
      }
      *pppppbVar17 = apppbStack_90;
      cStack_60 = '\0';
      unaff_x22 = &ppppbStack_98;
      unaff_x23 = (byte *****)0x0;
      FUN_003b8d70();
      pppppbVar19 = unaff_x22;
      pppppbVar17 = unaff_x23;
      do {
        if (param_2[10] != (byte ****)0x0 || cStack_60 != '\0') break;
        pppppbVar19 = (byte *****)apppbStack_90;
        pppppbVar17 = param_2;
        param_4 = unaff_x22;
        param_5 = unaff_x23;
        FUN_00339e80();
      } while ((int)pppppbVar19 == 0);
      func_0x003c1f6c();
      *(undefined1 *)((long)*pppppbVar19 + 0x34) = 0;
      if ((apppbStack_90 == *unaff_x24) &&
         (*unaff_x24 = (byte ****)pppbStack_58, apppbStack_90 == (byte ****)pppbStack_58)) {
        pppppbVar17 = (byte *****)param_2[10];
        if (pppppbVar17 != (byte *****)0x0) {
          pppbStack_a8 = (byte ***)0x0;
          param_4 = (byte *****)&pppbStack_a8;
          FUN_003c1e6c(&uStack_99);
          FUN_0033c494(&pppbStack_a8);
        }
        *unaff_x24 = (byte ****)0x0;
      }
      unaff_x21 = (byte *****)(ulong)(param_3 == (byte *****)0x0);
      pppbStack_58[8] = (byte **)pppbStack_50;
      pppbStack_50[7] = (byte **)pppbStack_58;
      param_2 = (byte *****)apppbStack_90;
      FUN_00339e64();
      unaff_x20 = param_3;
      if (param_3 != (byte *****)0x0) {
        *param_3 = (byte ****)0x0;
      }
    }
    else {
      *(undefined1 *)(param_2 + 8) = 0;
      unaff_x21 = param_2;
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pppbStack_a8);
  pppppbVar19 = param_2;
  __Unwind_Resume();
  pcStack_b8 = FUN_003f8690;
  ppppbStack_d0 = (byte ****)unaff_x20;
  ppppbStack_c8 = (byte ****)param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (pppppbVar17 != (byte *****)0x0) {
    pppppbVar19[10] = (byte ****)pppppbVar17;
    pppppbVar17 = (byte *****)pppppbVar19[9];
    if (pppppbVar17 == (byte *****)0x0) {
      ppppbStack_e0 = (byte ****)0x0;
      FUN_003c1e6c(&uStack_d1);
      pppppbVar10 = (byte *****)ppppbStack_e0;
      if (((ulong)ppppbStack_e0 & 1) != 0) {
        FUN_0055293c();
        pppppbVar10 = (byte *****)ppppbStack_e0;
      }
    }
    else {
      do {
        pppppbVar10 = pppppbVar17;
        FUN_00339f68(pppppbVar17);
        pppppbVar17 = (byte *****)pppppbVar17[7];
      } while (pppppbVar17 != (byte *****)pppppbVar19[9]);
    }
    return pppppbVar10;
  }
  func_0x00775b30();
  func_0x0040cf10();
  FUN_0033c494(&ppppbStack_e0);
  pppppbVar10 = pppppbVar19;
  __Unwind_Resume();
  pcStack_e8 = FUN_003f8718;
  ppuStack_f0 = &puStack_c0;
  _pthread_mutex_destroy();
  if ((int)pppppbVar10 == 0) {
    return pppppbVar10;
  }
  func_0x00770d4c();
  uStack_f8 = 0x339d8c;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  _pthread_mutex_lock();
  if ((int)pppppbVar10 == 0) {
    return pppppbVar10;
  }
  func_0x00770d80();
  uStack_108 = 0x339da8;
  puStack_110 = (undefined1 *)&puStack_100;
  _pthread_mutex_unlock();
  if ((int)pppppbVar10 == 0) {
    return pppppbVar10;
  }
  func_0x00770db4();
  uStack_118 = 0x339dc4;
  puStack_120 = (undefined1 *)&puStack_110;
  _pthread_mutex_trylock();
  if (((uint)pppppbVar10 | 0x10) == 0x10) {
    return (byte *****)(ulong)((uint)pppppbVar10 == 0);
  }
  func_0x00770de8();
  pcStack_128 = FUN_00339df0;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppbVar7 = (byte *****)apppbStack_158;
  ppppbStack_140 = (byte ****)unaff_x20;
  ppppbStack_138 = (byte ****)pppppbVar19;
  puStack_130 = (undefined1 *)&puStack_120;
  _pthread_condattr_init();
  if ((int)pppppbVar7 == 0) {
    pppppbVar17 = (byte *****)apppbStack_158;
    pppppbVar7 = pppppbVar10;
    _pthread_cond_init();
    if ((int)pppppbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
      return pppppbVar7;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_00339e64;
  ppuStack_170 = &puStack_130;
  _pthread_cond_destroy();
  if ((int)pppppbVar7 == 0) {
    return pppppbVar7;
  }
  func_0x00770e84();
  pcStack_178 = FUN_00339e80;
  uVar8 = (ulong)param_5 >> 0x20;
  pppppbVar19 = pppppbVar17;
  ppppbStack_1a0 = (byte ****)unaff_x22;
  ppppbStack_198 = (byte ****)unaff_x21;
  ppppbStack_190 = (byte ****)unaff_x20;
  ppppbStack_188 = (byte ****)pppppbVar10;
  puStack_180 = (undefined1 *)&ppuStack_170;
  func_0x0033a068(uVar8);
  pppppbVar10 = param_4;
  FUN_00339fc4(param_4,param_5,uVar8);
  pppppbVar9 = pppppbVar7;
  pppppbVar13 = pppppbVar17;
  if ((int)pppppbVar10 == 0) {
    _pthread_cond_wait();
    pppppbVar10 = param_5;
  }
  else {
    FUN_0033a30c(param_4,param_5,1);
    uVar8 = (ulong)param_5 >> 0x20;
    pppppbVar19 = param_5;
    FUN_0033a598(uVar8);
    pppppbVar10 = param_4;
    pppppbVar1 = param_5;
    FUN_0033a01c(param_4,param_5,uVar8);
    lStack_1a8 = (long)(int)pppppbVar1;
    ppppbStack_1b0 = (byte ****)pppppbVar10;
    _pthread_cond_timedwait(pppppbVar7,pppppbVar17,&ppppbStack_1b0);
    pppppbVar10 = param_4;
    param_4 = param_5;
  }
  if (((uint)pppppbVar9 < 0x3d) && ((1L << ((ulong)pppppbVar9 & 0x3f) & 0x1000000800000001U) != 0))
  {
    return (byte *****)(ulong)((uint)pppppbVar9 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_1b8 = FUN_00339f68;
  ppuStack_1c0 = &puStack_180;
  _pthread_cond_signal();
  if ((int)pppppbVar9 == 0) {
    return pppppbVar9;
  }
  func_0x00770eec();
  uStack_1c8 = 0x339f84;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  _pthread_cond_broadcast();
  if ((int)pppppbVar9 == 0) {
    return pppppbVar9;
  }
  func_0x00770f20();
  uStack_1d8 = 0x339fa0;
  puStack_1e0 = (undefined1 *)&puStack_1d0;
  _pthread_once();
  if ((int)pppppbVar9 == 0) {
    return pppppbVar9;
  }
  func_0x00770f54();
  pcStack_1e8 = FUN_00339fbc;
  lStack_228 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppbVar1 = (byte *****)((long)&MACH_HEADER.magic + 2);
  pppppbVar11 = pppppbVar13;
  ppppbStack_220 = (byte ****)unaff_x24;
  ppppbStack_218 = (byte ****)unaff_x23;
  ppppbStack_210 = (byte ****)param_4;
  ppppbStack_208 = (byte ****)pppppbVar10;
  ppppbStack_200 = (byte ****)pppppbVar7;
  ppppbStack_1f8 = (byte ****)pppppbVar17;
  puStack_1f0 = (undefined1 *)&puStack_1e0;
  FUN_00338e58();
  if ((int)pppppbVar1 != 0) {
    ppuStack_270 = &puStack_1e0;
    pppppbVar17 = (byte *****)apppbStack_268;
    _vsnprintf(pppppbVar17,0x40,pppppbVar19,&puStack_1e0);
    if ((int)(uint)pppppbVar17 < 0) {
      unaff_x23 = (byte *****)0x0;
      pppppbVar19 = (byte *****)0x0;
    }
    else {
      unaff_x24 = pppppbVar17;
      if ((uint)pppppbVar17 < 0x40) {
        pppppbVar19 = (byte *****)0x0;
        unaff_x23 = (byte *****)apppbStack_268;
      }
      else {
        pppppbVar19 = (byte *****)(((ulong)pppppbVar17 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_270 = &puStack_1e0;
        _vsnprintf();
        unaff_x23 = pppppbVar19;
      }
    }
    pppppbVar11 = pppppbVar13;
    FUN_00338e80(pppppbVar9,pppppbVar13,2,unaff_x23);
    pppppbVar1 = pppppbVar19;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_228) {
    return pppppbVar1;
  }
  ___stack_chk_fail();
  uStack_288 = 2;
  pcStack_278 = FUN_00339178;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  ppppbStack_2b0 = (byte ****)unaff_x24;
  ppppbStack_2a8 = (byte ****)unaff_x23;
  ppppbStack_2a0 = (byte ****)pppppbVar19;
  ppppbStack_298 = (byte ****)pppppbVar9;
  ppppbStack_290 = (byte ****)pppppbVar13;
  ppuStack_280 = &puStack_1f0;
  FUN_0033a598();
  ppppbVar18 = *pppppbVar1;
  ppppbVar3 = ppppbVar18;
  uStack_368 = uVar2;
  _strrchr(ppppbVar18,0x2f);
  if (ppppbVar3 != (byte ****)0x0) {
    ppppbVar18 = (byte ****)((long)ppppbVar3 + 1);
  }
  puVar4 = &uStack_368;
  _localtime_r(puVar4,auStack_3a0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_358 = 0x656d69746c6163;
    uStack_351 = 0;
    uStack_360 = 0x6c3a726f727265;
    uStack_359 = 0x6f;
  }
  else {
    puVar5 = &uStack_360;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_3a0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_360 = 0x733a726f727265;
      uStack_359 = 0x74;
      uStack_358 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)((long)pppppbVar1 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_318[1] = 0x560e98;
  puStack_308 = &uStack_360;
  uStack_300 = 0x560e98;
  uStack_2f8 = (ulong)pppppbVar11 & 0xffffffff;
  uStack_2f0 = 0x5606ac;
  pcStack_2e0 = FUN_00560738;
  uStack_2d0 = 0x560e98;
  uStack_2c8 = (ulong)*(uint *)(pppppbVar1 + 1);
  uStack_2c0 = 0x5606ac;
  puVar15 = auStack_318;
  auStack_318[0] = uVar6;
  uStack_2e8 = uVar8;
  pppbStack_2d8 = (byte ***)ppppbVar18;
  FUN_0056189c(appppbStack_3b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar15,6);
  uVar14 = *(uint *)((long)pppppbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar14 == 0) {
    auStack_318[0] = auStack_318[0] & 0xffffffffffffff00;
    uStack_300 = uStack_300 & 0xffffffffffffff00;
LAB_00339300:
    pppppbVar17 = *(byte ******)PTR____stderrp_00999f90;
    pcVar12 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_318);
    if ((char)uStack_300 == '\0') goto LAB_00339300;
    pppppbVar17 = *(byte ******)PTR____stderrp_00999f90;
    pcVar12 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_3a1 < '\0') {
    pppppbVar17 = (byte *****)appppbStack_3b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2b8) {
    return pppppbVar17;
  }
  ___stack_chk_fail();
  if (cStack_3a1 < '\0') {
    __ZdlPv(appppbStack_3b8[0]);
  }
  __Unwind_Resume();
  uVar14 = (uint)puVar15;
  if ((char *)0x3 < pcVar12) {
    uVar8 = (ulong)pcVar12 >> 2;
    pppppbVar19 = pppppbVar17;
    do {
      uVar14 = (*(int *)pppppbVar19 * 0x16a88000 | (uint)(*(int *)pppppbVar19 * -0x3361d2af) >> 0x11
               ) * 0x1b873593 ^ (uint)puVar15;
      uVar14 = (uVar14 >> 0x13 | uVar14 << 0xd) * 5 + 0xe6546b64;
      puVar15 = (ulong *)(ulong)uVar14;
      uVar8 = uVar8 - 1;
      pppppbVar19 = (byte *****)((long)pppppbVar19 + 4);
    } while (uVar8 != 0);
    pppppbVar17 = (byte *****)((long)pppppbVar17 + ((ulong)pcVar12 & 0xfffffffffffffffc));
  }
  uVar16 = 0;
  uVar8 = (ulong)pcVar12 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar16 = (uint)*(byte *)((long)pppppbVar17 + 2) << 0x10;
    }
    uVar16 = uVar16 | (uint)*(byte *)((long)pppppbVar17 + 1) << 8;
  }
  uVar14 = ((uVar16 ^ *(byte *)pppppbVar17) * 0x16a88000 |
           (uVar16 ^ *(byte *)pppppbVar17) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar14;
LAB_00339464:
  uVar14 = uVar14 ^ (uint)pcVar12;
  uVar14 = (uVar14 ^ uVar14 >> 0x10) * -0x7a143595;
  uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
  return (byte *****)(ulong)(uVar14 ^ uVar14 >> 0x10);
}



/* Entry: 003f8690; end: 003f8717;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f8690(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_308 [2];
  char cStack_2f1;
  undefined1 auStack_2f0 [56];
  undefined8 uStack_2b8;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  ulong auStack_268 [2];
  undefined7 *puStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  code *pcStack_230;
  long lStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined1 **ppuStack_1c0;
  byte abStack_1b8 [64];
  long lStack_178;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  byte abStack_a8 [16];
  long lStack_98;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  byte *pbStack_30;
  undefined1 uStack_21;
  
  if (param_2 != (byte *)0x0) {
    *(byte **)(param_1 + 0x50) = param_2;
    pbVar13 = *(byte **)(param_1 + 0x48);
    if (pbVar13 == (byte *)0x0) {
      pbStack_30 = (byte *)0x0;
      FUN_003c1e6c(&uStack_21,param_2,&pbStack_30);
      pbVar1 = pbStack_30;
      if (((ulong)pbStack_30 & 1) != 0) {
        FUN_0055293c();
        pbVar1 = pbStack_30;
      }
    }
    else {
      do {
        pbVar1 = pbVar13;
        FUN_00339f68(pbVar13);
        pbVar13 = *(byte **)(pbVar13 + 0x38);
      } while (pbVar13 != *(byte **)(param_1 + 0x48));
    }
    return pbVar1;
  }
  func_0x00775b30();
  func_0x0040cf10();
  FUN_0033c494(&pbStack_30);
  __Unwind_Resume();
  pcStack_38 = FUN_003f8718;
  puStack_40 = &stack0xfffffffffffffff0;
  _pthread_mutex_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d4c();
  uStack_48 = 0x339d8c;
  puStack_50 = (undefined1 *)&puStack_40;
  _pthread_mutex_lock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d80();
  uStack_58 = 0x339da8;
  puStack_60 = (undefined1 *)&puStack_50;
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770db4();
  uStack_68 = 0x339dc4;
  puStack_70 = (undefined1 *)&puStack_60;
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)param_1 == 0);
  }
  func_0x00770de8();
  pcStack_78 = FUN_00339df0;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar13 = abStack_a8;
  puStack_80 = (undefined1 *)&puStack_70;
  _pthread_condattr_init();
  if ((int)pbVar13 == 0) {
    param_2 = abStack_a8;
    _pthread_cond_init();
    if ((int)param_1 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
      return param_1;
    }
  }
  else {
    func_0x00770e50();
    param_1 = pbVar13;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_00339e64;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770e84();
  pcStack_c8 = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar13 = param_2;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  func_0x0033a068(uVar7);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar13 = param_4;
    FUN_0033a598(uVar7);
    FUN_0033a01c(param_3,param_4,uVar7);
    lStack_f8 = (long)(int)param_4;
    uStack_100 = param_3;
    _pthread_cond_timedwait(param_1,param_2,&uStack_100);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_108 = FUN_00339f68;
  ppuStack_110 = &puStack_d0;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_118 = 0x339f84;
  puStack_120 = (undefined1 *)&ppuStack_110;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_128 = 0x339fa0;
  puStack_130 = (undefined1 *)&puStack_120;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_138 = FUN_00339fbc;
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = param_2;
  puStack_140 = (undefined1 *)&puStack_130;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_1c0 = &puStack_130;
    pbVar1 = abStack_1b8;
    _vsnprintf(pbVar1,0x40,pbVar13,&puStack_130);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar13 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar13 = (byte *)0x0;
        unaff_x23 = abStack_1b8;
      }
      else {
        pbVar13 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_1c0 = &puStack_130;
        _vsnprintf();
        unaff_x23 = pbVar13;
      }
    }
    pbVar8 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar1 = pbVar13;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_1d8 = 2;
  pcStack_1c8 = FUN_00339178;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_200 = unaff_x24;
  pbStack_1f8 = unaff_x23;
  pbStack_1f0 = pbVar13;
  pbStack_1e8 = param_1;
  pbStack_1e0 = param_2;
  ppuStack_1d0 = &puStack_140;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_2b8 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
  }
  puVar4 = &uStack_2b8;
  _localtime_r(puVar4,auStack_2f0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_2a8 = 0x656d69746c6163;
    uStack_2a1 = 0;
    uStack_2b0 = 0x6c3a726f727265;
    uStack_2a9 = 0x6f;
  }
  else {
    puVar5 = &uStack_2b0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2f0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_2b0 = 0x733a726f727265;
      uStack_2a9 = 0x74;
      uStack_2a8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_268[1] = 0x560e98;
  puStack_258 = &uStack_2b0;
  uStack_250 = 0x560e98;
  uStack_248 = (ulong)pbVar8 & 0xffffffff;
  uStack_240 = 0x5606ac;
  pcStack_230 = FUN_00560738;
  uStack_220 = 0x560e98;
  uStack_218 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_210 = 0x5606ac;
  puVar11 = auStack_268;
  auStack_268[0] = uVar6;
  uStack_238 = uVar7;
  lStack_228 = lVar14;
  FUN_0056189c(apbStack_308,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar10 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar10 == 0) {
    auStack_268[0] = auStack_268[0] & 0xffffffffffffff00;
    uStack_250 = uStack_250 & 0xffffffffffffff00;
LAB_00339300:
    pbVar13 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_268);
    if ((char)uStack_250 == '\0') goto LAB_00339300;
    pbVar13 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2f1 < '\0') {
    pbVar13 = apbStack_308[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return pbVar13;
  }
  ___stack_chk_fail();
  if (cStack_2f1 < '\0') {
    __ZdlPv(apbStack_308[0]);
  }
  __Unwind_Resume();
  uVar10 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar13;
    do {
      uVar10 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar10;
      uVar7 = uVar7 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar7 != 0);
    pbVar13 = pbVar13 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar12 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar12 = (uint)pbVar13[2] << 0x10;
    }
    uVar12 = uVar12 | (uint)pbVar13[1] << 8;
  }
  uVar10 = ((uVar12 ^ *pbVar13) * 0x16a88000 | (uVar12 ^ *pbVar13) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar10;
LAB_00339464:
  uVar10 = uVar10 ^ (uint)pcVar9;
  uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
}



/* Entry: 003f8718; end: 003f8723;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f8718(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2d8 [2];
  char cStack_2c1;
  undefined1 auStack_2c0 [56];
  undefined8 uStack_288;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  ulong auStack_238 [2];
  undefined7 *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  code *pcStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  byte abStack_188 [64];
  long lStack_148;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  byte abStack_78 [16];
  long lStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  _pthread_mutex_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d4c();
  uStack_18 = 0x339d8c;
  puStack_20 = &stack0xfffffffffffffff0;
  _pthread_mutex_lock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d80();
  uStack_28 = 0x339da8;
  puStack_30 = (undefined1 *)&puStack_20;
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770db4();
  uStack_38 = 0x339dc4;
  puStack_40 = (undefined1 *)&puStack_30;
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)param_1 == 0);
  }
  func_0x00770de8();
  pcStack_48 = FUN_00339df0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar14 = abStack_78;
  puStack_50 = (undefined1 *)&puStack_40;
  _pthread_condattr_init();
  if ((int)pbVar14 == 0) {
    param_2 = abStack_78;
    _pthread_cond_init();
    if ((int)param_1 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return param_1;
    }
  }
  else {
    func_0x00770e50();
    param_1 = pbVar14;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_00339e64;
  ppuStack_90 = &puStack_50;
  _pthread_cond_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770e84();
  pcStack_98 = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar14 = param_2;
  puStack_a0 = (undefined1 *)&ppuStack_90;
  func_0x0033a068(uVar7);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar14 = param_4;
    FUN_0033a598(uVar7);
    FUN_0033a01c(param_3,param_4,uVar7);
    lStack_c8 = (long)(int)param_4;
    uStack_d0 = param_3;
    _pthread_cond_timedwait(param_1,param_2,&uStack_d0);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_d8 = FUN_00339f68;
  ppuStack_e0 = &puStack_a0;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_e8 = 0x339f84;
  puStack_f0 = (undefined1 *)&ppuStack_e0;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_f8 = 0x339fa0;
  puStack_100 = (undefined1 *)&puStack_f0;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_108 = FUN_00339fbc;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = param_2;
  puStack_110 = (undefined1 *)&puStack_100;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_190 = &puStack_100;
    pbVar1 = abStack_188;
    _vsnprintf(pbVar1,0x40,pbVar14,&puStack_100);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar14 = (byte *)0x0;
        unaff_x23 = abStack_188;
      }
      else {
        pbVar14 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_190 = &puStack_100;
        _vsnprintf();
        unaff_x23 = pbVar14;
      }
    }
    pbVar8 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar1 = pbVar14;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_1a8 = 2;
  pcStack_198 = FUN_00339178;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1d0 = unaff_x24;
  pbStack_1c8 = unaff_x23;
  pbStack_1c0 = pbVar14;
  pbStack_1b8 = param_1;
  pbStack_1b0 = param_2;
  ppuStack_1a0 = &puStack_110;
  FUN_0033a598();
  lVar13 = *(long *)pbVar1;
  lVar3 = lVar13;
  uStack_288 = uVar2;
  _strrchr(lVar13,0x2f);
  if (lVar3 != 0) {
    lVar13 = lVar3 + 1;
  }
  puVar4 = &uStack_288;
  _localtime_r(puVar4,auStack_2c0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_278 = 0x656d69746c6163;
    uStack_271 = 0;
    uStack_280 = 0x6c3a726f727265;
    uStack_279 = 0x6f;
  }
  else {
    puVar5 = &uStack_280;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2c0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_280 = 0x733a726f727265;
      uStack_279 = 0x74;
      uStack_278 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_238[1] = 0x560e98;
  puStack_228 = &uStack_280;
  uStack_220 = 0x560e98;
  uStack_218 = (ulong)pbVar8 & 0xffffffff;
  uStack_210 = 0x5606ac;
  pcStack_200 = FUN_00560738;
  uStack_1f0 = 0x560e98;
  uStack_1e8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1e0 = 0x5606ac;
  puVar11 = auStack_238;
  auStack_238[0] = uVar6;
  uStack_208 = uVar7;
  lStack_1f8 = lVar13;
  FUN_0056189c(apbStack_2d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar10 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar10 == 0) {
    auStack_238[0] = auStack_238[0] & 0xffffffffffffff00;
    uStack_220 = uStack_220 & 0xffffffffffffff00;
LAB_00339300:
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_238);
    if ((char)uStack_220 == '\0') goto LAB_00339300;
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2c1 < '\0') {
    pbVar14 = apbStack_2d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return pbVar14;
  }
  ___stack_chk_fail();
  if (cStack_2c1 < '\0') {
    __ZdlPv(apbStack_2d8[0]);
  }
  __Unwind_Resume();
  uVar10 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar14;
    do {
      uVar10 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar10;
      uVar7 = uVar7 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar7 != 0);
    pbVar14 = pbVar14 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar12 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar12 = (uint)pbVar14[2] << 0x10;
    }
    uVar12 = uVar12 | (uint)pbVar14[1] << 8;
  }
  uVar10 = ((uVar12 ^ *pbVar14) * 0x16a88000 | (uVar12 ^ *pbVar14) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar10;
LAB_00339464:
  uVar10 = uVar10 ^ (uint)pcVar9;
  uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
}



/* Entry: 003f8724; end: 003f880f;  */

undefined ** FUN_003f8724(undefined **param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_128 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (0xfffffffd < *(int *)param_1 - 3U) {
    return &PTR_s_Default_Factory_009e1cb8;
  }
  func_0x00775b64();
  uStack_18 = 0x3f8750;
  ppuStack_50 = &puStack_20;
  if (param_1 == (undefined **)0x0) {
    uStack_38 = 0;
    uStack_40 = 1;
    uStack_30 = 0;
    ppuVar5 = &PTR_s_Default_Factory_009e1cb8;
    puStack_20 = &stack0xfffffffffffffff0;
    (*(code *)PTR_FUN_00afb140)(&PTR_s_Default_Factory_009e1cb8,&uStack_40);
    return ppuVar5;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00775b98();
  uStack_48 = 0x3f87a0;
  if (param_1 == (undefined **)0x0) {
    uStack_68 = 0;
    uStack_70 = 0x100000001;
    uStack_60 = 0;
    ppuVar5 = &PTR_s_Default_Factory_009e1cb8;
    (*(code *)PTR_FUN_00afb140)(&PTR_s_Default_Factory_009e1cb8,&uStack_70);
    return ppuVar5;
  }
  func_0x00775bcc();
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003f8808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1[2])();
    return param_1;
  }
  func_0x00775c00();
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = (ulong)uVar1 * 0x48;
  puVar4 = auStack_128;
  FUN_003413d4();
  lVar7 = *(long *)(&UNK_009e1ac0 + lVar3);
  (*(code *)(&PTR_SUB_009e1b98)[uVar2 * 7])();
  ppuVar5 = (undefined **)(puVar4 + lVar7 + 0x48);
  func_0x00338c94();
  ppuVar5[2] = &UNK_009e1ab8 + lVar3;
  ppuVar5[3] = &UNK_009e1b90 + uVar2 * 0x38;
  *ppuVar5 = (undefined *)0x2;
  (*(code *)(&PTR_SUB_009e1ba0)[uVar2 * 7])((long)(ppuVar5 + 9) + lVar7,ppuVar5 + 1);
  (*(code *)(&PTR_DAT_009e1ac8)[(ulong)uVar1 * 9])(ppuVar5 + 9,uVar6);
  ppuVar5[5] = FUN_003f6ea0;
  ppuVar5[6] = (undefined *)ppuVar5;
  ppuVar5[7] = (undefined *)0x0;
  FUN_00341470(auStack_128);
  return ppuVar5;
}



/* Entry: 003f8810; end: 003f8827;  */

undefined8 * FUN_003f8810(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_a8 [72];
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = (ulong)uVar1 * 0x48;
  puVar4 = auStack_a8;
  FUN_003413d4();
  lVar7 = *(long *)(&UNK_009e1ac0 + lVar3);
  (*(code *)(&PTR_SUB_009e1b98)[uVar2 * 7])();
  puVar5 = (undefined8 *)(puVar4 + lVar7 + 0x48);
  func_0x00338c94();
  puVar5[2] = &UNK_009e1ab8 + lVar3;
  puVar5[3] = &UNK_009e1b90 + uVar2 * 0x38;
  *puVar5 = 2;
  (*(code *)(&PTR_SUB_009e1ba0)[uVar2 * 7])((long)(puVar5 + 9) + lVar7,puVar5 + 1);
  (*(code *)(&PTR_DAT_009e1ac8)[(ulong)uVar1 * 9])(puVar5 + 9,uVar6);
  puVar5[5] = FUN_003f6ea0;
  puVar5[6] = puVar5;
  puVar5[7] = 0;
  FUN_00341470(auStack_a8);
  return puVar5;
}



/* Entry: 003f8828; end: 003f8a5f;  */

undefined *** FUN_003f8828(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_FUN_009de508;
  pcStack_50 = FUN_003f8a60;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1,1,0x7ffffffe,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_003f88a0:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_003f88a0;
  }
  ppuStack_78 = &PTR_FUN_009de508;
  pcStack_70 = FUN_003f8a60;
  pppuStack_60 = &ppuStack_78;
  FUN_003f517c(param_1,3,0x7ffffffe,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_78;
LAB_003f88ec:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_003f88ec;
  }
  ppuStack_98 = &PTR_FUN_009de508;
  uStack_90 = 0x3f8ab8;
  pppuStack_80 = &ppuStack_98;
  FUN_003f517c(param_1,4,0x7ffffffe,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_98;
LAB_003f8940:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_80;
    goto LAB_003f8940;
  }
  ppuStack_b8 = &PTR_FUN_009de508;
  uStack_b0 = 0x3f8b10;
  pppuStack_a0 = &ppuStack_b8;
  FUN_003f517c(param_1,4,0x7ffffffd,&ppuStack_b8);
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_b8;
LAB_003f8998:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_a0;
    if (pppuStack_a0 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_003f8998;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar4 = 4;
    pppuVar3 = &ppuStack_b8;
  }
  else {
    if (pppuStack_a0 == (undefined ***)0x0) goto LAB_003f8a58;
    lVar4 = 5;
    pppuVar3 = pppuStack_a0;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_003f8a58:
  pppuVar2 = pppuVar1;
  __Unwind_Resume();
  pcStack_c8 = FUN_003f8a60;
  pppuVar3 = pppuVar2 + 7;
  pcStack_f0 = "grpc.internal.security_connector";
  uStack_e8 = 0x20;
  pppuStack_e0 = &ppuStack_b8;
  pppuStack_d8 = pppuVar1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_003a35e0(pppuVar3,&pcStack_f0);
  if (pppuVar3 != (undefined ***)0x0) {
    FUN_003a6bac(pppuVar2,&PTR_FUN_009e1160);
  }
  return (undefined ***)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 003f8a60; end: 003f8b57;  */

undefined8 FUN_003f8a60(long param_1)

{
  long lVar1;
  char *pcStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x38;
  pcStack_30 = "grpc.internal.security_connector";
  uStack_28 = 0x20;
  FUN_003a35e0(lVar1,&pcStack_30);
  if (lVar1 != 0) {
    FUN_003a6bac(param_1,&PTR_FUN_009e1160);
  }
  return 1;
}



/* Entry: 003f8b58; end: 003f8b93;  */

void FUN_003f8b58(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (iRam0000000000b5ec2c != 0x80) {
    *(undefined8 *)((long)iRam0000000000b5ec2c * 0x10 + 0xb5ec30) = param_1;
    *(undefined8 *)((long)iRam0000000000b5ec2c * 0x10 + 0xb5ec38) = param_2;
    iRam0000000000b5ec2c = iRam0000000000b5ec2c + 1;
    return;
  }
  func_0x00775c34();
  func_0x00339fa0(0xafb148,FUN_003f8c8c);
  uVar2 = uRam0000000000b5f430;
  func_0x00339d8c(uRam0000000000b5f430);
  iVar3 = iRam0000000000b5ec28 + 1;
  bVar1 = iRam0000000000b5ec28 == 0;
  iRam0000000000b5ec28 = iVar3;
  if (bVar1) {
    if (cRam0000000000b5f438 == '\x01') {
      cRam0000000000b5f438 = '\0';
      func_0x00339f84(uRam0000000000b5f440);
    }
    FUN_0033a834();
    func_0x003c2d00();
    FUN_003b1eec();
    FUN_003c2d74();
    FUN_0033bb1c();
    if (0 < iRam0000000000b5ec2c) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0xb5ec30;
      iVar3 = iRam0000000000b5ec2c;
      do {
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)();
          iVar3 = iRam0000000000b5ec2c;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < iVar3);
    }
    FUN_003b1f34();
    FUN_003c2e14();
  }
  func_0x00339da8(uVar2);
  return;
}



/* Entry: 003f8b94; end: 003f8c8b;  */

void FUN_003f8b94(void)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x00339fa0(0xafb148,FUN_003f8c8c);
  uVar2 = uRam0000000000b5f430;
  func_0x00339d8c(uRam0000000000b5f430);
  iVar3 = iRam0000000000b5ec28 + 1;
  bVar1 = iRam0000000000b5ec28 == 0;
  iRam0000000000b5ec28 = iVar3;
  if (bVar1) {
    if (cRam0000000000b5f438 == '\x01') {
      cRam0000000000b5f438 = '\0';
      func_0x00339f84(uRam0000000000b5f440);
    }
    FUN_0033a834();
    func_0x003c2d00();
    FUN_003b1eec();
    FUN_003c2d74();
    FUN_0033bb1c();
    if (0 < iRam0000000000b5ec2c) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0xb5ec30;
      iVar3 = iRam0000000000b5ec2c;
      do {
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)();
          iVar3 = iRam0000000000b5ec2c;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < iVar3);
    }
    FUN_003b1f34();
    FUN_003c2e14();
  }
  func_0x00339da8(uVar2);
  return;
}



/* Entry: 003f8c8c; end: 003f8cfb;  */

void FUN_003f8c8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00338ec4();
  uVar1 = 0x40;
  __Znwm();
  FUN_00339d50();
  uVar2 = 0x30;
  uRam0000000000b5f430 = uVar1;
  __Znwm();
  FUN_00339df0();
  uRam0000000000b5f440 = uVar2;
  FUN_00403888();
  FUN_003f6cd4();
  func_0x003c2a74();
  return;
}



/* Entry: 003f8cfc; end: 003f8daf;  */

void FUN_003f8cfc(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [72];
  
  FUN_003c2a78(auStack_68,0);
  FUN_003c3188();
  FUN_003d013c(0);
  if (-1 < (int)uRam0000000000b5ec2c) {
    puVar4 = (undefined8 *)((ulong)uRam0000000000b5ec2c * 0x10 + 0xb5ec38);
    lVar3 = (ulong)uRam0000000000b5ec2c + 1;
    do {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
      }
      puVar4 = puVar4 + -2;
      lVar2 = lVar3 + -1;
      bVar1 = 0 < lVar3;
      lVar3 = lVar2;
    } while (lVar2 != 0 && bVar1);
  }
  FUN_003c2e4c();
  FUN_0033bb1c();
  FUN_003b202c();
  FUN_0033a8e8();
  FUN_00341470(auStack_68);
  uRam0000000000b5f438 = 0;
  func_0x00339f84(uRam0000000000b5f440);
  return;
}



/* Entry: 003f8db0; end: 003f8e13;  */

void FUN_003f8db0(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam0000000000b5f430;
  func_0x00339d8c(uRam0000000000b5f430);
  iRam0000000000b5ec28 = iRam0000000000b5ec28 + -1;
  if (iRam0000000000b5ec28 == 0) {
    FUN_003f8cfc();
  }
  func_0x00339da8(uVar1);
  return;
}



/* Entry: 003f8e14; end: 003f8f53;  */

void FUN_003f8e14(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar1 = puRam0000000000b5f430;
  puVar2 = puRam0000000000b5f430;
  func_0x00339d8c();
  iRam0000000000b5ec28 = iRam0000000000b5ec28 + -1;
  if (iRam0000000000b5ec28 == 0) {
    func_0x003c1f8c();
    pbVar3 = (byte *)*puVar2;
    FUN_003c3188();
    if ((((ulong)puVar2 & 1) == 0) && ((pbVar3 == (byte *)0x0 || ((*pbVar3 & 1) == 0)))) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/init.cc"
                   ,0xdb,0,"grpc_shutdown starts clean-up now");
      uRam0000000000b5f438 = 1;
      FUN_003f8cfc();
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/init.cc"
                   ,0xe1,0,"grpc_shutdown spawns clean-up thread");
      iRam0000000000b5ec28 = iRam0000000000b5ec28 + 1;
      uRam0000000000b5f438 = 1;
      uStack_58 = 0;
      auStack_60[0] = 0;
      FUN_0033b6e0(auStack_50,"grpc_shutdown",FUN_003f8db0,0,0,auStack_60);
      FUN_003b3344(auStack_50);
      FUN_003b3a7c(auStack_50);
    }
  }
  func_0x00339da8(puVar1);
  return;
}



/* Entry: 003f8f54; end: 003f8f7b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f8f54(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003f8f7c; end: 003f901f;  */

void FUN_003f8f7c(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_003a2164(param_2,"grpc.lame_filter_error",0x16);
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar3 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003f906c(&ppuStack_38,&uStack_40);
  param_1[2] = uStack_30;
  param_1[3] = uStack_28;
  *param_1 = 0;
  param_1[1] = &PTR_FUN_009e1d48;
  ppuStack_38 = &PTR_FUN_009e1d48;
  uStack_30 = 0x36;
  uStack_28 = 0;
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003f9020; end: 003f906b;  */

undefined8 * FUN_003f9020(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009e1d48;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_003f966c();
  }
  if ((param_1[1] & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003f906c; end: 003f910f;  */

undefined8 * FUN_003f906c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009e1d48;
  param_1[1] = *param_2;
  *param_2 = 0x36;
  lVar1 = 0x70;
  __Znwm();
  FUN_00339d50();
  *(char **)(lVar1 + 0x40) = "lame_client";
  *(undefined4 *)(lVar1 + 0x48) = 4;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 **)(lVar1 + 0x58) = (undefined8 *)(lVar1 + 0x60);
  param_1[2] = lVar1;
  return param_1;
}



/* Entry: 003f9110; end: 003f9197;  */

void FUN_003f9110(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uStack_28;
  
  FUN_0037849c(&uStack_28,param_2 + 8);
  ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar5 = (ulong *)*ppuVar4;
  do {
    uVar6 = *puVar5;
    uVar1 = uVar6 + 0x10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x003d6048(puVar5,0x10);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_009de8c8;
  puVar5[1] = uStack_28;
  *param_1 = puVar5;
  return;
}



/* Entry: 003f9198; end: 003f919f;  */

undefined8 FUN_003f9198(void)

{
  return 1;
}



/* Entry: 003f91a0; end: 003f93b7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003f91a0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong auStack_98 [5];
  ulong auStack_70 [3];
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 uStack_41;
  undefined8 *puStack_40;
  ulong *puStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00339d8c(uVar3);
  puVar1 = (undefined8 *)param_2[1];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    param_2[1] = 0;
    puStack_40 = puVar1;
    FUN_003fb030(lVar2 + 0x40,(int)param_2[2],&puStack_40);
    puVar1 = puStack_40;
    puStack_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  if (param_2[3] != 0) {
    FUN_003fb0ec(*(long *)(param_1 + 0x10) + 0x40);
  }
  func_0x00339da8(uVar3);
  lVar2 = param_2[0xe];
  if (lVar2 != 0) {
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[0] = 0;
    FUN_003b646c(&uStack_50,2,"lame client channel",0x13,&uStack_51,auStack_70);
    FUN_003c1e6c(&uStack_41,lVar2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_38 = auStack_70;
    FUN_0033d548(&puStack_38);
  }
  lVar2 = param_2[0xf];
  if (lVar2 != 0) {
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    auStack_98[1] = 0;
    FUN_003b646c(auStack_98 + 4,2,"lame client channel",0x13,&uStack_51,auStack_98 + 1);
    FUN_003c1e6c(&uStack_41,lVar2,auStack_98 + 4);
    if ((auStack_98[4] & 1) != 0) {
      FUN_0055293c();
    }
    puStack_38 = auStack_98 + 1;
    FUN_0033d548(&puStack_38);
  }
  if (*param_2 != 0) {
    auStack_98[0] = 0;
    FUN_003c1e6c(&puStack_38,*param_2,auStack_98);
    if ((auStack_98[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  return 1;
}



/* Entry: 003f93b8; end: 003f93cf;  */

void FUN_003f93b8(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.lame_filter_error";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_009e1d78;
  return;
}



/* Entry: 003f93d0; end: 003f961f;  */

long * FUN_003f93d0(undefined8 param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined4 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_78 [72];
  
  FUN_003413d4(auStack_78);
  iVar3 = 2;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  FUN_003a6080(&lStack_a0);
  uVar8 = 8;
  __Znwm();
  uVar9 = param_3;
  _strlen(param_3);
  FUN_00552acc(uVar8,iVar3,param_3,uVar9);
  ppuStack_b8 = &PTR_FUN_009e1d78;
  uStack_a8 = 2;
  uStack_c0 = uVar8;
  FUN_003a1bc4(&uStack_90,&lStack_a0,"grpc.lame_filter_error",0x16,&uStack_c0);
  FUN_00382478(&uStack_c0);
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plStack_c8 = plStack_88;
  uStack_d0 = uStack_90;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  FUN_003f2f5c(&lStack_a0,param_1,&uStack_d0,2,0);
  plVar6 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_98;
  if (lStack_a0 == 0) {
    plStack_98 = (long *)0x0;
    FUN_003822d4(&lStack_a0);
    plVar1 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar2 = plStack_88 + 1;
      do {
        lVar10 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    FUN_00341470(auStack_78);
    return plVar6;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/lame_client.cc"
               ,0x97,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x3f95b8);
  (*pcVar7)();
}



/* Entry: 003f9620; end: 003f966b;  */

void FUN_003f9620(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009e1d48;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_003f966c();
  }
  if ((param_1[1] & 1) != 0) {
    FUN_0055293c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003f966c; end: 003f96af;  */

void FUN_003f966c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003fb02c(param_2 + 0x40);
    func_0x00339d70(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003f96b0; end: 003f96f3;  */

void FUN_003f96b0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  ulong uVar4;
  int *piVar5;
  
  pdVar3 = &MACH_HEADER.cpusubtype;
  __Znwm();
  uVar4 = *param_1;
  *(ulong *)pdVar3 = uVar4;
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 003f96f4; end: 003f9733;  */

void FUN_003f96f4(ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    if ((*param_1 & 1) != 0) {
      FUN_0055293c();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003f9734; end: 003f974f;  */

uint FUN_003f9734(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 003f9750; end: 003f984f;  */

void FUN_003f9750(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_003f97d8:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003f97d8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_003f9848;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_003f9848:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 003f9850; end: 003f98db;  */

void FUN_003f9850(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 003f98dc; end: 003f98df;  */

undefined8 * FUN_003f98dc(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 003f98e0; end: 003f98f3;  */

void FUN_003f98e0(void)

{
  FUN_003acd30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003f98f4; end: 003f98fb;  */

void FUN_003f98f4(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 003f98fc; end: 003f998b;  */

void FUN_003f98fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uStack_30;
  undefined1 uStack_21;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  uStack_30 = 0;
  FUN_003c1e6c(&uStack_21,param_3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003f998c; end: 003f99b3;  */

void FUN_003f998c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_003f99b4(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 003f99b4; end: 003f9af7;  */

ulong * FUN_003f99b4(undefined8 *param_1,ulong *param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  ulong auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_4 + 0x14) == 1) {
    FUN_003a1d70(auStack_60,*(undefined8 *)(param_4 + 8));
    FUN_003f8f7c(auStack_50,auStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    uVar4 = uStack_38;
    puVar7 = *(undefined8 **)(param_3 + 8);
    if (auStack_50[0] == 0) {
      *puVar7 = &PTR_FUN_009e1d48;
      puVar7[1] = uStack_40;
      uStack_40 = 0x36;
      uStack_38 = 0;
      puVar7[2] = uVar4;
      *param_1 = 0;
    }
    else {
      *puVar7 = &PTR_FUN_009db778;
      uStack_68 = auStack_50[0];
      if ((auStack_50[0] & 1) != 0) {
        piVar8 = (int *)(auStack_50[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003fbec4(param_1,&uStack_68);
      if ((uStack_68 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar5 = auStack_50;
    FUN_003f9af8(puVar5);
    return puVar5;
  }
  func_0x00775c68();
  func_0x0040cf10();
  FUN_0033c494(&uStack_68);
  FUN_003f9af8(auStack_50);
  __Unwind_Resume();
  if (*param_2 == 0) {
    uVar6 = param_2[3];
    param_2[1] = (ulong)&PTR_FUN_009e1d48;
    param_2[3] = 0;
    if (uVar6 != 0) {
      FUN_003f966c();
    }
    if ((param_2[2] & 1) != 0) {
      FUN_0055293c();
    }
  }
  else if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return param_2;
}



/* Entry: 003f9af8; end: 003f9b5f;  */

ulong * FUN_003f9af8(ulong *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    uVar1 = param_1[3];
    param_1[1] = (ulong)&PTR_FUN_009e1d48;
    param_1[3] = 0;
    if (uVar1 != 0) {
      FUN_003f966c();
    }
    if ((param_1[2] & 1) != 0) {
      FUN_0055293c();
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003f9b60; end: 003f9b7f;  */

void FUN_003f9b60(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003f9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 003f9b80; end: 003f9bc7;  */

void FUN_003f9b80(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 003f9bc8; end: 003f9beb;  */

void FUN_003f9bc8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 003f9bec; end: 003f9c9b;  */

void FUN_003f9bec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plStack_28;
  
  plStack_28 = *(long **)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = *plStack_28;
  if (lVar5 == 0) {
    plStack_28 = (long *)0x0;
  }
  else {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_28 = (long *)*plStack_28;
  }
  FUN_003fa18c(uVar2,param_2,param_3,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_28 + 0x10))();
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 003f9c9c; end: 003f9ca3;  */

long * FUN_003f9c9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((int)plVar5[2] != 1) {
    func_0x003f9bd4(plVar5 + 0x15);
    FUN_003ee418(plVar5[0x10]);
    if ((plVar5[0x2a] & 1U) != 0) {
      FUN_0055293c();
    }
    if ((plVar5[0x23] & 1U) != 0) {
      FUN_0055293c();
    }
    if ((char)plVar5[0xc] != '\0') {
      FUN_0034b418(plVar5 + 8);
    }
    if ((char)plVar5[7] != '\0') {
      FUN_0034b418(plVar5 + 3);
    }
    plVar6 = (long *)*plVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    return plVar5;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
               ,0x4aa,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3fa7f0);
  (*pcVar4)();
}



/* Entry: 003f9ca4; end: 003f9ce3;  */

long * FUN_003f9ca4(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    func_0x00775cc0();
  }
  else if (*(int *)(param_3 + 0x14) == 0) {
    puVar9 = (undefined8 *)param_2[1];
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    *param_1 = 0;
    return param_2;
  }
  func_0x00775cf4();
  plVar5 = (long *)param_2[1];
  FUN_003fa14c(plVar5 + 5,0);
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    if ((*(long *)(lVar7 + 0x18) != 0) && (plVar5[0xb] != 0)) {
      FUN_003a9808();
      lVar7 = *plVar5;
    }
    func_0x00339d8c(lVar7 + 0x60);
    if ((char)plVar5[4] != '\0') {
      lVar8 = *plVar5;
      plVar6 = (long *)plVar5[3];
      lVar2 = *plVar6;
      *(long *)(lVar2 + 8) = plVar6[1];
      *(long *)plVar6[1] = lVar2;
      *(long *)(lVar8 + 0x170) = *(long *)(lVar8 + 0x170) + -1;
      __ZdlPv();
      if ((char)plVar5[4] != '\0') {
        *(undefined1 *)(plVar5 + 4) = 0;
      }
    }
    FUN_003f9cec(*plVar5);
    func_0x00339da8(lVar7 + 0x60);
  }
  FUN_003fa14c(plVar5 + 5,0);
  plVar6 = (long *)plVar5[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return plVar5;
}



/* Entry: 003f9ce4; end: 003f9ceb;  */

long * FUN_003f9ce4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = *(long **)(param_1 + 8);
  FUN_003fa14c(plVar5 + 5,0);
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    if ((*(long *)(lVar7 + 0x18) != 0) && (plVar5[0xb] != 0)) {
      FUN_003a9808();
      lVar7 = *plVar5;
    }
    func_0x00339d8c(lVar7 + 0x60);
    if ((char)plVar5[4] != '\0') {
      lVar8 = *plVar5;
      plVar6 = (long *)plVar5[3];
      lVar2 = *plVar6;
      *(long *)(lVar2 + 8) = plVar6[1];
      *(long *)plVar6[1] = lVar2;
      *(long *)(lVar8 + 0x170) = *(long *)(lVar8 + 0x170) + -1;
      __ZdlPv();
      if ((char)plVar5[4] != '\0') {
        *(undefined1 *)(plVar5 + 4) = 0;
      }
    }
    FUN_003f9cec(*plVar5);
    func_0x00339da8(lVar7 + 0x60);
  }
  FUN_003fa14c(plVar5 + 5,0);
  plVar6 = (long *)plVar5[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return plVar5;
}



/* Entry: 003f9cec; end: 003f9ee3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003f9cec(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong auStack_78 [4];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  if ((*(int *)(param_1 + 0x138) == 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
    func_0x00339d8c(param_1 + 0xa0);
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[1] = 0;
    FUN_003b646c(&uStack_50,2,"Server Shutdown",0xf,&uStack_51,auStack_78 + 1);
    puVar7 = &uStack_50;
    FUN_003f9ee4(param_1);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_48 = auStack_78 + 1;
    FUN_0033d548(&puStack_48);
    func_0x00339da8(param_1 + 0xa0);
    if ((*(long *)(param_1 + 0x170) == 0) &&
       (*(ulong *)(param_1 + 0x188) <= *(ulong *)(param_1 + 400))) {
      *(undefined1 *)(param_1 + 0x13c) = 1;
      puVar9 = *(undefined8 **)(param_1 + 0x140);
      puVar2 = *(undefined8 **)(param_1 + 0x148);
      if (puVar9 != puVar2) {
        plVar1 = (long *)(param_1 + 8);
        do {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          auStack_78[0] = 0;
          FUN_003f6eb0(puVar9[1],*puVar9,auStack_78,FUN_003f9ffc,param_1,puVar9 + 2,0);
          if ((auStack_78[0] & 1) != 0) {
            FUN_0055293c();
          }
          puVar9 = puVar9 + 7;
        } while (puVar9 != puVar2);
      }
    }
    else {
      uVar5 = 1;
      FUN_0033a598();
      func_0x0033a204();
      uVar6 = 1;
      uVar8 = 3;
      func_0x0033a110(1,3);
      FUN_00339fc4(uVar5,puVar7,uVar6,uVar8);
      if (-1 < (int)uVar5) {
        uVar6 = 1;
        FUN_0033a598();
        *(undefined8 *)(param_1 + 0x198) = uVar6;
        *(ulong **)(param_1 + 0x1a0) = puVar7;
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                     ,0x2db,0,
                     "Waiting for %lu channels and %lu/%lu listeners to be destroyed before shutting down server"
                    );
      }
    }
  }
  return;
}



/* Entry: 003f9ee4; end: 003f9ffb;  */

void FUN_003f9ee4(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    plVar4 = *(long **)(param_1 + 0x130);
    uStack_38 = *param_2;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
    plVar1 = *(long **)(param_1 + 0x120);
    for (plVar4 = *(long **)(param_1 + 0x118); plVar4 != plVar1; plVar4 = plVar4 + 1) {
      plVar5 = *(long **)(*plVar4 + 0x38);
      uStack_40 = *param_2;
      if ((uStack_40 & 1) != 0) {
        piVar6 = (int *)(uStack_40 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
      (**(code **)(**(long **)(*plVar4 + 0x38) + 0x10))();
    }
  }
  return;
}



/* Entry: 003f9ffc; end: 003fa027;  */

void FUN_003f9ffc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003fa024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 003fa028; end: 003fa14b;  */

long * FUN_003fa028(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_003fa14c(param_1 + 5,0);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    if ((*(long *)(lVar6 + 0x18) != 0) && (param_1[0xb] != 0)) {
      FUN_003a9808();
      lVar6 = *param_1;
    }
    func_0x00339d8c(lVar6 + 0x60);
    if ((char)param_1[4] != '\0') {
      lVar7 = *param_1;
      plVar5 = (long *)param_1[3];
      lVar2 = *plVar5;
      *(long *)(lVar2 + 8) = plVar5[1];
      *(long *)plVar5[1] = lVar2;
      *(long *)(lVar7 + 0x170) = *(long *)(lVar7 + 0x170) + -1;
      __ZdlPv();
      if ((char)param_1[4] != '\0') {
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
    FUN_003f9cec(*param_1);
    func_0x00339da8(lVar6 + 0x60);
  }
  FUN_003fa14c(param_1 + 5,0);
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 003fa14c; end: 003fa18b;  */

void FUN_003fa14c(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_003fa874(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 003fa18c; end: 003fa253;  */

undefined8 * FUN_003fa18c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_4;
  *param_4 = 0;
  uVar1 = param_2;
  FUN_003f1bdc();
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x2a] = 0;
  param_1[0xd] = 0x7fffffffffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x2f] = *(undefined8 *)(param_3 + 0x38);
  param_1[0x1f] = FUN_003fa254;
  param_1[0x20] = param_2;
  param_1[0x21] = 0;
  param_1[0x26] = FUN_003fa55c;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  return param_1;
}



/* Entry: 003fa254; end: 003fa55b;  */

void FUN_003fa254(long param_1,ulong *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  byte *pbVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  long *plVar16;
  char *pcVar17;
  ulong *puVar18;
  long lVar19;
  bool bVar20;
  ulong unaff_x22;
  ulong uStack_140;
  ulong uStack_138;
  undefined1 uStack_129;
  ulong auStack_128 [2];
  long lStack_118;
  ulong *puStack_110;
  long *plStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 uStack_99;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar19 = *(long *)(param_1 + 0x10);
  if (*param_2 == 0) {
    puVar9 = *(uint **)(lVar19 + 0xe0);
    bVar20 = (*puVar9 & 1) != 0;
    if (bVar20) {
      uStack_88 = *(undefined8 *)(puVar9 + 0x76);
      plStack_90 = *(long **)(puVar9 + 0x74);
      uStack_78 = *(undefined8 *)(puVar9 + 0x7a);
      uStack_80 = *(undefined8 *)(puVar9 + 0x78);
      puVar9[0x76] = 0;
      puVar9[0x77] = 0;
      puVar9[0x74] = 0;
      puVar9[0x75] = 0;
      puVar9[0x7a] = 0;
      puVar9[0x7b] = 0;
      puVar9[0x78] = 0;
      puVar9[0x79] = 0;
      *puVar9 = *puVar9 & 0xfffffffe;
      FUN_0034b418(puVar9 + 0x74);
    }
    else {
      plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    }
    cStack_70 = bVar20;
    FUN_003f4934(lVar19 + 0x18,&plStack_90);
    if ((cStack_70 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90)) {
      do {
        lVar10 = *plStack_90;
        cVar1 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar20) {
          *plStack_90 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
    pbVar11 = *(byte **)(lVar19 + 0xe0);
    if ((*pbVar11 >> 1 & 1) != 0) {
      plVar16 = *(long **)(pbVar11 + 0x1b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar16) {
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar20) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar3 = (undefined8 *)(lVar19 + 0x40);
      uStack_88 = *(undefined8 *)(pbVar11 + 0x1b8);
      plStack_90 = *(long **)(pbVar11 + 0x1b0);
      uStack_78 = *(undefined8 *)(pbVar11 + 0x1c8);
      uStack_80 = *(undefined8 *)(pbVar11 + 0x1c0);
      if (*(char *)(lVar19 + 0x60) != '\0') {
        FUN_0034b418();
        *(undefined1 *)(lVar19 + 0x60) = 0;
      }
      puVar3[1] = uStack_88;
      *puVar3 = plStack_90;
      puVar3[3] = uStack_78;
      puVar3[2] = uStack_80;
      *(undefined1 *)(lVar19 + 0x60) = 1;
    }
  }
  if ((*(byte *)(*(long *)(lVar19 + 0xe0) + 1) >> 3 & 1) != 0) {
    *(undefined8 *)(lVar19 + 0x68) = *(undefined8 *)(*(long *)(lVar19 + 0xe0) + 0x180);
  }
  if ((*(char *)(lVar19 + 0x60) == '\0') || (*(char *)(lVar19 + 0x38) == '\0')) {
    plStack_90 = (long *)*param_2;
    if (((ulong)plStack_90 & 1) != 0) {
      piVar12 = (int *)((long)plStack_90 + -1);
      do {
        cVar1 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar20) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bdf2c(&uStack_98,2,"Missing :authority or :path",0x1b,&uStack_99,1,&plStack_90);
    uVar4 = *param_2;
    if (uStack_98 == uVar4) {
LAB_003fa3ec:
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = uStack_98;
      uStack_98 = 0x36;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
        uVar4 = uStack_98;
        goto LAB_003fa3ec;
      }
    }
    uVar4 = *(ulong *)(lVar19 + 0x118);
    uVar13 = *param_2;
    if (uVar13 != uVar4) {
      if ((uVar13 & 1) != 0) {
        piVar12 = (int *)(uVar13 - 1);
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar20) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar13 = *param_2;
      }
      *(ulong *)(lVar19 + 0x118) = uVar13;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)plStack_90 & 1) != 0) {
      FUN_0055293c();
    }
  }
  puVar18 = *(ulong **)(lVar19 + 0x110);
  *(undefined8 *)(lVar19 + 0x110) = 0;
  if (*(char *)(lVar19 + 0x120) != '\0') {
    uVar5 = *(undefined8 *)(lVar19 + 0x178);
    uStack_a8 = *(ulong *)(lVar19 + 0x150);
    if ((uStack_a8 & 1) != 0) {
      piVar12 = (int *)(uStack_a8 - 1);
      do {
        cVar1 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar20) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb88c(uVar5,lVar19 + 0x128,&uStack_a8,"continue server recv_trailing_metadata_ready");
    if ((uStack_a8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uStack_b0 = *param_2;
  if ((uStack_b0 & 1) != 0) {
    piVar12 = (int *)(uStack_b0 - 1);
    do {
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar20) {
        *piVar12 = *piVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar7 = puVar18;
  FUN_00342584(&plStack_90,puVar18,&uStack_b0);
  uVar4 = uStack_b0;
  if ((uStack_b0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&plStack_90);
  }
  uVar13 = uVar4;
  __Unwind_Resume();
  pcStack_b8 = FUN_003fa55c;
  lVar10 = *(long *)(uVar13 + 0x10);
  uStack_d8 = lVar19;
  puStack_d0 = puVar18;
  uStack_c8 = uVar4;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar10 + 0x110) != 0) {
    uVar4 = *(ulong *)(lVar10 + 0x150);
    uVar14 = *puVar7;
    if (uVar14 != uVar4) {
      if ((uVar14 & 1) != 0) {
        piVar12 = (int *)(uVar14 - 1);
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar20) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar14 = *puVar7;
      }
      *(ulong *)(lVar10 + 0x150) = uVar14;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar18 = puStack_d0;
    lVar19 = uStack_d8;
    *(undefined1 *)(lVar10 + 0x120) = 1;
    *(code **)(lVar10 + 0x130) = FUN_003fa55c;
    *(ulong *)(lVar10 + 0x138) = uVar13;
    *(undefined8 *)(lVar10 + 0x140) = 0;
    plVar16 = *(long **)(lVar10 + 0x178);
    pcVar6 = "deferring server recv_trailing_metadata_ready until after recv_initial_metadata_ready"
    ;
    do {
      lVar8 = *plVar16;
      lVar10 = lVar8 + -1;
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar20) {
        *plVar16 = lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 != 0) {
      if (lVar8 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_e8);
        FUN_0033c494(&stack0xffffffffffffff20);
        plVar2 = plVar16;
        __Unwind_Resume();
        lStack_118 = lVar19;
        puStack_110 = puVar18;
        pcStack_f8 = FUN_003bba54;
        plVar2 = plVar2 + 0xb;
        plStack_108 = plVar16;
        ppuStack_100 = &puStack_c0;
        do {
          pcVar17 = (char *)*plVar2;
          if (((ulong)pcVar17 & 1) == 0) {
            auStack_128[0] = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar2 != pcVar17) {
                ClearExclusiveLocal();
                bVar20 = true;
                goto LAB_003bbb24;
              }
              cVar1 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar20) {
                *plVar2 = (long)pcVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pcVar17 == (char *)0x0) goto LAB_003bbb14;
            uStack_140 = 0;
            FUN_003c1e6c(&uStack_129,pcVar17,&uStack_140);
            if ((uStack_140 & 1) != 0) {
              FUN_0055293c();
            }
            bVar20 = false;
            pcVar6 = pcVar17;
          }
          else {
            FUN_003b7b3c(auStack_128,(ulong)pcVar17 & 0xfffffffffffffffe);
            if (auStack_128[0] == 0) goto LAB_003bbad0;
            uStack_138 = auStack_128[0];
            if ((auStack_128[0] & 1) != 0) {
              piVar12 = (int *)(auStack_128[0] - 1);
              do {
                cVar1 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar20) {
                  *piVar12 = *piVar12 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_003c1e6c(&uStack_129,pcVar6,&uStack_138);
            if ((uStack_138 & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar20 = false;
          }
LAB_003bbb24:
          if ((auStack_128[0] & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar20) {
            return;
          }
        } while( true );
      }
      plVar16 = plVar16 + 1;
      plVar2 = plVar16;
      FUN_0033b3e4(plVar16,(long)&uStack_d8 + 7);
      while (plVar2 == (long *)0x0) {
        plVar2 = plVar16;
        FUN_0033b3e4(plVar16,(long)&uStack_d8 + 7);
      }
      FUN_003b7b6c(&stack0xffffffffffffff20,plVar2[3]);
      plVar2[3] = 0;
      if ((unaff_x22 & 1) != 0) {
        piVar12 = (int *)(unaff_x22 - 1);
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar20) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb81c();
      if ((unaff_x22 & 1) != 0) {
        FUN_0055293c(unaff_x22);
      }
      if ((unaff_x22 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  uStack_f0 = *puVar7;
  if ((uStack_f0 & 1) != 0) {
    piVar12 = (int *)(uStack_f0 - 1);
    do {
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar20) {
        *piVar12 = *piVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_f8 = *(code **)(lVar10 + 0x118);
  if (((ulong)pcStack_f8 & 1) != 0) {
    pcVar15 = pcStack_f8 + -1;
    do {
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
      if (bVar20) {
        *(int *)pcVar15 = *(int *)pcVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&uStack_e8,&uStack_f0,&pcStack_f8);
  uVar4 = *puVar7;
  if (uStack_e8 != uVar4) {
    *puVar7 = uStack_e8;
    uStack_e8 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_003fa674;
    FUN_0055293c();
    uVar4 = uStack_e8;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003fa674:
  if (((ulong)pcStack_f8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_f0 & 1) != 0) {
    FUN_0055293c();
  }
  uVar5 = *(undefined8 *)(lVar10 + 0x148);
  ppuStack_100 = (undefined1 **)*puVar7;
  if (((ulong)ppuStack_100 & 1) != 0) {
    piVar12 = (int *)((long)ppuStack_100 - 1);
    do {
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar20) {
        *piVar12 = *piVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_e8,uVar5,&ppuStack_100);
  if (((ulong)ppuStack_100 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003fa55c; end: 003fa723;  */

void FUN_003fa55c(long param_1,ulong *param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  code *pcVar10;
  char *pcVar11;
  long lVar12;
  bool bVar13;
  ulong unaff_x22;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong auStack_78 [4];
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar12 + 0x110) != 0) {
    uVar3 = *(ulong *)(lVar12 + 0x150);
    uVar8 = *param_2;
    if (uVar8 != uVar3) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar1 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar13) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar8 = *param_2;
      }
      *(ulong *)(lVar12 + 0x150) = uVar8;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(lVar12 + 0x120) = 1;
    *(code **)(lVar12 + 0x130) = FUN_003fa55c;
    *(long *)(lVar12 + 0x138) = param_1;
    *(undefined8 *)(lVar12 + 0x140) = 0;
    plVar4 = *(long **)(lVar12 + 0x178);
    pcVar5 = "deferring server recv_trailing_metadata_ready until after recv_initial_metadata_ready"
    ;
    do {
      lVar7 = *plVar4;
      lVar12 = lVar7 + -1;
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar13) {
        *plVar4 = lVar12;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 != 0) {
      if (lVar7 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_38);
        FUN_0033c494(&stack0xffffffffffffffd0);
        plVar2 = plVar4;
        __Unwind_Resume();
        pcStack_48 = FUN_003bba54;
        plVar2 = plVar2 + 0xb;
        plStack_58 = plVar4;
        puStack_50 = &stack0xfffffffffffffff0;
        do {
          pcVar11 = (char *)*plVar2;
          if (((ulong)pcVar11 & 1) == 0) {
            auStack_78[0] = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar2 != pcVar11) {
                ClearExclusiveLocal();
                bVar13 = true;
                goto LAB_003bbb24;
              }
              cVar1 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar13) {
                *plVar2 = (long)pcVar5;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pcVar11 == (char *)0x0) goto LAB_003bbb14;
            uStack_90 = 0;
            FUN_003c1e6c(&uStack_79,pcVar11,&uStack_90);
            if ((uStack_90 & 1) != 0) {
              FUN_0055293c();
            }
            bVar13 = false;
            pcVar5 = pcVar11;
          }
          else {
            FUN_003b7b3c(auStack_78,(ulong)pcVar11 & 0xfffffffffffffffe);
            if (auStack_78[0] == 0) goto LAB_003bbad0;
            uStack_88 = auStack_78[0];
            if ((auStack_78[0] & 1) != 0) {
              piVar9 = (int *)(auStack_78[0] - 1);
              do {
                cVar1 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar13) {
                  *piVar9 = *piVar9 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_003c1e6c(&uStack_79,pcVar5,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar13 = false;
          }
LAB_003bbb24:
          if ((auStack_78[0] & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar13) {
            return;
          }
        } while( true );
      }
      plVar4 = plVar4 + 1;
      plVar2 = plVar4;
      FUN_0033b3e4(plVar4,&stack0xffffffffffffffdf);
      while (plVar2 == (long *)0x0) {
        plVar2 = plVar4;
        FUN_0033b3e4(plVar4,&stack0xffffffffffffffdf);
      }
      FUN_003b7b6c(&stack0xffffffffffffffd0,plVar2[3]);
      plVar2[3] = 0;
      if ((unaff_x22 & 1) != 0) {
        piVar9 = (int *)(unaff_x22 - 1);
        do {
          cVar1 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar13) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb81c();
      if ((unaff_x22 & 1) != 0) {
        FUN_0055293c(unaff_x22);
      }
      if ((unaff_x22 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar9 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar13) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_48 = *(code **)(lVar12 + 0x118);
  if (((ulong)pcStack_48 & 1) != 0) {
    pcVar10 = pcStack_48 + -1;
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar13) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&uStack_38,&uStack_40,&pcStack_48);
  uVar3 = *param_2;
  if (uStack_38 != uVar3) {
    *param_2 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_003fa674;
    FUN_0055293c();
    uVar3 = uStack_38;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003fa674:
  if (((ulong)pcStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  uVar6 = *(undefined8 *)(lVar12 + 0x148);
  puStack_50 = (undefined1 *)*param_2;
  if (((ulong)puStack_50 & 1) != 0) {
    piVar9 = (int *)(puStack_50 + -1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar13) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_38,uVar6,&puStack_50);
  if (((ulong)puStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003fa724; end: 003fa80b;  */

long * FUN_003fa724(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  if ((int)param_1[2] != 1) {
    func_0x003f9bd4(param_1 + 0x15);
    FUN_003ee418(param_1[0x10]);
    if ((param_1[0x2a] & 1U) != 0) {
      FUN_0055293c();
    }
    if ((param_1[0x23] & 1U) != 0) {
      FUN_0055293c();
    }
    if ((char)param_1[0xc] != '\0') {
      FUN_0034b418(param_1 + 8);
    }
    if ((char)param_1[7] != '\0') {
      FUN_0034b418(param_1 + 3);
    }
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
               ,0x4aa,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3fa7f0);
  (*pcVar4)();
}



/* Entry: 003fa80c; end: 003fa873;  */

void FUN_003fa80c(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_3 + 0x10);
  if ((bVar1 >> 3 & 1) != 0) {
    lVar2 = *(long *)(param_3 + 8);
    if (*(long *)(lVar2 + 0x40) != 0) {
      FUN_00775d48();
      if (*(long *)*param_1 != 0) {
        FUN_003fa8b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)*param_1);
        return;
      }
      return;
    }
    param_1[0x1c] = *(undefined8 *)(lVar2 + 0x38);
    param_1[0x22] = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 **)(lVar2 + 0x40) = param_1 + 0x1d;
    *(undefined8 **)(lVar2 + 0x48) = param_1 + 0x1e;
    bVar1 = *(byte *)(param_3 + 0x10);
  }
  if ((bVar1 >> 5 & 1) != 0) {
    lVar2 = *(long *)(param_3 + 8);
    param_1[0x29] = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 **)(lVar2 + 0x90) = param_1 + 0x25;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 0x18))((undefined8 *)(param_2 + 0x18),param_3);
  return;
}



/* Entry: 003fa874; end: 003fa8b3;  */

void FUN_003fa874(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_003fa8b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 003fa8b4; end: 003fa90b;  */

void FUN_003fa8b4(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x50) {
    FUN_0034b418(lVar1 + -0x20);
    FUN_0034b418(lVar1 + -0x40);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 003fa90c; end: 003fa91f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003fa90c(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003fa920; end: 003faa53;  */

void FUN_003fa920(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  lVar3 = *param_2;
  uVar6 = param_2[1];
  uVar1 = uVar6;
  if (lVar3 == 0) {
    uVar1 = uVar6 & 0xff;
  }
  if (uVar1 == 0) {
    FUN_003b646c(2,"Metadata keys cannot be zero length",0x23,&stack0xffffffffffffffd7,
                 &stack0xffffffffffffffb8);
  }
  else if (lVar3 == 0 || uVar6 >> 0x20 == 0) {
    pcVar5 = (char *)param_2[2];
    if (lVar3 == 0) {
      pcVar5 = (char *)((long)param_2 + 9);
    }
    if (*pcVar5 != ':') {
      pcVar5 = "Illegal header key";
      lVar3 = (long)param_2 + 9;
      if (*param_2 != 0) {
        lVar3 = param_2[2];
      }
      uVar1 = param_2[1] & 0xff;
      if (*param_2 != 0) {
        uVar1 = param_2[1];
      }
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          if ((*(ulong *)(&UNK_007fb608 + ((ulong)(*(byte *)(lVar3 + uVar6) >> 3) & 0x18)) >>
               ((ulong)*(byte *)(lVar3 + uVar6) & 0x3f) & 1) == 0) {
            lVar4 = lVar3;
            FUN_00339624(lVar3,uVar1,3,&uStack_60);
            lStack_68 = lVar4;
            _strlen("Illegal header key");
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_98 = 0;
            FUN_003b646c(&uStack_78,2,"Illegal header key",pcVar5,&uStack_79,&uStack_98);
            lVar2 = (long)param_2 + 9;
            if (*param_2 != 0) {
              lVar2 = param_2[2];
            }
            FUN_003be104(&uStack_70,&uStack_78,4,(lVar3 - lVar2) + uVar6);
            FUN_003be254(param_1,&uStack_70,6,lVar4,uStack_60);
            if ((uStack_70 & 1) != 0) {
              FUN_0055293c();
            }
            if ((uStack_78 & 1) != 0) {
              FUN_0055293c();
            }
            puStack_58 = &uStack_98;
            FUN_0033d548(&puStack_58);
            lStack_68 = 0;
            if (lVar4 == 0) {
              return;
            }
            FUN_00338cb8(lVar4);
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
      }
      *param_1 = 0;
      return;
    }
    uStack_70 = 0;
    lStack_68 = 0;
    uStack_78 = 0;
    FUN_003b646c(2,"Metadata keys cannot start with :",0x21,&stack0xffffffffffffffd7,&uStack_78);
  }
  else {
    puStack_58 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_003b646c(2,"Metadata keys cannot be larger than UINT32_MAX",0x2e,&stack0xffffffffffffffd7,
                 &uStack_60);
  }
  FUN_0033d548(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 003faa54; end: 003fabfb;  */

void FUN_003faa54(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      if ((*(ulong *)(param_3 + ((ulong)(*(byte *)(lVar1 + uVar6) >> 3) & 0x18)) >>
           ((ulong)*(byte *)(lVar1 + uVar6) & 0x3f) & 1) == 0) {
        lVar4 = lVar1;
        FUN_00339624(lVar1,uVar2,3,&uStack_60);
        uVar5 = param_4;
        lStack_68 = lVar4;
        _strlen(param_4);
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        FUN_003b646c(&uStack_78,2,param_4,uVar5,&uStack_79,&uStack_98);
        lVar3 = (long)param_2 + 9;
        if (*param_2 != 0) {
          lVar3 = param_2[2];
        }
        FUN_003be104(&uStack_70,&uStack_78,4,(lVar1 - lVar3) + uVar6);
        FUN_003be254(param_1,&uStack_70,6,lVar4,uStack_60);
        if ((uStack_70 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        puStack_58 = &uStack_98;
        FUN_0033d548(&puStack_58);
        lStack_68 = 0;
        if (lVar4 == 0) {
          return;
        }
        FUN_00338cb8(lVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  *param_1 = 0;
  return;
}



/* Entry: 003fabfc; end: 003fac67;  */

void FUN_003fabfc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  pcVar5 = "Illegal header value";
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      if ((*(ulong *)(&UNK_007fb628 + ((ulong)(*(byte *)(lVar1 + uVar6) >> 3) & 0x18)) >>
           ((ulong)*(byte *)(lVar1 + uVar6) & 0x3f) & 1) == 0) {
        lVar4 = lVar1;
        FUN_00339624(lVar1,uVar2,3,&uStack_60);
        lStack_68 = lVar4;
        _strlen("Illegal header value");
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        FUN_003b646c(&uStack_78,2,"Illegal header value",pcVar5,&uStack_79,&uStack_98);
        lVar3 = (long)param_2 + 9;
        if (*param_2 != 0) {
          lVar3 = param_2[2];
        }
        FUN_003be104(&uStack_70,&uStack_78,4,(lVar1 - lVar3) + uVar6);
        FUN_003be254(param_1,&uStack_70,6,lVar4,uStack_60);
        if ((uStack_70 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        puStack_58 = &uStack_98;
        FUN_0033d548(&puStack_58);
        lStack_68 = 0;
        if (lVar4 == 0) {
          return;
        }
        FUN_00338cb8(lVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  *param_1 = 0;
  return;
}



/* Entry: 003fac68; end: 003fae5f;  */

undefined4 * FUN_003fac68(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x10000;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = 0;
  uVar2 = param_2;
  FUN_0033a05c();
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = 100;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* Entry: 003fae60; end: 003fae9b;  */

long * FUN_003fae60(uint param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plStack_48;
  
  if (param_1 < 5) {
    return (long *)(&PTR_s_IDLE_009e1f70)[(int)param_1];
  }
  pcVar4 = "return \"UNKNOWN\"";
  pcVar6 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/connectivity_state.cc"
  ;
  uVar7 = 0x33;
  func_0x00338df0("return \"UNKNOWN\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/connectivity_state.cc"
                  ,0x33);
  uVar5 = 0x38;
  __Znwm(0x38);
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_48 = (long *)pcVar4;
  FUN_003fb218(uVar5,&plStack_48,pcVar6,uVar7,(long *)((long)pcVar4 + 0x10));
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
  return plStack_48;
}



/* Entry: 003fae9c; end: 003faf5b;  */

void FUN_003fae9c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_38;
  
  uVar4 = 0x38;
  __Znwm(0x38);
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_38 = param_1;
  FUN_003fb218(uVar4,&plStack_38,param_2,param_3,param_1 + 2);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))();
    }
  }
  return;
}



/* Entry: 003faf5c; end: 003fb02b;  */

long FUN_003faf5c(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 8) != 4) {
    plVar3 = *(long **)(param_1 + 0x18);
    while (plVar3 != (long *)(param_1 + 0x20)) {
      uStack_38 = 0;
      (**(code **)(*(long *)plVar3[5] + 0x18))((long *)plVar3[5],4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      plVar1 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar2 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  FUN_003fb544(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003fb02c; end: 003fb02f;  */

long FUN_003fb02c(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 8) != 4) {
    plVar3 = *(long **)(param_1 + 0x18);
    while (plVar3 != (long *)(param_1 + 0x20)) {
      uStack_38 = 0;
      (**(code **)(*(long *)plVar3[5] + 0x18))((long *)plVar3[5],4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      plVar1 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar2 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  FUN_003fb544(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003fb030; end: 003fb0eb;  */

void FUN_003fb030(long param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != param_2) {
    (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,iVar1,param_1 + 0x10);
  }
  if (iVar1 != 4) {
    puStack_40 = (undefined8 *)*param_3;
    *param_3 = 0;
    puStack_38 = puStack_40;
    FUN_003fb5a8(param_1 + 0x18,&puStack_40,&puStack_40);
    puVar2 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
  }
  return;
}



/* Entry: 003fb0ec; end: 003fb113;  */

void FUN_003fb0ec(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_003fb6b8(param_1 + 0x18,&uStack_18);
  return;
}



/* Entry: 003fb114; end: 003fb20f;  */

void FUN_003fb114(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
  iVar5 = (int)param_2;
  if (*(int *)(param_1 + 8) != iVar5) {
    *(int *)(param_1 + 8) = iVar5;
    uVar4 = *(ulong *)(param_1 + 0x10);
    uVar6 = *param_3;
    if (uVar6 != uVar4) {
      if ((uVar6 & 1) != 0) {
        piVar7 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar6 = *param_3;
      }
      *(ulong *)(param_1 + 0x10) = uVar6;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar8 = *(long **)(param_1 + 0x18);
    while (plVar8 != (long *)(param_1 + 0x20)) {
      (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],param_2,param_3);
      plVar2 = (long *)plVar8[1];
      plVar9 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar3 = (long *)*plVar8 != plVar9;
          plVar9 = plVar8;
        } while (bVar3);
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
    if (iVar5 == 4) {
      FUN_003fb544((long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(long **)(param_1 + 0x18) = (long *)(param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 003fb210; end: 003fb217;  */

undefined4 FUN_003fb210(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 003fb218; end: 003fb3c7;  */

undefined8 *
FUN_003fb218(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4,long *param_5
            )

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined ***pppuStack_68;
  undefined1 uStack_59;
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  uVar8 = *param_4;
  param_1[2] = uVar8;
  if ((uVar8 & 1) != 0) {
    piVar9 = (int *)(uVar8 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*param_5 == 0) {
    puVar7 = param_1 + 3;
    param_1[4] = FUN_003fb3c8;
    param_1[5] = param_1;
    param_1[6] = 0;
    pppuStack_68 = (undefined ***)0x0;
    FUN_003c1e6c(&uStack_59,puVar7,&pppuStack_68);
    iVar6 = (int)puVar7;
    pppuVar4 = pppuStack_68;
    if (((ulong)pppuStack_68 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    ppuStack_58 = &PTR_FUN_009e1f00;
    pppuVar4 = &ppuStack_58;
    puStack_50 = param_1;
    pppuStack_40 = &ppuStack_58;
    FUN_003d0dec(*param_5,pppuVar4,&uStack_59);
    iVar6 = (int)pppuVar4;
    if (pppuStack_40 == &ppuStack_58) {
      lVar10 = 4;
      pppuVar4 = &ppuStack_58;
    }
    else {
      pppuVar4 = pppuStack_40;
      if (pppuStack_40 == (undefined ***)0x0) goto LAB_003fb300;
      lVar10 = 5;
    }
    (*(code *)(*pppuVar4)[lVar10])();
  }
LAB_003fb300:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&pppuStack_68);
    FUN_0033c494(param_1 + 2);
    pppuVar5 = (undefined ***)*param_1;
    if (pppuVar5 != (undefined ***)0x0) {
      pppuVar1 = pppuVar5 + 1;
      do {
        ppuVar11 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((undefined **)((long)ppuVar11 + -1) == (undefined **)0x0) goto LAB_003fb3b8;
    }
  }
  do {
    pppuVar5 = pppuVar4;
    __Unwind_Resume();
LAB_003fb3b8:
    (*(code *)(*pppuVar5)[2])();
  } while( true );
}



/* Entry: 003fb3c8; end: 003fb43f;  */

void FUN_003fb3c8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,(int)param_1[1],param_1 + 2);
  if ((param_1[2] & 1U) != 0) {
    FUN_0055293c();
  }
  plVar4 = (long *)*param_1;
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
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003fb440; end: 003fb447;  */

void FUN_003fb440(void)

{
  return;
}



/* Entry: 003fb448; end: 003fb47b;  */

void FUN_003fb448(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009e1f00;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003fb47c; end: 003fb49f;  */

void FUN_003fb47c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009e1f00;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003fb4a0; end: 003fb4db;  */

long FUN_003fb4a0(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e1f60);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003fb4dc; end: 003fb4e7;  */

undefined ** FUN_003fb4dc(void)

{
  return &PTR_DAT_009e1f60;
}



/* Entry: 003fb4e8; end: 003fb543;  */

void FUN_003fb4e8(undefined8 *param_1)

{
  ulong uStack_28;
  
  uStack_28 = 0;
  FUN_003fb3c8(*param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003fb544; end: 003fb5a7;  */

void FUN_003fb544(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_003fb544(param_1,*param_2);
    FUN_003fb544(param_1,param_2[1]);
    puVar1 = (undefined8 *)param_2[5];
    param_2[5] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003fb5a8; end: 003fb663;  */

undefined1  [16] FUN_003fb5a8(long param_1,ulong *param_2,qword *param_3)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  qword qVar5;
  qword qVar6;
  undefined1 auVar7 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, pqVar3[4] <= *param_2) {
        if (*param_2 <= pqVar3[4]) {
          uVar2 = 0;
          goto LAB_003fb64c;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_003fb610;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_003fb610:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  qVar6 = param_3[1];
  qVar5 = *param_3;
  param_3[1] = 0;
  pqVar1[5] = qVar6;
  pqVar1[4] = qVar5;
  FUN_003fb664(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_003fb64c:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = pqVar3;
  return auVar7;
}



/* Entry: 003fb664; end: 003fb6b7;  */

void FUN_003fb664(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003fb6b8; end: 003fb71b;  */

undefined8 FUN_003fb6b8(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      plVar1 = plVar4 + 1;
      if (*param_2 <= (ulong)plVar4[4]) {
        plVar2 = plVar4;
        plVar1 = plVar4;
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && ((ulong)plVar2[4] <= *param_2)) {
      FUN_003fb71c();
      return 1;
    }
  }
  return 0;
}


