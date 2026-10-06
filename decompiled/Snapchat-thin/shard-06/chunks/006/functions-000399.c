/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104abe204; end: 104abe207;  */

void FUN_104abe204(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abe2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a2078 + 0x18))();
  return;
}



/* Entry: 104abe208; end: 104abe2b3;  */

void FUN_104abe208(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  func_0x0001004601ac();
  *param_1 = param_2;
  iVar2 = 0x136a1fe8;
  func_0x000100460448(0x1136a1fe8);
  lVar1 = lRam00000001136a2068;
  param_1[1] = 0x1136a2058;
  param_1[2] = lVar1;
  *(undefined8 **)(lVar1 + 8) = param_1;
  *(undefined8 **)(param_1[1] + 0x10) = param_1;
  func_0x000107c61268();
  if (iVar2 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abe2b4; end: 104abe2e3;  */

void FUN_104abe2b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abe2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a2078 + 8))();
  return;
}



/* Entry: 104abe2e4; end: 104abe313;  */

void FUN_104abe2e4(ulong param_1)

{
  func_0x0001004610f4();
  if (((uint)param_1 & 0xffff) < 0x100 || (param_1 & 1) == 0) {
    FUN_104ac3124();
  }
  FUN_104ac8c78();
  func_0x00010045fe6c(0x1130a6120,FUN_104abd96c);
                    /* WARNING: Could not recover jumptable at 0x000104abd618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0xf0))();
  return;
}



/* Entry: 104abe314; end: 104abe317;  */

void FUN_104abe314(void)

{
  return;
}



/* Entry: 104abe318; end: 104abe34b;  */

void FUN_104abe318(uint param_1)

{
  long lVar1;
  
  FUN_104abd61c();
  func_0x000104ac8c8c();
  func_0x0001004610f4();
  lVar1 = lRam00000001136a20b0;
  if ((0xff < (param_1 & 0xffff)) && ((param_1 & 1) != 0)) {
    return;
  }
  if (lRam00000001136a20b0 != 0) {
    func_0x0001005a5f48(lRam00000001136a20b0);
    __ZdlPv(lVar1);
  }
  lRam00000001136a20b0 = 0;
  return;
}



/* Entry: 104abe34c; end: 104abe353;  */

void FUN_104abe34c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abd968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0xf8))();
  return;
}



/* Entry: 104abe354; end: 104abe3c7;  */

undefined8 FUN_104abe354(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *param_2;
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
  FUN_104abd8dc(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104abe3c8; end: 104abe3d3;  */

void FUN_104abe3c8(void)

{
  return;
}



/* Entry: 104abe3d4; end: 104abe7cf;  */

ulong * FUN_104abe3d4(long *param_1,ulong *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  int *piVar9;
  ulong uVar10;
  undefined1 uStack_149;
  ulong uStack_148;
  undefined1 uStack_139;
  ulong uStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  ulong *puStack_100;
  undefined8 *puStack_f8;
  ulong *puStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  char *pcStack_d0;
  ulong uStack_c0;
  ulong *puStack_b8;
  undefined1 uStack_a9;
  ulong *puStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004b8028(&puStack_80);
  *param_1 = 0;
  puVar4 = param_2;
  _fopen(param_2,&UNK_10f432965);
  if (puVar4 == (ulong *)0x0) {
    puVar7 = puVar4;
    ___error();
    puVar7 = (ulong *)(ulong)(uint)*puVar7;
    FUN_104aba954(&puStack_a8,&uStack_a9,puVar7,"fopen");
    puVar5 = puStack_a8;
    if (puStack_a8 == (ulong *)0x0) {
      pcStack_d0 = "!GRPC_ERROR_IS_NONE(error)";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abe724;
    }
    puStack_a8 = (ulong *)0x36;
    puStack_a0 = puVar5;
    puVar8 = (ulong *)*param_1;
    if (puVar5 == puVar8) {
      if (((ulong)puVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_1 = (long)puVar5;
      puStack_a0 = (ulong *)0x36;
      if (((ulong)puVar8 & 1) != 0) {
        func_0x00010084dad0(puVar8);
      }
    }
    puVar5 = puStack_a8;
    if (((ulong)puStack_a8 & 1) != 0) {
      func_0x00010084dad0();
    }
    param_4[1] = uStack_78;
    *param_4 = puStack_80;
    param_4[3] = uStack_68;
    param_4[2] = uStack_70;
  }
  else {
    _fseek(puVar4,0,2);
    puVar7 = puVar4;
    _ftell();
    _fseek(puVar4,0,0);
    puVar5 = puVar7;
    if (param_3 != 0) {
      puVar5 = (ulong *)((long)puVar7 + 1);
    }
    func_0x000100460200();
    puVar8 = puVar5;
    _fread();
    if (puVar8 < puVar7) {
      func_0x000100460314();
      ___error();
      puVar7 = (ulong *)(ulong)(uint)*puVar5;
      FUN_104aba954(&puStack_b8,&uStack_a9,puVar7,"fread");
      puVar5 = puStack_b8;
      if (puStack_b8 == (ulong *)0x0) {
        pcStack_d0 = "!GRPC_ERROR_IS_NONE(error)";
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                            ,0xd5,2,"assertion failed: %s");
        _abort();
LAB_104abe724:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104abe728);
        (*pcVar3)();
      }
      puStack_a0 = puStack_b8;
      puStack_b8 = (ulong *)0x36;
      puVar8 = (ulong *)*param_1;
      if (puVar5 == puVar8) {
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        *param_1 = (long)puVar5;
        puStack_a0 = (ulong *)0x36;
        if (((ulong)puVar8 & 1) != 0) {
          func_0x00010084dad0(puVar8);
        }
      }
      if (((ulong)puStack_b8 & 1) != 0) {
        func_0x00010084dad0();
      }
      puVar5 = puVar4;
      _ferror();
      if ((int)puVar5 == 0) {
        pcStack_d0 = "ferror(file)";
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/load_file.cc"
                            ,0x3a,2,"assertion failed: %s");
        _abort();
        goto LAB_104abe724;
      }
    }
    else {
      if (param_3 != 0) {
        *(undefined1 *)((long)puVar5 + (long)puVar7) = 0;
        puVar7 = (ulong *)((long)puVar7 + 1);
      }
      FUN_104ad7748(&puStack_a0,puVar5,puVar7,&SUB_100460314);
      uStack_78 = uStack_98;
      puStack_80 = puStack_a0;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
    }
    param_4[1] = uStack_78;
    *param_4 = puStack_80;
    param_4[3] = uStack_68;
    param_4[2] = uStack_70;
    puVar5 = puVar4;
    _fclose();
  }
  puStack_f0 = puVar5;
  if (*param_1 != 0) {
    FUN_104aba878(&uStack_c0,2,"Failed to load file",0x13,&uStack_a9,1,param_1);
    puVar5 = param_2;
    _strlen(param_2);
    puVar7 = (ulong *)0x8;
    func_0x00010084caf8(&puStack_a0,&uStack_c0,8,param_2,puVar5);
    if ((uStack_c0 & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar8 = (ulong *)*param_1;
    puVar5 = puVar8;
    if (puStack_a0 != puVar8) {
      if (((ulong)puStack_a0 & 1) != 0) {
        piVar9 = (int *)((long)puStack_a0 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = (long)puStack_a0;
      puVar5 = puStack_a0;
      if (((ulong)puVar8 & 1) != 0) {
        func_0x00010084dad0();
        puVar5 = puStack_a0;
      }
    }
    puStack_f0 = puVar8;
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010084dad0();
      puStack_f0 = puVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&puStack_a0);
    func_0x0001004bdf74(&puStack_b8);
    func_0x0001004bdf74(param_1);
    puVar5 = puStack_f0;
    __Unwind_Resume();
    pcStack_d8 = FUN_104abe7d0;
    puVar8 = puVar5;
    puStack_100 = puVar4;
    puStack_f8 = param_4;
    plStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    do {
      uVar10 = *puVar5;
      if ((uVar10 & 1) == 0) {
        if ((uVar10 & 0xfffffffffffffffd) != 0) {
          func_0x00010bdac46c();
          uStack_120 = 1;
          pcStack_108 = FUN_104abe838;
          uStack_138 = *puVar7;
          if ((uStack_138 & 1) != 0) {
            piVar9 = (int *)(uStack_138 - 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar2) {
                *piVar9 = *piVar9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          puVar6 = &uStack_138;
          puStack_130 = puVar4;
          uStack_128 = uVar10;
          puStack_118 = puVar5;
          ppuStack_110 = &puStack_e0;
          func_0x0001004bd890();
          if ((uStack_138 & 1) != 0) {
            func_0x00010084dad0();
          }
          do {
            uVar10 = *puVar8;
            if ((uVar10 | 2) == 2) {
              while (*puVar8 == uVar10) {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                if (bVar2) {
                  *puVar8 = (ulong)puVar6 | 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') {
                  return (ulong *)0x1;
                }
              }
            }
            else {
              if ((uVar10 & 1) != 0) {
                FUN_104ab6b68(puVar6);
                return (ulong *)0x0;
              }
              while (*puVar8 == uVar10) {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                if (bVar2) {
                  *puVar8 = (ulong)puVar6 | 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') {
                  FUN_104aba878(&uStack_148,2,"FD Shutdown",0xb,&uStack_149,1,puVar7);
                  func_0x0001004bd7e8(&uStack_139,uVar10,&uStack_148);
                  if ((uStack_148 & 1) == 0) {
                    return (ulong *)0x1;
                  }
                  func_0x00010084dad0();
                  return (ulong *)0x1;
                }
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
      }
      else {
        puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
        FUN_104ab6b68();
      }
      while (*puVar5 == uVar10) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar2) {
          *puVar5 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar8;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  return puStack_f0;
}



/* Entry: 104abe7d0; end: 104abe837;  */

ulong * FUN_104abe7d0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 uStack_79;
  ulong uStack_78;
  undefined1 uStack_69;
  ulong uStack_68;
  
  puVar3 = param_1;
  do {
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) {
      if ((uVar6 & 0xfffffffffffffffd) != 0) {
        func_0x00010bdac46c();
        uStack_68 = *param_2;
        if ((uStack_68 & 1) != 0) {
          piVar5 = (int *)(uStack_68 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar4 = &uStack_68;
        func_0x0001004bd890();
        if ((uStack_68 & 1) != 0) {
          func_0x00010084dad0();
        }
        do {
          uVar6 = *puVar3;
          if ((uVar6 | 2) == 2) {
            while (*puVar3 == uVar6) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar2) {
                *puVar3 = (ulong)puVar4 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                return (ulong *)0x1;
              }
            }
          }
          else {
            if ((uVar6 & 1) != 0) {
              FUN_104ab6b68(puVar4);
              return (ulong *)0x0;
            }
            while (*puVar3 == uVar6) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar2) {
                *puVar3 = (ulong)puVar4 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                FUN_104aba878(&uStack_78,2,"FD Shutdown",0xb,&uStack_79,1,param_2);
                func_0x0001004bd7e8(&uStack_69,uVar6,&uStack_78);
                if ((uStack_78 & 1) == 0) {
                  return (ulong *)0x1;
                }
                func_0x00010084dad0();
                return (ulong *)0x1;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    else {
      puVar3 = (ulong *)(uVar6 & 0xfffffffffffffffe);
      FUN_104ab6b68();
    }
    while (*param_1 == uVar6) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return puVar3;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 104abe838; end: 104abe96b;  */

undefined8 FUN_104abe838(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  undefined1 uStack_49;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
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
  puVar3 = &uStack_38;
  func_0x0001004bd890();
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  do {
    uVar5 = *param_1;
    if ((uVar5 | 2) == 2) {
      while (*param_1 == uVar5) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (ulong)puVar3 | 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return 1;
        }
      }
    }
    else {
      if ((uVar5 & 1) != 0) {
        FUN_104ab6b68(puVar3);
        return 0;
      }
      while (*param_1 == uVar5) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (ulong)puVar3 | 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          FUN_104aba878(&uStack_48,2,"FD Shutdown",0xb,&uStack_49,1,param_2);
          func_0x0001004bd7e8(&uStack_39,uVar5,&uStack_48);
          if ((uStack_48 & 1) == 0) {
            return 1;
          }
          func_0x00010084dad0();
          return 1;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 104abe96c; end: 104abe9df;  */

undefined8 FUN_104abe96c(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) == 2) {
    return *param_1;
  }
  return 0;
}



/* Entry: 104abe9e0; end: 104abea07;  */

long * FUN_104abe9e0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  FUN_104a6f9e8(&DAT_10f2fca96);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  *plVar1 = *param_2;
  *param_2 = 0x36;
  if (*plVar1 == 0) {
    func_0x00010ae77b40(plVar1);
  }
  return plVar1;
}



/* Entry: 104abea08; end: 104abea5f;  */

long * FUN_104abea08(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104abea60; end: 104abea6b;  */

void FUN_104abea60(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104abea68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 104abea6c; end: 104abeae7;  */

void FUN_104abea6c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  long *extraout_x8;
  code *pcVar3;
  long lStack_68;
  undefined1 uStack_59;
  long lStack_58;
  undefined4 uStack_18;
  uint uStack_14;
  
  pcVar3 = (code *)((undefined8 *)*param_1)[3];
  if (pcVar3 != (code *)0x0) {
    uStack_18 = (undefined4)param_2;
    uStack_14 = param_3;
    (*pcVar3)(&uStack_18,param_1);
    return;
  }
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000104abeac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_2,param_1);
    return;
  }
  if (param_3 == 2) {
    return;
  }
  pcVar1 = "return false";
  FUN_104a6e964("return false",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_mutator.cc"
                ,0x36);
  pcVar2 = pcVar1;
  _fcntl();
  if ((int)pcVar2 < 0) {
    ___error();
    FUN_104aba954(&lStack_58,&uStack_59,*(undefined4 *)pcVar2,&DAT_10f5178f6);
    lStack_68 = lStack_58;
    if (lStack_58 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abebfc;
    }
  }
  else {
    _fcntl(pcVar1,4);
    if ((int)pcVar1 == 0) {
      *extraout_x8 = 0;
      return;
    }
    ___error();
    FUN_104aba954(&lStack_68,&uStack_59,*(undefined4 *)pcVar1,&DAT_10f5178f6);
    if (lStack_68 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abebfc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104abec00);
      (*pcVar3)();
    }
  }
  *extraout_x8 = lStack_68;
  return;
}



/* Entry: 104abeae8; end: 104abec1f;  */

void FUN_104abeae8(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lStack_48;
  undefined1 uStack_39;
  long lStack_38;
  
  puVar2 = param_2;
  _fcntl(param_2,3);
  if ((int)puVar2 < 0) {
    ___error();
    FUN_104aba954(&lStack_38,&uStack_39,*puVar2,&DAT_10f5178f6);
    lStack_48 = lStack_38;
    if (lStack_38 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abebfc;
    }
  }
  else {
    _fcntl(param_2,4);
    if ((int)param_2 == 0) {
      *param_1 = 0;
      return;
    }
    ___error();
    FUN_104aba954(&lStack_48,&uStack_39,*param_2,&DAT_10f5178f6);
    if (lStack_48 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abebfc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104abec00);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_48;
  return;
}



/* Entry: 104abec20; end: 104abedcb;  */

void FUN_104abec20(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 *puStack_28;
  
  iStack_2c = 1;
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,0xffff,0x1022,&iStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,0xffff,0x1022,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if ((iStack_30 == 0) != (iStack_2c != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_104ab5920(param_1,2,"Failed to set SO_NOSIGPIPE",0x1a,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      func_0x000100482b64(&puStack_28);
      return;
    }
    ___error();
    FUN_104aba954(&lStack_48,&puStack_28,*param_2,"getsockopt(SO_NOSIGPIPE)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abed94;
    }
  }
  else {
    ___error();
    FUN_104aba954(&lStack_40,&puStack_28,*puVar2,"setsockopt(SO_NOSIGPIPE)");
    if (lStack_40 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abed94:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104abed98);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 104abedcc; end: 104abef07;  */

void FUN_104abedcc(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lStack_48;
  undefined1 uStack_39;
  long lStack_38;
  
  puVar2 = param_2;
  _fcntl(param_2,1);
  if ((int)puVar2 < 0) {
    ___error();
    FUN_104aba954(&lStack_38,&uStack_39,*puVar2,&DAT_10f5178f6);
    lStack_48 = lStack_38;
    if (lStack_38 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abeee4;
    }
  }
  else {
    _fcntl(param_2,2);
    if ((int)param_2 == 0) {
      *param_1 = 0;
      return;
    }
    ___error();
    FUN_104aba954(&lStack_48,&uStack_39,*param_2,&DAT_10f5178f6);
    if (lStack_48 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abeee4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104abeee8);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_48;
  return;
}



/* Entry: 104abef08; end: 104abf0af;  */

void FUN_104abef08(long *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  uStack_2c = (uint)(param_3 != 0);
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,0xffff,4,&uStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,0xffff,4,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if (uStack_2c == (iStack_30 != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_104ab5920(param_1,2,"Failed to set SO_REUSEADDR",0x1a,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      func_0x000100482b64(&puStack_28);
      return;
    }
    ___error();
    FUN_104aba954(&lStack_48,&puStack_28,*param_2,"getsockopt(SO_REUSEADDR)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abf078;
    }
  }
  else {
    ___error();
    FUN_104aba954(&lStack_40,&puStack_28,*puVar2,"setsockopt(SO_REUSEADDR)");
    if (lStack_40 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abf078:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104abf07c);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 104abf0b0; end: 104abf257;  */

void FUN_104abf0b0(long *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  uStack_2c = (uint)(param_3 != 0);
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,0xffff,0x200,&uStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,0xffff,0x200,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if (uStack_2c == (iStack_30 != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_104ab5920(param_1,2,"Failed to set SO_REUSEPORT",0x1a,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      func_0x000100482b64(&puStack_28);
      return;
    }
    ___error();
    FUN_104aba954(&lStack_48,&puStack_28,*param_2,"getsockopt(SO_REUSEPORT)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abf220;
    }
  }
  else {
    ___error();
    FUN_104aba954(&lStack_40,&puStack_28,*puVar2,"setsockopt(SO_REUSEPORT)");
    if (lStack_40 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abf220:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104abf224);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 104abf258; end: 104abf34b;  */

void FUN_104abf258(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar3 = 2;
  _socket(2,1,0);
  if ((int)uVar3 < 0) {
    uVar3 = 0x1e;
    _socket(0x1e,1,0);
    if ((int)uVar3 < 0) {
      return;
    }
  }
  uVar5 = 1;
  FUN_104abf0b0(&uStack_30,uVar3,1);
  if (uStack_30 != 0) {
    uStack_28 = uStack_30;
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
    uVar5 = 0xf239556;
    FUN_104abab1c("check for SO_REUSEPORT",&uStack_28,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                  ,0xe0);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  uRam00000001136a2098 = uVar5;
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  _close(uVar3);
  return;
}



/* Entry: 104abf34c; end: 104abf37f;  */

bool FUN_104abf34c(void)

{
  func_0x00010045fe6c(0x1130a6298,FUN_104abf258);
  return iRam00000001136a2098 != 0;
}



/* Entry: 104abf380; end: 104abf527;  */

void FUN_104abf380(long *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  uStack_2c = (uint)(param_3 != 0);
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,6,1,&uStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,6,1,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if (uStack_2c == (iStack_30 != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_104ab5920(param_1,2,"Failed to set TCP_NODELAY",0x19,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      func_0x000100482b64(&puStack_28);
      return;
    }
    ___error();
    FUN_104aba954(&lStack_48,&puStack_28,*param_2,"getsockopt(TCP_NODELAY)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_104abf4f0;
    }
  }
  else {
    ___error();
    FUN_104aba954(&lStack_40,&puStack_28,*puVar2,"setsockopt(TCP_NODELAY)");
    if (lStack_40 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_104abf4f0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104abf4f4);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 104abf528; end: 104abf7d3;  */

void FUN_104abf528(undefined8 *param_1,ulong param_2,ulong *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  if (-1 < iRam00000001130a62c8) {
    pcVar7 = (char *)0x1136a209c;
    if (param_4 == 0) {
      pcVar7 = (char *)0x1130a62ac;
    }
    piVar2 = (int *)0x1130a62a8;
    if (param_4 == 0) {
      piVar2 = (int *)0x1130a62b0;
    }
    bVar3 = *pcVar7 != '\0';
    iVar8 = *piVar2;
    iStack_64 = iVar8;
    if (param_3 == (ulong *)0x0) {
      if (*pcVar7 == '\0') goto LAB_104abf7b0;
    }
    else {
      if (*param_3 != 0) {
        uVar5 = 0;
        uVar9 = param_2;
        uVar11 = 1;
        do {
          lVar4 = param_3[1] + uVar5 * 0x20;
          uVar10 = *(undefined8 *)(lVar4 + 8);
          uVar6 = uVar10;
          _strcmp(uVar10,&UNK_10f50ea26);
          if ((int)uVar6 == 0) {
            unaff_x25 = unaff_x25 & 0xffffffff00000000 | 0x7fffffff;
            func_0x0001004865d8(lVar4,0x100000000,unaff_x25);
            if ((int)lVar4 != 0) {
              bVar3 = (int)lVar4 != 0x7fffffff;
            }
          }
          else {
            _strcmp(uVar10,&UNK_10f50ea3d);
            if ((int)uVar10 == 0) {
              uVar9 = uVar9 & 0xffffffff00000000 | 0x7fffffff;
              func_0x0001004865d8(lVar4,0x100000000,uVar9);
              if ((int)lVar4 != 0) {
                iVar8 = (int)lVar4;
              }
            }
          }
          bVar1 = uVar11 < *param_3;
          uVar5 = uVar11;
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (bVar1);
      }
      param_2 = param_2 & 0xffffffff;
      iStack_64 = iVar8;
      if (!bVar3) goto LAB_104abf7b0;
    }
    uStack_6c = 4;
    if (iRam00000001130a62c8 == 0) {
      uVar5 = param_2;
      _getsockopt(param_2,6,0,&iStack_68,&uStack_6c);
      if ((int)uVar5 == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                            ,0x161,1,
                            "TCP_USER_TIMEOUT is available. TCP_USER_TIMEOUT will be used thereafter"
                           );
        iRam00000001130a62c8 = 1;
      }
      else {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                            ,0x15c,1,
                            "TCP_USER_TIMEOUT is not available. TCP_USER_TIMEOUT won\'t be used thereafter"
                           );
        iRam00000001130a62c8 = -1;
      }
    }
    if (0 < iRam00000001130a62c8) {
      uVar5 = param_2;
      _setsockopt(param_2,6,0,&iStack_64,4);
      if ((int)uVar5 == 0) {
        _getsockopt(param_2,6,0,&iStack_68,&uStack_6c);
        if ((int)param_2 == 0) {
          if (iStack_68 == iStack_64) goto LAB_104abf7b0;
          pcVar7 = "Failed to set TCP_USER_TIMEOUT";
          uVar6 = 0x179;
        }
        else {
          ___error();
          _strerror();
          pcVar7 = "getsockopt(TCP_USER_TIMEOUT) %s";
          uVar6 = 0x173;
        }
      }
      else {
        ___error();
        _strerror();
        pcVar7 = "setsockopt(TCP_USER_TIMEOUT) %s";
        uVar6 = 0x16e;
      }
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                          ,uVar6,2,pcVar7);
    }
  }
LAB_104abf7b0:
  *param_1 = 0;
  return;
}



/* Entry: 104abf7d4; end: 104abf86f;  */

void FUN_104abf7d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (param_4 != 0) {
      FUN_104abea6c(param_4,param_2,param_3);
      if ((param_4 & 1) == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        FUN_104ab5920(param_1,2,"grpc_socket_mutator failed.",0x1b,
                      (undefined1 *)((long)register0x00000008 + -0x29),
                      (undefined1 *)((long)register0x00000008 + -0x48));
        *(undefined1 **)((long)register0x00000008 + -0x28) =
             (undefined1 *)((long)register0x00000008 + -0x48);
        func_0x000100482b64((undefined1 *)((long)register0x00000008 + -0x28));
      }
      else {
        *param_1 = 0;
      }
      return;
    }
    func_0x00010bdac5c4();
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x20;
    func_0x000100482b64((undefined1 *)((long)register0x00000008 + -0x28));
    uVar1 = param_2;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_104abf870;
    func_0x00010047fdf4(param_4,"grpc.socket_mutator");
    if (param_4 == 0) break;
    param_4 = *(ulong *)(param_4 + 0x10);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = uVar1;
    param_1 = extraout_x8;
  }
  *extraout_x8 = 0;
  return;
}



/* Entry: 104abf870; end: 104abf9a3;  */

void FUN_104abf870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010047fdf4(param_4,"grpc.socket_mutator");
    if (param_4 == 0) {
      *param_1 = 0;
      return;
    }
    param_4 = *(ulong *)(param_4 + 0x10);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_4 != 0) break;
    func_0x00010bdac5c4();
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x20;
    func_0x000100482b64((undefined1 *)((long)register0x00000008 + -0x28));
    unaff_x30 = FUN_104abf870;
    param_2 = uVar1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = extraout_x8;
    unaff_x19 = uVar1;
  }
  FUN_104abea6c(param_4,uVar1,param_3);
  if ((param_4 & 1) == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    FUN_104ab5920(param_1,2,"grpc_socket_mutator failed.",0x1b,
                  (undefined1 *)((long)register0x00000008 + -0x29),
                  (undefined1 *)((long)register0x00000008 + -0x48));
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x48);
    func_0x000100482b64((undefined1 *)((long)register0x00000008 + -0x28));
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 104abf9a4; end: 104abf9bf;  */

/* WARNING: Removing unreachable block (ram,0x000104abfc10) */

void FUN_104abf9a4(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5,int *param_6)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  long *plVar6;
  char cVar7;
  long unaff_x24;
  ulong unaff_x26;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  cVar7 = *(char *)((long)param_2 + 1);
  if (cVar7 == '\x1e') {
    puVar5 = (undefined4 *)0x1130a62b8;
    func_0x00010045fe6c(0x1130a62b8,0x104abf8d4);
    if (cRam00000001136a20a0 == '\x01') {
      iVar4 = 0;
      FUN_104abfafc(0,0x1e,param_3,param_4);
      *param_6 = iVar4;
    }
    else {
      *param_6 = -1;
      ___error();
      *puVar5 = 0x2f;
      iVar4 = *param_6;
    }
    if ((-1 < iVar4) && (FUN_104aba55c(), iVar4 != 0)) {
      *param_5 = 3;
      *param_1 = 0;
      return;
    }
    puVar5 = param_2;
    func_0x0001004d3fb0(param_2,0);
    if ((int)puVar5 == 0) {
      *param_5 = 2;
      iVar4 = *param_6;
      goto LAB_104abfacc;
    }
    if (-1 < *param_6) {
      _close();
    }
    cVar7 = '\x02';
  }
  *param_5 = (uint)(cVar7 == '\x02');
  iVar4 = 0;
  FUN_104abfafc(0,cVar7,param_3,param_4);
  *param_6 = iVar4;
LAB_104abfacc:
  if (iVar4 < 0) {
    func_0x0001004d466c(&stack0xffffffffffffffc0,param_2,0);
    ___error();
    FUN_104aba954(&stack0xffffffffffffffb0,&uStack_51,*param_2,&UNK_10f6c53bb);
    if (unaff_x26 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104abfc5c);
      (*pcVar3)();
    }
    if (unaff_x24 == 0) {
      plVar6 = (long *)&stack0xffffffffffffffc0;
      func_0x0001004d5530();
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        func_0x000100033dac(&pppuStack_70,*plVar6,plVar6[1]);
      }
      else {
        uStack_68 = plVar6[1];
        pppuStack_70 = (undefined8 ***)*plVar6;
        uStack_60 = plVar6[2];
      }
    }
    else {
      func_0x00010ae77430(&pppuStack_70,&stack0xffffffffffffffc0,1);
    }
    uVar1 = uStack_68;
    ppppuVar2 = (undefined8 ****)pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      ppppuVar2 = &pppuStack_70;
    }
    func_0x00010084caf8(param_1,&stack0xffffffffffffffb8,4,ppppuVar2,uVar1);
    if ((long)uStack_60 < 0) {
      __ZdlPv(pppuStack_70);
    }
    if ((unaff_x26 & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x00010047c7d4(&stack0xffffffffffffffc0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 104abf9c0; end: 104abfafb;  */

/* WARNING: Removing unreachable block (ram,0x000104abfc10) */

void FUN_104abf9c0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,uint *param_6,int *param_7)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  char cVar8;
  long unaff_x24;
  ulong unaff_x26;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  cVar8 = *(char *)((long)param_3 + 1);
  if (cVar8 == '\x1e') {
    puVar5 = (undefined4 *)0x1130a62b8;
    func_0x00010045fe6c(0x1130a62b8,0x104abf8d4);
    if (cRam00000001136a20a0 == '\x01') {
      uVar6 = param_2;
      FUN_104abfafc(param_2,0x1e,param_4,param_5);
      iVar4 = (int)uVar6;
      *param_7 = iVar4;
    }
    else {
      *param_7 = -1;
      ___error();
      *puVar5 = 0x2f;
      iVar4 = *param_7;
    }
    if ((-1 < iVar4) && (FUN_104aba55c(), iVar4 != 0)) {
      *param_6 = 3;
      *param_1 = 0;
      return;
    }
    puVar5 = param_3;
    func_0x0001004d3fb0(param_3,0);
    if ((int)puVar5 == 0) {
      *param_6 = 2;
      iVar4 = *param_7;
      goto LAB_104abfacc;
    }
    if (-1 < *param_7) {
      _close();
    }
    cVar8 = '\x02';
  }
  *param_6 = (uint)(cVar8 == '\x02');
  FUN_104abfafc(param_2,cVar8,param_4,param_5);
  iVar4 = (int)param_2;
  *param_7 = iVar4;
LAB_104abfacc:
  if (iVar4 < 0) {
    func_0x0001004d466c(&stack0xffffffffffffffc0,param_3,0);
    ___error();
    FUN_104aba954(&stack0xffffffffffffffb0,&uStack_51,*param_3,&UNK_10f6c53bb);
    if (unaff_x26 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104abfc5c);
      (*pcVar3)();
    }
    if (unaff_x24 == 0) {
      plVar7 = (long *)&stack0xffffffffffffffc0;
      func_0x0001004d5530();
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        func_0x000100033dac(&pppuStack_70,*plVar7,plVar7[1]);
      }
      else {
        uStack_68 = plVar7[1];
        pppuStack_70 = (undefined8 ***)*plVar7;
        uStack_60 = plVar7[2];
      }
    }
    else {
      func_0x00010ae77430(&pppuStack_70,&stack0xffffffffffffffc0,1);
    }
    uVar1 = uStack_68;
    ppppuVar2 = (undefined8 ****)pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      ppppuVar2 = &pppuStack_70;
    }
    func_0x00010084caf8(param_1,&stack0xffffffffffffffb8,4,ppppuVar2,uVar1);
    if ((long)uStack_60 < 0) {
      __ZdlPv(pppuStack_70);
    }
    if ((unaff_x26 & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x00010047c7d4(&stack0xffffffffffffffc0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 104abfafc; end: 104abfb13;  */

void FUN_104abfafc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104abea68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__socket_11034cb38)(param_2,param_3,param_4);
  return;
}



/* Entry: 104abfb14; end: 104abfcaf;  */

void FUN_104abfb14(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  long alStack_40 [4];
  
  if (param_2 < 0) {
    func_0x0001004d466c(alStack_40,param_3,0);
    ___error();
    FUN_104aba954(&uStack_50,&uStack_51,*param_3,&UNK_10f6c53bb);
    if (uStack_50 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104abfc5c);
      (*pcVar3)();
    }
    uStack_48 = uStack_50;
    uStack_50 = 0x36;
    if (alStack_40[0] == 0) {
      plVar4 = alStack_40;
      func_0x0001004d5530();
      if (*(char *)((long)plVar4 + 0x17) < '\0') {
        func_0x000100033dac(&ppuStack_70,*plVar4,plVar4[1]);
      }
      else {
        uStack_68 = plVar4[1];
        ppuStack_70 = (undefined8 **)*plVar4;
        uStack_60 = plVar4[2];
      }
    }
    else {
      func_0x00010ae77430(&ppuStack_70,alStack_40,1);
    }
    uVar1 = uStack_68;
    pppuVar2 = (undefined8 ***)ppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      pppuVar2 = &ppuStack_70;
    }
    func_0x00010084caf8(param_1,&uStack_48,4,pppuVar2,uVar1);
    if ((long)uStack_60 < 0) {
      __ZdlPv(ppuStack_70);
    }
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x00010047c7d4(alStack_40);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 104abfcb0; end: 104abfd5f;  */

undefined8 FUN_104abfcb0(undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  _accept(param_1,param_2,param_2 + 0x80);
  if ((int)param_1 < 0) {
    return param_1;
  }
  if ((param_3 == 0) ||
     ((uVar1 = param_1, _fcntl(param_1,3), -1 < (int)uVar1 &&
      (uVar1 = param_1, _fcntl(param_1,4), (int)uVar1 == 0)))) {
    if (param_4 == 0) {
      return param_1;
    }
    uVar1 = param_1;
    _fcntl(param_1,1);
    if ((-1 < (int)uVar1) && (uVar1 = param_1, _fcntl(param_1,2), (int)uVar1 == 0)) {
      return param_1;
    }
  }
  _close(param_1);
  return 0xffffffff;
}



/* Entry: 104abfd60; end: 104abfd67;  */

undefined8 FUN_104abfd60(void)

{
  return 0;
}



/* Entry: 104abfd68; end: 104ac0093;  */

void FUN_104abfd68(ulong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uStack_60;
  ulong uStack_58;
  int iStack_4c;
  ulong uStack_48;
  
  uStack_58 = 0;
  *param_5 = -1;
  puVar3 = param_3;
  FUN_104aa981c(param_3,param_4);
  if ((int)puVar3 == 0) {
    uVar7 = *param_3;
    param_4[1] = param_3[1];
    *param_4 = uVar7;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    uVar10 = param_3[5];
    uVar9 = param_3[4];
    uVar11 = param_3[6];
    uVar13 = param_3[9];
    uVar12 = param_3[8];
    param_4[7] = param_3[7];
    param_4[6] = uVar11;
    param_4[9] = uVar13;
    param_4[8] = uVar12;
    param_4[3] = uVar8;
    param_4[2] = uVar7;
    param_4[5] = uVar10;
    param_4[4] = uVar9;
    uVar8 = param_3[0xb];
    uVar7 = param_3[10];
    uVar10 = param_3[0xd];
    uVar9 = param_3[0xc];
    uVar12 = param_3[0xf];
    uVar11 = param_3[0xe];
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_4[0xd] = uVar10;
    param_4[0xc] = uVar9;
    param_4[0xf] = uVar12;
    param_4[0xe] = uVar11;
    param_4[0xb] = uVar8;
    param_4[10] = uVar7;
  }
  FUN_104abf9a4(&uStack_48,param_4,1,0,&iStack_4c,param_5);
  uVar4 = uStack_58;
  if (uStack_48 != uStack_58) {
    uStack_58 = uStack_48;
    uStack_48 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104abfe30;
    func_0x00010084dad0();
    uVar4 = uStack_48;
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104abfe30:
  if (uStack_58 == 0) {
    if ((iStack_4c == 1) &&
       (puVar3 = param_3, func_0x0001004d3fb0(param_3,param_4), (int)puVar3 == 0)) {
      uVar7 = *param_3;
      param_4[1] = param_3[1];
      *param_4 = uVar7;
      uVar8 = param_3[3];
      uVar7 = param_3[2];
      uVar10 = param_3[5];
      uVar9 = param_3[4];
      uVar11 = param_3[6];
      uVar13 = param_3[9];
      uVar12 = param_3[8];
      param_4[7] = param_3[7];
      param_4[6] = uVar11;
      param_4[9] = uVar13;
      param_4[8] = uVar12;
      param_4[3] = uVar8;
      param_4[2] = uVar7;
      param_4[5] = uVar10;
      param_4[4] = uVar9;
      uVar8 = param_3[0xb];
      uVar7 = param_3[10];
      uVar10 = param_3[0xd];
      uVar9 = param_3[0xc];
      uVar12 = param_3[0xf];
      uVar11 = param_3[0xe];
      *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_4[0xd] = uVar10;
      param_4[0xc] = uVar9;
      param_4[0xf] = uVar12;
      param_4[0xe] = uVar11;
      param_4[0xb] = uVar8;
      param_4[10] = uVar7;
    }
    iVar1 = *param_5;
    uStack_60 = 0;
    if (iVar1 < 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                          ,0x62,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104ac0020);
      (*pcVar2)();
    }
    FUN_104abeae8(&uStack_48,iVar1,1);
    if ((((uStack_48 != 0) || (FUN_104abedcc(&uStack_48,iVar1,1), uStack_48 != 0)) ||
        ((func_0x000104ac885c(), (int)param_4 == 0 &&
         (((FUN_104abf380(&uStack_48,iVar1,1), uStack_48 != 0 ||
           (FUN_104abef08(&uStack_48,iVar1,1), uStack_48 != 0)) ||
          (FUN_104abf528(&uStack_48,iVar1,param_2,1), uStack_48 != 0)))))) ||
       ((FUN_104abec20(&uStack_48,iVar1), uStack_48 != 0 ||
        (FUN_104abf870(&uStack_48,iVar1,0,param_2), uStack_48 != 0)))) {
      uStack_60 = uStack_48;
      _close(iVar1);
    }
    uVar4 = uStack_58;
    if (uStack_60 != uStack_58) {
      uStack_58 = uStack_60;
      uStack_60 = 0;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    uStack_48 = 0;
    if (uStack_58 == 0) {
      uVar6 = 0;
    }
    else {
      puVar5 = &uStack_58;
      func_0x00010ae7711c(puVar5,&uStack_48);
      uVar6 = (uint)puVar5 ^ 1;
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((uStack_60 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uVar6 == 0) {
      *param_1 = 0;
      if ((uStack_58 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
  }
  *param_1 = uStack_58;
  return;
}



/* Entry: 104ac0094; end: 104ac0717;  */

/* WARNING: Removing unreachable block (ram,0x000104ac017c) */
/* WARNING: Type propagation algorithm not settling */

int *******
FUN_104ac0094(undefined8 param_1,ulong *param_2,int *param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  int *****pppppiVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  int *******pppppppiVar10;
  int ******ppppppiVar11;
  char *pcVar12;
  ulong *puVar13;
  int *******pppppppiVar14;
  int ******ppppppiVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  int *******pppppppiVar20;
  int ******ppppppiVar21;
  long lVar22;
  int *******pppppppiVar23;
  long lVar24;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f1;
  ulong uStack_2f0;
  undefined1 *puStack_2e8;
  int *******pppppppiStack_2e0;
  int *******pppppppiStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  char *pcStack_2c0;
  int *******pppppppiStack_2b0;
  int *******pppppppiStack_2a8;
  ulong uStack_2a0;
  int *******pppppppiStack_298;
  ulong uStack_290;
  byte bStack_281;
  ulong uStack_280;
  int *******pppppppiStack_278;
  ulong uStack_270;
  ulong uStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  ulong uStack_248;
  int *******pppppppiStack_240;
  int ******ppppppiStack_238;
  int ******ppppppiStack_230;
  undefined4 uStack_220;
  int iStack_21c;
  int *******pppppppiStack_218;
  ulong uStack_210;
  char *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1b8;
  undefined1 *puStack_160;
  code *pcStack_158;
  char *pcStack_150;
  int ******ppppppiStack_148;
  int ******ppppppiStack_140;
  int ******ppppppiStack_138;
  int ******ppppppiStack_130;
  ulong uStack_128;
  undefined8 *******apppppppuStack_120 [2];
  char cStack_109;
  undefined8 *******pppppppuStack_108;
  int *****pppppiStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int ******appppppiStack_e8 [4];
  int ******ppppppiStack_c8;
  int *****pppppiStack_c0;
  int *******pppppppiStack_98;
  ulong uStack_90;
  byte bStack_81;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    piVar16 = param_3;
    _connect(param_3,param_5,*(undefined4 *)(param_5 + 0x80));
    iVar8 = (int)piVar16;
    if (-1 < iVar8) break;
    ___error();
  } while (*piVar16 == 4);
  func_0x0001004d4034(appppppiStack_e8,param_5);
  if (appppppiStack_e8[0] == (int ******)0x0) {
    pppppppiStack_98 = (int *******)0x10f23982e;
    uStack_90 = 0xb;
    ppppppiVar21 = (int ******)appppppiStack_e8;
    func_0x0001004d5530();
    pppppiStack_c0 = ppppppiVar21[1];
    ppppppiStack_c8 = (int ******)*ppppppiVar21;
    if (-1 < (char)*(byte *)((long)ppppppiVar21 + 0x17)) {
      pppppiStack_c0 = (int *****)(ulong)*(byte *)((long)ppppppiVar21 + 0x17);
      ppppppiStack_c8 = ppppppiVar21;
    }
    func_0x00010047c83c(apppppppuStack_120,&pppppppiStack_98,&ppppppiStack_c8);
    pppppppuVar2 = apppppppuStack_120[0];
    if (-1 < cStack_109) {
      pppppppuVar2 = apppppppuStack_120;
    }
    FUN_104abd67c(param_3,pppppppuVar2,1);
    pppppppiStack_98 = (int *******)0x0;
    piVar16 = param_3;
    ___error();
    if ((*piVar16 == 0x23) || (___error(), *piVar16 == 0x24)) {
      do {
        pppppppiVar20 = pppppppiRam00000001130a6300;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x1130a6300,0x10);
        if (bVar6) {
          cVar4 = ExclusiveMonitorsStatus();
          pppppppiRam00000001130a6300 = (int *******)((long)pppppppiRam00000001130a6300 + 1);
        }
      } while (cVar4 != '\0');
      pppppppiStack_98 = pppppppiVar20;
      if (iVar8 < 0) goto LAB_104ac02e0;
LAB_104ac0280:
      ppppppiVar21 = (int ******)appppppiStack_e8;
      func_0x0001004d5530();
      pppppiVar3 = ppppppiVar21[1];
      ppppppiVar11 = (int ******)*ppppppiVar21;
      if (-1 < (char)*(byte *)((long)ppppppiVar21 + 0x17)) {
        pppppiVar3 = (int *****)(ulong)*(byte *)((long)ppppppiVar21 + 0x17);
        ppppppiVar11 = ppppppiVar21;
      }
      FUN_104ac1ba8(param_3,param_4,ppppppiVar11,pppppiVar3);
      *param_7 = param_3;
      uStack_128 = 0;
      func_0x0001004bd7e8(&ppppppiStack_c8,param_2,&uStack_128);
      if ((uStack_128 & 1) != 0) {
        func_0x00010084dad0();
      }
LAB_104ac02d0:
      pppppppiVar20 = (int *******)0x0;
    }
    else {
      pppppppiVar20 = (int *******)0x0;
      if (-1 < iVar8) goto LAB_104ac0280;
LAB_104ac02e0:
      ___error();
      if ((*piVar16 != 0x23) && (___error(), *piVar16 != 0x24)) {
        ___error();
        FUN_104aba954(&ppppppiStack_130,&ppppppiStack_138,*piVar16,&DAT_10f2f47b4);
        ppppppiVar21 = ppppppiStack_130;
        if (ppppppiStack_130 == (int ******)0x0) {
          pcStack_150 = "!GRPC_ERROR_IS_NONE(error)";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104ac05fc);
          (*pcVar7)();
        }
        ppppppiStack_c8 = ppppppiStack_130;
        ppppppiStack_130 = (int ******)0x36;
        ppppppiStack_140 = ppppppiVar21;
        if (((ulong)ppppppiVar21 & 1) != 0) {
          piVar16 = (int *)((long)ppppppiVar21 + -1);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar6) {
              *piVar16 = *piVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppppppiVar11 = (int ******)appppppiStack_e8;
        func_0x0001004d5530();
        pppppiVar3 = ppppppiVar11[1];
        ppppppiVar15 = (int ******)*ppppppiVar11;
        if (-1 < (char)*(byte *)((long)ppppppiVar11 + 0x17)) {
          pppppiVar3 = (int *****)(ulong)*(byte *)((long)ppppppiVar11 + 0x17);
          ppppppiVar15 = ppppppiVar11;
        }
        func_0x00010084caf8(&ppppppiStack_138,&ppppppiStack_140,4,ppppppiVar15,pppppiVar3);
        ppppppiVar11 = ppppppiStack_138;
        ppppppiVar15 = ppppppiVar21;
        if (ppppppiStack_138 == ppppppiVar21) {
LAB_104ac0554:
          ppppppiVar11 = ppppppiVar21;
          if (((ulong)ppppppiVar15 & 1) != 0) {
            func_0x00010084dad0(ppppppiVar15);
          }
        }
        else {
          ppppppiStack_c8 = ppppppiStack_138;
          ppppppiStack_138 = (int ******)0x36;
          if (((ulong)ppppppiVar21 & 1) != 0) {
            func_0x00010084dad0(ppppppiVar21);
            ppppppiVar21 = ppppppiVar11;
            ppppppiVar15 = ppppppiStack_138;
            goto LAB_104ac0554;
          }
        }
        if (((ulong)ppppppiStack_140 & 1) != 0) {
          func_0x00010084dad0();
        }
        func_0x000104abd6fc(param_3,0,0,"tcp_client_connect_error");
        if (((ulong)ppppppiVar11 & 1) != 0) {
          piVar16 = (int *)((long)ppppppiVar11 + -1);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar6) {
              *piVar16 = *piVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppppppiStack_148 = ppppppiVar11;
        func_0x0001004bd7e8(&ppppppiStack_138,param_2,&ppppppiStack_148);
        if (((ulong)ppppppiStack_148 & 1) != 0) {
          func_0x00010084dad0();
        }
        if (((ulong)ppppppiVar11 & 1) != 0) {
          func_0x00010084dad0(ppppppiVar11);
        }
        goto LAB_104ac02d0;
      }
      func_0x000104abd8ac(param_1,param_3);
      puVar9 = (undefined8 *)0x110;
      __Znwm();
      puVar9[0x1f] = 0;
      puVar9[0x1e] = 0;
      puVar9[0x21] = 0;
      puVar9[0x20] = 0;
      puVar9[0x1b] = 0;
      puVar9[0x1a] = 0;
      puVar9[0x1d] = 0;
      puVar9[0x1c] = 0;
      puVar9[0x17] = 0;
      puVar9[0x16] = 0;
      puVar9[0x19] = 0;
      puVar9[0x18] = 0;
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[0x1d] = param_7;
      puVar9[0x1e] = param_2;
      puVar9[8] = param_3;
      puVar9[0x19] = param_1;
      ppppppiVar21 = (int ******)appppppiStack_e8;
      func_0x0001004d5530(ppppppiVar21);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar9 + 0x1a,ppppppiVar21);
      puVar9[0x20] = pppppppiVar20;
      *(undefined1 *)(puVar9 + 0x21) = 0;
      func_0x000100460318(puVar9);
      *(undefined4 *)(puVar9 + 0x14) = 2;
      puVar9[0x16] = FUN_104ac0718;
      puVar9[0x17] = puVar9;
      puVar9[0x18] = 0;
      func_0x0001004bf248();
      puVar9[0x1f] = param_4;
      lVar17 = *plRam00000001136a20a8;
      uVar18 = (plRam00000001136a20a8[1] - lVar17 >> 5) * -0x5555555555555555;
      iVar8 = 0;
      if (uVar18 != 0) {
        iVar8 = (int)((ulong)pppppppiVar20 / uVar18);
      }
      iVar8 = (int)pppppppiVar20 - iVar8 * (int)uVar18;
      lVar22 = lVar17 + (long)iVar8 * 0x60;
      func_0x000100460448(lVar22);
      lVar17 = lVar17 + (long)iVar8 * 0x60;
      lVar24 = lVar17 + 0x40;
      pppppppiVar20 = (int *******)&pppppppiStack_98;
      FUN_104ac1664();
      plVar1 = (long *)(*(long *)(lVar17 + 0x48) + lVar24 * 0x10);
      if (((ulong)pppppppiVar20 & 0xff) != 0) {
        *plVar1 = (long)pppppppiStack_98;
      }
      plVar1[1] = (long)puVar9;
      func_0x000100466b80(lVar22);
      func_0x000100460448(puVar9);
      puVar9[0x11] = FUN_104ac0fdc;
      puVar9[0x12] = puVar9;
      puVar9[0x13] = 0;
      func_0x000100480ee4(puVar9 + 9,param_6,puVar9 + 0x10);
      param_2 = puVar9 + 0x15;
      func_0x000104abd7a4(puVar9[8]);
      func_0x000100466b80(puVar9);
      pppppppiVar20 = pppppppiStack_98;
    }
    if (cStack_109 < '\0') {
      __ZdlPv(apppppppuStack_120[0]);
    }
  }
  else {
    func_0x00010ae77430(&pppppppiStack_98,appppppiStack_e8,1);
    uVar18 = uStack_90;
    pppppppiVar20 = pppppppiStack_98;
    if (-1 < (char)bStack_81) {
      uVar18 = (ulong)bStack_81;
      pppppppiVar20 = (int *******)&pppppppiStack_98;
    }
    uStack_f8 = 0;
    uStack_f0 = 0;
    pppppiStack_100 = (int *****)0x0;
    FUN_104ab5920(apppppppuStack_120,2,pppppppiVar20,uVar18,&ppppppiStack_138,&pppppiStack_100);
    ppppppiStack_c8 = &pppppiStack_100;
    func_0x000100482b64(&ppppppiStack_c8);
    pppppppuStack_108 = apppppppuStack_120[0];
    if (((ulong)apppppppuStack_120[0] & 1) != 0) {
      piVar16 = (int *)((long)apppppppuStack_120[0] + -1);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x0001004bd7e8(&pppppppiStack_98,param_2,&pppppppuStack_108);
    if (((ulong)pppppppuStack_108 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)apppppppuStack_120[0] & 1) != 0) {
      func_0x00010084dad0();
    }
    pppppppiVar20 = (int *******)0x0;
  }
  pppppppiVar10 = appppppiStack_e8;
  func_0x00010047c7d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppppiVar20;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppppppiStack_138);
  func_0x0001004bdf74(&ppppppiStack_140);
  func_0x0001004bdf74(&ppppppiStack_c8);
  if (cStack_109 < '\0') {
    __ZdlPv(apppppppuStack_120[0]);
  }
  func_0x00010047c7d4(appppppiStack_e8);
  __Unwind_Resume();
  pcStack_158 = FUN_104ac0718;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_21c = 0;
  ppppppiVar21 = pppppppiVar10[0x1d];
  ppppppiVar11 = pppppppiVar10[0x1e];
  pppppppiVar20 = pppppppiVar10 + 0x1a;
  puStack_160 = &stack0xfffffffffffffff0;
  if (*(char *)((long)pppppppiVar10 + 0xe7) < '\0') {
    func_0x000100033dac(&pppppppiStack_240,pppppppiVar10[0x1a],pppppppiVar10[0x1b]);
  }
  else {
    ppppppiStack_238 = pppppppiVar10[0x1b];
    pppppppiStack_240 = (int *******)*pppppppiVar20;
    ppppppiStack_230 = pppppppiVar10[0x1c];
  }
  func_0x000100460448(pppppppiVar10);
  pppppppiVar23 = (int *******)pppppppiVar10[8];
  if (pppppppiVar23 == (int *******)0x0) {
    pcStack_2c0 = "ac->fd";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                        ,0xb0,2,"assertion failed: %s");
    _abort();
    goto LAB_104ac0e44;
  }
  pppppppiVar10[8] = (int ******)0x0;
  cVar4 = *(char *)(pppppppiVar10 + 0x21);
  func_0x000100466b80(pppppppiVar10);
  func_0x0001005a5960(pppppppiVar10 + 9);
  func_0x000100460448(pppppppiVar10);
  uVar18 = *param_2;
  if (uVar18 == 0) {
    if (cVar4 == '\0') {
      do {
        uStack_220 = 4;
        pppppppiVar14 = pppppppiVar23;
        func_0x000104abd6ec();
        _getsockopt();
        if (-1 < (int)pppppppiVar14) {
          if (iStack_21c == 0x3d) {
            FUN_104aba954(&pcStack_258,&pppppppiStack_218,0x3d,&DAT_10f2f47b4);
            pcVar12 = pcStack_258;
            if (pcStack_258 == (char *)0x0) {
              pcStack_2c0 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_104ac0e44;
            }
            pcStack_1e8 = pcStack_258;
            pcStack_258 = (char *)0x36;
            pcVar19 = (char *)*param_2;
            if (pcVar12 == pcVar19) {
              if (((ulong)pcVar12 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *param_2 = (ulong)pcVar12;
              pcStack_1e8 = (char *)0x36;
              if (((ulong)pcVar19 & 1) != 0) {
                func_0x00010084dad0(pcVar19);
              }
            }
            if (((ulong)pcStack_258 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          else {
            if (iStack_21c == 0x37) {
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                                  ,0xe4,2,"kernel out of buffers");
              func_0x000100466b80(pppppppiVar10);
              func_0x000104abd7a4(pppppppiVar23,pppppppiVar10 + 0x15);
              goto LAB_104ac0b10;
            }
            if (iStack_21c == 0) {
              func_0x000104abd8bc(pppppppiVar10[0x19],pppppppiVar23);
              if ((char)*(byte *)((long)pppppppiVar10 + 0xe7) < '\0') {
                pppppppiVar14 = (int *******)pppppppiVar10[0x1a];
                ppppppiVar15 = pppppppiVar10[0x1b];
              }
              else {
                ppppppiVar15 = (int ******)(ulong)*(byte *)((long)pppppppiVar10 + 0xe7);
                pppppppiVar14 = pppppppiVar20;
              }
              FUN_104ac1ba8(pppppppiVar23,pppppppiVar10[0x1f],pppppppiVar14,ppppppiVar15);
              *ppppppiVar21 = (int *****)pppppppiVar23;
              pppppppiVar23 = (int *******)0x0;
            }
            else {
              FUN_104aba954(&pcStack_260,&pppppppiStack_218,iStack_21c,"getsockopt(SO_ERROR)");
              pcVar12 = pcStack_260;
              if (pcStack_260 == (char *)0x0) {
                pcStack_2c0 = "!GRPC_ERROR_IS_NONE(error)";
                func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                    ,0xd5,2,"assertion failed: %s");
                _abort();
                goto LAB_104ac0e44;
              }
              pcStack_1e8 = pcStack_260;
              pcStack_260 = (char *)0x36;
              pcVar19 = (char *)*param_2;
              if (pcVar12 == pcVar19) {
                if (((ulong)pcVar12 & 1) != 0) {
                  func_0x00010084dad0();
                }
              }
              else {
                *param_2 = (ulong)pcVar12;
                pcStack_1e8 = (char *)0x36;
                if (((ulong)pcVar19 & 1) != 0) {
                  func_0x00010084dad0(pcVar19);
                }
              }
              if (((ulong)pcStack_260 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
          }
          goto LAB_104ac0830;
        }
        ___error();
      } while (*(int *)pppppppiVar14 == 4);
      ___error();
      FUN_104aba954(&pcStack_250,&pppppppiStack_218,*(int *)pppppppiVar14,"getsockopt");
      pcVar12 = pcStack_250;
      if (pcStack_250 == (char *)0x0) {
        pcStack_2c0 = "!GRPC_ERROR_IS_NONE(error)";
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                            ,0xd5,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac0e44;
      }
      pcStack_1e8 = pcStack_250;
      pcStack_250 = (char *)0x36;
      pcVar19 = (char *)*param_2;
      if (pcVar12 == pcVar19) {
        if (((ulong)pcVar12 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        *param_2 = (ulong)pcVar12;
        pcStack_1e8 = (char *)0x36;
        if (((ulong)pcVar19 & 1) != 0) {
          func_0x00010084dad0(pcVar19);
        }
      }
      if (((ulong)pcStack_250 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104ac0830;
    }
LAB_104ac089c:
    func_0x000104abd8bc(pppppppiVar10[0x19],pppppppiVar23);
    func_0x000104abd6fc(pppppppiVar23,0,0,"tcp_client_orphan");
  }
  else {
    if ((uVar18 & 1) != 0) {
      piVar16 = (int *)(uVar18 - 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = *piVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_248 = uVar18;
    func_0x00010084caf8(&pcStack_1e8,&uStack_248,2,"Timeout occurred",0x10);
    pcVar12 = (char *)*param_2;
    if (pcStack_1e8 == pcVar12) {
LAB_104ac081c:
      if (((ulong)pcVar12 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_2 = (ulong)pcStack_1e8;
      pcStack_1e8 = (char *)0x36;
      if (((ulong)pcVar12 & 1) != 0) {
        func_0x00010084dad0();
        pcVar12 = pcStack_1e8;
        goto LAB_104ac081c;
      }
    }
    if ((uStack_248 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104ac0830:
    if (cVar4 == '\0') {
      lVar17 = *plRam00000001136a20a8;
      uVar18 = (plRam00000001136a20a8[1] - lVar17 >> 5) * -0x5555555555555555;
      iVar8 = 0;
      if (uVar18 != 0) {
        iVar8 = (int)((ulong)pppppppiVar10[0x20] / uVar18);
      }
      iVar8 = (int)pppppppiVar10[0x20] - iVar8 * (int)uVar18;
      lVar24 = lVar17 + (long)iVar8 * 0x60;
      func_0x000100460448(lVar24);
      FUN_104ac1560(lVar17 + (long)iVar8 * 0x60 + 0x40,pppppppiVar10 + 0x20);
      func_0x000100466b80(lVar24);
    }
    if (pppppppiVar23 != (int *******)0x0) goto LAB_104ac089c;
  }
  iVar8 = *(int *)(pppppppiVar10 + 0x14);
  *(int *)(pppppppiVar10 + 0x14) = iVar8 + -1;
  pppppppiVar23 = pppppppiVar10;
  func_0x000100466b80();
  uVar18 = *param_2;
  if (uVar18 == 0) goto joined_r0x000104ac0a8c;
  pppppppiStack_278 = (int *******)0x0;
  uStack_270 = 0;
  uStack_268 = 0;
  if ((uVar18 & 1) != 0) {
    piVar16 = (int *)(uVar18 - 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar6) {
        *piVar16 = *piVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar13 = &uStack_280;
  uStack_280 = uVar18;
  func_0x00010084dbf0(puVar13,0,&pppppppiStack_278);
  if ((uStack_280 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)puVar13 & 1) == 0) {
    pcStack_2c0 = "ret";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                        ,0x106,2,"assertion failed: %s");
    _abort();
LAB_104ac0e44:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x104ac0e48);
    (*pcVar7)();
  }
  pcStack_1e8 = "Failed to connect to remote host: ";
  uStack_1e0 = 0x22;
  uStack_210 = uStack_270;
  pppppppiStack_218 = pppppppiStack_278;
  if (-1 < (long)uStack_268) {
    uStack_210 = uStack_268 >> 0x38;
    pppppppiStack_218 = (int *******)&pppppppiStack_278;
  }
  func_0x00010047c83c(&pppppppiStack_298,&pcStack_1e8,&pppppppiStack_218);
  uStack_2a0 = *param_2;
  if ((uStack_2a0 & 1) != 0) {
    piVar16 = (int *)(uStack_2a0 - 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar6) {
        *piVar16 = *piVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pppppppiVar23 = pppppppiStack_298;
  if (-1 < (char)bStack_281) {
    uStack_290 = (ulong)bStack_281;
    pppppppiVar23 = (int *******)&pppppppiStack_298;
  }
  func_0x00010084caf8(&pcStack_1e8,&uStack_2a0,0,pppppppiVar23,uStack_290);
  pcVar12 = (char *)*param_2;
  if (pcStack_1e8 == pcVar12) {
LAB_104ac09d8:
    if (((ulong)pcVar12 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = (ulong)pcStack_1e8;
    pcStack_1e8 = (char *)0x36;
    if (((ulong)pcVar12 & 1) != 0) {
      func_0x00010084dad0();
      pcVar12 = pcStack_1e8;
      goto LAB_104ac09d8;
    }
  }
  if ((uStack_2a0 & 1) != 0) {
    func_0x00010084dad0();
  }
  pppppppiStack_2a8 = (int *******)*param_2;
  if (((ulong)pppppppiStack_2a8 & 1) != 0) {
    piVar16 = (int *)((long)pppppppiStack_2a8 + -1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar6) {
        *piVar16 = *piVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppiVar21 = ppppppiStack_238;
  pppppppiVar23 = pppppppiStack_240;
  if (-1 < (long)ppppppiStack_230) {
    ppppppiVar21 = (int ******)((ulong)ppppppiStack_230 >> 0x38);
    pppppppiVar23 = (int *******)&pppppppiStack_240;
  }
  func_0x00010084caf8(&pcStack_1e8,&pppppppiStack_2a8,4,pppppppiVar23,ppppppiVar21);
  pcVar12 = (char *)*param_2;
  if (pcStack_1e8 == pcVar12) {
LAB_104ac0a60:
    if (((ulong)pcVar12 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = (ulong)pcStack_1e8;
    pcStack_1e8 = (char *)0x36;
    if (((ulong)pcVar12 & 1) != 0) {
      func_0x00010084dad0();
      pcVar12 = pcStack_1e8;
      goto LAB_104ac0a60;
    }
  }
  pppppppiVar23 = pppppppiStack_2a8;
  if (((ulong)pppppppiStack_2a8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((char)bStack_281 < '\0') {
    __ZdlPv();
    pppppppiVar23 = pppppppiStack_298;
  }
  if ((long)uStack_268 < 0) {
    pppppppiVar23 = pppppppiStack_278;
    __ZdlPv();
  }
joined_r0x000104ac0a8c:
  if (iVar8 + -1 == 0) {
    func_0x0001005a5f48(pppppppiVar10);
    func_0x00010048650c(pppppppiVar10[0x1f]);
    if (*(char *)((long)pppppppiVar10 + 0xe7) < '\0') {
      __ZdlPv(*pppppppiVar20);
    }
    pppppppiVar23 = pppppppiVar10;
    __ZdlPv();
  }
  if (cVar4 == '\0') {
    pppppppiStack_2b0 = (int *******)*param_2;
    if (((ulong)pppppppiStack_2b0 & 1) != 0) {
      piVar16 = (int *)((long)pppppppiStack_2b0 + -1);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x0001004c1168(ppppppiVar11,&pppppppiStack_2b0,0,0);
    pppppppiVar23 = pppppppiStack_2b0;
    if (((ulong)pppppppiStack_2b0 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
LAB_104ac0b10:
  if ((long)ppppppiStack_230 < 0) {
    pppppppiVar23 = pppppppiStack_240;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&pcStack_1e8);
    func_0x0001004bdf74(&pcStack_260);
    if ((long)ppppppiStack_230 < 0) {
      __ZdlPv(pppppppiStack_240);
    }
    pppppppiVar20 = pppppppiVar23;
    __Unwind_Resume();
    pcStack_2c8 = FUN_104ac0fdc;
    pppppppiStack_2e0 = pppppppiVar10;
    pppppppiStack_2d8 = pppppppiVar23;
    ppuStack_2d0 = &puStack_160;
    func_0x000100460448();
    ppppppiVar21 = pppppppiVar20[8];
    if (ppppppiVar21 != (int ******)0x0) {
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_310 = 0;
      FUN_104ab5920(&uStack_2f0,2,"connect() timed out",0x13,&uStack_2f1,&uStack_310);
      FUN_104abd70c(ppppppiVar21,&uStack_2f0);
      if ((uStack_2f0 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_2e8 = (undefined1 *)&uStack_310;
      func_0x000100482b64(&puStack_2e8);
    }
    iVar8 = *(int *)(pppppppiVar20 + 0x14);
    *(int *)(pppppppiVar20 + 0x14) = iVar8 + -1;
    pppppppiVar10 = pppppppiVar20;
    func_0x000100466b80(pppppppiVar20);
    if (iVar8 + -1 == 0) {
      func_0x0001005a5f48(pppppppiVar20);
      func_0x00010048650c(pppppppiVar20[0x1f]);
      if (*(char *)((long)pppppppiVar20 + 0xe7) < '\0') {
        __ZdlPv(pppppppiVar20[0x1a]);
      }
      __ZdlPv(pppppppiVar20);
      pppppppiVar10 = pppppppiVar20;
    }
    return pppppppiVar10;
  }
  return pppppppiVar23;
}



/* Entry: 104ac0718; end: 104ac0fdb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ac0718(int *******param_1,ulong *param_2)

{
  long lVar1;
  int ******ppppppiVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  char *pcVar8;
  ulong *puVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  ulong uVar13;
  int *piVar14;
  char *pcVar15;
  int ******ppppppiVar16;
  int *******pppppppiVar17;
  long lVar18;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a1;
  ulong uStack_1a0;
  undefined1 *puStack_198;
  int *******pppppppiStack_190;
  int *******pppppppiStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  char *pcStack_170;
  int *******pppppppiStack_160;
  int *******pppppppiStack_158;
  ulong uStack_150;
  int *******pppppppiStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  int *******pppppppiStack_128;
  ulong uStack_120;
  ulong uStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  int *******pppppppiStack_f0;
  int ******ppppppiStack_e8;
  int ******ppppppiStack_e0;
  undefined4 uStack_d0;
  int iStack_cc;
  int *******pppppppiStack_c8;
  ulong uStack_c0;
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_cc = 0;
  ppppppiVar16 = param_1[0x1d];
  ppppppiVar2 = param_1[0x1e];
  pppppppiVar11 = param_1 + 0x1a;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    func_0x000100033dac(&pppppppiStack_f0,param_1[0x1a],param_1[0x1b]);
  }
  else {
    ppppppiStack_e8 = param_1[0x1b];
    pppppppiStack_f0 = (int *******)*pppppppiVar11;
    ppppppiStack_e0 = param_1[0x1c];
  }
  func_0x000100460448(param_1);
  pppppppiVar17 = (int *******)param_1[8];
  if (pppppppiVar17 == (int *******)0x0) {
    pcStack_170 = "ac->fd";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                        ,0xb0,2,"assertion failed: %s");
    _abort();
    goto LAB_104ac0e44;
  }
  param_1[8] = (int ******)0x0;
  cVar3 = *(char *)(param_1 + 0x21);
  func_0x000100466b80(param_1);
  func_0x0001005a5960(param_1 + 9);
  func_0x000100460448(param_1);
  uVar13 = *param_2;
  if (uVar13 == 0) {
    if (cVar3 == '\0') {
      do {
        uStack_d0 = 4;
        pppppppiVar10 = pppppppiVar17;
        func_0x000104abd6ec();
        _getsockopt();
        if (-1 < (int)pppppppiVar10) {
          if (iStack_cc == 0x3d) {
            FUN_104aba954(&pcStack_108,&pppppppiStack_c8,0x3d,&DAT_10f2f47b4);
            pcVar8 = pcStack_108;
            if (pcStack_108 == (char *)0x0) {
              pcStack_170 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_104ac0e44;
            }
            pcStack_98 = pcStack_108;
            pcStack_108 = (char *)0x36;
            pcVar15 = (char *)*param_2;
            if (pcVar8 == pcVar15) {
              if (((ulong)pcVar8 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *param_2 = (ulong)pcVar8;
              pcStack_98 = (char *)0x36;
              if (((ulong)pcVar15 & 1) != 0) {
                func_0x00010084dad0(pcVar15);
              }
            }
            if (((ulong)pcStack_108 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          else {
            if (iStack_cc == 0x37) {
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                                  ,0xe4,2,"kernel out of buffers");
              func_0x000100466b80(param_1);
              func_0x000104abd7a4(pppppppiVar17,param_1 + 0x15);
              goto LAB_104ac0b10;
            }
            if (iStack_cc == 0) {
              func_0x000104abd8bc(param_1[0x19],pppppppiVar17);
              if ((char)*(byte *)((long)param_1 + 0xe7) < '\0') {
                pppppppiVar10 = (int *******)param_1[0x1a];
                ppppppiVar12 = param_1[0x1b];
              }
              else {
                ppppppiVar12 = (int ******)(ulong)*(byte *)((long)param_1 + 0xe7);
                pppppppiVar10 = pppppppiVar11;
              }
              FUN_104ac1ba8(pppppppiVar17,param_1[0x1f],pppppppiVar10,ppppppiVar12);
              *ppppppiVar16 = (int *****)pppppppiVar17;
              pppppppiVar17 = (int *******)0x0;
            }
            else {
              FUN_104aba954(&pcStack_110,&pppppppiStack_c8,iStack_cc,"getsockopt(SO_ERROR)");
              pcVar8 = pcStack_110;
              if (pcStack_110 == (char *)0x0) {
                pcStack_170 = "!GRPC_ERROR_IS_NONE(error)";
                func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                    ,0xd5,2,"assertion failed: %s");
                _abort();
                goto LAB_104ac0e44;
              }
              pcStack_98 = pcStack_110;
              pcStack_110 = (char *)0x36;
              pcVar15 = (char *)*param_2;
              if (pcVar8 == pcVar15) {
                if (((ulong)pcVar8 & 1) != 0) {
                  func_0x00010084dad0();
                }
              }
              else {
                *param_2 = (ulong)pcVar8;
                pcStack_98 = (char *)0x36;
                if (((ulong)pcVar15 & 1) != 0) {
                  func_0x00010084dad0(pcVar15);
                }
              }
              if (((ulong)pcStack_110 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
          }
          goto LAB_104ac0830;
        }
        ___error();
      } while (*(int *)pppppppiVar10 == 4);
      ___error();
      FUN_104aba954(&pcStack_100,&pppppppiStack_c8,*(int *)pppppppiVar10,"getsockopt");
      pcVar8 = pcStack_100;
      if (pcStack_100 == (char *)0x0) {
        pcStack_170 = "!GRPC_ERROR_IS_NONE(error)";
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                            ,0xd5,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac0e44;
      }
      pcStack_98 = pcStack_100;
      pcStack_100 = (char *)0x36;
      pcVar15 = (char *)*param_2;
      if (pcVar8 == pcVar15) {
        if (((ulong)pcVar8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        *param_2 = (ulong)pcVar8;
        pcStack_98 = (char *)0x36;
        if (((ulong)pcVar15 & 1) != 0) {
          func_0x00010084dad0(pcVar15);
        }
      }
      if (((ulong)pcStack_100 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104ac0830;
    }
LAB_104ac089c:
    func_0x000104abd8bc(param_1[0x19],pppppppiVar17);
    func_0x000104abd6fc(pppppppiVar17,0,0,"tcp_client_orphan");
  }
  else {
    if ((uVar13 & 1) != 0) {
      piVar14 = (int *)(uVar13 - 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = *piVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_f8 = uVar13;
    func_0x00010084caf8(&pcStack_98,&uStack_f8,2,"Timeout occurred",0x10);
    pcVar8 = (char *)*param_2;
    if (pcStack_98 == pcVar8) {
LAB_104ac081c:
      if (((ulong)pcVar8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_2 = (ulong)pcStack_98;
      pcStack_98 = (char *)0x36;
      if (((ulong)pcVar8 & 1) != 0) {
        func_0x00010084dad0();
        pcVar8 = pcStack_98;
        goto LAB_104ac081c;
      }
    }
    if ((uStack_f8 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104ac0830:
    if (cVar3 == '\0') {
      lVar1 = *plRam00000001136a20a8;
      uVar13 = (plRam00000001136a20a8[1] - lVar1 >> 5) * -0x5555555555555555;
      iVar4 = 0;
      if (uVar13 != 0) {
        iVar4 = (int)((ulong)param_1[0x20] / uVar13);
      }
      iVar4 = (int)param_1[0x20] - iVar4 * (int)uVar13;
      lVar18 = lVar1 + (long)iVar4 * 0x60;
      func_0x000100460448(lVar18);
      FUN_104ac1560(lVar1 + (long)iVar4 * 0x60 + 0x40,param_1 + 0x20);
      func_0x000100466b80(lVar18);
    }
    if (pppppppiVar17 != (int *******)0x0) goto LAB_104ac089c;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + -1;
  pppppppiVar17 = param_1;
  func_0x000100466b80();
  uVar13 = *param_2;
  if (uVar13 == 0) goto joined_r0x000104ac0a8c;
  pppppppiStack_128 = (int *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  if ((uVar13 & 1) != 0) {
    piVar14 = (int *)(uVar13 - 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar9 = &uStack_130;
  uStack_130 = uVar13;
  func_0x00010084dbf0(puVar9,0,&pppppppiStack_128);
  if ((uStack_130 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)puVar9 & 1) == 0) {
    pcStack_170 = "ret";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                        ,0x106,2,"assertion failed: %s");
    _abort();
LAB_104ac0e44:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x104ac0e48);
    (*pcVar7)();
  }
  pcStack_98 = "Failed to connect to remote host: ";
  uStack_90 = 0x22;
  uStack_c0 = uStack_120;
  pppppppiStack_c8 = pppppppiStack_128;
  if (-1 < (long)uStack_118) {
    uStack_c0 = uStack_118 >> 0x38;
    pppppppiStack_c8 = (int *******)&pppppppiStack_128;
  }
  func_0x00010047c83c(&pppppppiStack_148,&pcStack_98,&pppppppiStack_c8);
  uStack_150 = *param_2;
  if ((uStack_150 & 1) != 0) {
    piVar14 = (int *)(uStack_150 - 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pppppppiVar17 = pppppppiStack_148;
  if (-1 < (char)bStack_131) {
    uStack_140 = (ulong)bStack_131;
    pppppppiVar17 = (int *******)&pppppppiStack_148;
  }
  func_0x00010084caf8(&pcStack_98,&uStack_150,0,pppppppiVar17,uStack_140);
  pcVar8 = (char *)*param_2;
  if (pcStack_98 == pcVar8) {
LAB_104ac09d8:
    if (((ulong)pcVar8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = (ulong)pcStack_98;
    pcStack_98 = (char *)0x36;
    if (((ulong)pcVar8 & 1) != 0) {
      func_0x00010084dad0();
      pcVar8 = pcStack_98;
      goto LAB_104ac09d8;
    }
  }
  if ((uStack_150 & 1) != 0) {
    func_0x00010084dad0();
  }
  pppppppiStack_158 = (int *******)*param_2;
  if (((ulong)pppppppiStack_158 & 1) != 0) {
    piVar14 = (int *)((long)pppppppiStack_158 + -1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppiVar16 = ppppppiStack_e8;
  pppppppiVar17 = pppppppiStack_f0;
  if (-1 < (long)ppppppiStack_e0) {
    ppppppiVar16 = (int ******)((ulong)ppppppiStack_e0 >> 0x38);
    pppppppiVar17 = (int *******)&pppppppiStack_f0;
  }
  func_0x00010084caf8(&pcStack_98,&pppppppiStack_158,4,pppppppiVar17,ppppppiVar16);
  pcVar8 = (char *)*param_2;
  if (pcStack_98 == pcVar8) {
LAB_104ac0a60:
    if (((ulong)pcVar8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = (ulong)pcStack_98;
    pcStack_98 = (char *)0x36;
    if (((ulong)pcVar8 & 1) != 0) {
      func_0x00010084dad0();
      pcVar8 = pcStack_98;
      goto LAB_104ac0a60;
    }
  }
  pppppppiVar17 = pppppppiStack_158;
  if (((ulong)pppppppiStack_158 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((char)bStack_131 < '\0') {
    __ZdlPv();
    pppppppiVar17 = pppppppiStack_148;
  }
  if ((long)uStack_118 < 0) {
    pppppppiVar17 = pppppppiStack_128;
    __ZdlPv();
  }
joined_r0x000104ac0a8c:
  if (iVar4 + -1 == 0) {
    func_0x0001005a5f48(param_1);
    func_0x00010048650c(param_1[0x1f]);
    if (*(char *)((long)param_1 + 0xe7) < '\0') {
      __ZdlPv(*pppppppiVar11);
    }
    pppppppiVar17 = param_1;
    __ZdlPv();
  }
  if (cVar3 == '\0') {
    pppppppiStack_160 = (int *******)*param_2;
    if (((ulong)pppppppiStack_160 & 1) != 0) {
      piVar14 = (int *)((long)pppppppiStack_160 + -1);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x0001004c1168(ppppppiVar2,&pppppppiStack_160,0,0);
    pppppppiVar17 = pppppppiStack_160;
    if (((ulong)pppppppiStack_160 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
LAB_104ac0b10:
  if ((long)ppppppiStack_e0 < 0) {
    pppppppiVar17 = pppppppiStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&pcStack_98);
    func_0x0001004bdf74(&pcStack_110);
    if ((long)ppppppiStack_e0 < 0) {
      __ZdlPv(pppppppiStack_f0);
    }
    pppppppiVar11 = pppppppiVar17;
    __Unwind_Resume();
    pcStack_178 = FUN_104ac0fdc;
    pppppppiStack_190 = param_1;
    pppppppiStack_188 = pppppppiVar17;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x000100460448();
    ppppppiVar16 = pppppppiVar11[8];
    if (ppppppiVar16 != (int ******)0x0) {
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1c0 = 0;
      FUN_104ab5920(&uStack_1a0,2,"connect() timed out",0x13,&uStack_1a1,&uStack_1c0);
      FUN_104abd70c(ppppppiVar16,&uStack_1a0);
      if ((uStack_1a0 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_198 = (undefined1 *)&uStack_1c0;
      func_0x000100482b64(&puStack_198);
    }
    iVar4 = *(int *)(pppppppiVar11 + 0x14);
    *(int *)(pppppppiVar11 + 0x14) = iVar4 + -1;
    func_0x000100466b80(pppppppiVar11);
    if (iVar4 + -1 == 0) {
      func_0x0001005a5f48(pppppppiVar11);
      func_0x00010048650c(pppppppiVar11[0x1f]);
      if (*(char *)((long)pppppppiVar11 + 0xe7) < '\0') {
        __ZdlPv(pppppppiVar11[0x1a]);
      }
      __ZdlPv(pppppppiVar11);
    }
    return;
  }
  return;
}



/* Entry: 104ac0fdc; end: 104ac10cb;  */

void FUN_104ac0fdc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  func_0x000100460448();
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_104ab5920(&uStack_30,2,"connect() timed out",0x13,&uStack_31,&uStack_50);
    FUN_104abd70c(lVar2,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    func_0x000100482b64(&puStack_28);
  }
  iVar1 = *(int *)(param_1 + 0xa0) + -1;
  *(int *)(param_1 + 0xa0) = iVar1;
  func_0x000100466b80(param_1);
  if (iVar1 == 0) {
    func_0x0001005a5f48(param_1);
    func_0x00010048650c(*(undefined8 *)(param_1 + 0xf8));
    if (*(char *)(param_1 + 0xe7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
    }
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 104ac10cc; end: 104ac12b3;  */

ulong FUN_104ac10cc(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_dc [132];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = 0xffffffff;
  uStack_e8 = 0;
  *param_2 = 0;
  FUN_104abfd68(&uStack_f0,param_4,param_5,auStack_dc,&uStack_e0);
  uVar6 = uStack_e8;
  uVar11 = uStack_f0;
  uVar10 = uStack_e8;
  if (uStack_f0 != uStack_e8) {
    uStack_f0 = 0x36;
    uStack_e8 = uVar11;
    uVar10 = 0x36;
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0();
      uVar10 = 0x36;
    }
  }
  uStack_f8 = 0;
  if (uStack_e8 == 0) {
    uVar14 = 0;
  }
  else {
    puVar5 = &uStack_e8;
    func_0x00010ae7711c(puVar5,&uStack_f8);
    uVar14 = (uint)puVar5 ^ 1;
    if ((uStack_f8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((uVar10 & 1) != 0) {
    func_0x00010084dad0(uVar10);
  }
  if (uVar14 == 0) {
    FUN_104ac0094(param_3,param_1,uStack_e0,param_4,auStack_dc,param_6,param_2);
    iVar8 = (int)param_1;
  }
  else {
    uStack_100 = uStack_e8;
    if ((uStack_e8 & 1) != 0) {
      piVar9 = (int *)(uStack_e8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd7e8(&uStack_f0,param_1,&uStack_100);
    iVar8 = (int)param_1;
    if ((uStack_100 & 1) != 0) {
      func_0x00010084dad0();
    }
    param_3 = 0;
  }
  uVar11 = uStack_e8;
  if ((uStack_e8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_f8);
    func_0x0001004bdf74(&uStack_f0);
    func_0x0001004bdf74(&uStack_e8);
  }
  uVar6 = uVar11;
  __Unwind_Resume();
  pcStack_108 = FUN_104ac12b4;
  if (0 < (long)uVar6) {
    uVar10 = (plRam00000001136a20a8[1] - *plRam00000001136a20a8 >> 5) * -0x5555555555555555;
    iVar8 = 0;
    if (uVar10 != 0) {
      iVar8 = (int)(uVar6 / uVar10);
    }
    lVar12 = *plRam00000001136a20a8 + (long)((int)uVar6 - iVar8 * (int)uVar10) * 0x60;
    uStack_138 = uVar6;
    puStack_130 = param_2;
    uStack_128 = param_4;
    uStack_120 = param_6;
    uStack_118 = uVar11;
    puStack_110 = &stack0xfffffffffffffff0;
    func_0x000100460448(lVar12);
    puVar13 = (undefined8 *)(lVar12 + 0x40);
    Hint_Prefetch(*puVar13,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + uVar6;
    puVar5 = &uStack_138;
    puVar7 = puVar13;
    FUN_104ac15d0(puVar13,puVar5,
                  SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                  ((long)&PTR_LOOP_110c8acd8 + uVar6) * -0x622015f714c7d297);
    if (puVar7 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = puVar5[1];
      if (uVar11 == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                            ,0x1ab,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac145c);
        (*pcVar4)();
      }
      *(int *)(uVar11 + 0xa0) = *(int *)(uVar11 + 0xa0) + 1;
      func_0x00010ae6cb48(puVar13,puVar7,0x10);
    }
    func_0x000100466b80(lVar12);
    if (uVar11 != 0) {
      func_0x000100460448(uVar11);
      lVar12 = *(long *)(uVar11 + 0x40);
      if (lVar12 != 0) {
        *(undefined1 *)(uVar11 + 0x108) = 1;
        uStack_140 = 0;
        FUN_104abd70c(lVar12,&uStack_140);
        if ((uStack_140 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      iVar8 = *(int *)(uVar11 + 0xa0) + -1;
      *(int *)(uVar11 + 0xa0) = iVar8;
      func_0x000100466b80(uVar11);
      if (iVar8 != 0) {
        return (ulong)(lVar12 != 0);
      }
      func_0x0001005a5f48(uVar11);
      func_0x00010048650c(*(undefined8 *)(uVar11 + 0xf8));
      if (*(char *)(uVar11 + 0xe7) < '\0') {
        __ZdlPv(*(undefined8 *)(uVar11 + 0xd0));
      }
      __ZdlPv(uVar11);
      return (ulong)(lVar12 != 0);
    }
  }
  return 0;
}



/* Entry: 104ac12b4; end: 104ac148b;  */

bool FUN_104ac12b4(ulong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uStack_40;
  ulong uStack_38;
  
  if (0 < (long)param_1) {
    uVar6 = (plRam00000001136a20a8[1] - *plRam00000001136a20a8 >> 5) * -0x5555555555555555;
    iVar1 = 0;
    if (uVar6 != 0) {
      iVar1 = (int)(param_1 / uVar6);
    }
    lVar7 = *plRam00000001136a20a8 + (long)((int)param_1 - iVar1 * (int)uVar6) * 0x60;
    uStack_38 = param_1;
    func_0x000100460448(lVar7);
    puVar8 = (undefined8 *)(lVar7 + 0x40);
    Hint_Prefetch(*puVar8,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_1;
    puVar5 = &uStack_38;
    puVar4 = puVar8;
    FUN_104ac15d0(puVar8,puVar5,
                  SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                  ((long)&PTR_LOOP_110c8acd8 + param_1) * -0x622015f714c7d297);
    if (puVar4 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = puVar5[1];
      if (uVar6 == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                            ,0x1ab,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104ac145c);
        (*pcVar3)();
      }
      *(int *)(uVar6 + 0xa0) = *(int *)(uVar6 + 0xa0) + 1;
      func_0x00010ae6cb48(puVar8,puVar4,0x10);
    }
    func_0x000100466b80(lVar7);
    if (uVar6 != 0) {
      func_0x000100460448(uVar6);
      lVar7 = *(long *)(uVar6 + 0x40);
      if (lVar7 != 0) {
        *(undefined1 *)(uVar6 + 0x108) = 1;
        uStack_40 = 0;
        FUN_104abd70c(lVar7,&uStack_40);
        if ((uStack_40 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      iVar1 = *(int *)(uVar6 + 0xa0) + -1;
      *(int *)(uVar6 + 0xa0) = iVar1;
      func_0x000100466b80(uVar6);
      if (iVar1 != 0) {
        return lVar7 != 0;
      }
      func_0x0001005a5f48(uVar6);
      func_0x00010048650c(*(undefined8 *)(uVar6 + 0xf8));
      if (*(char *)(uVar6 + 0xe7) < '\0') {
        __ZdlPv(*(undefined8 *)(uVar6 + 0xd0));
      }
      __ZdlPv(uVar6);
      return lVar7 != 0;
    }
  }
  return false;
}



/* Entry: 104ac148c; end: 104ac149f;  */

void FUN_104ac148c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x60;
        FUN_104ac1524(plVar4 + 2,lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 104ac14a0; end: 104ac1523;  */

void FUN_104ac14a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_104ac1524(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104ac1524; end: 104ac155f;  */

void FUN_104ac1524(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x50) != 0) {
    __ZdlPv(*(long *)(param_2 + 0x40) + -8);
  }
  func_0x0001005a5f48(param_2);
  return;
}



/* Entry: 104ac1560; end: 104ac15cf;  */

void FUN_104ac1560(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  puVar2 = param_1;
  FUN_104ac15d0(param_1,param_2,
                SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
                ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010ae6cb48(param_1,puVar2,0x10);
  }
  return;
}



/* Entry: 104ac15d0; end: 104ac1663;  */

undefined1  [16] FUN_104ac15d0(ulong *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar8;
  byte bVar15;
  undefined1 auVar16 [16];
  
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ param_3 >> 7;
  bVar5 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar8 = *(undefined8 *)(uVar4 + uVar6);
    bVar9 = (byte)((ulong)uVar8 >> 8);
    bVar10 = (byte)((ulong)uVar8 >> 0x10);
    bVar11 = (byte)((ulong)uVar8 >> 0x18);
    bVar12 = (byte)((ulong)uVar8 >> 0x20);
    bVar13 = (byte)((ulong)uVar8 >> 0x28);
    bVar14 = (byte)((ulong)uVar8 >> 0x30);
    bVar15 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar1 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar9 == bVar5),
                                                                                -((byte)uVar8 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar7 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 0x10) == *param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 0x10;
        auVar16._0_8_ = uVar4 + uVar7;
        return auVar16;
      }
    }
    if (CONCAT17(-(bVar15 == 0x80),
                 CONCAT16(-(bVar14 == 0x80),
                          CONCAT15(-(bVar13 == 0x80),
                                   CONCAT14(-(bVar12 == 0x80),
                                            CONCAT13(-(bVar11 == 0x80),
                                                     CONCAT12(-(bVar10 == 0x80),
                                                              CONCAT11(-(bVar9 == 0x80),
                                                                       -((byte)uVar8 == 0x80))))))))
        != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 104ac1664; end: 104ac173f;  */

undefined1  [16] FUN_104ac1664(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar9;
  byte bVar16;
  undefined1 auVar17 [16];
  
  lVar6 = 0;
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  uVar3 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
  bVar4 = (byte)uVar3 & 0x7f;
  uVar3 = uVar3 >> 7 ^ uVar7 >> 0xc;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar9 = *(undefined8 *)(uVar7 + uVar3);
    bVar10 = (byte)((ulong)uVar9 >> 8);
    bVar11 = (byte)((ulong)uVar9 >> 0x10);
    bVar12 = (byte)((ulong)uVar9 >> 0x18);
    bVar13 = (byte)((ulong)uVar9 >> 0x20);
    bVar14 = (byte)((ulong)uVar9 >> 0x28);
    bVar15 = (byte)((ulong)uVar9 >> 0x30);
    bVar16 = (byte)((ulong)uVar9 >> 0x38);
    uVar8 = CONCAT17(-(bVar16 == bVar4),
                     CONCAT16(-(bVar15 == bVar4),
                              CONCAT15(-(bVar14 == bVar4),
                                       CONCAT14(-(bVar13 == bVar4),
                                                CONCAT13(-(bVar12 == bVar4),
                                                         CONCAT12(-(bVar11 == bVar4),
                                                                  CONCAT11(-(bVar10 == bVar4),
                                                                           -((byte)uVar9 == bVar4)))
                                                        ))))) & 0x8080808080808080;
    if (uVar8 != 0) {
      do {
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar5 * 0x10) == *param_2) {
          uVar9 = 0;
          goto LAB_104ac1734;
        }
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar8 != 0);
    }
    if (CONCAT17(-(bVar16 == 0x80),
                 CONCAT16(-(bVar15 == 0x80),
                          CONCAT15(-(bVar14 == 0x80),
                                   CONCAT14(-(bVar13 == 0x80),
                                            CONCAT13(-(bVar12 == 0x80),
                                                     CONCAT12(-(bVar11 == 0x80),
                                                              CONCAT11(-(bVar10 == 0x80),
                                                                       -((byte)uVar9 == 0x80))))))))
        != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_104ac1740();
  uVar9 = 1;
  puVar5 = param_1;
LAB_104ac1734:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = puVar5;
  return auVar17;
}



/* Entry: 104ac1740; end: 104ac182f;  */

void FUN_104ac1740(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_104ac1948(param_1);
    puVar2 = param_1;
    func_0x000100061de0(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 104ac1830; end: 104ac1947;  */

void FUN_104ac1830(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar15 = param_1[2];
  param_1[2] = param_2;
  FUN_104ab30b8();
  if (uVar15 != 0) {
    uVar7 = 0;
    uVar8 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar7)) {
        plVar1 = (long *)(uVar3 + uVar7 * 0x10);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar1;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)&PTR_LOOP_110c8acd8 + *plVar1) * -0x622015f714c7d297;
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar9 >> 0xc) & uVar10;
        uVar16 = *(undefined8 *)(uVar9 + uVar12);
        uVar13 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar16 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar16 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar16 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar16 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar16 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar16 >> 8) < -1),-((char)uVar16 < -1))))))));
        if (uVar13 == 0) {
          lVar14 = 8;
          do {
            uVar12 = uVar12 + lVar14 & uVar10;
            uVar16 = *(undefined8 *)(uVar9 + uVar12);
            uVar13 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar16 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar16 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar16 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar16 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar16 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) < -1),
                                                           -((char)uVar16 < -1))))))));
            lVar14 = lVar14 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar10;
        bVar4 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar9 + uVar13) = bVar4;
        *(byte *)(uVar9 + (uVar13 - 7 & uVar10) + (uVar10 & 7)) = bVar4;
        lVar14 = *plVar1;
        plVar6 = (long *)(uVar8 + uVar13 * 0x10);
        plVar6[1] = plVar1[1];
        *plVar6 = lVar14;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 104ac1948; end: 104ac19e7;  */

ulong * FUN_104ac1948(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar17 = param_1[2];
      param_1[2] = uVar10 << 1 | 1;
      puVar8 = param_1;
      FUN_104ab30b8();
      if (uVar17 != 0) {
        uVar10 = 0;
        uVar11 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar10)) {
            plVar1 = (long *)(uVar3 + uVar10 * 0x10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar1;
            uVar14 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_110c8acd8 + *plVar1) * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar15 = (uVar14 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar18 = *(undefined8 *)(uVar12 + uVar15);
            uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
            if (uVar16 == 0) {
              lVar9 = 8;
              do {
                uVar15 = uVar15 + lVar9 & uVar13;
                uVar18 = *(undefined8 *)(uVar12 + uVar15);
                uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar18 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
                lVar9 = lVar9 + 8;
              } while (uVar16 == 0);
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
            bVar4 = (byte)uVar14 & 0x7f;
            *(byte *)(uVar12 + uVar16) = bVar4;
            *(byte *)(uVar12 + (uVar16 - 7 & uVar13) + (uVar13 & 7)) = bVar4;
            lVar9 = *plVar1;
            plVar7 = (long *)(uVar11 + uVar16 * 0x10);
            plVar7[1] = plVar1[1];
            *plVar7 = lVar9;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
        puVar8 = (ulong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_1107c5928;
    func_0x00010ae6c914(param_1,&UNK_1107c5928,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  return (ulong *)(SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^
                  ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297);
}



/* Entry: 104ac19e8; end: 104ac1a27;  */

ulong FUN_104ac19e8(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 104ac1a28; end: 104ac1a8f;  */

int * FUN_104ac1a28(int *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  do {
    piVar2 = param_1;
    _sendmsg(param_1,param_2,param_4);
    if (-1 < (long)piVar2) {
      return piVar2;
    }
    piVar3 = piVar2;
    ___error();
    iVar1 = *piVar3;
    *param_3 = iVar1;
  } while (iVar1 == 4);
  return piVar2;
}



/* Entry: 104ac1a90; end: 104ac1ba7;  */

long FUN_104ac1a90(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *param_2 = *(undefined8 *)(param_1 + 0x130);
  *param_3 = *(undefined8 *)(param_1 + 0x138);
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar5 == *(long *)(param_1 + 0x10)) {
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = 0;
    do {
      if (*(long *)(lVar3 + lVar5 * 0x20) == 0) {
        lVar2 = *(long *)(param_1 + 0x138);
        *param_5 = lVar3 + lVar5 * 0x20 + lVar2 + 9;
        uVar6 = (ulong)*(byte *)(lVar3 + lVar5 * 0x20 + 8);
      }
      else {
        lVar5 = lVar3 + lVar5 * 0x20;
        lVar2 = *(long *)(param_1 + 0x138);
        *param_5 = *(long *)(lVar5 + 0x10) + lVar2;
        uVar6 = *(ulong *)(lVar5 + 8);
      }
      param_5[1] = uVar6 - lVar2;
      *param_4 = *param_4 + (uVar6 - lVar2);
      lVar5 = *(long *)(param_1 + 0x130) + 1;
      *(long *)(param_1 + 0x130) = lVar5;
      *(undefined8 *)(param_1 + 0x138) = 0;
      lVar2 = lVar4 + 1;
    } while ((lVar5 != *(long *)(param_1 + 0x10)) &&
            (param_5 = param_5 + 2, bVar1 = lVar4 != 0x103, lVar4 = lVar2, bVar1));
  }
  return lVar2;
}



/* Entry: 104ac1ba8; end: 104ac2273;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_104ac1ba8(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  char *pcVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong *puVar23;
  int *piVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong *puVar32;
  long lVar33;
  ulong unaff_x25;
  long lVar34;
  ulong unaff_x26;
  uint uVar35;
  undefined8 *puVar36;
  long *plVar37;
  double dVar38;
  double dVar39;
  undefined8 *puStack_1448;
  ulong *puStack_1440;
  ulong *puStack_1438;
  ulong *puStack_1430;
  undefined8 *puStack_1428;
  undefined1 ***pppuStack_1420;
  code *pcStack_1418;
  char *pcStack_1410;
  undefined8 *puStack_1408;
  undefined8 *puStack_1400;
  ulong *puStack_13f8;
  ulong *puStack_13f0;
  undefined1 uStack_13e1;
  ulong *puStack_13e0;
  ulong *puStack_13d8;
  ulong auStack_13d0 [2];
  undefined4 uStack_13c0;
  ulong *puStack_13b8;
  undefined4 uStack_13b0;
  undefined8 uStack_13a8;
  undefined4 uStack_13a0;
  undefined4 uStack_139c;
  int iStack_1394;
  ulong uStack_1390;
  ulong uStack_1388;
  undefined8 uStack_1380;
  ulong auStack_1378 [520];
  long lStack_338;
  ulong *puStack_330;
  ulong uStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  long *plStack_300;
  undefined8 *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  char *pcStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2a9;
  ulong uStack_2a8;
  undefined8 *puStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  long *plStack_288;
  undefined4 uStack_280;
  ulong *puStack_278;
  undefined4 uStack_270;
  undefined1 *puStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 *puStack_258;
  undefined1 auStack_250 [24];
  ulong auStack_238 [8];
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong uStack_188;
  ulong uStack_180;
  ulong *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long *aplStack_140 [4];
  long lStack_120;
  long *plStack_118;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_178 = param_1;
  uStack_160 = param_3;
  uStack_158 = param_4;
  if ((param_2 == (ulong *)0x0) || (*param_2 == 0)) {
    uVar27 = 0x2000;
    uStack_144 = 0x400000;
    uVar35 = 0x100;
    puStack_168 = (undefined8 *)0x4000;
    puStack_170 = (undefined8 *)0x4;
  }
  else {
    uVar31 = 0;
    puStack_170 = (undefined8 *)0x4;
    puVar36 = (undefined8 *)0x100;
    uStack_144 = 0x400000;
    puVar28 = (undefined8 *)0x2000;
    lVar33 = 8;
    puStack_168 = (undefined8 *)0x4000;
    do {
      puVar21 = (undefined8 *)(param_2[1] + lVar33) + -1;
      uVar26 = *(undefined8 *)(param_2[1] + lVar33);
      uVar10 = uVar26;
      _strcmp(uVar26,"grpc.experimental.tcp_read_chunk_size");
      if ((int)uVar10 == 0) {
        unaff_x25 = unaff_x25 & 0xffffffff00000000 | 0x2000000;
        func_0x0001004865d8(puVar21,(ulong)puVar28 & 0xffffffff | 0x100000000,unaff_x25);
        puVar28 = puVar21;
      }
      else {
        uVar10 = uVar26;
        _strcmp(uVar26,"grpc.experimental.tcp_min_read_chunk_size");
        if ((int)uVar10 == 0) {
          unaff_x26 = unaff_x26 & 0xffffffff00000000 | 0x2000000;
          func_0x0001004865d8(puVar21,(ulong)puVar28 & 0xffffffff | 0x100000000,unaff_x26);
          puVar36 = puVar21;
        }
        else {
          uVar10 = uVar26;
          _strcmp(uVar26,"grpc.experimental.tcp_max_read_chunk_size");
          if ((int)uVar10 == 0) {
            uStack_150 = uStack_150 & 0xffffffff00000000 | 0x2000000;
            func_0x0001004865d8(puVar21,(ulong)puVar28 & 0xffffffff | 0x100000000);
            uStack_144 = (uint)puVar21;
          }
          else {
            uVar10 = uVar26;
            _strcmp(uVar26,"grpc.experimental.tcp_tx_zerocopy_enabled");
            if ((int)uVar10 == 0) {
              func_0x0001004808c4(puVar21,0);
            }
            else {
              uVar10 = uVar26;
              _strcmp(uVar26,"grpc.experimental.tcp_tx_zerocopy_send_bytes_threshold");
              if ((int)uVar10 == 0) {
                uStack_180 = uStack_180 & 0xffffffff00000000 | 0x7fffffff;
                func_0x0001004865d8(puVar21,0x4000);
                puStack_168 = puVar21;
              }
              else {
                _strcmp(uVar26,"grpc.experimental.tcp_tx_zerocopy_max_simultaneous_sends");
                if ((int)uVar26 == 0) {
                  uStack_188 = uStack_188 & 0xffffffff00000000 | 0x7fffffff;
                  func_0x0001004865d8(puVar21,4);
                  puStack_170 = puVar21;
                }
              }
            }
          }
        }
      }
      uVar27 = (uint)puVar28;
      uVar35 = (uint)puVar36;
      uVar31 = uVar31 + 1;
      lVar33 = lVar33 + 0x20;
    } while (uVar31 < *param_2);
  }
  uVar2 = uVar35;
  if ((int)uStack_144 <= (int)uVar35) {
    uVar2 = uStack_144;
  }
  if ((int)uVar2 <= (int)uVar27) {
    uVar35 = uVar27;
  }
  if ((int)uStack_144 <= (int)uVar35) {
    uVar35 = uStack_144;
  }
  uVar31 = (ulong)uVar35;
  puVar36 = (undefined8 *)0x3a8;
  __Znwm();
  puVar23 = puVar36 + 5;
  *puVar23 = 1;
  func_0x000100460318(puVar36 + 0x2d);
  puVar36[0x35] = 0;
  puVar30 = puVar36 + 0x49;
  puVar28 = puVar36 + 0x4c;
  puVar36[0x53] = 0;
  puVar36[0x4a] = 0;
  *puVar30 = 0;
  puVar36[0x4c] = 0;
  puVar36[0x4b] = 0;
  puVar36[0x4e] = 0;
  puVar36[0x4d] = 0;
  puVar36[0x50] = 0;
  puVar36[0x4f] = 0;
  puVar36[0x52] = 0;
  puVar36[0x51] = 0;
  FUN_104ac31a4(puVar36 + 0x60,puStack_170,(long)(int)puStack_168);
  puVar32 = puStack_178;
  puVar36[0x73] = 0;
  *puVar36 = &PTR_FUN_1107c5948;
  if (0x7ffffffffffffff7 < uStack_158) {
    func_0x000104a6fa5c(&pppppppuStack_100);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x104ac2184);
    (*pcVar7)();
  }
  if (uStack_158 < 0x17) {
    uStack_f0 = CONCAT17((char)uStack_158,(undefined7)uStack_f0);
    pppppppuVar11 = &pppppppuStack_100;
    uVar19 = uStack_158;
    if (uStack_158 != 0) goto LAB_104ac1e7c;
  }
  else {
    uVar19 = (uStack_158 & 0xfffffffffffffff8) + 8;
    if ((uStack_158 | 7) != 0x17) {
      uVar19 = uStack_158 | 7;
    }
    pppppppuVar11 = (undefined8 *******)(uVar19 + 1);
    __Znwm();
    uStack_f0 = uVar19 + 1 | 0x8000000000000000;
    uStack_f8 = uStack_158;
    pppppppuStack_100 = pppppppuVar11;
LAB_104ac1e7c:
    uVar19 = uStack_158;
    _memmove(pppppppuVar11,uStack_160,uStack_158);
  }
  *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
  if (*(char *)((long)puVar36 + 0x25f) < '\0') {
    __ZdlPv(*puVar30);
  }
  puVar36[0x4a] = uStack_f8;
  *puVar30 = (ulong)pppppppuStack_100;
  puVar36[0x4b] = uStack_f0;
  puVar29 = puVar32;
  FUN_104abd6ec();
  *(int *)(puVar36 + 2) = (int)puVar29;
  func_0x0001007414f4(aplStack_140,param_2);
  lStack_120 = aplStack_140[0][2];
  plVar14 = (long *)aplStack_140[0][3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_118 = plVar14;
  func_0x000100487758(&pppppppuStack_100,lStack_120,uStack_160,uStack_158);
  func_0x00010074157c(puVar36 + 0x4f,&pppppppuStack_100);
  func_0x000100487bf4(&pppppppuStack_100);
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      lVar33 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar33 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (aplStack_140[0] != (long *)0x0) {
    plVar14 = aplStack_140[0] + 1;
    do {
      lVar33 = *plVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar33 + -1 == 0) {
      (**(code **)(*aplStack_140[0] + 8))();
    }
  }
  func_0x0001007415e0(&pppppppuStack_100,puVar36 + 0x4f,0x3a8,0x3a8);
  func_0x00010074157c(puVar36 + 0x51,&pppppppuStack_100);
  puVar36[0x53] = uStack_f0;
  func_0x000100741660(&pppppppuStack_100);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  pppppppuStack_100 = (undefined8 *******)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  auStack_80[0] = 0x80;
  func_0x00010047ad90(&lStack_120);
  iVar9 = *(int *)(puVar36 + 2);
  _getsockname(iVar9,&pppppppuStack_100,auStack_80);
  if (iVar9 < 0) {
LAB_104ac1ff8:
    pcVar12 = "";
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar28);
  }
  else {
    func_0x0001004d4034(aplStack_140,&pppppppuStack_100);
    func_0x0001005a5c60(&lStack_120,aplStack_140);
    lVar33 = lStack_120;
    func_0x00010047c7d4(aplStack_140);
    if (lVar33 != 0) goto LAB_104ac1ff8;
    pcVar12 = (char *)&lStack_120;
    func_0x0001004d5530();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar28);
  }
  puVar36[0x73] = 0;
  puVar36[0x3a] = 0;
  puVar36[0x39] = 0;
  puVar36[0x3c] = 0;
  puVar36[0x3b] = 0;
  puVar36[3] = (double)(int)uVar35;
  *(uint *)(puVar36 + 7) = uVar2;
  *(uint *)((long)puVar36 + 0x3c) = uStack_144;
  puVar36[4] = 0;
  *(undefined2 *)((long)puVar36 + 0x14) = 1;
  *(undefined4 *)(puVar36 + 0x5e) = 0xffffffff;
  *(undefined2 *)((long)puVar36 + 0x2f4) = 0x100;
  puVar36[0x5d] = 0;
  if ((bRam00000001136a20d0 & 1) == 0) {
    iVar9 = 0x136a20d0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000104abde88();
      uRam00000001136a20c8 = (undefined1)iVar9;
      ___cxa_guard_release(0x1136a20d0);
    }
  }
  *(undefined1 *)(puVar36 + 0x74) = uRam00000001136a20c8;
  *(undefined4 *)((long)puVar36 + 0x3a4) = 1;
  puVar36[5] = 1;
  puVar36[6] = 0;
  puVar36[1] = puVar32;
  func_0x0001004b800c(puVar36 + 8);
  iVar9 = (int)puVar36 + 0x2a8;
  func_0x000100460318();
  puVar36[0x54] = 0;
  puVar36[0x3e] = FUN_104ac2274;
  puVar36[0x3f] = puVar36;
  puVar36[0x40] = 0;
  FUN_104abd658();
  pcVar7 = FUN_104ac2ad8;
  if (iVar9 == 0) {
    pcVar7 = FUN_104ac301c;
  }
  puVar36[0x42] = pcVar7;
  puVar36[0x43] = puVar36;
  puVar36[0x44] = 0;
  *(undefined4 *)(puVar36 + 0x36) = 1;
  *(undefined1 *)((long)puVar36 + 0x1b4) = 0;
  FUN_104abd62c();
  if (iVar9 != 0) {
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar23,0x10);
      if (bVar8) {
        *puVar23 = *puVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar36[0x5f] = 0;
    pcVar12 = (char *)(puVar36 + 0x45);
    puVar36[0x46] = FUN_104ac30cc;
    puVar36[0x47] = puVar36;
    puVar36[0x48] = 0;
    func_0x000104abd7b4(puVar36[1]);
  }
  plVar14 = &lStack_120;
  func_0x00010047c7d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar36;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136a20d0);
  func_0x00010047c7d4(&lStack_120);
  plVar13 = plVar14;
  __Unwind_Resume();
  puStack_1c0 = puVar32;
  uStack_1b0 = 0x1136a2000;
  pcStack_198 = FUN_104ac2274;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar13 + 0x2d;
  puStack_1f0 = puVar30;
  uStack_1e8 = uVar31;
  puStack_1e0 = puVar28;
  uStack_1d8 = (ulong)uVar2;
  puStack_1d0 = param_2;
  puStack_1c8 = puVar23;
  puStack_1b8 = puVar36;
  plStack_1a8 = plVar14;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x000100460448(plVar1);
  puStack_2d0 = (undefined8 *)0x0;
  if (*(long *)pcVar12 == 0) {
    lVar33 = plVar13[0x35];
    iVar9 = *(int *)((long)plVar13 + 0x3a4);
    if ((*(ulong *)(lVar33 + 0x20) < (ulong)(long)iVar9) && (*(ulong *)(lVar33 + 0x10) < 4)) {
      iVar6 = iVar9;
      if (iVar9 <= (int)(double)plVar13[3]) {
        iVar6 = (int)(double)plVar13[3];
      }
      iVar6 = iVar6 - (int)*(ulong *)(lVar33 + 0x20);
      iVar3 = (int)plVar13[7];
      if ((int)plVar13[7] <= iVar9) {
        iVar3 = iVar9;
      }
      iVar4 = *(int *)((long)plVar13 + 0x3c);
      if (*(int *)((long)plVar13 + 0x3c) <= iVar9) {
        iVar4 = iVar9;
      }
      if (iVar6 <= iVar4) {
        iVar4 = iVar6;
      }
      iVar9 = iVar3;
      if (iVar3 <= iVar6) {
        iVar9 = iVar4;
      }
      func_0x00010074169c(auStack_238,plVar13 + 0x4f,(long)iVar3,(long)iVar9);
      func_0x0001005a7ec4(lVar33,auStack_238);
      if (*(char *)((long)plVar13 + 0x15) == '\0') {
        *(undefined1 *)((long)plVar13 + 0x15) = 1;
        lVar33 = plVar13[0x4f];
        func_0x000100460448(lVar33 + 0x40);
        if (*(char *)(lVar33 + 0x80) != '\0') {
          pcStack_2e0 = "!shutdown_";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                              ,0x13a,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac299c;
        }
        lVar34 = *(long *)(lVar33 + 0x18);
        plVar14 = (long *)0x18;
        __Znwm();
        uVar10 = *(undefined8 *)(lVar34 + 0x30);
        lVar22 = *(long *)(lVar34 + 0x38);
        if (lVar22 != 0) {
          plVar37 = (long *)(lVar22 + 8);
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar8) {
              *plVar37 = *plVar37 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar37 = plVar14 + 1;
        *plVar37 = 1;
        *plVar14 = (long)&PTR_FUN_1107c5d60;
        puVar28 = (undefined8 *)0x20;
        __Znwm();
        *puVar28 = &PTR_FUN_1107c59b0;
        puVar28[1] = uVar10;
        puVar28[2] = lVar22;
        puVar28[3] = plVar13;
        plVar14[2] = (long)puVar28;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar8) {
            *plVar37 = *plVar37 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_288 = plVar14;
        func_0x0001004bc2ec(lVar34 + 0x30,&plStack_288);
        if (plStack_288 != (long *)0x0) {
          plVar37 = plStack_288 + 1;
          do {
            lVar22 = *plVar37;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar8) {
              *plVar37 = lVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar22 + -1 == 0) {
            (**(code **)(*plStack_288 + 0x10))();
          }
        }
        func_0x0001004bc3ac(lVar33 + 0x90,plVar14);
        func_0x000100466b80(lVar33 + 0x40);
      }
    }
    lVar33 = plVar13[0x35];
    uVar19 = *(ulong *)(lVar33 + 0x10);
    if (3 < uVar19) {
      uVar19 = 4;
    }
    if (uVar19 != 0) {
      puVar23 = (ulong *)(*(long *)(lVar33 + 8) + 8);
      puVar32 = auStack_238;
      uVar31 = uVar19;
      do {
        if (puVar23[-1] == 0) {
          *puVar32 = (ulong)((long)puVar23 + 1);
          uVar25 = (ulong)(byte)*puVar23;
        }
        else {
          *puVar32 = puVar23[1];
          uVar25 = *puVar23;
        }
        puVar32[1] = uVar25;
        puVar32 = puVar32 + 2;
        puVar23 = puVar23 + 4;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    if (*(long *)(lVar33 + 0x20) == 0) {
      pcStack_2e0 = "tcp->incoming_buffer->length != 0";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                          ,0x2f0,2,"assertion failed: %s");
      _abort();
LAB_104ac299c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x104ac29a0);
      (*pcVar7)();
    }
    puVar29 = (ulong *)0x0;
    puVar32 = auStack_238;
    puVar23 = auStack_238 + 1;
    param_2 = (ulong *)0x1;
LAB_104ac24a0:
    uVar31 = uVar19;
    *(undefined4 *)(plVar13 + 0x36) = 1;
    plStack_288 = (long *)0x0;
    uStack_280 = 0;
    uStack_270 = (undefined4)uVar31;
    bVar8 = *(char *)((long)plVar13 + 0x1b4) != '\0';
    puStack_268 = (undefined1 *)0x0;
    if (bVar8) {
      puStack_268 = auStack_250;
    }
    uStack_260 = 0;
    if (bVar8) {
      uStack_260 = 0x18;
    }
    uStack_25c = 0;
    puStack_278 = puVar32;
    while( true ) {
      piVar15 = (int *)(ulong)*(uint *)(plVar13 + 2);
      _recvmsg(piVar15,&plStack_288,0);
      if (-1 < (long)piVar15) break;
      ___error();
      if (*piVar15 != 4) {
        if ((ulong *)(long)*(int *)((long)plVar13 + 0x3a4) <= puVar29) goto LAB_104ac276c;
        ___error();
        if (*piVar15 == 0x23) {
          if (puVar29 != (ulong *)0x0) {
            if ((int)plVar13[0x36] != 0) goto LAB_104ac2774;
            dVar38 = (double)plVar13[4];
            goto LAB_104ac25a4;
          }
          dVar39 = (double)plVar13[3];
          dVar38 = (double)plVar13[4];
          if (dVar38 <= dVar39 * 0.8) {
            dVar38 = dVar38 * 0.01 + dVar39 * 0.99;
          }
          else if (dVar38 <= dVar39 + dVar39) {
            dVar38 = dVar39 + dVar39;
          }
          plVar13[3] = (long)dVar38;
          plVar13[4] = 0;
          *(undefined4 *)(plVar13 + 0x36) = 0;
          goto LAB_104ac27bc;
        }
        puVar17 = (undefined4 *)plVar13[0x35];
        func_0x0001005a7050();
        ___error();
        FUN_104aba954(&uStack_298,&puStack_2a0,*puVar17,"recvmsg");
        uVar19 = uStack_298;
        if (uStack_298 == 0) {
          pcStack_2e0 = "!GRPC_ERROR_IS_NONE(error)";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac299c;
        }
        uStack_298 = 0x36;
        uStack_290 = uVar19;
        FUN_104ac3860(&puStack_258,&uStack_290,plVar13);
        puVar28 = puStack_2d0;
        if (puStack_258 == puStack_2d0) {
LAB_104ac2638:
          if (((ulong)puVar28 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          puStack_2d0 = puStack_258;
          puStack_258 = (undefined8 *)0x36;
          if (((ulong)puVar28 & 1) != 0) {
            func_0x00010084dad0();
            puVar28 = puStack_258;
            goto LAB_104ac2638;
          }
        }
        if ((uVar19 & 1) != 0) {
          func_0x00010084dad0(uVar19);
        }
        if ((uStack_298 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104ac2818;
      }
    }
    if (piVar15 == (int *)0x0) {
      if (puVar29 < (ulong *)(long)*(int *)((long)plVar13 + 0x3a4)) {
        func_0x0001005a7050(plVar13[0x35]);
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2c8 = 0;
        FUN_104ab5920(&uStack_2a8,2,&DAT_10f3dfdaf,0xd,&uStack_2a9,&uStack_2c8);
        FUN_104ac3860(&puStack_2a0,&uStack_2a8,plVar13);
        puVar28 = puStack_2d0;
        if (puStack_2a0 == puStack_2d0) {
LAB_104ac2744:
          if (((ulong)puVar28 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          puStack_2d0 = puStack_2a0;
          puStack_2a0 = (undefined8 *)0x36;
          if (((ulong)puVar28 & 1) != 0) {
            func_0x00010084dad0();
            puVar28 = puStack_2a0;
            goto LAB_104ac2744;
          }
        }
        if ((uStack_2a8 & 1) != 0) {
          func_0x00010084dad0();
        }
        puStack_258 = &uStack_2c8;
        func_0x000100482b64(&puStack_258);
        goto LAB_104ac2818;
      }
LAB_104ac276c:
      *(undefined4 *)(plVar13 + 0x36) = 1;
      goto LAB_104ac2774;
    }
    dVar38 = (double)plVar13[4] + (double)piVar15;
    plVar13[4] = (long)dVar38;
    puVar29 = (ulong *)((long)piVar15 + (long)puVar29);
    if ((int)plVar13[0x36] != 0) {
      if (puVar29 == *(ulong **)(plVar13[0x35] + 0x20)) goto LAB_104ac2774;
      uVar19 = 0;
      if (uVar31 != 0) {
        uVar19 = 0;
        puVar20 = puVar23;
        do {
          piVar24 = (int *)*puVar20;
          piVar16 = (int *)((long)piVar15 - (long)piVar24);
          if (piVar15 < piVar24) {
            puVar32[uVar19 * 2] = puVar20[-1] + (long)piVar15;
            auStack_238[uVar19 * 2 + 1] = (long)piVar24 - (long)piVar15;
            uVar19 = uVar19 + 1;
            piVar16 = (int *)0x0;
          }
          puVar20 = puVar20 + 2;
          uVar31 = uVar31 - 1;
          piVar15 = piVar16;
        } while (uVar31 != 0);
      }
      goto LAB_104ac24a0;
    }
LAB_104ac25a4:
    dVar39 = (double)plVar13[3];
    if (dVar38 <= dVar39 * 0.8) {
      dVar38 = dVar38 * 0.01 + dVar39 * 0.99;
    }
    else if (dVar38 <= dVar39 + dVar39) {
      dVar38 = dVar39 + dVar39;
    }
    plVar13[3] = (long)dVar38;
    plVar13[4] = 0;
LAB_104ac2774:
    puVar28 = puStack_2d0;
    if (puStack_2d0 != (undefined8 *)0x0) {
      puStack_2d0 = (undefined8 *)0x0;
      puStack_258 = (undefined8 *)0x36;
      if (((ulong)puVar28 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((char)plVar13[0x74] == '\0') {
      puVar20 = *(ulong **)(plVar13[0x35] + 0x20);
      lVar33 = (long)puVar20 - (long)puVar29;
      if (puVar29 <= puVar20 && lVar33 != 0) {
        func_0x000100726dd0(plVar13[0x35],lVar33,plVar13 + 8);
      }
LAB_104ac2818:
      if (((ulong)puStack_2d0 & 1) != 0) {
        piVar15 = (int *)((long)puStack_2d0 + -1);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar8) {
            *piVar15 = *piVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        func_0x00010084dad0();
      }
      goto LAB_104ac2838;
    }
    iVar9 = *(int *)((long)plVar13 + 0x3a4) - (int)puVar29;
    *(int *)((long)plVar13 + 0x3a4) = iVar9;
    if (iVar9 < 1) {
      *(undefined4 *)((long)plVar13 + 0x3a4) = 1;
      puVar32 = (ulong *)(plVar13 + 8);
      FUN_104ad7c94(plVar13[0x35],puVar29,puVar32);
      func_0x0001006148f8(puVar32,plVar13[0x35]);
      goto LAB_104ac2818;
    }
    FUN_104ad7c94(plVar13[0x35],puVar29,plVar13 + 8);
LAB_104ac27bc:
    func_0x000100466b80(plVar1);
    puVar20 = (ulong *)(plVar13 + 0x3d);
    func_0x000104abd794(plVar13[1]);
  }
  else {
    FUN_104a75cac(&puStack_2d0,pcVar12);
    func_0x0001005a7050(plVar13[0x35]);
    func_0x0001005a7050(plVar13 + 8);
LAB_104ac2838:
    puVar29 = (ulong *)plVar13[0x39];
    plVar13[0x39] = 0;
    plVar13[0x35] = 0;
    func_0x000100466b80(plVar1);
    puStack_2d8 = puStack_2d0;
    if (((ulong)puStack_2d0 & 1) != 0) {
      piVar15 = (int *)((long)puStack_2d0 + -1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar8) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar20 = puVar29;
    func_0x00010082b8d4(auStack_238,puVar29,&puStack_2d8);
    if (((ulong)puStack_2d8 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar14 = plVar13 + 5;
    do {
      lVar33 = *plVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar33 + -1 == 0) {
      FUN_104ac4ad4(plVar13);
    }
  }
  puVar28 = puStack_2d0;
  if (((ulong)puStack_2d0 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return puVar28;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&puStack_2a0);
  func_0x0001004bdf74(&uStack_2a8);
  puStack_258 = &uStack_2c8;
  func_0x000100482b64(&puStack_258);
  func_0x0001004bdf74(&puStack_2d0);
  puVar36 = puVar28;
  __Unwind_Resume();
  pcStack_2e8 = FUN_104ac2ad8;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (undefined8 *)*puVar20;
  puStack_330 = puVar30;
  uStack_328 = uVar31;
  puStack_320 = param_2;
  puStack_318 = puVar23;
  puStack_310 = puVar32;
  puStack_308 = puVar29;
  plStack_300 = plVar1;
  puStack_2f8 = puVar28;
  ppuStack_2f0 = &puStack_1a0;
  if (puVar21 == (undefined8 *)0x0) {
    puVar30 = (ulong *)puVar36[0x73];
    if (puVar30 == (ulong *)0x0) {
      puVar28 = puVar36;
      puVar29 = puVar20;
      FUN_104ac3a10();
      if (((ulong)puVar28 & 1) == 0) {
LAB_104ac2d70:
        FUN_104ac3e9c();
        puVar28 = puVar36;
        goto LAB_104ac2e84;
      }
    }
    else {
      puVar32 = puVar36 + 0x60;
      puVar29 = puVar30 + 0x25;
      puVar23 = auStack_1378;
      do {
        uStack_1380 = 0;
        puVar18 = puVar30;
        FUN_104ac1a90(puVar30,&uStack_1388,&uStack_1390,&uStack_1380,auStack_1378);
        auStack_13d0[1] = 0;
        uStack_13c0 = 0;
        uStack_13b0 = SUB84(puVar18,0);
        uStack_139c = 0;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar8) {
            *puVar29 = *puVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puStack_13b8 = puVar23;
        FUN_104ac403c(puVar32,*(undefined4 *)(puVar36 + 0x6b),puVar30);
        *(int *)(puVar36 + 0x6b) = *(int *)(puVar36 + 0x6b) + 1;
        iStack_1394 = 0;
        if (puVar36[0x5d] != 0) {
          if (*(char *)((long)puVar36 + 0x2f5) != '\0') {
            FUN_104ac3fa4();
            goto LAB_104ac2f2c;
          }
          *(undefined1 *)((long)puVar36 + 0x2f5) = 0;
          FUN_104ac3960(puVar36);
        }
        uStack_13a8 = 0;
        uStack_13a0 = 0;
        uVar31 = (ulong)*(uint *)(puVar36 + 2);
        FUN_104ac1a28(uVar31,auStack_13d0 + 1,&iStack_1394,0x4000000);
        if ((long)uVar31 < 0) {
          FUN_104ac3ffc(puVar32);
          if (iStack_1394 == 0x23) {
            puVar30[0x26] = uStack_1388;
            puVar30[0x27] = uStack_1390;
            puVar29 = (ulong *)0x23;
            goto LAB_104ac2d70;
          }
          if (iStack_1394 == 0x20) {
            FUN_104aba954(&puStack_13e0,&uStack_13e1,0x20,"sendmsg");
            puVar23 = puStack_13e0;
            if (puStack_13e0 == (ulong *)0x0) {
              pcStack_1410 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
LAB_104ac2f2c:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x104ac2f30);
              (*pcVar7)();
            }
            puStack_13e0 = (ulong *)0x36;
            puStack_13d8 = puVar23;
            FUN_104ac3860(auStack_13d0,&puStack_13d8,puVar36);
            uVar31 = *puVar20;
            if (auStack_13d0[0] == uVar31) {
LAB_104ac2d3c:
              if ((uVar31 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *puVar20 = auStack_13d0[0];
              auStack_13d0[0] = 0x36;
              if ((uVar31 & 1) != 0) {
                func_0x00010084dad0();
                uVar31 = auStack_13d0[0];
                goto LAB_104ac2d3c;
              }
            }
            if (((ulong)puVar23 & 1) != 0) {
              func_0x00010084dad0(puVar23);
            }
            if (((ulong)puStack_13e0 & 1) != 0) {
              func_0x00010084dad0();
            }
            FUN_104ac3960(puVar36);
          }
          else {
            FUN_104aba954(&puStack_13f8,&uStack_13e1,iStack_1394,"sendmsg");
            puVar23 = puStack_13f8;
            if (puStack_13f8 == (ulong *)0x0) {
              pcStack_1410 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_104ac2f2c;
            }
            puStack_13f8 = (ulong *)0x36;
            puStack_13f0 = puVar23;
            FUN_104ac3860(auStack_13d0,&puStack_13f0,puVar36);
            uVar31 = *puVar20;
            if (auStack_13d0[0] == uVar31) {
LAB_104ac2dd8:
              if ((uVar31 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *puVar20 = auStack_13d0[0];
              auStack_13d0[0] = 0x36;
              if ((uVar31 & 1) != 0) {
                func_0x00010084dad0();
                uVar31 = auStack_13d0[0];
                goto LAB_104ac2dd8;
              }
            }
            if (((ulong)puVar23 & 1) != 0) {
              func_0x00010084dad0(puVar23);
            }
            if (((ulong)puStack_13f8 & 1) != 0) {
              func_0x00010084dad0();
            }
            FUN_104ac3960(puVar36);
          }
          goto LAB_104ac2e00;
        }
        *(int *)(puVar36 + 0x5e) = *(int *)(puVar36 + 0x5e) + (int)uVar31;
        func_0x000104ac1b50(puVar30,uStack_1380);
      } while (puVar30[0x26] != puVar30[2]);
      uVar31 = *puVar20;
      if ((uVar31 != 0) && (*puVar20 = 0, (uVar31 & 1) != 0)) {
        func_0x00010084dad0();
      }
LAB_104ac2e00:
      do {
        uVar31 = *puVar29;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar8) {
          *puVar29 = uVar31 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar31 - 1 == 0) {
        func_0x0001005a7050(puVar30);
        FUN_104ac47c0(puVar32,puVar30);
      }
    }
    puVar29 = (ulong *)puVar36[0x3a];
    puVar36[0x3a] = 0;
    puVar36[0x73] = 0;
    puStack_1408 = (undefined8 *)*puVar20;
    if (((ulong)puStack_1408 & 1) != 0) {
      piVar15 = (int *)((long)puStack_1408 + -1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar8) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    func_0x00010082b8d4(auStack_1378,puVar29,&puStack_1408);
    puVar28 = puStack_1408;
    if (((ulong)puStack_1408 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar14 = puVar36 + 5;
    do {
      lVar33 = *plVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar33 + -1 == 0) {
      FUN_104ac4ad4();
      puVar28 = puVar36;
    }
  }
  else {
    puVar30 = (ulong *)puVar36[0x3a];
    puVar36[0x3a] = 0;
    puVar32 = (ulong *)puVar36[0x73];
    if (puVar32 != (ulong *)0x0) {
      puVar29 = puVar32 + 0x25;
      do {
        uVar31 = *puVar29;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar8) {
          *puVar29 = uVar31 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar31 - 1 == 0) {
        func_0x0001005a7050(puVar32);
        FUN_104ac47c0(puVar36 + 0x60,puVar32);
      }
      puVar36[0x73] = 0;
      puVar21 = (undefined8 *)*puVar20;
    }
    if (((ulong)puVar21 & 1) != 0) {
      piVar15 = (int *)((long)puVar21 + -1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar8) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar29 = puVar30;
    puStack_1400 = puVar21;
    func_0x00010082b8d4(auStack_1378,puVar30,&puStack_1400);
    puVar28 = puStack_1400;
    if (((ulong)puStack_1400 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar14 = puVar36 + 5;
    do {
      lVar33 = *plVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar33 + -1 == 0) {
      FUN_104ac4ad4();
      puVar28 = puVar36;
    }
  }
LAB_104ac2e84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return puVar28;
  }
  ___stack_chk_fail();
  if ((auStack_13d0[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)puVar23 & 1) != 0) {
    func_0x00010084dad0(puVar23);
  }
  if (((ulong)puStack_13f8 & 1) != 0) {
    func_0x00010084dad0();
  }
  __Unwind_Resume(puVar28);
  puVar36 = puVar28;
  FUN_104bd46a0(puVar28);
  pcStack_1418 = FUN_104ac301c;
  puStack_1440 = puVar32;
  puStack_1438 = puVar30;
  puStack_1430 = puVar20;
  puStack_1428 = puVar28;
  pppuStack_1420 = &ppuStack_2f0;
  func_0x000100460448(puRam00000001136a20b0);
  iVar9 = iRam00000001136a20b8;
  iRam00000001136a20b8 = iRam00000001136a20b8 + -1;
  uVar10 = puRam00000001136a20b0;
  func_0x000100466b80();
  if (1 < iVar9) {
    puStack_1448 = (undefined8 *)*puVar29;
    if (((ulong)puStack_1448 & 1) != 0) {
      piVar15 = (int *)((long)puStack_1448 - 1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar8) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_104ac2ad8(puVar36,&puStack_1448);
    if (((ulong)puStack_1448 & 1) != 0) {
      func_0x00010084dad0();
    }
    return puStack_1448;
  }
  func_0x00010bdac6b8();
  FUN_104bd46a0();
  func_0x0001004bdf74(&puStack_1448);
  __Unwind_Resume(uVar10);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x530,2,"Error handling is not supported for this platform");
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x531,2,"assertion failed: %s");
  _abort();
  puVar36 = (undefined8 *)0x40;
  __Znwm();
  puVar28 = puVar36;
  func_0x000100460318();
  puRam00000001136a20b0 = puVar36;
  return puVar28;
}



/* Entry: 104ac2274; end: 104ac2ad7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ac2274(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *unaff_x22;
  ulong *unaff_x23;
  long lVar26;
  long *plVar27;
  double dVar28;
  double dVar29;
  ulong uStack_12b8;
  ulong *puStack_12b0;
  ulong *puStack_12a8;
  ulong *puStack_12a0;
  undefined8 *puStack_1298;
  undefined1 **ppuStack_1290;
  code *pcStack_1288;
  char *pcStack_1280;
  undefined8 *puStack_1278;
  undefined8 *puStack_1270;
  ulong *puStack_1268;
  ulong *puStack_1260;
  undefined1 uStack_1251;
  ulong *puStack_1250;
  ulong *puStack_1248;
  ulong auStack_1240 [2];
  undefined4 uStack_1230;
  ulong *puStack_1228;
  undefined4 uStack_1220;
  undefined8 uStack_1218;
  undefined4 uStack_1210;
  undefined4 uStack_120c;
  int iStack_1204;
  ulong uStack_1200;
  ulong uStack_11f8;
  undefined8 uStack_11f0;
  ulong auStack_11e8 [520];
  long lStack_1a8;
  undefined1 *puStack_160;
  code *pcStack_158;
  char *pcStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  ulong uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long *plStack_f8;
  undefined4 uStack_f0;
  ulong *puStack_e8;
  undefined4 uStack_e0;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [24];
  ulong auStack_a8 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = param_1 + 0x168;
  func_0x000100460448(lVar19);
  puStack_140 = (undefined8 *)0x0;
  if (*param_2 == 0) {
    lVar22 = *(long *)(param_1 + 0x1a8);
    iVar3 = *(int *)(param_1 + 0x3a4);
    if ((*(ulong *)(lVar22 + 0x20) < (ulong)(long)iVar3) && (*(ulong *)(lVar22 + 0x10) < 4)) {
      iVar5 = iVar3;
      if (iVar3 <= (int)*(double *)(param_1 + 0x18)) {
        iVar5 = (int)*(double *)(param_1 + 0x18);
      }
      iVar5 = iVar5 - (int)*(ulong *)(lVar22 + 0x20);
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x38) <= iVar3) {
        iVar1 = iVar3;
      }
      iVar2 = *(int *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 0x3c) <= iVar3) {
        iVar2 = iVar3;
      }
      if (iVar5 <= iVar2) {
        iVar2 = iVar5;
      }
      iVar3 = iVar1;
      if (iVar1 <= iVar5) {
        iVar3 = iVar2;
      }
      func_0x00010074169c(auStack_a8,param_1 + 0x278,(long)iVar1,(long)iVar3);
      func_0x0001005a7ec4(lVar22,auStack_a8);
      if (*(char *)(param_1 + 0x15) == '\0') {
        *(undefined1 *)(param_1 + 0x15) = 1;
        lVar22 = *(long *)(param_1 + 0x278);
        func_0x000100460448(lVar22 + 0x40);
        if (*(char *)(lVar22 + 0x80) != '\0') {
          pcStack_150 = "!shutdown_";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                              ,0x13a,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac299c;
        }
        lVar26 = *(long *)(lVar22 + 0x18);
        plVar8 = (long *)0x18;
        __Znwm();
        uVar14 = *(undefined8 *)(lVar26 + 0x30);
        lVar18 = *(long *)(lVar26 + 0x38);
        if (lVar18 != 0) {
          plVar27 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar7) {
              *plVar27 = *plVar27 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar27 = plVar8 + 1;
        *plVar27 = 1;
        *plVar8 = (long)&PTR_FUN_1107c5d60;
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        *puVar9 = &PTR_FUN_1107c59b0;
        puVar9[1] = uVar14;
        puVar9[2] = lVar18;
        puVar9[3] = param_1;
        plVar8[2] = (long)puVar9;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar7) {
            *plVar27 = *plVar27 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plStack_f8 = plVar8;
        func_0x0001004bc2ec(lVar26 + 0x30,&plStack_f8);
        if (plStack_f8 != (long *)0x0) {
          plVar27 = plStack_f8 + 1;
          do {
            lVar18 = *plVar27;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar7) {
              *plVar27 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(*plStack_f8 + 0x10))();
          }
        }
        func_0x0001004bc3ac(lVar22 + 0x90,plVar8);
        func_0x000100466b80(lVar22 + 0x40);
      }
    }
    lVar22 = *(long *)(param_1 + 0x1a8);
    uVar16 = *(ulong *)(lVar22 + 0x10);
    if (3 < uVar16) {
      uVar16 = 4;
    }
    if (uVar16 != 0) {
      puVar24 = (ulong *)(*(long *)(lVar22 + 8) + 8);
      puVar25 = auStack_a8;
      uVar23 = uVar16;
      do {
        if (puVar24[-1] == 0) {
          *puVar25 = (ulong)((long)puVar24 + 1);
          uVar21 = (ulong)(byte)*puVar24;
        }
        else {
          *puVar25 = puVar24[1];
          uVar21 = *puVar24;
        }
        puVar25[1] = uVar21;
        puVar25 = puVar25 + 2;
        puVar24 = puVar24 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (*(long *)(lVar22 + 0x20) == 0) {
      pcStack_150 = "tcp->incoming_buffer->length != 0";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                          ,0x2f0,2,"assertion failed: %s");
      _abort();
LAB_104ac299c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104ac29a0);
      (*pcVar6)();
    }
    uVar23 = 0;
    unaff_x22 = auStack_a8;
    unaff_x23 = auStack_a8 + 1;
LAB_104ac24a0:
    uVar21 = uVar16;
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    plStack_f8 = (long *)0x0;
    uStack_f0 = 0;
    uStack_e0 = (undefined4)uVar21;
    bVar7 = *(char *)(param_1 + 0x1b4) != '\0';
    puStack_d8 = (undefined1 *)0x0;
    if (bVar7) {
      puStack_d8 = auStack_c0;
    }
    uStack_d0 = 0;
    if (bVar7) {
      uStack_d0 = 0x18;
    }
    uStack_cc = 0;
    puStack_e8 = unaff_x22;
    while( true ) {
      piVar10 = (int *)(ulong)*(uint *)(param_1 + 0x10);
      _recvmsg(piVar10,&plStack_f8,0);
      if (-1 < (long)piVar10) break;
      ___error();
      if (*piVar10 != 4) {
        if ((ulong)(long)*(int *)(param_1 + 0x3a4) <= uVar23) goto LAB_104ac276c;
        ___error();
        if (*piVar10 == 0x23) {
          if (uVar23 != 0) {
            if (*(int *)(param_1 + 0x1b0) != 0) goto LAB_104ac2774;
            dVar28 = *(double *)(param_1 + 0x20);
            goto LAB_104ac25a4;
          }
          dVar29 = *(double *)(param_1 + 0x18);
          dVar28 = *(double *)(param_1 + 0x20);
          if (dVar28 <= dVar29 * 0.8) {
            dVar28 = dVar28 * 0.01 + dVar29 * 0.99;
          }
          else if (dVar28 <= dVar29 + dVar29) {
            dVar28 = dVar29 + dVar29;
          }
          *(double *)(param_1 + 0x18) = dVar28;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x1b0) = 0;
          goto LAB_104ac27bc;
        }
        puVar12 = *(undefined4 **)(param_1 + 0x1a8);
        func_0x0001005a7050();
        ___error();
        FUN_104aba954(&uStack_108,&puStack_110,*puVar12,"recvmsg");
        uVar16 = uStack_108;
        if (uStack_108 == 0) {
          pcStack_150 = "!GRPC_ERROR_IS_NONE(error)";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac299c;
        }
        uStack_108 = 0x36;
        uStack_100 = uVar16;
        FUN_104ac3860(&puStack_c8,&uStack_100,param_1);
        puVar9 = puStack_140;
        if (puStack_c8 == puStack_140) {
LAB_104ac2638:
          if (((ulong)puVar9 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          puStack_140 = puStack_c8;
          puStack_c8 = (undefined8 *)0x36;
          if (((ulong)puVar9 & 1) != 0) {
            func_0x00010084dad0();
            puVar9 = puStack_c8;
            goto LAB_104ac2638;
          }
        }
        if ((uVar16 & 1) != 0) {
          func_0x00010084dad0(uVar16);
        }
        if ((uStack_108 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104ac2818;
      }
    }
    if (piVar10 == (int *)0x0) {
      if (uVar23 < (ulong)(long)*(int *)(param_1 + 0x3a4)) {
        func_0x0001005a7050(*(undefined8 *)(param_1 + 0x1a8));
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_138 = 0;
        FUN_104ab5920(&uStack_118,2,&DAT_10f3dfdaf,0xd,&uStack_119,&uStack_138);
        FUN_104ac3860(&puStack_110,&uStack_118,param_1);
        puVar9 = puStack_140;
        if (puStack_110 == puStack_140) {
LAB_104ac2744:
          if (((ulong)puVar9 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          puStack_140 = puStack_110;
          puStack_110 = (undefined8 *)0x36;
          if (((ulong)puVar9 & 1) != 0) {
            func_0x00010084dad0();
            puVar9 = puStack_110;
            goto LAB_104ac2744;
          }
        }
        if ((uStack_118 & 1) != 0) {
          func_0x00010084dad0();
        }
        puStack_c8 = &uStack_138;
        func_0x000100482b64(&puStack_c8);
        goto LAB_104ac2818;
      }
LAB_104ac276c:
      *(undefined4 *)(param_1 + 0x1b0) = 1;
      goto LAB_104ac2774;
    }
    dVar28 = *(double *)(param_1 + 0x20) + (double)piVar10;
    *(double *)(param_1 + 0x20) = dVar28;
    uVar23 = (long)piVar10 + uVar23;
    if (*(int *)(param_1 + 0x1b0) != 0) {
      if (uVar23 == *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x20)) goto LAB_104ac2774;
      uVar16 = 0;
      if (uVar21 != 0) {
        uVar16 = 0;
        puVar24 = unaff_x23;
        do {
          piVar20 = (int *)*puVar24;
          piVar11 = (int *)((long)piVar10 - (long)piVar20);
          if (piVar10 < piVar20) {
            unaff_x22[uVar16 * 2] = puVar24[-1] + (long)piVar10;
            auStack_a8[uVar16 * 2 + 1] = (long)piVar20 - (long)piVar10;
            uVar16 = uVar16 + 1;
            piVar11 = (int *)0x0;
          }
          puVar24 = puVar24 + 2;
          uVar21 = uVar21 - 1;
          piVar10 = piVar11;
        } while (uVar21 != 0);
      }
      goto LAB_104ac24a0;
    }
LAB_104ac25a4:
    dVar29 = *(double *)(param_1 + 0x18);
    if (dVar28 <= dVar29 * 0.8) {
      dVar28 = dVar28 * 0.01 + dVar29 * 0.99;
    }
    else if (dVar28 <= dVar29 + dVar29) {
      dVar28 = dVar29 + dVar29;
    }
    *(double *)(param_1 + 0x18) = dVar28;
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_104ac2774:
    puVar9 = puStack_140;
    if (puStack_140 != (undefined8 *)0x0) {
      puStack_140 = (undefined8 *)0x0;
      puStack_c8 = (undefined8 *)0x36;
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      uVar16 = *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x20);
      lVar22 = uVar16 - uVar23;
      if (uVar23 <= uVar16 && lVar22 != 0) {
        func_0x000100726dd0(*(long *)(param_1 + 0x1a8),lVar22,param_1 + 0x40);
      }
LAB_104ac2818:
      if (((ulong)puStack_140 & 1) != 0) {
        piVar10 = (int *)((long)puStack_140 + -1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar7) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        func_0x00010084dad0();
      }
      goto LAB_104ac2838;
    }
    iVar3 = *(int *)(param_1 + 0x3a4) - (int)uVar23;
    *(int *)(param_1 + 0x3a4) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x3a4) = 1;
      unaff_x22 = (ulong *)(param_1 + 0x40);
      FUN_104ad7c94(*(undefined8 *)(param_1 + 0x1a8),uVar23,unaff_x22);
      func_0x0001006148f8(unaff_x22,*(undefined8 *)(param_1 + 0x1a8));
      goto LAB_104ac2818;
    }
    FUN_104ad7c94(*(undefined8 *)(param_1 + 0x1a8),uVar23,param_1 + 0x40);
LAB_104ac27bc:
    func_0x000100466b80(lVar19);
    puVar24 = (ulong *)(param_1 + 0x1e8);
    func_0x000104abd794(*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_104a75cac(&puStack_140,param_2);
    func_0x0001005a7050(*(undefined8 *)(param_1 + 0x1a8));
    func_0x0001005a7050(param_1 + 0x40);
LAB_104ac2838:
    puVar24 = *(ulong **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    func_0x000100466b80(lVar19);
    puStack_148 = puStack_140;
    if (((ulong)puStack_140 & 1) != 0) {
      piVar10 = (int *)((long)puStack_140 + -1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x00010082b8d4(auStack_a8,puVar24,&puStack_148);
    if (((ulong)puStack_148 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar8 = (long *)(param_1 + 0x28);
    do {
      lVar19 = *plVar8;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 + -1 == 0) {
      FUN_104ac4ad4(param_1);
    }
  }
  puVar9 = puStack_140;
  if (((ulong)puStack_140 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&puStack_110);
  func_0x0001004bdf74(&uStack_118);
  puStack_c8 = &uStack_138;
  func_0x000100482b64(&puStack_c8);
  func_0x0001004bdf74(&puStack_140);
  __Unwind_Resume();
  pcStack_158 = FUN_104ac2ad8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)*puVar24;
  puStack_160 = &stack0xfffffffffffffff0;
  if (puVar17 == (undefined8 *)0x0) {
    puVar25 = (ulong *)puVar9[0x73];
    if (puVar25 == (ulong *)0x0) {
      puVar17 = puVar9;
      puVar15 = puVar24;
      FUN_104ac3a10();
      if (((ulong)puVar17 & 1) == 0) {
LAB_104ac2d70:
        FUN_104ac3e9c();
        puVar17 = puVar9;
        goto LAB_104ac2e84;
      }
    }
    else {
      unaff_x22 = puVar9 + 0x60;
      puVar15 = puVar25 + 0x25;
      unaff_x23 = auStack_11e8;
      do {
        uStack_11f0 = 0;
        puVar13 = puVar25;
        FUN_104ac1a90(puVar25,&uStack_11f8,&uStack_1200,&uStack_11f0,auStack_11e8);
        auStack_1240[1] = 0;
        uStack_1230 = 0;
        uStack_1220 = SUB84(puVar13,0);
        uStack_120c = 0;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar7) {
            *puVar15 = *puVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puStack_1228 = unaff_x23;
        FUN_104ac403c(unaff_x22,*(undefined4 *)(puVar9 + 0x6b),puVar25);
        *(int *)(puVar9 + 0x6b) = *(int *)(puVar9 + 0x6b) + 1;
        iStack_1204 = 0;
        if (puVar9[0x5d] != 0) {
          if (*(char *)((long)puVar9 + 0x2f5) != '\0') {
            FUN_104ac3fa4();
            goto LAB_104ac2f2c;
          }
          *(undefined1 *)((long)puVar9 + 0x2f5) = 0;
          FUN_104ac3960(puVar9);
        }
        uStack_1218 = 0;
        uStack_1210 = 0;
        uVar16 = (ulong)*(uint *)(puVar9 + 2);
        FUN_104ac1a28(uVar16,auStack_1240 + 1,&iStack_1204,0x4000000);
        if ((long)uVar16 < 0) {
          FUN_104ac3ffc(unaff_x22);
          if (iStack_1204 == 0x23) {
            puVar25[0x26] = uStack_11f8;
            puVar25[0x27] = uStack_1200;
            puVar15 = (ulong *)0x23;
            goto LAB_104ac2d70;
          }
          if (iStack_1204 == 0x20) {
            FUN_104aba954(&puStack_1250,&uStack_1251,0x20,"sendmsg");
            unaff_x23 = puStack_1250;
            if (puStack_1250 == (ulong *)0x0) {
              pcStack_1280 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
LAB_104ac2f2c:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x104ac2f30);
              (*pcVar6)();
            }
            puStack_1250 = (ulong *)0x36;
            puStack_1248 = unaff_x23;
            FUN_104ac3860(auStack_1240,&puStack_1248,puVar9);
            uVar16 = *puVar24;
            if (auStack_1240[0] == uVar16) {
LAB_104ac2d3c:
              if ((uVar16 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *puVar24 = auStack_1240[0];
              auStack_1240[0] = 0x36;
              if ((uVar16 & 1) != 0) {
                func_0x00010084dad0();
                uVar16 = auStack_1240[0];
                goto LAB_104ac2d3c;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              func_0x00010084dad0(unaff_x23);
            }
            if (((ulong)puStack_1250 & 1) != 0) {
              func_0x00010084dad0();
            }
            FUN_104ac3960(puVar9);
          }
          else {
            FUN_104aba954(&puStack_1268,&uStack_1251,iStack_1204,"sendmsg");
            unaff_x23 = puStack_1268;
            if (puStack_1268 == (ulong *)0x0) {
              pcStack_1280 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_104ac2f2c;
            }
            puStack_1268 = (ulong *)0x36;
            puStack_1260 = unaff_x23;
            FUN_104ac3860(auStack_1240,&puStack_1260,puVar9);
            uVar16 = *puVar24;
            if (auStack_1240[0] == uVar16) {
LAB_104ac2dd8:
              if ((uVar16 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *puVar24 = auStack_1240[0];
              auStack_1240[0] = 0x36;
              if ((uVar16 & 1) != 0) {
                func_0x00010084dad0();
                uVar16 = auStack_1240[0];
                goto LAB_104ac2dd8;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              func_0x00010084dad0(unaff_x23);
            }
            if (((ulong)puStack_1268 & 1) != 0) {
              func_0x00010084dad0();
            }
            FUN_104ac3960(puVar9);
          }
          goto LAB_104ac2e00;
        }
        *(int *)(puVar9 + 0x5e) = *(int *)(puVar9 + 0x5e) + (int)uVar16;
        func_0x000104ac1b50(puVar25,uStack_11f0);
      } while (puVar25[0x26] != puVar25[2]);
      uVar16 = *puVar24;
      if ((uVar16 != 0) && (*puVar24 = 0, (uVar16 & 1) != 0)) {
        func_0x00010084dad0();
      }
LAB_104ac2e00:
      do {
        uVar16 = *puVar15;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar7) {
          *puVar15 = uVar16 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar16 - 1 == 0) {
        func_0x0001005a7050(puVar25);
        FUN_104ac47c0(unaff_x22,puVar25);
      }
    }
    puVar15 = (ulong *)puVar9[0x3a];
    puVar9[0x3a] = 0;
    puVar9[0x73] = 0;
    puStack_1278 = (undefined8 *)*puVar24;
    if (((ulong)puStack_1278 & 1) != 0) {
      piVar10 = (int *)((long)puStack_1278 + -1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x00010082b8d4(auStack_11e8,puVar15,&puStack_1278);
    puVar17 = puStack_1278;
    if (((ulong)puStack_1278 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar8 = puVar9 + 5;
    do {
      lVar19 = *plVar8;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 + -1 == 0) {
      FUN_104ac4ad4();
      puVar17 = puVar9;
    }
  }
  else {
    puVar25 = (ulong *)puVar9[0x3a];
    puVar9[0x3a] = 0;
    unaff_x22 = (ulong *)puVar9[0x73];
    if (unaff_x22 != (ulong *)0x0) {
      puVar15 = unaff_x22 + 0x25;
      do {
        uVar16 = *puVar15;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar7) {
          *puVar15 = uVar16 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar16 - 1 == 0) {
        func_0x0001005a7050(unaff_x22);
        FUN_104ac47c0(puVar9 + 0x60,unaff_x22);
      }
      puVar9[0x73] = 0;
      puVar17 = (undefined8 *)*puVar24;
    }
    if (((ulong)puVar17 & 1) != 0) {
      piVar10 = (int *)((long)puVar17 + -1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar15 = puVar25;
    puStack_1270 = puVar17;
    func_0x00010082b8d4(auStack_11e8,puVar25,&puStack_1270);
    puVar17 = puStack_1270;
    if (((ulong)puStack_1270 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar8 = puVar9 + 5;
    do {
      lVar19 = *plVar8;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 + -1 == 0) {
      FUN_104ac4ad4();
      puVar17 = puVar9;
    }
  }
LAB_104ac2e84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  if ((auStack_1240[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)unaff_x23 & 1) != 0) {
    func_0x00010084dad0(unaff_x23);
  }
  if (((ulong)puStack_1268 & 1) != 0) {
    func_0x00010084dad0();
  }
  __Unwind_Resume(puVar17);
  puVar9 = puVar17;
  FUN_104bd46a0(puVar17);
  pcStack_1288 = FUN_104ac301c;
  puStack_12b0 = unaff_x22;
  puStack_12a8 = puVar25;
  puStack_12a0 = puVar24;
  puStack_1298 = puVar17;
  ppuStack_1290 = &puStack_160;
  func_0x000100460448(uRam00000001136a20b0);
  iVar3 = iRam00000001136a20b8;
  iRam00000001136a20b8 = iRam00000001136a20b8 + -1;
  uVar14 = uRam00000001136a20b0;
  func_0x000100466b80();
  if (1 < iVar3) {
    uStack_12b8 = *puVar15;
    if ((uStack_12b8 & 1) != 0) {
      piVar10 = (int *)(uStack_12b8 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_104ac2ad8(puVar9,&uStack_12b8);
    if ((uStack_12b8 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  func_0x00010bdac6b8();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_12b8);
  __Unwind_Resume(uVar14);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x530,2,"Error handling is not supported for this platform");
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x531,2,"assertion failed: %s");
  _abort();
  uVar14 = 0x40;
  __Znwm();
  func_0x000100460318();
  uRam00000001136a20b0 = uVar14;
  return;
}



/* Entry: 104ac2ad8; end: 104ac301b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ac2ad8(ulong param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong *puVar13;
  long unaff_x22;
  undefined1 *unaff_x23;
  ulong uStack_1168;
  long lStack_1160;
  ulong *puStack_1158;
  ulong *puStack_1150;
  ulong uStack_1148;
  undefined1 *puStack_1140;
  code *pcStack_1138;
  char *pcStack_1130;
  ulong uStack_1128;
  ulong uStack_1120;
  undefined1 *puStack_1118;
  undefined1 *puStack_1110;
  undefined1 uStack_1101;
  undefined1 *puStack_1100;
  undefined1 *puStack_10f8;
  ulong auStack_10f0 [2];
  undefined4 uStack_10e0;
  undefined1 *puStack_10d8;
  undefined4 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  int iStack_10b4;
  ulong uStack_10b0;
  ulong uStack_10a8;
  undefined8 uStack_10a0;
  undefined1 auStack_1098 [4160];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *param_2;
  if (uVar10 == 0) {
    puVar13 = *(ulong **)(param_1 + 0x398);
    if (puVar13 == (ulong *)0x0) {
      uVar10 = param_1;
      puVar9 = param_2;
      FUN_104ac3a10();
      if ((uVar10 & 1) == 0) {
LAB_104ac2d70:
        FUN_104ac3e9c();
        uVar10 = param_1;
        goto LAB_104ac2e84;
      }
    }
    else {
      unaff_x22 = param_1 + 0x300;
      puVar9 = puVar13 + 0x25;
      unaff_x23 = auStack_1098;
      do {
        uStack_10a0 = 0;
        puVar6 = puVar13;
        FUN_104ac1a90(puVar13,&uStack_10a8,&uStack_10b0,&uStack_10a0,auStack_1098);
        auStack_10f0[1] = 0;
        uStack_10e0 = 0;
        uStack_10d0 = SUB84(puVar6,0);
        uStack_10bc = 0;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar3) {
            *puVar9 = *puVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puStack_10d8 = unaff_x23;
        FUN_104ac403c(unaff_x22,*(undefined4 *)(param_1 + 0x358),puVar13);
        *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 1;
        iStack_10b4 = 0;
        if (*(long *)(param_1 + 0x2e8) != 0) {
          if (*(char *)(param_1 + 0x2f5) != '\0') {
            FUN_104ac3fa4();
            goto LAB_104ac2f2c;
          }
          *(undefined1 *)(param_1 + 0x2f5) = 0;
          FUN_104ac3960(param_1);
        }
        uStack_10c8 = 0;
        uStack_10c0 = 0;
        uVar10 = (ulong)*(uint *)(param_1 + 0x10);
        FUN_104ac1a28(uVar10,auStack_10f0 + 1,&iStack_10b4,0x4000000);
        if ((long)uVar10 < 0) {
          FUN_104ac3ffc(unaff_x22);
          if (iStack_10b4 == 0x23) {
            puVar13[0x26] = uStack_10a8;
            puVar13[0x27] = uStack_10b0;
            puVar9 = (ulong *)0x23;
            goto LAB_104ac2d70;
          }
          if (iStack_10b4 == 0x20) {
            FUN_104aba954(&puStack_1100,&uStack_1101,0x20,"sendmsg");
            unaff_x23 = puStack_1100;
            if (puStack_1100 == (undefined1 *)0x0) {
              pcStack_1130 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
LAB_104ac2f2c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104ac2f30);
              (*pcVar5)();
            }
            puStack_1100 = (undefined1 *)0x36;
            puStack_10f8 = unaff_x23;
            FUN_104ac3860(auStack_10f0,&puStack_10f8,param_1);
            uVar10 = *param_2;
            if (auStack_10f0[0] == uVar10) {
LAB_104ac2d3c:
              if ((uVar10 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *param_2 = auStack_10f0[0];
              auStack_10f0[0] = 0x36;
              if ((uVar10 & 1) != 0) {
                func_0x00010084dad0();
                uVar10 = auStack_10f0[0];
                goto LAB_104ac2d3c;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              func_0x00010084dad0(unaff_x23);
            }
            if (((ulong)puStack_1100 & 1) != 0) {
              func_0x00010084dad0();
            }
            FUN_104ac3960(param_1);
          }
          else {
            FUN_104aba954(&puStack_1118,&uStack_1101,iStack_10b4,"sendmsg");
            unaff_x23 = puStack_1118;
            if (puStack_1118 == (undefined1 *)0x0) {
              pcStack_1130 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_104ac2f2c;
            }
            puStack_1118 = (undefined1 *)0x36;
            puStack_1110 = unaff_x23;
            FUN_104ac3860(auStack_10f0,&puStack_1110,param_1);
            uVar10 = *param_2;
            if (auStack_10f0[0] == uVar10) {
LAB_104ac2dd8:
              if ((uVar10 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            else {
              *param_2 = auStack_10f0[0];
              auStack_10f0[0] = 0x36;
              if ((uVar10 & 1) != 0) {
                func_0x00010084dad0();
                uVar10 = auStack_10f0[0];
                goto LAB_104ac2dd8;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              func_0x00010084dad0(unaff_x23);
            }
            if (((ulong)puStack_1118 & 1) != 0) {
              func_0x00010084dad0();
            }
            FUN_104ac3960(param_1);
          }
          goto LAB_104ac2e00;
        }
        *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + (int)uVar10;
        func_0x000104ac1b50(puVar13,uStack_10a0);
      } while (puVar13[0x26] != puVar13[2]);
      uVar10 = *param_2;
      if ((uVar10 != 0) && (*param_2 = 0, (uVar10 & 1) != 0)) {
        func_0x00010084dad0();
      }
LAB_104ac2e00:
      do {
        uVar10 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        func_0x0001005a7050(puVar13);
        FUN_104ac47c0(unaff_x22,puVar13);
      }
    }
    puVar9 = *(ulong **)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    uStack_1128 = *param_2;
    if ((uStack_1128 & 1) != 0) {
      piVar11 = (int *)(uStack_1128 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010082b8d4(auStack_1098,puVar9,&uStack_1128);
    uVar10 = uStack_1128;
    if ((uStack_1128 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar1 = (long *)(param_1 + 0x28);
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_104ac4ad4();
      uVar10 = param_1;
    }
  }
  else {
    puVar13 = *(ulong **)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    unaff_x22 = *(long *)(param_1 + 0x398);
    if (unaff_x22 != 0) {
      plVar1 = (long *)(unaff_x22 + 0x128);
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        func_0x0001005a7050(unaff_x22);
        FUN_104ac47c0(param_1 + 0x300,unaff_x22);
      }
      *(undefined8 *)(param_1 + 0x398) = 0;
      uVar10 = *param_2;
    }
    if ((uVar10 & 1) != 0) {
      piVar11 = (int *)(uVar10 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar9 = puVar13;
    uStack_1120 = uVar10;
    func_0x00010082b8d4(auStack_1098,puVar13,&uStack_1120);
    uVar10 = uStack_1120;
    if ((uStack_1120 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar1 = (long *)(param_1 + 0x28);
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_104ac4ad4();
      uVar10 = param_1;
    }
  }
LAB_104ac2e84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((auStack_10f0[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)unaff_x23 & 1) != 0) {
    func_0x00010084dad0(unaff_x23);
  }
  if (((ulong)puStack_1118 & 1) != 0) {
    func_0x00010084dad0();
  }
  __Unwind_Resume(uVar10);
  uVar7 = uVar10;
  FUN_104bd46a0(uVar10);
  pcStack_1138 = FUN_104ac301c;
  lStack_1160 = unaff_x22;
  puStack_1158 = puVar13;
  puStack_1150 = param_2;
  uStack_1148 = uVar10;
  puStack_1140 = &stack0xfffffffffffffff0;
  func_0x000100460448(uRam00000001136a20b0);
  iVar4 = iRam00000001136a20b8;
  iRam00000001136a20b8 = iRam00000001136a20b8 + -1;
  uVar8 = uRam00000001136a20b0;
  func_0x000100466b80();
  if (iVar4 < 2) {
    func_0x00010bdac6b8();
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_1168);
    __Unwind_Resume(uVar8);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                        ,0x530,2,"Error handling is not supported for this platform");
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                        ,0x531,2,"assertion failed: %s");
    _abort();
    uVar8 = 0x40;
    __Znwm();
    func_0x000100460318();
    uRam00000001136a20b0 = uVar8;
    return;
  }
  uStack_1168 = *puVar9;
  if ((uStack_1168 & 1) != 0) {
    piVar11 = (int *)(uStack_1168 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104ac2ad8(uVar7,&uStack_1168);
  if ((uStack_1168 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ac301c; end: 104ac30cb;  */

void FUN_104ac301c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_38;
  
  func_0x000100460448(uRam00000001136a20b0);
  iVar3 = iRam00000001136a20b8;
  iRam00000001136a20b8 = iRam00000001136a20b8 + -1;
  uVar4 = uRam00000001136a20b0;
  func_0x000100466b80();
  if (1 < iVar3) {
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar5 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104ac2ad8(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  func_0x00010bdac6b8();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_38);
  __Unwind_Resume(uVar4);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x530,2,"Error handling is not supported for this platform");
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x531,2,"assertion failed: %s");
  _abort();
  uVar4 = 0x40;
  __Znwm();
  func_0x000100460318();
  uRam00000001136a20b0 = uVar4;
  return;
}



/* Entry: 104ac30cc; end: 104ac3123;  */

void FUN_104ac30cc(void)

{
  undefined8 uVar1;
  
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x530,2,"Error handling is not supported for this platform");
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x531,2,"assertion failed: %s");
  _abort();
  uVar1 = 0x40;
  __Znwm();
  func_0x000100460318();
  uRam00000001136a20b0 = uVar1;
  return;
}



/* Entry: 104ac3124; end: 104ac3167;  */

void FUN_104ac3124(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  func_0x000100460318();
  uRam00000001136a20b0 = uVar1;
  return;
}



/* Entry: 104ac3168; end: 104ac31a3;  */

void FUN_104ac3168(void)

{
  long lVar1;
  
  lVar1 = lRam00000001136a20b0;
  if (lRam00000001136a20b0 != 0) {
    func_0x0001005a5f48(lRam00000001136a20b0);
    __ZdlPv(lVar1);
  }
  lRam00000001136a20b0 = 0;
  return;
}



/* Entry: 104ac31a4; end: 104ac32e7;  */

long * FUN_104ac31a4(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_2;
  *(int *)(param_1 + 2) = iVar3;
  *(int *)((long)param_1 + 0x14) = iVar3;
  func_0x000100460318(param_1 + 3);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = param_3;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  lVar2 = ((-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar3
          ) * 0x40;
  func_0x000100460200();
  *param_1 = lVar2;
  lVar2 = (long)iVar3 << 3;
  func_0x000100460200();
  param_1[1] = lVar2;
  if ((*param_1 == 0) || (lVar2 == 0)) {
    func_0x000100460314(*param_1);
    func_0x000100460314(param_1[1]);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                        ,0xcc,1,"Disabling TCP TX zerocopy due to memory pressure.\n");
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else if (0 < (int)param_1[2]) {
    lVar4 = 0;
    lVar2 = 0;
    do {
      lVar1 = *param_1 + lVar4;
      *(undefined8 *)(lVar1 + 0x128) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      func_0x0001004b800c();
      *(long *)(param_1[1] + lVar2 * 8) = *param_1 + lVar4;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x140;
    } while (lVar2 < (int)param_1[2]);
  }
  return param_1;
}



/* Entry: 104ac32e8; end: 104ac332f;  */

long * FUN_104ac32e8(long *param_1)

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



/* Entry: 104ac3330; end: 104ac343f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ac3330(ulong param_1,long param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong auStack_d0 [4];
  undefined1 uStack_a9;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_91;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_50;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 0x1c8) == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = param_3;
    func_0x000100460448(param_1 + 0x168);
    *(long *)(param_1 + 0x1a8) = param_2;
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      param_5 = 1;
    }
    *(undefined4 *)(param_1 + 0x3a4) = param_5;
    func_0x0001005a7050(param_2);
    func_0x0001006148f8(param_2,param_1 + 0x40);
    func_0x000100466b80(param_1 + 0x168);
    plVar1 = (long *)(param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0x14) == '\0') {
      if (((param_4 & 1) != 0) || (*(int *)(param_1 + 0x1b0) != 0)) {
        uStack_50 = 0;
        func_0x00010082b8d4(&uStack_41,param_1 + 0x1e8,&uStack_50);
        if ((uStack_50 & 1) != 0) {
          func_0x00010084dad0();
        }
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lRam00000001136a1fd0 + 0x30))(*(undefined8 *)(param_1 + 8),param_1 + 0x1e8);
    return;
  }
  func_0x00010bdac6ec();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_50);
  __Unwind_Resume();
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar7 = 0x67a;
LAB_104ac35e0:
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                        ,uVar7,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac3604);
    (*pcVar4)();
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    FUN_104abd784();
    if ((int)uVar6 == 0) {
      uStack_a0 = 0;
    }
    else {
      auStack_d0[1] = 0;
      auStack_d0[2] = 0;
      auStack_d0[3] = 0;
      FUN_104ab5920(&uStack_a8,2,&DAT_10f54ded6,3,&uStack_a9,auStack_d0 + 1);
      FUN_104ac3860(&uStack_a0,&uStack_a8,param_1);
    }
    func_0x00010082b8d4(&uStack_91,param_3,&uStack_a0);
    if ((uVar6 & 1) == 0) {
      if ((uStack_a0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if ((uStack_a0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_a8 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_88 = auStack_d0 + 1;
      func_0x000100482b64(&puStack_88);
    }
    FUN_104ac3960(param_1);
  }
  else {
    *(long *)(param_1 + 0x1b8) = param_2;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(ulong *)(param_1 + 0x2e8) = param_4;
    if ((param_4 != 0) && (uVar6 = param_1, FUN_104abd62c(), (uVar6 & 1) == 0)) {
      uVar7 = 0x690;
      goto LAB_104ac35e0;
    }
    uVar5 = param_1;
    FUN_104ac3a10(param_1,&uStack_90);
    uVar6 = uStack_90;
    if ((uVar5 & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x28);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0x1d0) = param_3;
      *(undefined8 *)(param_1 + 0x398) = 0;
      FUN_104ac3e9c(param_1);
      uVar6 = uStack_90;
    }
    else {
      auStack_d0[0] = uStack_90;
      if ((uStack_90 & 1) != 0) {
        piVar8 = (int *)(uStack_90 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010082b8d4(&puStack_88,param_3,auStack_d0);
      if ((auStack_d0[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0(uVar6);
    }
  }
  return;
}



/* Entry: 104ac3440; end: 104ac367f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ac3440(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar7 = 0x67a;
LAB_104ac35e0:
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                        ,uVar7,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac3604);
    (*pcVar4)();
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    FUN_104abd784();
    if ((int)uVar6 == 0) {
      uStack_50 = 0;
    }
    else {
      auStack_80[1] = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      FUN_104ab5920(&uStack_58,2,&DAT_10f54ded6,3,&uStack_59,auStack_80 + 1);
      FUN_104ac3860(&uStack_50,&uStack_58,param_1);
    }
    func_0x00010082b8d4(&uStack_41,param_3,&uStack_50);
    if ((uVar6 & 1) == 0) {
      if ((uStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if ((uStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_58 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_38 = auStack_80 + 1;
      func_0x000100482b64(&puStack_38);
    }
    FUN_104ac3960(param_1);
  }
  else {
    *(long *)(param_1 + 0x1b8) = param_2;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(long *)(param_1 + 0x2e8) = param_4;
    if ((param_4 != 0) && (uVar6 = param_1, FUN_104abd62c(), (uVar6 & 1) == 0)) {
      uVar7 = 0x690;
      goto LAB_104ac35e0;
    }
    uVar5 = param_1;
    FUN_104ac3a10(param_1,&uStack_40);
    uVar6 = uStack_40;
    if ((uVar5 & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x28);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0x1d0) = param_3;
      *(undefined8 *)(param_1 + 0x398) = 0;
      FUN_104ac3e9c(param_1);
      uVar6 = uStack_40;
    }
    else {
      auStack_80[0] = uStack_40;
      if ((uStack_40 & 1) != 0) {
        piVar8 = (int *)(uStack_40 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010082b8d4(&puStack_38,param_3,auStack_80);
      if ((auStack_80[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0(uVar6);
    }
  }
  return;
}



/* Entry: 104ac3680; end: 104ac36af;  */

void FUN_104ac3680(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104abd7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104ac36b0; end: 104ac371f;  */

void FUN_104ac36b0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *param_2;
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
  FUN_104abd70c(uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ac3720; end: 104ac3783;  */

void FUN_104ac3720(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  iVar4 = (int)param_1 + 0x40;
  func_0x0001005a7050();
  FUN_104abd62c();
  if (iVar4 != 0) {
    *(undefined8 *)(param_1 + 0x2f8) = 1;
    func_0x000104abd7c4(*(undefined8 *)(param_1 + 8));
  }
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
  func_0x000104abd6fc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1d8),
                      *(undefined8 *)(param_1 + 0x1e0),"tcp_unref_orphan");
  func_0x00010061ce28(param_1 + 0x40);
  lVar5 = param_1 + 0x2a8;
  func_0x000100460448(lVar5);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_104ab5920(&uStack_40,2,"endpoint destroyed",0x12,&uStack_41,&uStack_60);
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_38 = (undefined1 *)&uStack_60;
  func_0x000100482b64(&puStack_38);
  func_0x000100466b80(lVar5);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  func_0x0001005a5f48(lVar5);
  FUN_104ac4bec(param_1 + 0x300);
  func_0x000100741660(param_1 + 0x288);
  func_0x000100487bf4(param_1 + 0x278);
  if (*(char *)(param_1 + 0x277) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  if (*(char *)(param_1 + 0x25f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x248));
  }
  func_0x0001005a5f48(param_1 + 0x168);
  __ZdlPv(param_1);
  return;
}



/* Entry: 104ac3784; end: 104ac37d3;  */

undefined1  [16] FUN_104ac3784(long param_1)

{
  undefined1 auVar1 [16];
  
  if (-1 < *(char *)(param_1 + 0x25f)) {
    auVar1[8] = *(char *)(param_1 + 0x25f);
    auVar1._0_8_ = param_1 + 0x248;
    auVar1._9_7_ = 0;
    return auVar1;
  }
  return *(undefined1 (*) [16])(param_1 + 0x248);
}



/* Entry: 104ac37d4; end: 104ac385f;  */

void FUN_104ac37d4(ulong *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  int *piVar7;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  char cStack_37;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  FUN_104abd62c();
  if ((int)puVar4 != 0) {
    uStack_3c = 0x10;
    iVar3 = (int)param_1[2];
    param_2 = &uStack_38;
    _getsockname(iVar3,param_2,&uStack_3c);
    if (iVar3 < 0) {
      puVar4 = (ulong *)0x0;
    }
    else {
      puVar4 = (ulong *)(ulong)(cStack_37 == '\x02' || cStack_37 == '\x1e');
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = *puVar4;
  if ((uStack_78 & 1) != 0) {
    piVar7 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104abaa50(&uStack_70,&uStack_78,10,(long)*(int *)(param_2 + 0x10));
  FUN_104abaa50(&uStack_68,&uStack_70,3,0xe);
  if ((char)param_2[0x25f] < '\0') {
    puVar5 = *(undefined1 **)(param_2 + 0x248);
    uVar6 = *(ulong *)(param_2 + 0x250);
  }
  else {
    puVar5 = param_2 + 0x248;
    uVar6 = (ulong)(byte)param_2[0x25f];
  }
  func_0x00010084caf8(extraout_x8,&uStack_68,4,puVar5,uVar6);
  if ((uStack_68 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_70 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_78 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ac3860; end: 104ac395f;  */

void FUN_104ac3860(undefined8 param_1,ulong *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar5 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104abaa50(&uStack_30,&uStack_38,10,(long)*(int *)(param_3 + 0x10));
  FUN_104abaa50(&uStack_28,&uStack_30,3,0xe);
  if ((char)*(byte *)(param_3 + 0x25f) < '\0') {
    lVar3 = *(long *)(param_3 + 0x248);
    uVar4 = *(ulong *)(param_3 + 0x250);
  }
  else {
    lVar3 = param_3 + 0x248;
    uVar4 = (ulong)*(byte *)(param_3 + 0x25f);
  }
  func_0x00010084caf8(param_1,&uStack_28,4,lVar3,uVar4);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ac3960; end: 104ac3a0f;  */

void FUN_104ac3960(long param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_1 + 0x2e8) != 0) {
    func_0x000100460448(param_1 + 0x2a8);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    FUN_104ab5920(&uStack_40,2,"TracedBuffer list shutdown",0x1a,&uStack_41,&uStack_60);
    if ((uStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_38 = (undefined1 *)&uStack_60;
    func_0x000100482b64(&puStack_38);
    func_0x000100466b80(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  return;
}



/* Entry: 104ac3a10; end: 104ac3e9b;  */

void FUN_104ac3a10(long param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uStack_1158;
  long *plStack_1150;
  ulong uStack_1148;
  ulong *puStack_1140;
  ulong uStack_1138;
  undefined1 *puStack_1130;
  code *pcStack_1128;
  char *pcStack_1120;
  ulong uStack_1110;
  ulong uStack_1108;
  undefined1 uStack_10f9;
  ulong uStack_10f8;
  ulong uStack_10f0;
  ulong uStack_10e8;
  int iStack_10dc;
  undefined8 uStack_10d8;
  undefined4 uStack_10d0;
  long *plStack_10c8;
  int iStack_10c0;
  undefined8 uStack_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  long alStack_10a8 [520];
  long lStack_68;
  
  uVar13 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x1b8);
  lVar14 = *(long *)(param_1 + 0x1c0);
  uVar7 = *(ulong *)(lVar6 + 0x10);
  do {
    if (uVar13 - uVar7 == 0) {
LAB_104ac3df0:
      func_0x00010bdac720();
LAB_104ac3dfc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104ac3e00);
      (*pcVar3)();
    }
    lVar15 = 0;
    puVar8 = (ulong *)(*(long *)(lVar6 + 8) + uVar13 * 0x20 + 8);
    plVar9 = alStack_10a8;
    lVar6 = 0;
    lVar10 = lVar14;
    lVar2 = uVar13 << 5;
    uVar12 = uVar13;
    do {
      uVar5 = uVar12;
      lVar11 = lVar2;
      if (puVar8[-1] == 0) {
        *plVar9 = (long)((long)puVar8 + lVar10 + 1);
        uVar12 = (ulong)(byte)*puVar8;
      }
      else {
        *plVar9 = puVar8[1] + lVar10;
        uVar12 = *puVar8;
      }
      plVar9[1] = uVar12 - lVar10;
      lVar15 = (uVar12 - lVar10) + lVar15;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      lVar1 = lVar6 + 1;
      if ((uVar13 - uVar7) + 1 + lVar6 == 0) break;
      lVar10 = 0;
      plVar9 = plVar9 + 2;
      puVar8 = puVar8 + 4;
      bVar4 = lVar6 != 0x103;
      lVar6 = lVar1;
      lVar2 = lVar11 + 0x20;
      uVar12 = uVar5 + 1;
    } while (bVar4);
    iVar16 = (int)lVar1;
    if (iVar16 == 0) goto LAB_104ac3df0;
    uStack_10d8 = 0;
    uStack_10d0 = 0;
    uStack_10ac = 0;
    iStack_10dc = 0;
    plStack_10c8 = alStack_10a8;
    iStack_10c0 = iVar16;
    if (*(long *)(param_1 + 0x2e8) != 0) {
      if (*(char *)(param_1 + 0x2f5) != '\0') {
        FUN_104ac3fa4();
        goto LAB_104ac3dfc;
      }
      *(undefined1 *)(param_1 + 0x2f5) = 0;
      FUN_104ac3960(param_1);
    }
    uStack_10b8 = 0;
    uStack_10b0 = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    FUN_104ac1a28(uVar7,&uStack_10d8,&iStack_10dc,0);
    if ((long)uVar7 < 0) {
      if (iStack_10dc == 0x20) {
        FUN_104aba954(&uStack_10f8,&uStack_10f9,0x20,"sendmsg");
        uVar13 = uStack_10f8;
        if (uStack_10f8 == 0) {
          pcStack_1120 = "!GRPC_ERROR_IS_NONE(error)";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac3dfc;
        }
        uStack_10f8 = 0x36;
        uStack_10f0 = uVar13;
        FUN_104ac3860(&uStack_10e8,&uStack_10f0,param_1);
        uVar7 = *param_2;
        if (uStack_10e8 == uVar7) {
LAB_104ac3c88:
          if ((uVar7 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_2 = uStack_10e8;
          uStack_10e8 = 0x36;
          if ((uVar7 & 1) != 0) {
            func_0x00010084dad0();
            uVar7 = uStack_10e8;
            goto LAB_104ac3c88;
          }
        }
        if ((uVar13 & 1) != 0) {
          func_0x00010084dad0(uVar13);
        }
        if ((uStack_10f8 & 1) != 0) {
          func_0x00010084dad0();
        }
        func_0x0001005a7050(*(undefined8 *)(param_1 + 0x1b8));
        FUN_104ac3960(param_1);
      }
      else {
        if (iStack_10dc == 0x23) {
          *(long *)(param_1 + 0x1c0) = lVar14;
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            func_0x000100727454(*(undefined8 *)(param_1 + 0x1b8));
          }
          uVar7 = 0;
          uVar13 = 0;
          goto LAB_104ac3d4c;
        }
        FUN_104aba954(&uStack_1110,&uStack_10f9,iStack_10dc,"sendmsg");
        uVar13 = uStack_1110;
        if (uStack_1110 == 0) {
          pcStack_1120 = "!GRPC_ERROR_IS_NONE(error)";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac3dfc;
        }
        uStack_1110 = 0x36;
        uStack_1108 = uVar13;
        FUN_104ac3860(&uStack_10e8,&uStack_1108,param_1);
        uVar7 = *param_2;
        if (uStack_10e8 == uVar7) {
LAB_104ac3d18:
          if ((uVar7 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_2 = uStack_10e8;
          uStack_10e8 = 0x36;
          if ((uVar7 & 1) != 0) {
            func_0x00010084dad0();
            uVar7 = uStack_10e8;
            goto LAB_104ac3d18;
          }
        }
        if ((uVar13 & 1) != 0) {
          func_0x00010084dad0(uVar13);
        }
        if ((uStack_1110 & 1) != 0) {
          func_0x00010084dad0();
        }
        func_0x0001005a7050(*(undefined8 *)(param_1 + 0x1b8));
        FUN_104ac3960(param_1);
      }
      goto LAB_104ac3d48;
    }
    if (*(long *)(param_1 + 0x1c0) != 0) {
      func_0x00010bdac754();
      goto LAB_104ac3dfc;
    }
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + (int)uVar7;
    lVar6 = *(long *)(param_1 + 0x1b8);
    uVar7 = lVar15 - uVar7;
    if (uVar7 == 0) {
      lVar14 = 0;
      uVar13 = uVar13 + lVar1;
    }
    else {
      plVar9 = (long *)(*(long *)(lVar6 + 8) + lVar11);
      do {
        uVar13 = uVar5;
        if (*plVar9 == 0) {
          uVar12 = (ulong)*(byte *)(plVar9 + 1);
        }
        else {
          uVar12 = plVar9[1];
        }
        lVar14 = uVar12 - uVar7;
        if (uVar7 <= uVar12 && lVar14 != 0) {
          *(long *)(param_1 + 0x1c0) = lVar14;
          goto LAB_104ac3bc4;
        }
        plVar9 = plVar9 + -4;
        uVar7 = uVar7 - uVar12;
        uVar5 = uVar13 - 1;
      } while (uVar7 != 0);
      lVar14 = 0;
    }
LAB_104ac3bc4:
    uVar7 = *(ulong *)(lVar6 + 0x10);
    if (uVar13 == uVar7) {
      uVar7 = *param_2;
      if (uVar7 != 0) {
        *param_2 = 0;
        uStack_10e8 = 0x36;
        if ((uVar7 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001005a7050(*(undefined8 *)(param_1 + 0x1b8));
LAB_104ac3d48:
      uVar7 = 1;
LAB_104ac3d4c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        ___stack_chk_fail();
        func_0x0001004bdf74(&uStack_10e8);
        func_0x0001004bdf74(&uStack_1108);
        func_0x0001004bdf74(&uStack_1110);
        uVar12 = uVar7;
        __Unwind_Resume();
        pcStack_1128 = FUN_104ac3e9c;
        uVar5 = uVar12;
        plStack_1150 = alStack_10a8;
        uStack_1148 = uVar13;
        puStack_1140 = param_2;
        uStack_1138 = uVar7;
        puStack_1130 = &stack0xfffffffffffffff0;
        FUN_104abd658();
        if ((uVar5 & 1) == 0) {
          lVar14 = lRam00000001136a20b0;
          func_0x000100460448();
          lVar6 = lRam00000001136a20c0;
          if (iRam00000001136a20b8 == 0) {
            iRam00000001136a20b8 = 2;
            func_0x000100480e58();
            lVar6 = lVar14 + 0x28;
            func_0x000100460860();
            lRam00000001136a20c0 = lVar6;
            func_0x000100480e70(lVar6 + 0x28,lVar6);
            func_0x000100466b80(lRam00000001136a20b0);
            *(code **)(lVar6 + 0x10) = FUN_104ac4814;
            *(long *)(lVar6 + 0x18) = lVar6;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            uStack_1158 = 0;
            func_0x0001004c1168(lVar6 + 8,&uStack_1158,0,1);
            if ((uStack_1158 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          else {
            iRam00000001136a20b8 = iRam00000001136a20b8 + 1;
            func_0x000100466b80(lRam00000001136a20b0);
          }
          func_0x000104abd7d4(lVar6 + 0x28,*(undefined8 *)(uVar12 + 8));
        }
        func_0x000104abd7a4(*(undefined8 *)(uVar12 + 8),uVar12 + 0x208);
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 104ac3e9c; end: 104ac3fa3;  */

void FUN_104ac3e9c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uStack_38;
  
  uVar1 = param_1;
  FUN_104abd658();
  if ((uVar1 & 1) == 0) {
    lVar2 = lRam00000001136a20b0;
    func_0x000100460448();
    lVar3 = lRam00000001136a20c0;
    if (iRam00000001136a20b8 == 0) {
      iRam00000001136a20b8 = 2;
      func_0x000100480e58();
      lVar3 = lVar2 + 0x28;
      func_0x000100460860();
      lRam00000001136a20c0 = lVar3;
      func_0x000100480e70(lVar3 + 0x28,lVar3);
      func_0x000100466b80(lRam00000001136a20b0);
      *(code **)(lVar3 + 0x10) = FUN_104ac4814;
      *(long *)(lVar3 + 0x18) = lVar3;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      uStack_38 = 0;
      func_0x0001004c1168(lVar3 + 8,&uStack_38,0,1);
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      iRam00000001136a20b8 = iRam00000001136a20b8 + 1;
      func_0x000100466b80(lRam00000001136a20b0);
    }
    func_0x000104abd7d4(lVar3 + 0x28,*(undefined8 *)(param_1 + 8));
  }
  func_0x000104abd7a4(*(undefined8 *)(param_1 + 8),param_1 + 0x208);
  return;
}



/* Entry: 104ac3fa4; end: 104ac3ffb;  */

void FUN_104ac3fa4(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc";
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x529,2,"Write with timestamps not supported for this platform");
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x52a,2,"assertion failed: %s");
  _abort();
  *(int *)(pcVar4 + 0x58) = *(int *)(pcVar4 + 0x58) + -1;
  FUN_104ac4510();
  plVar3 = (long *)(pcVar4 + 0x128);
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
    if (*(long *)(pcVar4 + 0x10) != 0) {
      uVar6 = 0;
      do {
        plVar3 = *(long **)(*(long *)(pcVar4 + 8) + uVar6 * 0x20);
        if ((long *)0x1 < plVar3) {
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
            (*(code *)plVar3[1])();
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(pcVar4 + 0x10));
    }
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    *(undefined8 *)(pcVar4 + 8) = *(undefined8 *)pcVar4;
    pcVar4[0x10] = '\0';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    return;
  }
  return;
}



/* Entry: 104ac3ffc; end: 104ac403b;  */

void FUN_104ac3ffc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + -1;
  FUN_104ac4510();
  plVar3 = param_1 + 0x25;
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
    if (param_1[2] != 0) {
      uVar5 = 0;
      do {
        plVar3 = *(long **)(param_1[1] + uVar5 * 0x20);
        if ((long *)0x1 < plVar3) {
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
            (*(code *)plVar3[1])();
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulong)param_1[2]);
    }
    param_1[4] = 0;
    param_1[1] = *param_1;
    param_1[2] = 0;
    return;
  }
  return;
}



/* Entry: 104ac403c; end: 104ac40ab;  */

void FUN_104ac403c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_30 = param_3;
  uStack_24 = param_2;
  func_0x000100460448(param_1 + 0x18);
  FUN_104ac40ac(param_1 + 0x68,&uStack_24,&uStack_24,&uStack_30);
  func_0x000100466b80(param_1 + 0x18);
  return;
}



/* Entry: 104ac40ac; end: 104ac42db;  */

undefined1  [16] FUN_104ac40ac(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined2 uVar12;
  undefined1 auVar13 [16];
  
  uVar1 = *param_2;
  uVar11 = (ulong)uVar1;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar3 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar10 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar10))))
                                               ))));
    uVar12 = NEON_uaddlv(uVar3,1);
    uVar4 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar12) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x25 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar8 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar6, plVar9 != (long *)0x0)) {
      do {
        uVar8 = plVar9[1];
        if (uVar8 == uVar11) {
          if (*(uint *)(plVar9 + 2) == uVar1) {
            uVar3 = 0;
            goto LAB_104ac42a4;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x25) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = *param_3;
  plVar9[3] = *param_4;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_104ac42dc(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_104ac4294;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_104ac4294:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_104ac42a4:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar9;
  return auVar13;
}



/* Entry: 104ac42dc; end: 104ac43b7;  */

long * FUN_104ac42dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined4 auStack_54 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) ||
         (uVar10 = CONCAT17(POPCOUNT((char)((ulong)plVar8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)((ulong)plVar8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)((ulong)plVar8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)((ulong)plVar8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)((ulong)plVar8 >>
                                                                               0x18)),
                                                                CONCAT12(POPCOUNT((char)((ulong)
                                                  plVar8 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)plVar8 >> 8)),
                                                           POPCOUNT((char)plVar8)))))))),
         uVar9 = NEON_uaddlv(uVar10,1),
         1 < (CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff))) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_104ac4390;
    }
    return plVar2;
  }
LAB_104ac4390:
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)*param_1;
    *param_1 = 0;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      plVar2 = param_2;
      FUN_104a7757c();
      plStack_40 = param_2;
      plStack_38 = param_1;
      func_0x000100460448(plVar8 + 3);
      auStack_54[0] = SUB84(plVar2,0);
      plVar2 = plVar8 + 0xd;
      plVar5 = plVar2;
      FUN_104ac4598(plVar2,auStack_54);
      plVar5 = (long *)plVar5[3];
      FUN_104ac464c(plVar2);
      func_0x000100466b80(plVar8 + 3);
      return plVar5;
    }
    lVar3 = (long)param_2 << 3;
    __Znwm();
    plVar2 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    plVar8 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar8 * 8) = 0;
      plVar8 = (long *)((long)plVar8 + 1);
    } while (param_2 != plVar8);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[1];
      uVar10 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18))
                                                            ,CONCAT12(POPCOUNT((char)((ulong)param_2
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)param_2 >> 8)),POPCOUNT((char)param_2)))))))
                       );
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar4 < 2) {
        plVar5 = (long *)((ulong)plVar5 & (long)param_2 - 1U);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar8;
      if (plVar6 != (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[1];
          if (uVar4 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)param_2 - 1U);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar5) {
            if (*(long *)(*param_1 + (long)plVar7 * 8) == 0) {
              *(long **)(*param_1 + (long)plVar7 * 8) = plVar8;
              plVar5 = plVar7;
            }
            else {
              *plVar8 = *plVar6;
              *plVar6 = **(long **)(*param_1 + (long)plVar7 * 8);
              **(undefined8 **)(*param_1 + (long)plVar7 * 8) = plVar6;
              plVar6 = plVar8;
            }
          }
          plVar8 = plVar6;
          plVar6 = (long *)*plVar8;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return plVar2;
}



/* Entry: 104ac43b8; end: 104ac450f;  */

long FUN_104ac43b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined4 uStack_54;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      FUN_104a7757c();
      func_0x000100460448(param_1 + 3);
      uStack_54 = (undefined4)param_2;
      plVar5 = param_1 + 0xd;
      plVar7 = plVar5;
      FUN_104ac4598(plVar5,&uStack_54);
      lVar3 = plVar7[3];
      FUN_104ac464c(plVar5);
      func_0x000100466b80(param_1 + 3);
      return lVar3;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_2 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return lVar3;
}



/* Entry: 104ac4510; end: 104ac4597;  */

undefined8 FUN_104ac4510(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  
  func_0x000100460448(param_1 + 0x18);
  lVar1 = param_1 + 0x68;
  lVar2 = lVar1;
  uStack_34 = param_2;
  FUN_104ac4598(lVar1,&uStack_34);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  FUN_104ac464c(lVar1);
  func_0x000100466b80(param_1 + 0x18);
  return uVar3;
}



/* Entry: 104ac4598; end: 104ac464b;  */

long * FUN_104ac4598(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar1 = *param_2;
    uVar4 = (ulong)uVar1;
    uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & uVar1);
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) {
            if (*(uint *)(plVar6 + 2) == uVar1) {
              return plVar6;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) < 2) {
              uVar7 = uVar7 & uVar3 - 1;
            }
            else if (uVar3 <= uVar7) {
              uVar2 = 0;
              if (uVar3 != 0) {
                uVar2 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar2 * uVar3;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 104ac464c; end: 104ac468b;  */

undefined8 FUN_104ac464c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [3];
  
  uVar2 = *param_2;
  FUN_104ac468c(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return uVar2;
}



/* Entry: 104ac468c; end: 104ac47bf;  */

void FUN_104ac468c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar4 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar4))))))
                            ));
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar6 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_104ac4758;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_104ac4758;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_104ac4758:
  lVar7 = *param_3;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar5;
      lVar7 = *param_3;
    }
  }
  *plVar5 = lVar7;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104ac47c0; end: 104ac4813;  */

void FUN_104ac47c0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x000100460448(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined8 *)(*(long *)(param_1 + 8) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  func_0x000100466b80(param_1 + 0x18);
  return;
}



/* Entry: 104ac4814; end: 104ac49bb;  */

void FUN_104ac4814(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar4 = (long *)*param_1;
  func_0x000100460448();
  func_0x000100460dc4();
  lVar5 = *plVar4;
  func_0x0001004671a4();
  lVar6 = 0x7fffffffffffffff;
  if (lVar5 < 0x7fffffffffffd8f0) {
    lVar6 = lVar5 + 10000;
  }
  lVar1 = lVar5;
  if (lVar5 != 0x7fffffffffffffff) {
    lVar1 = lVar6;
  }
  lVar6 = -0x8000000000000000;
  if (lVar5 != -0x8000000000000000) {
    lVar6 = lVar1;
  }
  func_0x00010049215c(&uStack_40,param_1 + 5,0,lVar6);
  if (uStack_40 != 0) {
    uStack_38 = uStack_40;
    if ((uStack_40 & 1) != 0) {
      piVar7 = (int *)(uStack_40 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104abab1c("backup_poller:pollset_work",&uStack_38,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                  ,0x1e6);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x000100466b80(*param_1);
  lVar6 = lRam00000001136a20b0;
  func_0x000100460448();
  if (iRam00000001136a20b8 == 1) {
    if (puRam00000001136a20c0 != param_1) {
      func_0x00010bdac788();
      FUN_104bd46a0();
      FUN_104bd46a0();
      func_0x0001004bdf74(&uStack_48);
      __Unwind_Resume(lVar6);
      func_0x000104abe9b0(lVar6 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(lVar6);
      return;
    }
    puRam00000001136a20c0 = (undefined8 *)0x0;
    iRam00000001136a20b8 = 0;
    func_0x000100466b80(lRam00000001136a20b0);
    param_1[2] = FUN_104ac49bc;
    param_1[3] = param_1;
    param_1[4] = 0;
    func_0x000104abe9a0(param_1 + 5,param_1 + 1);
  }
  else {
    func_0x000100466b80(lRam00000001136a20b0);
    uStack_48 = 0;
    func_0x0001004c1168(param_1 + 1,&uStack_48,0,1);
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104ac49bc; end: 104ac49e3;  */

void FUN_104ac49bc(long param_1)

{
  func_0x000104abe9b0(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104ac49e4; end: 104ac4ad3;  */

void FUN_104ac49e4(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  
  if ((char)param_2[4] == '\0') {
    FUN_104acb358(param_1);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)param_2[4] == '\0') {
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
      goto LAB_104ac4a80;
    }
  }
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[3] = 0;
  cStack_40 = '\x01';
  lVar1 = param_1[3];
  func_0x000100460448(lVar1 + 0x168);
  if (*(long *)(lVar1 + 0x1a8) != 0) {
    func_0x0001005a7050();
  }
  func_0x000100466b80(lVar1 + 0x168);
  *(undefined1 *)(lVar1 + 0x15) = 0;
  if (cStack_40 != '\0') {
    FUN_104acb218(&uStack_60);
  }
LAB_104ac4a80:
  *param_1 = &PTR____cxa_pure_virtual_1107c4208;
  func_0x000104a9b8f0(param_1 + 1);
  __ZdlPv(param_1);
  return;
}



/* Entry: 104ac4ad4; end: 104ac4beb;  */

void FUN_104ac4ad4(long param_1)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  func_0x000104abd6fc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1d8),
                      *(undefined8 *)(param_1 + 0x1e0),"tcp_unref_orphan");
  func_0x00010061ce28(param_1 + 0x40);
  lVar1 = param_1 + 0x2a8;
  func_0x000100460448(lVar1);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_104ab5920(&uStack_40,2,"endpoint destroyed",0x12,&uStack_41,&uStack_60);
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_38 = (undefined1 *)&uStack_60;
  func_0x000100482b64(&puStack_38);
  func_0x000100466b80(lVar1);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  func_0x0001005a5f48(lVar1);
  FUN_104ac4bec(param_1 + 0x300);
  func_0x000100741660(param_1 + 0x288);
  func_0x000100487bf4(param_1 + 0x278);
  if (*(char *)(param_1 + 0x277) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  if (*(char *)(param_1 + 0x25f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x248));
  }
  func_0x0001005a5f48(param_1 + 0x168);
  __ZdlPv(param_1);
  return;
}



/* Entry: 104ac4bec; end: 104ac4c7b;  */

long * FUN_104ac4bec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (0 < (int)param_1[2])) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      func_0x00010061ce28(*param_1 + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x140;
    } while (lVar1 < (int)param_1[2]);
    lVar1 = *param_1;
  }
  func_0x000100460314(lVar1);
  func_0x000100460314(param_1[1]);
  FUN_104ac32e8(param_1 + 0xd);
  func_0x0001005a5f48(param_1 + 3);
  return param_1;
}



/* Entry: 104ac4c7c; end: 104ac4c9f;  */

undefined1  [16]
FUN_104ac4c7c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ac4ca0; end: 104ac4d1f;  */

int FUN_104ac4ca0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  func_0x000100460448(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((*(int *)(lVar1 + 0xf8) == 0) && (uVar2 = uVar2 + 1, param_2 < uVar2)) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          lVar1 = *(long *)(lVar1 + 0xf0);
        } while (lVar1 != 0);
        goto LAB_104ac4cf0;
      }
      lVar1 = *(long *)(lVar1 + 0xe8);
    } while (lVar1 != 0);
  }
  iVar3 = 0;
LAB_104ac4cf0:
  func_0x000100466b80(param_1 + 0x18);
  return iVar3;
}



/* Entry: 104ac4d20; end: 104ac4d43;  */

undefined8 FUN_104ac4d20(undefined8 param_1)

{
  FUN_104a6f4e4();
  return param_1;
}



/* Entry: 104ac4d44; end: 104ac5053;  */

void FUN_104ac4d44(undefined8 *param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0xd0;
  __Znwm();
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined4 *)(lVar6 + 0x68) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined4 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 200) = 0;
  lVar7 = lVar6;
  FUN_104abf34c();
  lVar11 = 0;
  uVar13 = 0;
  *(char *)(lVar6 + 0x6a) = (char)lVar7;
  *(undefined1 *)(lVar6 + 0x6b) = 0;
  if (param_3 == (ulong *)0x0) goto LAB_104ac4dfc;
LAB_104ac4df4:
  uVar9 = *param_3;
  do {
    if (uVar9 <= uVar13) {
      func_0x000100480ed8(lVar6,1);
      func_0x000100460318(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(undefined1 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0x98) = param_2;
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      *(undefined8 *)(lVar6 + 0x78) = 0;
      *(undefined4 *)(lVar6 + 0x80) = 0;
      puVar8 = param_3;
      func_0x0001004bf248();
      *(ulong **)(lVar6 + 0xb0) = puVar8;
      *(undefined8 *)(lVar6 + 0xb8) = 0;
      func_0x0001007414f4(&plStack_a8,param_3);
      puStack_a0 = (undefined8 *)plStack_a8[2];
      plStack_98 = (long *)plStack_a8[3];
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_104ac61f0(lVar6 + 0xc0,&puStack_a0);
      plVar1 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar2 = plStack_98 + 1;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
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
          (**(code **)(*plStack_a8 + 8))();
        }
      }
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *param_4 = lVar6;
      *param_1 = 0;
      return;
    }
    uVar9 = param_3[1];
    uVar12 = *(undefined8 *)(uVar9 + lVar11 + 8);
    iVar5 = 0xf239c84;
    _strcmp("grpc.so_reuseport",uVar12);
    if (iVar5 == 0) {
      if (*(int *)(uVar9 + lVar11) != 1) {
        func_0x000100460314(lVar6);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        puVar10 = &uStack_78;
        FUN_104ab5920(param_1,2,"grpc.so_reuseport must be an integer",0x24,&plStack_a8,&uStack_78);
LAB_104ac4ffc:
        puStack_a0 = puVar10;
        func_0x000100482b64(&puStack_a0);
        return;
      }
      FUN_104abf34c();
      if (iVar5 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(param_3[1] + lVar11 + 0x10) != 0;
      }
      *(bool *)(lVar6 + 0x6a) = bVar4;
    }
    else {
      iVar5 = 0xf239cbb;
      _strcmp("grpc.expand_wildcard_addrs",uVar12);
      if (iVar5 == 0) {
        if (*(int *)(uVar9 + lVar11) != 1) {
          func_0x000100460314(lVar6);
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_90 = 0;
          puVar10 = &uStack_90;
          FUN_104ab5920(param_1,2,"grpc.expand_wildcard_addrs must be an integer",0x2d,&plStack_a8,
                        &uStack_90);
          goto LAB_104ac4ffc;
        }
        *(bool *)(lVar6 + 0x6b) = *(int *)(uVar9 + lVar11 + 0x10) != 0;
      }
    }
    uVar13 = uVar13 + 1;
    lVar11 = lVar11 + 0x20;
    if (param_3 != (ulong *)0x0) goto LAB_104ac4df4;
LAB_104ac4dfc:
    uVar9 = 0;
  } while( true );
}



/* Entry: 104ac5054; end: 104ac55ff;  */

void FUN_104ac5054(long param_1,long *****param_2,code *param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *****ppppplVar11;
  long ****pppplVar12;
  undefined8 *puVar14;
  long *****ppppplVar15;
  char *pcVar16;
  long lVar17;
  int *piVar18;
  ulong *extraout_x8;
  long lVar19;
  long ****pppplVar20;
  long lVar21;
  undefined8 *unaff_x24;
  undefined8 *****pppppuVar22;
  char *unaff_x25;
  uint *unaff_x26;
  ulong unaff_x27;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uStack_428;
  undefined1 auStack_420 [4];
  int iStack_41c;
  int *piStack_418;
  undefined8 ****ppppuStack_410;
  ulong uStack_408;
  undefined8 ****ppppuStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 ****ppppuStack_3d8;
  undefined8 ****ppppuStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  uint uStack_3b4;
  undefined8 ****ppppuStack_3b0;
  long ***appplStack_3a4 [16];
  long ***ppplStack_320;
  long ***ppplStack_318;
  long ***ppplStack_310;
  long ***ppplStack_308;
  long ***ppplStack_300;
  long ***ppplStack_2f8;
  long ***ppplStack_2f0;
  long ***ppplStack_2e8;
  long ***ppplStack_2e0;
  long ***ppplStack_2d8;
  long ***ppplStack_2d0;
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  long ***ppplStack_2b8;
  long ***ppplStack_2b0;
  long ***ppplStack_2a8;
  undefined4 auStack_2a0 [2];
  ulong auStack_298 [17];
  ulong auStack_210 [17];
  long lStack_188;
  undefined8 uStack_170;
  ulong uStack_168;
  uint *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  char *pcStack_110;
  long lStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 uStack_cd;
  undefined1 auStack_cc [4];
  uint uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  long ***appplStack_b0 [3];
  long ****pppplStack_98;
  long ****pppplStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong *puVar13;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (code *)0x0) {
    func_0x00010bdac7bc();
LAB_104ac5540:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104ac5544);
    (*pcVar6)();
  }
  lVar21 = param_1 + 0x18;
  ppppplVar15 = param_2;
  pcVar16 = (char *)param_3;
  func_0x000100460448(lVar21);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bdac858();
    goto LAB_104ac5540;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bdac824();
    goto LAB_104ac5540;
  }
  *(code **)(param_1 + 8) = param_3;
  *(undefined8 **)(param_1 + 0x10) = param_4;
  *(long ******)(param_1 + 0xa0) = param_2;
  lVar23 = *(long *)(param_1 + 0x70);
  lStack_100 = lVar21;
  if (lVar23 != 0) {
    pppplStack_f8 = appplStack_b0;
    param_3 = FUN_104ac6254;
    lVar21 = 0xffffffff;
    do {
      if (*(char *)(param_1 + 0x6a) == '\0') {
        pppplVar12 = *param_2;
        pppplVar20 = param_2[1];
LAB_104ac5314:
        if (pppplVar20 != pppplVar12) {
          param_4 = (undefined8 *)0x0;
          do {
            func_0x000104abd7d4(pppplVar12[(long)param_4],*(undefined8 *)(lVar23 + 8));
            param_4 = (undefined8 *)((long)param_4 + 1);
            pppplVar12 = *param_2;
          } while (param_4 < (undefined8 *)((long)param_2[1] - (long)pppplVar12 >> 3));
        }
        ppppplVar15 = (long *****)(lVar23 + 0xa8);
        *(code **)(lVar23 + 0xb0) = FUN_104ac6254;
        *(long *)(lVar23 + 0xb8) = lVar23;
        *(undefined8 *)(lVar23 + 0xc0) = 0;
        func_0x000104abd794(*(undefined8 *)(lVar23 + 8));
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
        lVar23 = *(long *)(lVar23 + 0xe8);
      }
      else {
        unaff_x25 = (char *)(lVar23 + 0x18);
        pcVar6 = (code *)unaff_x25;
        func_0x000104ac885c();
        pppplVar12 = *param_2;
        pppplVar20 = param_2[1];
        if (((int)pcVar6 != 0) ||
           (param_4 = (undefined8 *)((long)pppplVar20 - (long)pppplVar12),
           param_4 < (undefined8 *)0x9)) goto LAB_104ac5314;
        func_0x00010047ad90(&lStack_b8);
        uVar4 = (int)((ulong)param_4 >> 3) - 1;
        unaff_x24 = (undefined8 *)(ulong)uVar4;
        uStack_c0 = 0;
        for (lVar17 = *(long *)(lVar23 + 0xe8); (lVar17 != 0 && (*(int *)(lVar17 + 0xf8) != 0));
            lVar17 = *(long *)(lVar17 + 0xe8)) {
          *(uint *)(lVar17 + 0xa4) = *(int *)(lVar17 + 0xa4) + uVar4;
        }
        if (uVar4 != 0) {
          param_4 = (undefined8 *)0x0;
          do {
            uStack_c8 = 0xffffffff;
            uStack_c4 = 0xffffffff;
            ppppplVar15 = (long *****)0x1;
            pcVar16 = (char *)0x0;
            FUN_104abf9a4(&pppplStack_90,unaff_x25,1,0,auStack_cc,&uStack_c4);
            if ((long *****)pppplStack_90 != (long *****)0x0) {
LAB_104ac536c:
              pppplStack_f0 = pppplStack_90;
              goto LAB_104ac53dc;
            }
            ppppplVar15 = (long *****)(ulong)uStack_c4;
            pcVar16 = unaff_x25;
            FUN_104ac70c4(&pppplStack_90,*(undefined8 *)(lVar23 + 0x10),ppppplVar15,unaff_x25,1,
                          &uStack_c8);
            if ((long *****)pppplStack_90 != (long *****)0x0) goto LAB_104ac536c;
            *(int *)(*(long *)(lVar23 + 0x10) + 0x80) =
                 *(int *)(*(long *)(lVar23 + 0x10) + 0x80) + 1;
            func_0x0001004d466c(&pppplStack_90,unaff_x25,1);
            func_0x0001005a5c60(&lStack_b8,&pppplStack_90);
            func_0x00010047c7d4(&pppplStack_90);
            if (lStack_b8 != 0) {
              func_0x00010ae77430(&pppplStack_90,&lStack_b8,1);
              pcVar16 = (char *)pcStack_88;
              ppppplVar15 = (long *****)pppplStack_90;
              if (-1 < (long)puStack_80) {
                pcVar16 = (char *)((ulong)puStack_80 >> 0x38);
                ppppplVar15 = &pppplStack_90;
              }
              uStack_e0 = 0;
              lStack_d8 = 0;
              pppplStack_e8 = (long ****)0x0;
              FUN_104ab5920(&pppplStack_f0,2,ppppplVar15,pcVar16,&uStack_cd,&pppplStack_e8);
              pppplStack_98 = (long ****)&pppplStack_e8;
              func_0x000100482b64(&pppplStack_98);
              if ((long)puStack_80 < 0) {
                __ZdlPv(pppplStack_90);
              }
              goto LAB_104ac53dc;
            }
            unaff_x26 = (uint *)0x100;
            func_0x000100460200();
            unaff_x26[0x3e] = 1;
            uVar24 = *(undefined8 *)(lVar23 + 0xe8);
            *(undefined8 *)(unaff_x26 + 0x3c) = *(undefined8 *)(lVar23 + 0xf0);
            *(undefined8 *)(unaff_x26 + 0x3a) = uVar24;
            *(uint **)(lVar23 + 0xe8) = unaff_x26;
            *(uint **)(lVar23 + 0xf0) = unaff_x26;
            *(undefined8 *)(unaff_x26 + 4) = *(undefined8 *)(lVar23 + 0x10);
            *unaff_x26 = uStack_c4;
            if (lStack_b8 != 0) {
              func_0x00010ae77c74(&lStack_b8);
              goto LAB_104ac5540;
            }
            unaff_x27 = (ulong)uStack_c4;
            pppplStack_90 = pppplStack_f8;
            pcStack_88 = (code *)&UNK_100746d14;
            puStack_78 = &UNK_10ae73cc0;
            puStack_80 = param_4;
            func_0x0001004d4da0(&pppplStack_e8,"tcp-server-listener:%s/clone-%d",0x1f,&pppplStack_90
                                ,2);
            ppppplVar15 = (long *****)pppplStack_e8;
            if (-1 < lStack_d8) {
              ppppplVar15 = &pppplStack_e8;
            }
            pcVar16 = (char *)0x1;
            uVar10 = unaff_x27;
            FUN_104abd67c();
            *(ulong *)(unaff_x26 + 2) = uVar10;
            if (lStack_d8 < 0) {
              __ZdlPv(pppplStack_e8);
            }
            uVar24 = *(undefined8 *)unaff_x25;
            *(undefined8 *)(unaff_x26 + 8) = *(undefined8 *)(lVar23 + 0x20);
            *(undefined8 *)(unaff_x26 + 6) = uVar24;
            uVar25 = *(undefined8 *)(lVar23 + 0x30);
            uVar24 = *(undefined8 *)(lVar23 + 0x28);
            uVar27 = *(undefined8 *)(lVar23 + 0x40);
            uVar26 = *(undefined8 *)(lVar23 + 0x38);
            uVar29 = *(undefined8 *)(lVar23 + 0x50);
            uVar28 = *(undefined8 *)(lVar23 + 0x48);
            uVar30 = *(undefined8 *)(lVar23 + 0x58);
            *(undefined8 *)(unaff_x26 + 0x18) = *(undefined8 *)(lVar23 + 0x60);
            *(undefined8 *)(unaff_x26 + 0x16) = uVar30;
            *(undefined8 *)(unaff_x26 + 0x14) = uVar29;
            *(undefined8 *)(unaff_x26 + 0x12) = uVar28;
            *(undefined8 *)(unaff_x26 + 0x10) = uVar27;
            *(undefined8 *)(unaff_x26 + 0xe) = uVar26;
            *(undefined8 *)(unaff_x26 + 0xc) = uVar25;
            *(undefined8 *)(unaff_x26 + 10) = uVar24;
            uVar25 = *(undefined8 *)(lVar23 + 0x70);
            uVar24 = *(undefined8 *)(lVar23 + 0x68);
            uVar27 = *(undefined8 *)(lVar23 + 0x80);
            uVar26 = *(undefined8 *)(lVar23 + 0x78);
            uVar28 = *(undefined8 *)(lVar23 + 0x88);
            uVar1 = *(uint *)(lVar23 + 0x98);
            *(undefined8 *)(unaff_x26 + 0x24) = *(undefined8 *)(lVar23 + 0x90);
            *(undefined8 *)(unaff_x26 + 0x22) = uVar28;
            *(undefined8 *)(unaff_x26 + 0x20) = uVar27;
            *(undefined8 *)(unaff_x26 + 0x1e) = uVar26;
            *(undefined8 *)(unaff_x26 + 0x1c) = uVar25;
            *(undefined8 *)(unaff_x26 + 0x1a) = uVar24;
            unaff_x26[0x26] = uVar1;
            unaff_x26[0x27] = uStack_c8;
            unaff_x26[0x28] = *(uint *)(lVar23 + 0xa0);
            unaff_x26[0x29] = (uVar4 - (int)param_4) + *(int *)(lVar23 + 0xa4);
            if (*(long *)(unaff_x26 + 2) == 0) {
              pcStack_110 = "sp->emfd";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                                  ,0x1a0,2,"assertion failed: %s");
              _abort();
              goto LAB_104ac5540;
            }
            lVar17 = *(long *)(*(long *)(*(long *)(lVar23 + 0x10) + 0x78) + 0xe8);
            if (lVar17 != 0) {
              do {
                lVar19 = lVar17;
                lVar17 = *(long *)(lVar19 + 0xe8);
              } while (lVar17 != 0);
              *(long *)(*(long *)(lVar23 + 0x10) + 0x78) = lVar19;
            }
            param_4 = (undefined8 *)((long)param_4 + 1);
          } while (param_4 != unaff_x24);
        }
        pppplStack_f0 = (long ****)0x0;
LAB_104ac53dc:
        func_0x00010047c7d4(&lStack_b8);
        if ((long *****)pppplStack_f0 == (long *****)0x0) {
          unaff_x25 = (char *)0x1;
        }
        else {
          pppplStack_90 = pppplStack_f0;
          if (((ulong)pppplStack_f0 & 1) != 0) {
            piVar18 = (int *)((long)pppplStack_f0 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar3) {
                *piVar18 = *piVar18 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppplVar15 = &pppplStack_90;
          unaff_x25 = "clone_port";
          pcVar16 = 
          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
          ;
          FUN_104abab1c();
          if (((ulong)pppplStack_90 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        if (((ulong)pppplStack_f0 & 1) != 0) {
          func_0x00010084dad0();
        }
        if ((int)unaff_x25 == 0) {
          func_0x00010bdac7f0();
          goto LAB_104ac5540;
        }
        pppplVar12 = *param_2;
        if (param_2[1] != pppplVar12) {
          param_4 = (undefined8 *)0x0;
          do {
            unaff_x24 = (undefined8 *)(lVar23 + 8);
            func_0x000104abd7d4(pppplVar12[(long)param_4],*unaff_x24);
            ppppplVar15 = (long *****)(lVar23 + 0xa8);
            *(code **)(lVar23 + 0xb0) = FUN_104ac6254;
            *(long *)(lVar23 + 0xb8) = lVar23;
            *(undefined8 *)(lVar23 + 0xc0) = 0;
            func_0x000104abd794(*unaff_x24);
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
            lVar23 = *(long *)(lVar23 + 0xe8);
            param_4 = (undefined8 *)((long)param_4 + 1);
            pppplVar12 = *param_2;
          } while (param_4 < (undefined8 *)((long)param_2[1] - (long)pppplVar12 >> 3));
        }
      }
    } while (lVar23 != 0);
  }
  lVar23 = lStack_100;
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_98 = (long ****)&pppplStack_e8;
  func_0x000100482b64(&pppplStack_98);
  if ((long)puStack_80 < 0) {
    __ZdlPv(pppplStack_90);
  }
  func_0x0001004bdf74(&uStack_c0);
  func_0x00010047c7d4(&lStack_b8);
  lVar17 = lVar23;
  __Unwind_Resume();
  pcStack_118 = FUN_104ac5600;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = 0;
  uStack_168 = unaff_x27;
  puStack_160 = unaff_x26;
  pcStack_158 = (code *)unaff_x25;
  puStack_150 = unaff_x24;
  pcStack_148 = param_3;
  puStack_140 = param_4;
  lStack_138 = lVar21;
  lStack_130 = param_1;
  lStack_128 = lVar23;
  puStack_120 = &stack0xfffffffffffffff0;
  if (0x80 < *(uint *)(ppppplVar15 + 0x10)) {
    func_0x00010bdac88c();
    goto LAB_104ac5cb4;
  }
  ppppplVar11 = ppppplVar15;
  func_0x0001004df104();
  iStack_41c = (int)ppppplVar11;
  uStack_428 = 0;
  *(undefined4 *)pcVar16 = 0xffffffff;
  if (*(long *)(lVar17 + 0x78) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(long *)(lVar17 + 0x78) + 0xa0) + 1;
  }
  FUN_104ac886c(ppppplVar15);
  if ((iStack_41c == 0) &&
     (piVar18 = *(int **)(lVar17 + 0x70), piStack_418 = piVar18, piVar18 != (int *)0x0)) {
    do {
      auStack_2a0[0] = 0x80;
      iVar7 = *piVar18;
      piStack_418 = piVar18;
      _getsockname(iVar7,&ppplStack_320,auStack_2a0);
      if (iVar7 == 0) {
        pppplVar12 = &ppplStack_320;
        func_0x0001004df104();
        if (0 < (int)pppplVar12) {
          ppplStack_2b8 = (long ***)ppppplVar15[0xd];
          ppplStack_2c0 = (long ***)ppppplVar15[0xc];
          ppplStack_2a8 = (long ***)ppppplVar15[0xf];
          ppplStack_2b0 = (long ***)ppppplVar15[0xe];
          auStack_2a0[0] = *(undefined4 *)(ppppplVar15 + 0x10);
          ppplStack_2f8 = (long ***)ppppplVar15[5];
          ppplStack_300 = (long ***)ppppplVar15[4];
          ppplStack_2e8 = (long ***)ppppplVar15[7];
          ppplStack_2f0 = (long ***)ppppplVar15[6];
          ppplStack_2d8 = (long ***)ppppplVar15[9];
          ppplStack_2e0 = (long ***)ppppplVar15[8];
          ppplStack_2c8 = (long ***)ppppplVar15[0xb];
          ppplStack_2d0 = (long ***)ppppplVar15[10];
          ppplStack_318 = (long ***)ppppplVar15[1];
          ppplStack_320 = (long ***)*ppppplVar15;
          ppplStack_308 = (long ***)ppppplVar15[3];
          ppplStack_310 = (long ***)ppppplVar15[2];
          func_0x000104aa9a68(&ppplStack_320,pppplVar12);
          ppppplVar15 = (long *****)&ppplStack_320;
          iStack_41c = (int)pppplVar12;
          break;
        }
      }
      piVar18 = *(int **)(piVar18 + 0x3a);
      piStack_418 = piVar18;
    } while (piVar18 != (int *)0x0);
  }
  ppppplVar11 = ppppplVar15;
  FUN_104aa9894(ppppplVar15,&iStack_41c);
  iVar7 = iStack_41c;
  iVar8 = (int)ppppplVar11;
  if (iVar8 == 0) {
    ppppplVar11 = ppppplVar15;
    FUN_104aa981c(ppppplVar15,appplStack_3a4);
    if ((int)ppppplVar11 != 0) {
      ppppplVar15 = (long *****)appplStack_3a4;
    }
    FUN_104ac6cac(auStack_210,lVar17,ppppplVar15,iVar9,0,auStack_420,&piStack_418);
    uVar10 = uStack_428;
    if (auStack_210[0] != uStack_428) {
      uStack_428 = auStack_210[0];
      auStack_210[0] = 0x36;
      if ((uVar10 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    auStack_298[0] = 0;
    if (uStack_428 == 0) {
      iVar9 = 1;
    }
    else {
      puVar13 = &uStack_428;
      func_0x00010ae7711c(puVar13,auStack_298);
      iVar9 = (int)puVar13;
      if ((auStack_298[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    uVar10 = auStack_210[0];
    if ((auStack_210[0] & 1) != 0) {
      func_0x00010084dad0();
    }
    if (iVar9 != 0) {
      *(int *)pcVar16 = piStack_418[0x27];
    }
    *extraout_x8 = uStack_428;
    goto LAB_104ac5acc;
  }
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  ppppuStack_3d8 = (undefined8 *****)0x0;
  ppppuStack_3d0 = (undefined8 *****)0x0;
  *(undefined4 *)pcVar16 = 0xffffffff;
  FUN_104ac82ac();
  if ((iVar8 == 0) || (*(char *)(lVar17 + 0x6b) == '\0')) {
    FUN_104aa9984(iVar7,auStack_210,auStack_298);
    FUN_104ac6cac(&ppppuStack_3f0,lVar17,auStack_298,iVar9,0,&uStack_3b4,&lStack_3c0);
    ppppuVar5 = ppppuStack_3d0;
    if (ppppuStack_3f0 != ppppuStack_3d0) {
      ppppuStack_3d0 = ppppuStack_3f0;
      ppppuStack_3f0 = (undefined8 *****)0x36;
      if (((ulong)ppppuVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    ppppuStack_3b0 = (undefined8 *****)0x0;
    if ((undefined8 *****)ppppuStack_3d0 == (undefined8 *****)0x0) {
      pppppuVar22 = (undefined8 *****)0x1;
    }
    else {
      pppppuVar22 = &ppppuStack_3d0;
      func_0x00010ae7711c(pppppuVar22,&ppppuStack_3b0);
      if (((ulong)ppppuStack_3b0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)ppppuStack_3f0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((int)pppppuVar22 == 0) {
LAB_104ac58b8:
      func_0x000104aa9a68(auStack_210,iVar7);
      FUN_104ac6cac(&ppppuStack_3f0,lVar17,auStack_210,iVar9,pppppuVar22,&uStack_3b4,&lStack_3c8);
      ppppuVar5 = ppppuStack_3d8;
      if (ppppuStack_3f0 != ppppuStack_3d8) {
        ppppuStack_3d8 = ppppuStack_3f0;
        ppppuStack_3f0 = (undefined8 *****)0x36;
        if (((ulong)ppppuVar5 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppppuStack_3b0 = (undefined8 *****)0x0;
      if ((undefined8 *****)ppppuStack_3d8 == (undefined8 *****)0x0) {
        iVar9 = 1;
      }
      else {
        pppppuVar22 = &ppppuStack_3d8;
        func_0x00010ae7711c(pppppuVar22,&ppppuStack_3b0);
        iVar9 = (int)pppppuVar22;
        if (((ulong)ppppuStack_3b0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)ppppuStack_3f0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (iVar9 == 0) {
LAB_104ac5998:
        iVar9 = *(int *)pcVar16;
      }
      else {
        iVar9 = *(int *)(lStack_3c8 + 0x9c);
        *(int *)pcVar16 = iVar9;
        if (lStack_3c0 != 0) {
          *(undefined4 *)(lStack_3c8 + 0xf8) = 1;
          *(long *)(lStack_3c0 + 0xf0) = lStack_3c8;
          goto LAB_104ac5998;
        }
      }
      if (iVar9 < 1) {
        uStack_3e8 = 0;
        lStack_3e0 = 0;
        ppppuStack_3f0 = (undefined8 *****)0x0;
        FUN_104ab5920(extraout_x8,2,"Failed to add any wildcard listeners",0x24,&ppppuStack_3f8,
                      &ppppuStack_3f0);
        ppppuStack_3b0 = &ppppuStack_3f0;
        func_0x000100482b64(&ppppuStack_3b0);
        if (((undefined8 *****)ppppuStack_3d0 == (undefined8 *****)0x0) ||
           ((undefined8 *****)ppppuStack_3d8 == (undefined8 *****)0x0)) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                              ,0x16d,2,"assertion failed: %s");
          _abort();
LAB_104ac5cb4:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x104ac5cb8);
          (*pcVar6)();
        }
        ppppuStack_3f8 = (undefined8 ****)*extraout_x8;
        if (((ulong)ppppuStack_3f8 & 1) != 0) {
          piVar18 = (int *)((long)ppppuStack_3f8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar3) {
              *piVar18 = *piVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppuStack_400 = ppppuStack_3d0;
        if (((ulong)ppppuStack_3d0 & 1) != 0) {
          piVar18 = (int *)((long)ppppuStack_3d0 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar3) {
              *piVar18 = *piVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x0001008306c4(&ppppuStack_3b0,&ppppuStack_3f8,&ppppuStack_400);
        pppppuVar22 = (undefined8 *****)*extraout_x8;
        if ((undefined8 *****)ppppuStack_3b0 == pppppuVar22) {
LAB_104ac5bc4:
          if (((ulong)pppppuVar22 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *extraout_x8 = (ulong)ppppuStack_3b0;
          ppppuStack_3b0 = (undefined8 *****)0x36;
          if (((ulong)pppppuVar22 & 1) != 0) {
            func_0x00010084dad0();
            pppppuVar22 = (undefined8 *****)ppppuStack_3b0;
            goto LAB_104ac5bc4;
          }
        }
        if (((ulong)ppppuStack_400 & 1) != 0) {
          func_0x00010084dad0();
        }
        if (((ulong)ppppuStack_3f8 & 1) != 0) {
          func_0x00010084dad0();
        }
        uStack_408 = *extraout_x8;
        if ((uStack_408 & 1) != 0) {
          piVar18 = (int *)(uStack_408 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar3) {
              *piVar18 = *piVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppuStack_410 = ppppuStack_3d8;
        if (((ulong)ppppuStack_3d8 & 1) != 0) {
          piVar18 = (int *)((long)ppppuStack_3d8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar3) {
              *piVar18 = *piVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x0001008306c4(&ppppuStack_3b0,&uStack_408,&ppppuStack_410);
        pppppuVar22 = (undefined8 *****)*extraout_x8;
        if ((undefined8 *****)ppppuStack_3b0 == pppppuVar22) {
LAB_104ac5c5c:
          if (((ulong)pppppuVar22 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *extraout_x8 = (ulong)ppppuStack_3b0;
          ppppuStack_3b0 = (undefined8 *****)0x36;
          if (((ulong)pppppuVar22 & 1) != 0) {
            func_0x00010084dad0();
            pppppuVar22 = (undefined8 *****)ppppuStack_3b0;
            goto LAB_104ac5c5c;
          }
        }
        if (((ulong)ppppuStack_410 & 1) != 0) {
          func_0x00010084dad0();
        }
        if ((uStack_408 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104ac5aa8;
      }
      if ((undefined8 *****)ppppuStack_3d0 != (undefined8 *****)0x0) {
        ppppuStack_3b0 = ppppuStack_3d0;
        if (((ulong)ppppuStack_3d0 & 1) != 0) {
          piVar18 = (int *)((long)ppppuStack_3d0 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar3) {
              *piVar18 = *piVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_104aba950(&ppppuStack_3f0,&ppppuStack_3b0);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                            ,0x15c,1,
                            "Failed to add :: listener, the environment may not support IPv6: %s");
        if (lStack_3e0 < 0) {
          __ZdlPv(ppppuStack_3f0);
        }
        if (((ulong)ppppuStack_3b0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if ((undefined8 *****)ppppuStack_3d8 != (undefined8 *****)0x0) {
        ppppuStack_3f8 = ppppuStack_3d8;
        if (((ulong)ppppuStack_3d8 & 1) != 0) {
          piVar18 = (int *)((long)ppppuStack_3d8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar3) {
              *piVar18 = *piVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_104aba950(&ppppuStack_3f0,&ppppuStack_3f8);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                            ,0x163,1,
                            "Failed to add 0.0.0.0 listener, the environment may not support IPv4: %s"
                           );
        if (lStack_3e0 < 0) {
          __ZdlPv(ppppuStack_3f0);
        }
        if (((ulong)ppppuStack_3f8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
    }
    else {
      iVar7 = *(int *)(lStack_3c0 + 0x9c);
      *(int *)pcVar16 = iVar7;
      if ((uStack_3b4 & 0xfffffffd) != 1) {
        pppppuVar22 = (undefined8 *****)0x1;
        goto LAB_104ac58b8;
      }
    }
    *extraout_x8 = 0;
  }
  else {
    FUN_104ac77a8(extraout_x8,lVar17,iVar9,iVar7,pcVar16);
  }
LAB_104ac5aa8:
  if (((ulong)ppppuStack_3d8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)ppppuStack_3d0 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar10 = uStack_428;
  if ((uStack_428 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104ac5acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppppuStack_3b0);
  func_0x0001004bdf74(&ppppuStack_410);
  func_0x0001004bdf74(&uStack_408);
  func_0x0001004bdf74(extraout_x8);
  func_0x0001004bdf74(&ppppuStack_3d8);
  func_0x0001004bdf74(&ppppuStack_3d0);
  func_0x0001004bdf74(&uStack_428);
  __Unwind_Resume();
  puVar14 = (undefined8 *)0x10;
  __Znwm();
  *puVar14 = &PTR_FUN_1107c59e0;
  puVar14[1] = uVar10;
  *(undefined8 **)(uVar10 + 0xb8) = puVar14;
  return;
}



/* Entry: 104ac5600; end: 104ac5e4f;  */

void FUN_104ac5600(ulong *param_1,long param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  int *piVar12;
  ulong uStack_318;
  undefined1 auStack_310 [4];
  int iStack_30c;
  int *piStack_308;
  undefined8 ****ppppuStack_300;
  ulong uStack_2f8;
  undefined8 ****ppppuStack_2f0;
  undefined8 ****ppppuStack_2e8;
  undefined8 ****ppppuStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 ****ppppuStack_2c8;
  undefined8 ****ppppuStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  uint uStack_2a4;
  undefined8 ****ppppuStack_2a0;
  undefined8 auStack_294 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_190 [2];
  ulong auStack_188 [17];
  ulong auStack_100 [17];
  long lStack_78;
  ulong *puVar8;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x80 < *(uint *)(param_3 + 0x10)) {
    func_0x00010bdac88c();
    goto LAB_104ac5cb4;
  }
  puVar10 = param_3;
  func_0x0001004df104();
  iStack_30c = (int)puVar10;
  uStack_318 = 0;
  *param_4 = -1;
  if (*(long *)(param_2 + 0x78) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(long *)(param_2 + 0x78) + 0xa0) + 1;
  }
  FUN_104ac886c(param_3);
  if ((iStack_30c == 0) &&
     (piVar12 = *(int **)(param_2 + 0x70), piStack_308 = piVar12, piVar12 != (int *)0x0)) {
    do {
      auStack_190[0] = 0x80;
      iVar5 = *piVar12;
      piStack_308 = piVar12;
      _getsockname(iVar5,&uStack_210,auStack_190);
      if (iVar5 == 0) {
        puVar10 = &uStack_210;
        func_0x0001004df104();
        if (0 < (int)puVar10) {
          uStack_1a8 = param_3[0xd];
          uStack_1b0 = param_3[0xc];
          uStack_198 = param_3[0xf];
          uStack_1a0 = param_3[0xe];
          auStack_190[0] = *(undefined4 *)(param_3 + 0x10);
          uStack_1e8 = param_3[5];
          uStack_1f0 = param_3[4];
          uStack_1d8 = param_3[7];
          uStack_1e0 = param_3[6];
          uStack_1c8 = param_3[9];
          uStack_1d0 = param_3[8];
          uStack_1b8 = param_3[0xb];
          uStack_1c0 = param_3[10];
          uStack_208 = param_3[1];
          uStack_210 = *param_3;
          uStack_1f8 = param_3[3];
          uStack_200 = param_3[2];
          func_0x000104aa9a68(&uStack_210,puVar10);
          param_3 = &uStack_210;
          iStack_30c = (int)puVar10;
          break;
        }
      }
      piVar12 = *(int **)(piVar12 + 0x3a);
      piStack_308 = piVar12;
    } while (piVar12 != (int *)0x0);
  }
  puVar10 = param_3;
  FUN_104aa9894(param_3,&iStack_30c);
  iVar5 = iStack_30c;
  iVar6 = (int)puVar10;
  if (iVar6 == 0) {
    puVar10 = param_3;
    FUN_104aa981c(param_3,auStack_294);
    if ((int)puVar10 != 0) {
      param_3 = auStack_294;
    }
    FUN_104ac6cac(auStack_100,param_2,param_3,iVar7,0,auStack_310,&piStack_308);
    uVar9 = uStack_318;
    if (auStack_100[0] != uStack_318) {
      uStack_318 = auStack_100[0];
      auStack_100[0] = 0x36;
      if ((uVar9 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    auStack_188[0] = 0;
    if (uStack_318 == 0) {
      iVar7 = 1;
    }
    else {
      puVar8 = &uStack_318;
      func_0x00010ae7711c(puVar8,auStack_188);
      iVar7 = (int)puVar8;
      if ((auStack_188[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    uVar9 = auStack_100[0];
    if ((auStack_100[0] & 1) != 0) {
      func_0x00010084dad0();
    }
    if (iVar7 != 0) {
      *param_4 = piStack_308[0x27];
    }
    *param_1 = uStack_318;
    goto LAB_104ac5acc;
  }
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  ppppuStack_2c8 = (undefined8 *****)0x0;
  ppppuStack_2c0 = (undefined8 *****)0x0;
  *param_4 = -1;
  FUN_104ac82ac();
  if ((iVar6 == 0) || (*(char *)(param_2 + 0x6b) == '\0')) {
    FUN_104aa9984(iVar5,auStack_100,auStack_188);
    FUN_104ac6cac(&ppppuStack_2e0,param_2,auStack_188,iVar7,0,&uStack_2a4,&lStack_2b0);
    ppppuVar3 = ppppuStack_2c0;
    if (ppppuStack_2e0 != ppppuStack_2c0) {
      ppppuStack_2c0 = ppppuStack_2e0;
      ppppuStack_2e0 = (undefined8 *****)0x36;
      if (((ulong)ppppuVar3 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    ppppuStack_2a0 = (undefined8 *****)0x0;
    if ((undefined8 *****)ppppuStack_2c0 == (undefined8 *****)0x0) {
      pppppuVar11 = (undefined8 *****)0x1;
    }
    else {
      pppppuVar11 = &ppppuStack_2c0;
      func_0x00010ae7711c(pppppuVar11,&ppppuStack_2a0);
      if (((ulong)ppppuStack_2a0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)ppppuStack_2e0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((int)pppppuVar11 == 0) {
LAB_104ac58b8:
      func_0x000104aa9a68(auStack_100,iVar5);
      FUN_104ac6cac(&ppppuStack_2e0,param_2,auStack_100,iVar7,pppppuVar11,&uStack_2a4,&lStack_2b8);
      ppppuVar3 = ppppuStack_2c8;
      if (ppppuStack_2e0 != ppppuStack_2c8) {
        ppppuStack_2c8 = ppppuStack_2e0;
        ppppuStack_2e0 = (undefined8 *****)0x36;
        if (((ulong)ppppuVar3 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppppuStack_2a0 = (undefined8 *****)0x0;
      if ((undefined8 *****)ppppuStack_2c8 == (undefined8 *****)0x0) {
        iVar7 = 1;
      }
      else {
        pppppuVar11 = &ppppuStack_2c8;
        func_0x00010ae7711c(pppppuVar11,&ppppuStack_2a0);
        iVar7 = (int)pppppuVar11;
        if (((ulong)ppppuStack_2a0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)ppppuStack_2e0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (iVar7 == 0) {
LAB_104ac5998:
        iVar7 = *param_4;
      }
      else {
        iVar7 = *(int *)(lStack_2b8 + 0x9c);
        *param_4 = iVar7;
        if (lStack_2b0 != 0) {
          *(undefined4 *)(lStack_2b8 + 0xf8) = 1;
          *(long *)(lStack_2b0 + 0xf0) = lStack_2b8;
          goto LAB_104ac5998;
        }
      }
      if (iVar7 < 1) {
        uStack_2d8 = 0;
        lStack_2d0 = 0;
        ppppuStack_2e0 = (undefined8 *****)0x0;
        FUN_104ab5920(param_1,2,"Failed to add any wildcard listeners",0x24,&ppppuStack_2e8,
                      &ppppuStack_2e0);
        ppppuStack_2a0 = &ppppuStack_2e0;
        func_0x000100482b64(&ppppuStack_2a0);
        if (((undefined8 *****)ppppuStack_2c0 == (undefined8 *****)0x0) ||
           ((undefined8 *****)ppppuStack_2c8 == (undefined8 *****)0x0)) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                              ,0x16d,2,"assertion failed: %s");
          _abort();
LAB_104ac5cb4:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac5cb8);
          (*pcVar4)();
        }
        ppppuStack_2e8 = (undefined8 ****)*param_1;
        if (((ulong)ppppuStack_2e8 & 1) != 0) {
          piVar12 = (int *)((long)ppppuStack_2e8 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppppuStack_2f0 = ppppuStack_2c0;
        if (((ulong)ppppuStack_2c0 & 1) != 0) {
          piVar12 = (int *)((long)ppppuStack_2c0 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x0001008306c4(&ppppuStack_2a0,&ppppuStack_2e8,&ppppuStack_2f0);
        pppppuVar11 = (undefined8 *****)*param_1;
        if ((undefined8 *****)ppppuStack_2a0 == pppppuVar11) {
LAB_104ac5bc4:
          if (((ulong)pppppuVar11 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_1 = (ulong)ppppuStack_2a0;
          ppppuStack_2a0 = (undefined8 *****)0x36;
          if (((ulong)pppppuVar11 & 1) != 0) {
            func_0x00010084dad0();
            pppppuVar11 = (undefined8 *****)ppppuStack_2a0;
            goto LAB_104ac5bc4;
          }
        }
        if (((ulong)ppppuStack_2f0 & 1) != 0) {
          func_0x00010084dad0();
        }
        if (((ulong)ppppuStack_2e8 & 1) != 0) {
          func_0x00010084dad0();
        }
        uStack_2f8 = *param_1;
        if ((uStack_2f8 & 1) != 0) {
          piVar12 = (int *)(uStack_2f8 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppppuStack_300 = ppppuStack_2c8;
        if (((ulong)ppppuStack_2c8 & 1) != 0) {
          piVar12 = (int *)((long)ppppuStack_2c8 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x0001008306c4(&ppppuStack_2a0,&uStack_2f8,&ppppuStack_300);
        pppppuVar11 = (undefined8 *****)*param_1;
        if ((undefined8 *****)ppppuStack_2a0 == pppppuVar11) {
LAB_104ac5c5c:
          if (((ulong)pppppuVar11 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_1 = (ulong)ppppuStack_2a0;
          ppppuStack_2a0 = (undefined8 *****)0x36;
          if (((ulong)pppppuVar11 & 1) != 0) {
            func_0x00010084dad0();
            pppppuVar11 = (undefined8 *****)ppppuStack_2a0;
            goto LAB_104ac5c5c;
          }
        }
        if (((ulong)ppppuStack_300 & 1) != 0) {
          func_0x00010084dad0();
        }
        if ((uStack_2f8 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104ac5aa8;
      }
      if ((undefined8 *****)ppppuStack_2c0 != (undefined8 *****)0x0) {
        ppppuStack_2a0 = ppppuStack_2c0;
        if (((ulong)ppppuStack_2c0 & 1) != 0) {
          piVar12 = (int *)((long)ppppuStack_2c0 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_104aba950(&ppppuStack_2e0,&ppppuStack_2a0);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                            ,0x15c,1,
                            "Failed to add :: listener, the environment may not support IPv6: %s");
        if (lStack_2d0 < 0) {
          __ZdlPv(ppppuStack_2e0);
        }
        if (((ulong)ppppuStack_2a0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if ((undefined8 *****)ppppuStack_2c8 != (undefined8 *****)0x0) {
        ppppuStack_2e8 = ppppuStack_2c8;
        if (((ulong)ppppuStack_2c8 & 1) != 0) {
          piVar12 = (int *)((long)ppppuStack_2c8 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_104aba950(&ppppuStack_2e0,&ppppuStack_2e8);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                            ,0x163,1,
                            "Failed to add 0.0.0.0 listener, the environment may not support IPv4: %s"
                           );
        if (lStack_2d0 < 0) {
          __ZdlPv(ppppuStack_2e0);
        }
        if (((ulong)ppppuStack_2e8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
    }
    else {
      iVar5 = *(int *)(lStack_2b0 + 0x9c);
      *param_4 = iVar5;
      if ((uStack_2a4 & 0xfffffffd) != 1) {
        pppppuVar11 = (undefined8 *****)0x1;
        goto LAB_104ac58b8;
      }
    }
    *param_1 = 0;
  }
  else {
    FUN_104ac77a8(param_1,param_2,iVar7,iVar5,param_4);
  }
LAB_104ac5aa8:
  if (((ulong)ppppuStack_2c8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)ppppuStack_2c0 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar9 = uStack_318;
  if ((uStack_318 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104ac5acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppppuStack_2a0);
  func_0x0001004bdf74(&ppppuStack_300);
  func_0x0001004bdf74(&uStack_2f8);
  func_0x0001004bdf74(param_1);
  func_0x0001004bdf74(&ppppuStack_2c8);
  func_0x0001004bdf74(&ppppuStack_2c0);
  func_0x0001004bdf74(&uStack_318);
  __Unwind_Resume();
  puVar10 = (undefined8 *)0x10;
  __Znwm();
  *puVar10 = &PTR_FUN_1107c59e0;
  puVar10[1] = uVar9;
  *(undefined8 **)(uVar9 + 0xb8) = puVar10;
  return;
}



/* Entry: 104ac5e50; end: 104ac5e83;  */

void FUN_104ac5e50(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c59e0;
  puVar1[1] = param_1;
  *(undefined8 **)(param_1 + 0xb8) = puVar1;
  return;
}



/* Entry: 104ac5e84; end: 104ac5f17;  */

undefined4 FUN_104ac5e84(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  lVar1 = param_1 + 0x18;
  func_0x000100460448(lVar1);
  puVar3 = *(undefined4 **)(param_1 + 0x70);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = 0;
    do {
      if ((puVar3[0x3e] == 0) && (uVar2 = uVar2 + 1, param_2 < uVar2)) {
        param_3 = param_3 + 1;
        do {
          param_3 = param_3 + -1;
          if (param_3 == 0) {
            func_0x000100466b80(lVar1);
            return *puVar3;
          }
          puVar3 = *(undefined4 **)(puVar3 + 0x3c);
        } while (puVar3 != (undefined4 *)0x0);
        break;
      }
      puVar3 = *(undefined4 **)(puVar3 + 0x3a);
    } while (puVar3 != (undefined4 *)0x0);
  }
  func_0x000100466b80(lVar1);
  return 0xffffffff;
}



/* Entry: 104ac5f18; end: 104ac5fbb;  */

void FUN_104ac5f18(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uStack_38;
  
  func_0x000100460448(param_1 + 0x18);
  if (param_2 != (undefined8 *)0x0) {
    uStack_38 = 0;
    puVar1 = &uStack_38;
    func_0x0001004bd890();
    param_2[3] = puVar1;
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar2 = (long *)(param_1 + 0x88);
    *param_2 = 0;
    if (*plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 0x90);
    }
    *plVar2 = (long)param_2;
    *(undefined8 **)(param_1 + 0x90) = param_2;
  }
  func_0x000100466b80(param_1 + 0x18);
  return;
}



/* Entry: 104ac5fbc; end: 104ac60ff;  */

void FUN_104ac5fbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  ulong uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 *puStack_48;
  
  lVar3 = param_1;
  func_0x0001005a5e70();
  if ((int)lVar3 != 0) {
    func_0x000104ac4c84(param_1);
    lVar3 = param_1 + 0x18;
    func_0x000100460448(lVar3);
    func_0x00010076f2bc(&uStack_70,param_1 + 0x88);
    func_0x000100466b80(lVar3);
    lVar2 = lVar3;
    func_0x000100460448();
    if (*(char *)(param_1 + 0x68) != '\0') {
      func_0x00010bdac8c0();
      FUN_104bd46a0();
      if ((uStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_48 = (undefined1 *)&uStack_70;
      func_0x000100482b64(&puStack_48);
      __Unwind_Resume();
      func_0x000100460448(lVar2 + 0x18);
      *(undefined1 *)(lVar2 + 0x69) = 1;
      if (*(long *)(lVar2 + 0x58) != 0) {
        for (lVar3 = *(long *)(lVar2 + 0x70); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0xe8)) {
          uVar1 = *(undefined8 *)(lVar3 + 8);
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_e0 = 0;
          FUN_104ab5920(&uStack_c0,2,"Server shutdown",0xf,&uStack_c1,&uStack_e0);
          FUN_104abd70c(uVar1,&uStack_c0);
          if ((uStack_c0 & 1) != 0) {
            func_0x00010084dad0();
          }
          puStack_b8 = (undefined1 *)&uStack_e0;
          func_0x000100482b64(&puStack_b8);
        }
      }
      func_0x000100466b80(lVar2 + 0x18);
      return;
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
    if (*(long *)(param_1 + 0x58) == 0) {
      func_0x000100466b80(lVar3);
      FUN_104ac679c(param_1);
    }
    else {
      for (lVar2 = *(long *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xe8)) {
        uVar1 = *(undefined8 *)(lVar2 + 8);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        FUN_104ab5920(&uStack_50,2,"Server destroyed",0x10,&uStack_51,&uStack_70);
        FUN_104abd70c(uVar1,&uStack_50);
        if ((uStack_50 & 1) != 0) {
          func_0x00010084dad0();
        }
        puStack_48 = (undefined1 *)&uStack_70;
        func_0x000100482b64(&puStack_48);
      }
      func_0x000100466b80(lVar3);
    }
  }
  return;
}



/* Entry: 104ac6100; end: 104ac61ef;  */

void FUN_104ac6100(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 *puStack_48;
  
  func_0x000100460448(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x69) = 1;
  if (*(long *)(param_1 + 0x58) != 0) {
    for (lVar2 = *(long *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xe8)) {
      uVar1 = *(undefined8 *)(lVar2 + 8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      FUN_104ab5920(&uStack_50,2,"Server shutdown",0xf,&uStack_51,&uStack_70);
      FUN_104abd70c(uVar1,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_48 = (undefined1 *)&uStack_70;
      func_0x000100482b64(&puStack_48);
    }
  }
  func_0x000100466b80(param_1 + 0x18);
  return;
}



/* Entry: 104ac61f0; end: 104ac6253;  */

undefined8 * FUN_104ac61f0(undefined8 *param_1,undefined8 *param_2)

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


