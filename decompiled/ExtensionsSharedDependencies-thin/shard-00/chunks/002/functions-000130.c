/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00346de0; end: 00346ea7;  */

void FUN_00346de0(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8) + 0x70;
  func_0x00339d8c(lVar1);
  FUN_0034510c(uVar4,param_1,param_2);
  func_0x00339da8(lVar1);
  if ((int)uVar4 != 0) {
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar6;
    FUN_00347790(param_1,&uStack_38);
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  return;
}



/* Entry: 00346ea8; end: 00346f17;  */

ulong FUN_00346ea8(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  int *piVar6;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 2 & 1) == 0) {
      if ((bVar1 >> 1 & 1) == 0) {
        if ((bVar1 >> 3 & 1) == 0) {
          if ((bVar1 >> 4 & 1) == 0) {
            if ((bVar1 >> 5 & 1) == 0) {
              pcVar5 = 
              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
              ;
              func_0x00338df0("return (size_t)-1",
                              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                              ,0x7ff);
              uVar4 = *(ulong *)pcVar5;
              if ((uVar4 & 1) != 0) {
                piVar6 = (int *)(uVar4 - 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar3) {
                    *piVar6 = *piVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              FUN_004007f4();
              if ((uVar4 & 1) != 0) {
                FUN_0055293c();
              }
              return uVar4;
            }
            uVar4 = 5;
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 00346f18; end: 00346f8b;  */

void FUN_00346f18(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
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
  FUN_004007f4(param_1,&uStack_28,*(undefined8 *)(lVar3 + 0x88));
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00346f8c; end: 003470db;  */

void FUN_00346f8c(ulong *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  int *piVar8;
  ulong *puVar9;
  char *pcVar10;
  bool bVar11;
  ulong unaff_x22;
  ulong uVar12;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong auStack_78 [4];
  long *plStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  
  uVar5 = *param_1;
  if (1 < uVar5) {
    if (3 < uVar5) {
      uVar12 = 1;
      do {
        puVar9 = param_1 + 1;
        if ((uVar5 & 1) != 0) {
          puVar9 = (ulong *)param_1[1];
        }
        uVar5 = puVar9[uVar12 * 3];
        pcStack_48 = (code *)(puVar9 + uVar12 * 3)[1];
        if (((ulong)pcStack_48 & 1) != 0) {
          pcVar6 = pcStack_48 + -1;
          do {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
            if (bVar11) {
              *(int *)pcVar6 = *(int *)pcVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003bb88c(param_2,uVar5,&pcStack_48,puVar9[uVar12 * 3 + 2]);
        if (((ulong)pcStack_48 & 1) != 0) {
          FUN_0055293c();
        }
        uVar12 = uVar12 + 1;
        uVar5 = *param_1;
      } while (uVar12 < uVar5 >> 1);
    }
    puVar9 = param_1 + 1;
    if ((uVar5 & 1) != 0) {
      puVar9 = (ulong *)*puVar9;
    }
    uVar5 = *puVar9;
    plStack_58 = (long *)puVar9[1];
    if (((ulong)plStack_58 & 1) != 0) {
      piVar8 = (int *)((long)plStack_58 - 1);
      do {
        cVar1 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar11) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c((long)&uStack_50 + 7,uVar5,&plStack_58);
    if (((ulong)plStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_0034af60(param_1);
    return;
  }
  pcVar4 = "no closures to schedule";
  do {
    lVar7 = *param_2;
    lVar2 = lVar7 + -1;
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar11) {
      *param_2 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar2 != 0) {
    if (lVar7 == 0) {
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&stack0xffffffffffffffc8);
      FUN_0033c494(&stack0xffffffffffffffd0);
      plVar3 = param_2;
      __Unwind_Resume();
      pcStack_48 = FUN_003bba54;
      plVar3 = plVar3 + 0xb;
      plStack_58 = param_2;
      uStack_50 = &stack0xfffffffffffffff0;
      do {
        pcVar10 = (char *)*plVar3;
        if (((ulong)pcVar10 & 1) == 0) {
          auStack_78[0] = 0;
LAB_003bbad0:
          do {
            if ((char *)*plVar3 != pcVar10) {
              ClearExclusiveLocal();
              bVar11 = true;
              goto LAB_003bbb24;
            }
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar11) {
              *plVar3 = (long)pcVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pcVar10 == (char *)0x0) goto LAB_003bbb14;
          uStack_90 = 0;
          FUN_003c1e6c(&uStack_79,pcVar10,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
          bVar11 = false;
          pcVar4 = pcVar10;
        }
        else {
          FUN_003b7b3c(auStack_78,(ulong)pcVar10 & 0xfffffffffffffffe);
          if (auStack_78[0] == 0) goto LAB_003bbad0;
          uStack_88 = auStack_78[0];
          if ((auStack_78[0] & 1) != 0) {
            piVar8 = (int *)(auStack_78[0] - 1);
            do {
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar11) {
                *piVar8 = *piVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_003c1e6c(&uStack_79,pcVar4,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar11 = false;
        }
LAB_003bbb24:
        if ((auStack_78[0] & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar11) {
          return;
        }
      } while( true );
    }
    param_2 = param_2 + 1;
    plVar3 = param_2;
    FUN_0033b3e4(param_2,&stack0xffffffffffffffdf);
    while (plVar3 == (long *)0x0) {
      plVar3 = param_2;
      FUN_0033b3e4(param_2,&stack0xffffffffffffffdf);
    }
    FUN_003b7b6c(&stack0xffffffffffffffd0,plVar3[3]);
    plVar3[3] = 0;
    if ((unaff_x22 & 1) != 0) {
      piVar8 = (int *)(unaff_x22 - 1);
      do {
        cVar1 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar11) {
          *piVar8 = *piVar8 + 1;
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



/* Entry: 003470dc; end: 003471ab;  */

void FUN_003470dc(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_48;
  
  uVar4 = *param_1;
  if (1 < uVar4) {
    uVar6 = 0;
    do {
      puVar3 = param_1 + 1;
      if ((uVar4 & 1) != 0) {
        puVar3 = (ulong *)param_1[1];
      }
      uVar4 = puVar3[uVar6 * 3];
      uStack_48 = (puVar3 + uVar6 * 3)[1];
      if ((uStack_48 & 1) != 0) {
        piVar5 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb88c(param_2,uVar4,&uStack_48,puVar3[uVar6 * 3 + 2]);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      uVar6 = uVar6 + 1;
      uVar4 = *param_1;
    } while (uVar6 < uVar4 >> 1);
  }
  FUN_0034af60(param_1);
  return;
}



/* Entry: 003471ac; end: 003471bf;  */

void FUN_003471ac(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x110) + 0x10);
  func_0x003a6564(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00358990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 003471c0; end: 003472e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003471c0(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  lVar8 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  alStack_f8[1] = 0;
  lVar5 = param_1 + 0x118;
  do {
    if (*(long *)(lVar5 + lVar8) != 0) {
      *(undefined8 *)(*(long *)(lVar5 + lVar8) + 0x18) = param_2;
      lVar6 = *(long *)(lVar5 + lVar8);
      *(code **)(lVar6 + 0x28) = FUN_003471ac;
      *(long *)(lVar6 + 0x30) = lVar6;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      uStack_108 = 0;
      pcStack_100 = "resuming pending batch from client channel call";
      alStack_f8[0] = *(long *)(lVar5 + lVar8) + 0x20;
      FUN_0034accc(alStack_f8 + 1,alStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        FUN_0055293c();
      }
      *(undefined8 *)(lVar5 + lVar8) = 0;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x30);
  lVar5 = *(long *)(param_1 + 0x88);
  FUN_00346f8c(alStack_f8 + 1);
  plVar3 = alStack_f8 + 1;
  FUN_0034afe4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_0034afe4(alStack_f8 + 1);
  __Unwind_Resume();
  if (*(char *)((long)plVar3 + 0xc1) == '\0') {
    lVar6 = *(long *)(lVar5 + 8);
    plVar3[0x19] = lVar5;
    *(undefined1 *)((long)plVar3 + 0xc1) = 1;
    lVar8 = plVar3[0x13];
    plVar3[0x1a] = *(long *)(lVar6 + 0xb0);
    *(long **)(lVar6 + 0xb0) = plVar3 + 0x19;
    FUN_003c3d80(lVar8,*(undefined8 *)(lVar6 + 0x60));
    pcVar4 = segment_command_00000020.segname;
    __Znwm();
    *(long *)pcVar4 = lVar5;
    lVar5 = *(long *)(lVar5 + 0x10);
    plVar7 = *(long **)(lVar5 + 0x80);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(code **)(pcVar4 + 0x10) = FUN_0034b0a4;
    *(char **)(pcVar4 + 0x18) = pcVar4;
    *(qword *)(pcVar4 + 0x20) = 0;
    FUN_003bba54(*(undefined8 *)(lVar5 + 0x88),pcVar4 + 8);
    plVar3[0x1b] = (long)pcVar4;
  }
  return;
}



/* Entry: 003472e8; end: 0034739f;  */

void FUN_003472e8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    lVar5 = *(long *)(param_2 + 8);
    *(long *)(param_1 + 200) = param_2;
    *(undefined1 *)(param_1 + 0xc1) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar5 + 0xb0);
    *(long **)(lVar5 + 0xb0) = (long *)(param_1 + 200);
    FUN_003c3d80(uVar3,*(undefined8 *)(lVar5 + 0x60));
    pcVar4 = segment_command_00000020.segname;
    __Znwm();
    *(long *)pcVar4 = param_2;
    lVar5 = *(long *)(param_2 + 0x10);
    plVar6 = *(long **)(lVar5 + 0x80);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(code **)(pcVar4 + 0x10) = FUN_0034b0a4;
    *(char **)(pcVar4 + 0x18) = pcVar4;
    *(qword *)(pcVar4 + 0x20) = 0;
    FUN_003bba54(*(undefined8 *)(lVar5 + 0x88),pcVar4 + 8);
    *(char **)(param_1 + 0xd8) = pcVar4;
  }
  return;
}



/* Entry: 003473a0; end: 003475e7;  */

void FUN_003473a0(ulong *param_1,long param_2,long param_3,undefined8 param_4)

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
  if (plVar6 == (long *)0x0) goto LAB_00347590;
  lStack_90 = param_2 + 0x48;
  uStack_80 = *(undefined8 *)(param_2 + 0x78);
  uStack_88 = param_4;
  (**(code **)(*plVar6 + 0x30))(&uStack_78,plVar6,&lStack_90);
  uVar5 = uStack_78;
  if (uStack_78 == 0) {
    uVar7 = *(ulong *)(param_2 + 0x78);
    FUN_003475e8(uVar7,&plStack_68,auStack_70,auStack_60,auStack_48,param_2 + 0x90);
    if ((*(long **)(uVar7 + 8) != (long *)0x0) &&
       (lVar11 = *(long *)(**(long **)(uVar7 + 8) + *(long *)(pcVar13 + 0x68) * 8), lVar11 != 0)) {
      if ((*pcVar13 != '\0') &&
         (((*(long *)(lVar11 + 8) != 0 &&
           (FUN_003b8d30(*(undefined8 *)(param_2 + 0x68)), uVar7 != 0x7fffffffffffffff)) &&
          (lVar10 = *(long *)(lVar11 + 8), lVar10 != 0x7fffffffffffffff)))) {
        lVar8 = -0x8000000000000000;
        if ((uVar7 != 0x8000000000000000) && (lVar10 != -0x8000000000000000)) {
          if ((long)uVar7 < 1) {
            if (lVar10 < (long)(-0x8000000000000000 - uVar7)) goto LAB_003474c0;
          }
          else if ((long)(uVar7 ^ 0x7fffffffffffffff) < lVar10) goto LAB_003474d8;
          lVar8 = lVar10 + uVar7;
        }
LAB_003474c0:
        if (lVar8 < *(long *)(param_2 + 0x70)) {
          *(long *)(param_2 + 0x70) = lVar8;
          FUN_003779f4(param_3);
        }
      }
LAB_003474d8:
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
  FUN_0034b20c(auStack_60,uStack_58);
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
    FUN_0055293c();
  }
  if (uVar5 != 0) {
    return;
  }
LAB_00347590:
  *param_1 = 0;
  return;
}



/* Entry: 003475e8; end: 00347723;  */

ulong * FUN_003475e8(ulong *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
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
    func_0x003d6048(param_1,0x40);
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
  FUN_00356ba8(param_1,&plStack_48,uVar4,&plStack_60,*param_5,*param_6);
  FUN_0034b20c(&plStack_60,lStack_58);
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



/* Entry: 00347724; end: 0034778f;  */

ulong * FUN_00347724(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0034b20c(param_1 + 3,param_1[4]);
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
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00347790; end: 00347823;  */

void FUN_00347790(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar8 = *param_2;
  if (uVar8 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00346c1c(lVar4,param_2,&stack0xffffffffffffffd8,FUN_00347824);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_90 = *(long **)(lVar4 + 0x108);
  *(undefined8 *)(lVar4 + 0x108) = 0;
  uStack_88 = *(undefined8 *)(lVar4 + 0x98);
  uStack_80 = *(undefined8 *)(lVar4 + 0x48);
  uStack_78 = *(undefined8 *)(lVar4 + 0x50);
  uStack_68 = *(undefined8 *)(lVar4 + 0x60);
  uStack_70 = *(undefined8 *)(lVar4 + 0x58);
  uStack_60 = *(undefined8 *)(lVar4 + 0x68);
  uStack_58 = *(undefined8 *)(lVar4 + 0x70);
  uStack_50 = *(undefined8 *)(lVar4 + 0x78);
  uStack_98 = 0;
  auVar9 = NEON_ext(*(undefined1 (*) [16])(lVar4 + 0x88),*(undefined1 (*) [16])(lVar4 + 0x88),8,1);
  uStack_40 = auVar9._8_8_;
  uStack_48 = auVar9._0_8_;
  FUN_00358e08(auStack_a0,plStack_90,&plStack_90,&uStack_98);
  iVar5 = (int)auStack_a0;
  FUN_003479cc(lVar4 + 0x110);
  FUN_00356b78(auStack_a0);
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 8))();
    }
  }
  uVar8 = uStack_98;
  if (uStack_98 == 0) {
    FUN_003471c0(lVar4);
    iVar5 = (int)param_1;
  }
  else {
    uStack_a8 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      piVar6 = (int *)(uStack_98 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00346c1c(lVar4);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
  }
  uVar8 = uStack_98;
  if ((uStack_98 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(uVar8);
    FUN_0033c494(&uStack_a8);
    FUN_0033c494(&uStack_98);
  }
  do {
    __Unwind_Resume(uVar8);
  } while( true );
}



/* Entry: 00347824; end: 0034782b;  */

undefined8 FUN_00347824(void)

{
  return 1;
}



/* Entry: 0034782c; end: 003479cb;  */

void FUN_0034782c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined1 auVar8 [16];
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_90 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  uStack_98 = 0;
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x88),*(undefined1 (*) [16])(param_1 + 0x88),8,
                    1);
  uStack_40 = auVar8._8_8_;
  uStack_48 = auVar8._0_8_;
  FUN_00358e08(auStack_a0,plStack_90,&plStack_90,&uStack_98);
  iVar5 = (int)auStack_a0;
  FUN_003479cc(param_1 + 0x110);
  FUN_00356b78(auStack_a0);
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 8))();
    }
  }
  uVar4 = uStack_98;
  if (uStack_98 == 0) {
    iVar5 = param_2;
    FUN_003471c0(param_1);
  }
  else {
    uStack_a8 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      piVar6 = (int *)(uStack_98 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00346c1c(param_1);
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
  }
  uVar4 = uStack_98;
  if ((uStack_98 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(uVar4);
    FUN_0033c494(&uStack_a8);
    FUN_0033c494(&uStack_98);
  }
  do {
    __Unwind_Resume(uVar4);
  } while( true );
}



/* Entry: 003479cc; end: 00347a13;  */

long * FUN_003479cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != 0) {
    FUN_003589bc();
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 00347a14; end: 00347b03;  */

undefined8 *
FUN_00347a14(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_FUN_009dbb40;
  param_1[1] = 1;
  param_1[2] = param_2;
  puVar3 = (undefined8 *)param_3[3];
  plVar5 = (long *)*puVar3;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar7 = *puVar3;
  uVar8 = puVar3[3];
  uVar6 = puVar3[2];
  param_1[4] = puVar3[1];
  param_1[3] = uVar7;
  param_1[6] = uVar8;
  param_1[5] = uVar6;
  uVar6 = param_3[6];
  param_1[7] = param_3[5];
  param_1[8] = uVar6;
  uVar6 = param_3[7];
  param_1[9] = *param_3;
  param_1[10] = uVar6;
  lVar4 = param_3[2];
  param_1[0xb] = lVar4;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  plVar5 = *(long **)(lVar4 + 0x20);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_7);
  }
  param_1[0xf] = plVar5;
  FUN_0033a6ec();
  param_1[0x10] = uVar7;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



/* Entry: 00347b04; end: 00347c43;  */

undefined8 * FUN_00347b04(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_009dbb40;
  lVar6 = param_1[0x1c];
  if (lVar6 != 0) {
    FUN_00340a0c(lVar6 + 0x28,*(undefined8 *)(lVar6 + 0x30));
    FUN_00340a0c(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
  }
  lVar6 = 0x1c0;
  do {
    if (*(long *)((long)param_1 + lVar6) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xa52,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x347c24);
      (*pcVar4)();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x1f0);
  if (param_1[0xd] != 0) {
    uStack_30 = 0;
    FUN_003c1e6c(&uStack_21,param_1[0xd],&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_00353304(param_1 + 0x1e);
  plVar5 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = (long *)param_1[0x1b];
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
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((param_1[0x12] & 1) != 0) {
    FUN_0055293c();
  }
  if ((param_1[0x11] & 1) != 0) {
    FUN_0055293c();
  }
  FUN_0034b418(param_1 + 3);
  return param_1;
}



/* Entry: 00347c44; end: 00347c47;  */

undefined8 * FUN_00347c44(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_009dbb40;
  lVar6 = param_1[0x1c];
  if (lVar6 != 0) {
    FUN_00340a0c(lVar6 + 0x28,*(undefined8 *)(lVar6 + 0x30));
    FUN_00340a0c(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
  }
  lVar6 = 0x1c0;
  do {
    if (*(long *)((long)param_1 + lVar6) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xa52,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x347c24);
      (*pcVar4)();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x1f0);
  if (param_1[0xd] != 0) {
    uStack_30 = 0;
    FUN_003c1e6c(&uStack_21,param_1[0xd],&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_00353304(param_1 + 0x1e);
  plVar5 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = (long *)param_1[0x1b];
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
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((param_1[0x12] & 1) != 0) {
    FUN_0055293c();
  }
  if ((param_1[0x11] & 1) != 0) {
    FUN_0055293c();
  }
  FUN_0034b418(param_1 + 3);
  return param_1;
}



/* Entry: 00347c48; end: 00347c5b;  */

void FUN_00347c48(void)

{
  FUN_00347b04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00347c5c; end: 00347d23;  */

void FUN_00347c5c(undefined8 param_1,long *param_2,long **param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  long **pplStack_30;
  long *plStack_28;
  
  plVar3 = param_2;
  if (param_2[0x31] == 0) {
    FUN_005535ac(&plStack_28,"call cancelled",0xe);
    param_3 = &plStack_28;
    FUN_00347d24(param_2);
    plVar3 = plStack_28;
    if (((ulong)plStack_28 & 1) != 0) {
      FUN_0055293c();
      plVar3 = plStack_28;
    }
  }
  if (param_2[0xf] != 0) {
    FUN_0033a6ec();
    FUN_0033a774(param_1,param_2[0x10]);
    plStack_38 = plVar3;
    pplStack_30 = param_3;
    (**(code **)(*(long *)param_2[0xf] + 0x50))((long *)param_2[0xf],&plStack_38);
  }
  plVar3 = param_2 + 1;
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
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* Entry: 00347d24; end: 00347e9f;  */

void FUN_00347d24(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  ulong uStack_60;
  undefined ***pppuStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
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
    (**(code **)(*plVar3 + 0x40))
              (plVar3,&uStack_28,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar3 = *(long **)(param_1 + 0xe8);
  if (plVar3 != (long *)0x0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x188);
    ppuStack_38 = &PTR_DAT_009dbcc0;
    ppuStack_48 = &PTR_FUN_009dbd20;
    uVar5 = *param_2;
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
      plVar3 = *(long **)(param_1 + 0xe8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppuStack_50 = &ppuStack_48;
    pppuStack_58 = &ppuStack_38;
    pppuStack_68 = pppuStack_50;
    pppuStack_70 = pppuStack_58;
    uStack_78 = uVar5;
    uStack_60 = uVar5;
    lStack_40 = param_1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_78);
    if ((uStack_78 & 1) != 0) {
      FUN_0055293c();
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if ((uVar5 & 1) != 0) {
      FUN_0055293c(uVar5);
    }
  }
  return;
}



/* Entry: 00347ea0; end: 00347f0f;  */

dword * FUN_00347ea0(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  char *pcVar5;
  char *pcVar6;
  dword *pdVar7;
  int *piVar8;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 2 & 1) == 0) {
      if ((bVar1 >> 1 & 1) == 0) {
        if ((bVar1 >> 3 & 1) == 0) {
          if ((bVar1 >> 4 & 1) == 0) {
            if ((bVar1 >> 5 & 1) == 0) {
              pcVar5 = "return (size_t)-1";
              pcVar6 = 
              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
              ;
              func_0x00338df0("return (size_t)-1",
                              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                              ,0xa74);
              pdVar4 = (dword *)pcVar6;
              pdVar7 = (dword *)pcVar6;
              FUN_00347ea0();
              if (*(long *)(pcVar5 + (long)pdVar4 * 8 + 0x1c0) == 0) {
                *(char **)(pcVar5 + (long)pdVar4 * 8 + 0x1c0) = pcVar6;
                return pdVar4;
              }
              func_0x00771708();
              pdVar7 = *(dword **)pdVar7;
              if (((ulong)pdVar7 & 1) != 0) {
                piVar8 = (int *)((long)pdVar7 - 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                  if (bVar3) {
                    *piVar8 = *piVar8 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              FUN_004007f4();
              if (((ulong)pdVar7 & 1) != 0) {
                FUN_0055293c();
              }
              return pdVar7;
            }
            pdVar4 = (dword *)((long)&MACH_HEADER.cputype + 1);
          }
          else {
            pdVar4 = &MACH_HEADER.cputype;
          }
        }
        else {
          pdVar4 = (dword *)((long)&MACH_HEADER.magic + 3);
        }
      }
      else {
        pdVar4 = (dword *)((long)&MACH_HEADER.magic + 2);
      }
    }
    else {
      pdVar4 = (dword *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    pdVar4 = (dword *)0x0;
  }
  return pdVar4;
}



/* Entry: 00347f10; end: 00347f4f;  */

void FUN_00347f10(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar3 = param_2;
  puVar4 = param_2;
  FUN_00347ea0();
  param_1 = param_1 + (long)puVar3 * 8;
  if (*(long *)(param_1 + 0x1c0) == 0) {
    *(ulong **)(param_1 + 0x1c0) = param_2;
    return;
  }
  func_0x00771708();
  uVar5 = *puVar4;
  if ((uVar5 & 1) != 0) {
    piVar6 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_004007f4();
  if ((uVar5 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00347f50; end: 00347fc3;  */

void FUN_00347f50(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
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
  FUN_004007f4(param_1,&uStack_28,*(undefined8 *)(lVar3 + 0x50));
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00347fc4; end: 00348173;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00347fc4(long param_1,ulong *param_2,code *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = *param_2;
  if (uVar8 == 0) {
    func_0x0077173c();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x348134);
    (*pcVar3)();
  }
  uVar5 = *(ulong *)(param_1 + 0x90);
  if (uVar8 != uVar5) {
    if ((uVar8 & 1) != 0) {
      piVar9 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar8 = *param_2;
    }
    *(ulong *)(param_1 + 0x90) = uVar8;
    if ((uVar5 & 1) != 0) {
      FUN_0055293c();
    }
  }
  lVar12 = 0;
  alStack_f8[1] = 0;
  do {
    lVar11 = param_1 + lVar12 * 8;
    lVar10 = *(long *)(lVar11 + 0x1c0);
    if (lVar10 != 0) {
      plVar6 = (long *)(lVar11 + 0x1c0);
      *(long *)(lVar10 + 0x18) = param_1;
      lVar11 = *plVar6;
      *(code **)(lVar11 + 0x28) = FUN_00347f50;
      *(long *)(lVar11 + 0x30) = lVar11;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      alStack_f8[0] = *plVar6;
      uStack_108 = *param_2;
      if ((uStack_108 & 1) != 0) {
        piVar9 = (int *)(uStack_108 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      alStack_f8[0] = alStack_f8[0] + 0x20;
      pcStack_100 = "PendingBatchesFail";
      FUN_0034accc(alStack_f8 + 1,alStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        FUN_0055293c();
      }
      *plVar6 = 0;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 6);
  iVar4 = (int)alStack_f8 + 8;
  (*param_3)();
  if (iVar4 == 0) {
    FUN_003470dc(alStack_f8 + 1,*(undefined8 *)(param_1 + 0x50));
  }
  else {
    FUN_00346f8c(alStack_f8 + 1);
  }
  plVar6 = alStack_f8 + 1;
  FUN_0034afe4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_0034afe4(alStack_f8 + 1);
  __Unwind_Resume();
  lVar12 = plVar6[3];
  FUN_00371144();
  puVar7 = (undefined8 *)(lVar12 + 0x50);
  func_0x003a6564(puVar7,0);
                    /* WARNING: Could not recover jumptable at 0x00371140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar7)();
  return;
}



/* Entry: 00348174; end: 0034817f;  */

void FUN_00348174(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_00371144();
  puVar2 = (undefined8 *)(lVar1 + 0x50);
  func_0x003a6564(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00371140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)();
  return;
}



/* Entry: 00348180; end: 0034829f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00348180(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_f8;
  char *pcStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [19];
  long lStack_48;
  
  lVar14 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_e0[0] = 0;
  lVar11 = param_1 + 0x1c0;
  do {
    if (*(long *)(lVar11 + lVar14) != 0) {
      *(undefined8 *)(*(long *)(lVar11 + lVar14) + 0x18) = *(undefined8 *)(param_1 + 0xf0);
      lVar9 = *(long *)(lVar11 + lVar14);
      *(code **)(lVar9 + 0x28) = FUN_00348174;
      *(long *)(lVar9 + 0x30) = lVar9;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      uStack_f8 = 0;
      pcStack_f0 = "resuming pending batch from LB call";
      lStack_e8 = *(long *)(lVar11 + lVar14) + 0x20;
      FUN_0034accc(auStack_e0,&lStack_e8,&uStack_f8,&pcStack_f0);
      if ((uStack_f8 & 1) != 0) {
        FUN_0055293c();
      }
      *(undefined8 *)(lVar11 + lVar14) = 0;
    }
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x30);
  plVar8 = *(long **)(param_1 + 0x50);
  FUN_00346f8c(auStack_e0);
  puVar4 = auStack_e0;
  FUN_0034afe4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_0034afe4(auStack_e0);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_130 = FUN_00348174;
  pcStack_108 = FUN_003482a0;
  plVar6 = (long *)puVar5[0xf];
  lStack_128 = lVar11;
  lStack_120 = lVar14;
  puStack_118 = puVar4;
  puStack_110 = &stack0xfffffffffffffff0;
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(plVar8 + 2) >> 6 & 1) != 0) {
      uStack_138 = *(ulong *)(plVar8[1] + 0x98);
      if ((uStack_138 & 1) != 0) {
        piVar10 = (int *)(uStack_138 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar6 + 0x48))(plVar6,&uStack_138);
      if ((uStack_138 & 1) != 0) {
        FUN_0055293c();
      }
    }
    bVar1 = *(byte *)(plVar8 + 2);
    if ((bVar1 & 1) != 0) {
      (**(code **)(*(long *)puVar5[0xf] + 0x10))
                ((long *)puVar5[0xf],*(undefined8 *)plVar8[1],
                 *(undefined4 *)((undefined8 *)plVar8[1] + 1));
      lVar11 = *plVar8;
      puVar5[0x1f] = *(undefined8 *)(plVar8[1] + 0x10);
      puVar5[0x21] = FUN_003485d0;
      puVar5[0x22] = puVar5;
      puVar5[0x23] = 0;
      puVar5[0x24] = lVar11;
      *plVar8 = (long)(puVar5 + 0x20);
      bVar1 = *(byte *)(plVar8 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      (**(code **)(*(long *)puVar5[0xf] + 0x28))
                ((long *)puVar5[0xf],*(undefined8 *)(plVar8[1] + 0x28));
      bVar1 = *(byte *)(plVar8 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      (**(code **)(*(long *)puVar5[0xf] + 0x20))
                ((long *)puVar5[0xf],*(undefined8 *)(plVar8[1] + 0x18));
      bVar1 = *(byte *)(plVar8 + 2);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar11 = plVar8[1];
      puVar5[0x25] = *(undefined8 *)(lVar11 + 0x38);
      uVar12 = *(undefined8 *)(lVar11 + 0x48);
      puVar5[0x27] = FUN_00348660;
      puVar5[0x28] = puVar5;
      puVar5[0x29] = 0;
      puVar5[0x2a] = uVar12;
      *(undefined8 **)(plVar8[1] + 0x48) = puVar5 + 0x26;
      bVar1 = *(byte *)(plVar8 + 2);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      lVar11 = plVar8[1];
      puVar5[0x2b] = *(undefined8 *)(lVar11 + 0x60);
      uVar12 = *(undefined8 *)(lVar11 + 0x78);
      puVar5[0x2d] = FUN_003486fc;
      puVar5[0x2e] = puVar5;
      puVar5[0x2f] = 0;
      puVar5[0x30] = uVar12;
      *(undefined8 **)(plVar8[1] + 0x78) = puVar5 + 0x2c;
    }
  }
  if ((*(byte *)(plVar8 + 2) >> 5 & 1) != 0) {
    lVar11 = plVar8[1];
    uVar12 = *(undefined8 *)(lVar11 + 0x80);
    puVar5[0x32] = *(undefined8 *)(lVar11 + 0x88);
    puVar5[0x31] = uVar12;
    uVar12 = *(undefined8 *)(lVar11 + 0x90);
    puVar5[0x34] = FUN_00348794;
    puVar5[0x35] = puVar5;
    puVar5[0x36] = 0;
    puVar5[0x37] = uVar12;
    *(undefined8 **)(plVar8[1] + 0x90) = puVar5 + 0x33;
  }
  if (puVar5[0x1e] == 0) {
    puVar7 = puVar5 + 0x11;
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      if ((*(byte *)(plVar8 + 2) >> 6 & 1) == 0) {
        FUN_00347f10(puVar5,plVar8);
        if ((*(byte *)(plVar8 + 2) & 1) == 0) {
          FUN_003bb974(puVar5[10],"batch does not include send_initial_metadata");
          return;
        }
        uStack_158 = 0;
        FUN_00348a34(puVar5,&uStack_158);
        if ((uStack_158 & 1) == 0) {
          return;
        }
        FUN_0055293c();
        return;
      }
      FUN_003450b4(puVar7,plVar8[1] + 0x98);
      uStack_148 = *puVar7;
      if ((uStack_148 & 1) != 0) {
        piVar10 = (int *)(uStack_148 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_00347fc4(puVar5,&uStack_148,FUN_00348a2c);
      FUN_0033c494(&uStack_148);
      uStack_150 = *puVar7;
      if ((uStack_150 & 1) != 0) {
        piVar10 = (int *)(uStack_150 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_004007f4(plVar8,&uStack_150,puVar5[10]);
      puVar7 = &uStack_150;
    }
    else {
      if ((uVar13 & 1) != 0) {
        piVar10 = (int *)(uVar13 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar13;
      FUN_004007f4(plVar8,&uStack_140,puVar5[10]);
      puVar7 = &uStack_140;
    }
    FUN_0033c494(puVar7);
  }
  else {
    FUN_00371108(puVar5[0x1e],plVar8);
  }
  return;
}



/* Entry: 003482a0; end: 003485cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003482a0(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar4 = *(long **)(param_1 + 0x78);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
      uStack_38 = *(ulong *)(param_2[1] + 0x98);
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
      (**(code **)(*plVar4 + 0x48))(plVar4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    bVar1 = *(byte *)(param_2 + 2);
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                (*(long **)(param_1 + 0x78),*(undefined8 *)param_2[1],
                 *(undefined4 *)((undefined8 *)param_2[1] + 1));
      lVar6 = *param_2;
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2[1] + 0x10);
      *(code **)(param_1 + 0x108) = FUN_003485d0;
      *(long *)(param_1 + 0x110) = param_1;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(long *)(param_1 + 0x120) = lVar6;
      *param_2 = param_1 + 0x100;
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x28))
                (*(long **)(param_1 + 0x78),*(undefined8 *)(param_2[1] + 0x28));
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x20))
                (*(long **)(param_1 + 0x78),*(undefined8 *)(param_2[1] + 0x18));
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar6 = param_2[1];
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar6 + 0x38);
      uVar7 = *(undefined8 *)(lVar6 + 0x48);
      *(code **)(param_1 + 0x138) = FUN_00348660;
      *(long *)(param_1 + 0x140) = param_1;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = uVar7;
      *(long *)(param_2[1] + 0x48) = param_1 + 0x130;
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      lVar6 = param_2[1];
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(lVar6 + 0x60);
      uVar7 = *(undefined8 *)(lVar6 + 0x78);
      *(code **)(param_1 + 0x168) = FUN_003486fc;
      *(long *)(param_1 + 0x170) = param_1;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = uVar7;
      *(long *)(param_2[1] + 0x78) = param_1 + 0x160;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    lVar6 = param_2[1];
    uVar7 = *(undefined8 *)(lVar6 + 0x80);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(lVar6 + 0x88);
    *(undefined8 *)(param_1 + 0x188) = uVar7;
    uVar7 = *(undefined8 *)(lVar6 + 0x90);
    *(code **)(param_1 + 0x1a0) = FUN_00348794;
    *(long *)(param_1 + 0x1a8) = param_1;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = uVar7;
    *(long *)(param_2[1] + 0x90) = param_1 + 0x198;
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    puVar9 = (ulong *)(param_1 + 0x88);
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      if ((*(byte *)(param_2 + 2) >> 6 & 1) == 0) {
        FUN_00347f10(param_1,param_2);
        if ((*(byte *)(param_2 + 2) & 1) == 0) {
          FUN_003bb974(*(undefined8 *)(param_1 + 0x50),
                       "batch does not include send_initial_metadata");
          return;
        }
        uStack_58 = 0;
        FUN_00348a34(param_1,&uStack_58);
        if ((uStack_58 & 1) == 0) {
          return;
        }
        FUN_0055293c();
        return;
      }
      FUN_003450b4(puVar9,param_2[1] + 0x98);
      uStack_48 = *puVar9;
      if ((uStack_48 & 1) != 0) {
        piVar5 = (int *)(uStack_48 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_00347fc4(param_1,&uStack_48,FUN_00348a2c);
      FUN_0033c494(&uStack_48);
      uStack_50 = *puVar9;
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
      FUN_004007f4(param_2,&uStack_50,*(undefined8 *)(param_1 + 0x50));
      puVar9 = &uStack_50;
    }
    else {
      if ((uVar8 & 1) != 0) {
        piVar5 = (int *)(uVar8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_40 = uVar8;
      FUN_004007f4(param_2,&uStack_40,*(undefined8 *)(param_1 + 0x50));
      puVar9 = &uStack_40;
    }
    FUN_0033c494(puVar9);
  }
  else {
    FUN_00371108(*(long *)(param_1 + 0xf0),param_2);
  }
  return;
}



/* Entry: 003485d0; end: 0034865f;  */

void FUN_003485d0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
            (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf8));
  uVar3 = *(undefined8 *)(param_1 + 0x120);
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
  FUN_00342584(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00348660; end: 003486fb;  */

void FUN_00348660(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_2;
  if (uStack_30 == 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x30))
              (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x128),0);
    uStack_30 = *param_2;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x150);
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
  FUN_00342584(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003486fc; end: 00348793;  */

void FUN_003486fc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(char *)(*(long *)(param_1 + 0x158) + 0x128) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x38))();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x180);
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
  FUN_00342584(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00348794; end: 00348a2b;  */

void FUN_00348794(long param_1,ulong *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  ulong uStack_78;
  char *pcStack_70;
  char *pcStack_68;
  ulong uStack_60;
  char *pcStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined4 uStack_3c;
  char *pcStack_38;
  
  if ((*(long *)(param_1 + 0x78) != 0) || (*(long *)(param_1 + 0xe8) != 0)) {
    pcStack_38 = (char *)0x0;
    uVar6 = *param_2;
    if (uVar6 == 0) {
      puVar8 = *(uint **)(param_1 + 0x188);
      if ((*puVar8 >> 10 & 1) == 0) {
        uVar3 = 2;
LAB_0034887c:
        if ((*puVar8 >> 0xf & 1) == 0) {
          lVar5 = 0;
          uVar6 = 0;
        }
        else if (*(long *)(puVar8 + 0x4c) == 0) {
          lVar5 = (long)puVar8 + 0x139;
          uVar6 = (ulong)(byte)puVar8[0x4e];
        }
        else {
          uVar6 = *(ulong *)(puVar8 + 0x4e);
          lVar5 = *(long *)(puVar8 + 0x50);
        }
        FUN_00552acc(&pcStack_58,uVar3,lVar5,uVar6);
        pcStack_68 = pcStack_58;
        if (pcStack_58 != (char *)0x0) {
          pcStack_38 = pcStack_58;
        }
        goto LAB_003488c4;
      }
      uVar3 = puVar8[0x62];
      if (uVar3 != 0) goto LAB_0034887c;
      pcStack_70 = (char *)0x0;
LAB_003488cc:
      bVar9 = true;
    }
    else {
      pcStack_58 = (char *)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      if ((uVar6 & 1) != 0) {
        piVar7 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar9) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_60 = uVar6;
      FUN_003fb7d8(&uStack_60,*(undefined8 *)(param_1 + 0x38),&uStack_3c,&pcStack_58,0,0);
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
      uVar6 = uStack_50;
      pcVar2 = pcStack_58;
      if (-1 < (long)uStack_48) {
        uVar6 = uStack_48 >> 0x38;
        pcVar2 = (char *)&pcStack_58;
      }
      FUN_00552acc(&pcStack_68,uStack_3c,pcVar2,uVar6);
      if (pcStack_68 != (char *)0x0) {
        pcStack_38 = pcStack_68;
      }
      if ((long)uStack_48 < 0) {
        __ZdlPv(pcStack_58);
      }
LAB_003488c4:
      pcStack_70 = pcStack_68;
      if (((ulong)pcStack_68 & 1) == 0) goto LAB_003488cc;
      pcStack_68 = pcStack_68 + -1;
      do {
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar9) {
          *(int *)pcStack_68 = *(int *)pcStack_68 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar9 = false;
    }
    pcVar2 = pcStack_70;
    FUN_00347d24(param_1,&pcStack_70);
    if (!bVar9) {
      FUN_0055293c(pcVar2);
      FUN_0055293c(pcVar2);
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x90);
  uStack_78 = *param_2;
  if (uVar6 == 0) goto LAB_0034896c;
  if (uVar6 == uStack_78) {
LAB_00348950:
    *(undefined8 *)(param_1 + 0x90) = 0;
    pcStack_58 = segment_command_00000020.segname + 0xe;
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  else {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar9) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar6 = *(ulong *)(param_1 + 0x90);
    }
    *param_2 = uVar6;
    if ((uStack_78 & 1) != 0) {
      FUN_0055293c();
    }
    uVar6 = *(ulong *)(param_1 + 0x90);
    if (uVar6 != 0) goto LAB_00348950;
  }
  uStack_78 = *param_2;
LAB_0034896c:
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  if ((uStack_78 & 1) != 0) {
    piVar7 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar9) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&pcStack_58,uVar4,&uStack_78);
  if ((uStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00348a2c; end: 00348a33;  */

undefined8 FUN_00348a2c(void)

{
  return 0;
}



/* Entry: 00348a34; end: 00348af7;  */

void FUN_00348a34(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0xe0;
  func_0x00339d8c(lVar1);
  lVar4 = param_1;
  FUN_00345bd4(param_1,param_2);
  func_0x00339da8(lVar1);
  if ((int)lVar4 != 0) {
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar6;
    FUN_00348f18(param_1,&uStack_38);
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  return;
}



/* Entry: 00348af8; end: 00348b27;  */

ulong * FUN_00348af8(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00348b28; end: 00348b2f;  */

void FUN_00348b28(void)

{
  return;
}



/* Entry: 00348b30; end: 00348d97;  */

long * FUN_00348b30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  ulong uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_f0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = *(long **)(param_1 + 0x18);
  plStack_d8 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uStack_d0 = *(undefined8 *)(param_1 + 0x60);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_1 + 0x40);
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x50),*(undefined1 (*) [16])(param_1 + 0x50),8,
                    1);
  uStack_88 = auVar8._8_8_;
  uStack_90 = auVar8._0_8_;
  uStack_e0 = 0;
  uStack_50 = 0;
  plStack_c8 = *(long **)(param_1 + 0x18);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = 0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_80 = (long *)0x0;
  uStack_a8 = 0;
  uStack_78 = uStack_d0;
  uStack_48 = uStack_a0;
  uStack_40 = uStack_98;
  uStack_38 = uStack_90;
  uStack_30 = uStack_88;
  FUN_00370d48(auStack_e8,&plStack_d8,&uStack_e0);
  FUN_00348d98((undefined8 *)(param_1 + 0xf0),auStack_e8);
  FUN_00353304(auStack_e8);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c8) {
    do {
      lVar5 = *plStack_c8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_c8,0x10);
      if (bVar3) {
        *plStack_c8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plStack_c8[1])();
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_d8 + 8))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x68);
  if (plVar7 != (long *)0x0) {
    func_0x0037119c(*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (uStack_e0 == 0) {
    FUN_00348180(param_1);
    puVar4 = (ulong *)plVar7;
  }
  else {
    uStack_f0 = uStack_e0;
    if ((uStack_e0 & 1) != 0) {
      piVar6 = (int *)(uStack_e0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00347fc4(param_1,&uStack_f0,FUN_00348e38);
    FUN_0033c494(&uStack_f0);
  }
  if ((uStack_e0 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar5 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar7 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_0033c494(&uStack_f0);
  FUN_0033c494(&uStack_e0);
  FUN_00348de0(&plStack_80);
  __Unwind_Resume();
  lVar5 = *puVar4;
  if (*plVar7 != 0) {
    func_0x003711f8();
  }
  *plVar7 = lVar5;
  *puVar4 = 0;
  return plVar7;
}



/* Entry: 00348d98; end: 00348ddf;  */

long * FUN_00348d98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != 0) {
    func_0x003711f8();
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 00348de0; end: 00348e37;  */

long * FUN_00348de0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0034b418(param_1 + 2);
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 00348e38; end: 00348e3f;  */

undefined8 FUN_00348e38(void)

{
  return 1;
}



/* Entry: 00348e40; end: 00348f17;  */

void FUN_00348e40(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_28;
  
  if ((char)param_1[0x19] == '\0') {
    *(undefined1 *)(param_1 + 0x19) = 1;
    lVar5 = param_1[2];
    lVar4 = param_1[0xc];
    lVar6 = *(long *)(lVar5 + 0x128);
    param_1[0x17] = (long)param_1;
    param_1[0x18] = lVar6;
    *(long **)(lVar5 + 0x128) = param_1 + 0x17;
    FUN_003c3d80(lVar4,*(undefined8 *)(lVar5 + 0x60));
    lVar4 = 0x28;
    __Znwm();
    plVar1 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_28 = param_1;
    FUN_0035302c(lVar4,&plStack_28);
    param_1[0x1a] = lVar4;
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
  }
  return;
}



/* Entry: 00348f18; end: 00348fbb;  */

long * FUN_00348f18(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  ulong uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar7 = (long *)*param_2;
  if (plVar7 != (long *)0x0) {
    if (((ulong)plVar7 & 1) != 0) {
      piVar6 = (int *)((long)plVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_28 = plVar7;
    FUN_00347fc4(param_1,&plStack_28,FUN_00348e38);
    if (((ulong)plVar7 & 1) != 0) {
      FUN_0055293c(plVar7);
      param_1 = plVar7;
    }
    return param_1;
  }
  (**(code **)(*(long *)param_1[0xe] + 0x18))();
  puVar4 = &uStack_f0;
  plStack_28 = *(long **)PTR____stack_chk_guard_00999f88;
  plVar7 = (long *)param_1[3];
  plStack_d8 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  lStack_d0 = param_1[0xc];
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_a0 = param_1[7];
  lStack_98 = param_1[8];
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_1 + 10),*(undefined1 (*) [16])(param_1 + 10),8,1);
  uStack_88 = auVar8._8_8_;
  uStack_90 = auVar8._0_8_;
  uStack_e0 = 0;
  uStack_50 = 0;
  plStack_c8 = (long *)param_1[3];
  lStack_c0 = param_1[4];
  lStack_b0 = param_1[6];
  lStack_b8 = param_1[5];
  uStack_68 = 0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_80 = (long *)0x0;
  uStack_a8 = 0;
  lStack_78 = lStack_d0;
  lStack_48 = lStack_a0;
  lStack_40 = lStack_98;
  uStack_38 = uStack_90;
  uStack_30 = uStack_88;
  FUN_00370d48(auStack_e8,&plStack_d8,&uStack_e0);
  FUN_00348d98(param_1 + 0x1e,auStack_e8);
  FUN_00353304(auStack_e8);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c8) {
    do {
      lVar5 = *plStack_c8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_c8,0x10);
      if (bVar3) {
        *plStack_c8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plStack_c8[1])();
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_d8 + 8))();
    }
  }
  plVar7 = (long *)param_1[0xd];
  if (plVar7 != (long *)0x0) {
    func_0x0037119c(param_1[0x1e]);
    param_1[0xd] = 0;
  }
  if (uStack_e0 == 0) {
    FUN_00348180(param_1);
    puVar4 = (ulong *)plVar7;
  }
  else {
    uStack_f0 = uStack_e0;
    if ((uStack_e0 & 1) != 0) {
      piVar6 = (int *)(uStack_e0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00347fc4(param_1,&uStack_f0,FUN_00348e38);
    FUN_0033c494(&uStack_f0);
  }
  if ((uStack_e0 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar5 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar7 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 8))();
    }
  }
  if (*(long **)PTR____stack_chk_guard_00999f88 == plStack_28) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_0033c494(&uStack_f0);
  FUN_0033c494(&uStack_e0);
  FUN_00348de0(&plStack_80);
  __Unwind_Resume();
  lVar5 = *puVar4;
  if (*plVar7 != 0) {
    func_0x003711f8();
  }
  *plVar7 = lVar5;
  *puVar4 = 0;
  return plVar7;
}



/* Entry: 00348fbc; end: 00348fbf;  */

void FUN_00348fbc(void)

{
  return;
}



/* Entry: 00348fc0; end: 003490eb;  */

long FUN_00348fc0(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x38;
  FUN_0034a050(&lStack_28);
  func_0x003499b4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 003490ec; end: 0034916b;  */

undefined8 * FUN_003490ec(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 * 0x68;
    do {
      FUN_0034916c(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -0x68;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 0034916c; end: 003491ff;  */

undefined1  [16]
FUN_0034916c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_00349200(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_00349398(alStack_58,param_1,param_4);
    FUN_00349400(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x00349f6c(alStack_58,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 00349200; end: 00349397;  */

long * FUN_00349200(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 + 1 != param_2) {
    plVar6 = param_1 + 2;
    plVar2 = plVar6;
    FUN_003494f0(plVar6,param_5,param_2 + 4);
    if ((int)plVar2 == 0) {
      plVar2 = plVar6;
      FUN_003494f0(plVar6,param_2 + 4,param_5);
      if ((int)plVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar5 = param_2 + 1;
      plVar4 = (long *)*plVar5;
      plVar2 = param_2;
      plVar3 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar2[2];
          bVar1 = (long *)*plVar7 != plVar2;
          plVar2 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 == param_1 + 1) {
LAB_00349344:
        if (plVar4 != (long *)0x0) {
          *param_3 = (long)plVar7;
          return plVar7;
        }
        *param_3 = (long)param_2;
        return plVar5;
      }
      FUN_003494f0(plVar6,param_5,plVar7 + 4);
      if ((int)plVar6 != 0) {
        plVar4 = (long *)*plVar5;
        goto LAB_00349344;
      }
      goto FUN_00349454;
    }
  }
  plVar6 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar2 = param_1 + 2;
    plVar3 = param_2;
    plVar4 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar6 = (long *)plVar3[2];
        bVar1 = (long *)*plVar6 == plVar3;
        plVar3 = plVar6;
      } while (bVar1);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)plVar6[1];
      } while ((long *)plVar6[1] != (long *)0x0);
    }
    FUN_003494f0(plVar2,plVar6 + 4,param_5);
    if ((int)plVar2 == 0) {
FUN_00349454:
      plVar2 = param_1 + 1;
      plVar6 = plVar2;
      if ((long *)*plVar2 != (long *)0x0) {
        param_1 = param_1 + 2;
        plVar3 = (long *)*plVar2;
        do {
          while( true ) {
            plVar2 = plVar3;
            plVar3 = param_1;
            FUN_003494f0(param_1,param_5,plVar2 + 4);
            if ((int)plVar3 == 0) break;
            plVar3 = (long *)*plVar2;
            plVar6 = plVar2;
            if ((long *)*plVar2 == (long *)0x0) goto LAB_003494d4;
          }
          plVar3 = param_1;
          FUN_003494f0(param_1,plVar2 + 4,param_5);
          if ((int)plVar3 == 0) break;
          plVar6 = plVar2 + 1;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
LAB_003494d4:
      *param_3 = (long)plVar2;
      return plVar6;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar6;
    param_2 = plVar6 + 1;
  }
  return param_2;
}



/* Entry: 00349398; end: 003493ff;  */

void FUN_00349398(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x88;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00349580(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 00349400; end: 00349453;  */

void FUN_00349400(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 00349454; end: 003494ef;  */

long * FUN_00349454(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_003494f0(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_003494d4;
      }
      lVar2 = param_1;
      FUN_003494f0(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_003494d4:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 003494f0; end: 00349557;  */

bool FUN_003494f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar6 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar1 = (undefined8 *)*param_3;
  uVar5 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar2 = uVar5;
  if (uVar4 <= uVar5) {
    uVar2 = uVar4;
  }
  _memcmp(puVar6,puVar1,uVar2);
  bVar3 = uVar4 < uVar5;
  if ((int)puVar6 != 0) {
    bVar3 = (int)puVar6 < 0;
  }
  return bVar3;
}



/* Entry: 00349558; end: 0034957f;  */

dword * FUN_00349558(void)

{
  dword *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  __ZNSt20bad_array_new_lengthC1Ev();
  puVar2 = (undefined8 *)PTR___ZTISt20bad_array_new_length_00998d50;
  ___cxa_throw();
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    FUN_002971d4(pdVar1,*puVar2,puVar2[1]);
  }
  else {
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    *(undefined8 *)(pdVar1 + 4) = puVar2[2];
    *(undefined8 *)(pdVar1 + 2) = uVar4;
    *(undefined8 *)pdVar1 = uVar3;
  }
  FUN_003495f4(pdVar1 + 6,puVar2 + 3);
  return pdVar1;
}



/* Entry: 00349580; end: 003495f3;  */

undefined8 * FUN_00349580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  FUN_003495f4(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 003495f4; end: 0034968f;  */

undefined4 * FUN_003495f4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_00349690();
  return param_1;
}



/* Entry: 00349690; end: 00349707;  */

void FUN_00349690(int *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  iVar2 = *param_2;
  *param_1 = iVar2;
  if (iVar2 - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
              (param_1 + 2,param_2 + 2);
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 != 6 || param_1 == param_2) {
      return;
    }
    plVar1 = (long *)(param_1 + 0xe);
    lVar15 = *(long *)(param_2 + 0xe);
    lVar7 = *(long *)(param_2 + 0x10);
    lVar12 = lVar7 - lVar15 >> 4;
    uVar8 = lVar12 * -0x3333333333333333;
    plVar5 = (long *)(param_1 + 0x12);
    if ((ulong)((*plVar5 - *plVar1 >> 4) * -0x3333333333333333) < uVar8) {
      FUN_00349c88(plVar1);
      if (0x333333333333333 < uVar8) {
        plVar6 = plVar1;
        FUN_00349f14();
        *(long *)(param_1 + 0x10) = lVar15;
        __Unwind_Resume();
        *(ulong *)(param_1 + 0x10) = uVar8;
        __Unwind_Resume();
        pcStack_48 = FUN_00349c88;
        lVar15 = *plVar6;
        if (lVar15 != 0) {
          lVar12 = plVar6[1];
          lVar7 = lVar15;
          plStack_60 = plVar5;
          plStack_58 = plVar1;
          puStack_50 = &stack0xfffffffffffffff0;
          if (lVar12 != lVar15) {
            do {
              lVar12 = lVar12 + -0x50;
              FUN_00349e68(plVar6 + 2,lVar12);
            } while (lVar12 != lVar15);
            lVar7 = *plVar6;
          }
          plVar6[1] = lVar15;
          __ZdlPv(lVar7);
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
        }
        return;
      }
      lVar11 = *(long *)(param_1 + 0x12) - *plVar1 >> 4;
      uVar13 = lVar11 * -0x6666666666666666;
      if (uVar13 < uVar8 || uVar13 + lVar12 * 0x3333333333333333 == 0) {
        uVar13 = uVar8;
      }
      if (0x199999999999998 < (ulong)(lVar11 * -0x3333333333333333)) {
        uVar13 = 0x333333333333333;
      }
      FUN_00349cf4(plVar1,uVar13);
      FUN_00349d44(plVar5,lVar15,lVar7,*(undefined8 *)(param_1 + 0x10));
    }
    else {
      lVar12 = *(long *)(param_1 + 0x10) - *plVar1 >> 4;
      if (uVar8 <= (ulong)(lVar12 * -0x3333333333333333)) {
        FUN_00349eb8(lVar15);
        lVar15 = *(long *)(param_1 + 0x10);
        while (lVar15 != lVar7) {
          lVar15 = lVar15 + -0x50;
          FUN_00349e68(plVar5,lVar15);
        }
        *(long *)(param_1 + 0x10) = lVar7;
        return;
      }
      lVar12 = lVar15 + lVar12 * 0x10;
      FUN_00349eb8(lVar15,lVar12);
      FUN_00349d44(plVar5,lVar12,lVar7,*(undefined8 *)(param_1 + 0x10));
    }
    *(long **)(param_1 + 0x10) = plVar5;
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  plVar1 = (long *)(param_1 + 8);
  piVar9 = *(int **)(param_2 + 8);
  param_2 = param_2 + 10;
  if (*(long *)(param_1 + 0xc) != 0) {
    puVar10 = (undefined1 *)*plVar1;
    plVar5 = (long *)(param_1 + 10);
    *plVar1 = (long)plVar5;
    *(undefined8 *)(*plVar5 + 0x10) = 0;
    *plVar5 = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    lVar15 = *(long *)((long)puVar10 + 8);
    if (lVar15 != 0) {
      puVar10 = (undefined1 *)lVar15;
    }
    plStack_60 = plVar1;
    plStack_58 = (long *)puVar10;
    puStack_50 = puVar10;
    if ((puVar10 != (undefined1 *)0x0) &&
       (lVar15 = (long)puVar10, FUN_0034990c(), plStack_58 = (long *)lVar15, piVar9 != param_2)) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  ((long)puVar10 + 0x20,piVar9 + 8);
        FUN_00349690((long)puVar10 + 0x38,piVar9 + 0xe);
        puVar10 = puStack_50;
        plVar5 = plVar1;
        FUN_00349894(plVar1,&pcStack_48,(long)puStack_50 + 0x20);
        FUN_00349400(plVar1,pcStack_48,plVar5,puVar10);
        puStack_50 = (undefined1 *)plStack_58;
        if (plStack_58 != (long *)0x0) {
          FUN_0034990c();
        }
        piVar3 = *(int **)(piVar9 + 2);
        piVar14 = piVar9;
        if (*(int **)(piVar9 + 2) == (int *)0x0) {
          do {
            piVar9 = *(int **)(piVar14 + 4);
            bVar4 = *(int **)piVar9 != piVar14;
            piVar14 = piVar9;
          } while (bVar4);
        }
        else {
          do {
            piVar9 = piVar3;
            piVar3 = *(int **)piVar9;
          } while (*(int **)piVar9 != (int *)0x0);
        }
        puVar10 = puStack_50;
      } while (puStack_50 != (undefined1 *)0x0 && piVar9 != param_2);
    }
    FUN_00349960(&plStack_60);
  }
  while (piVar9 != param_2) {
    FUN_00349a98(plVar1,piVar9 + 8);
    piVar3 = *(int **)(piVar9 + 2);
    piVar14 = piVar9;
    if (*(int **)(piVar9 + 2) == (int *)0x0) {
      do {
        piVar9 = *(int **)(piVar14 + 4);
        bVar4 = *(int **)piVar9 != piVar14;
        piVar14 = piVar9;
      } while (bVar4);
    }
    else {
      do {
        piVar9 = piVar3;
        piVar3 = *(int **)piVar9;
      } while (*(int **)piVar9 != (int *)0x0);
    }
  }
  return;
}



/* Entry: 00349708; end: 00349893;  */

void FUN_00349708(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar2;
    *(undefined8 *)(*plVar2 + 0x10) = 0;
    *plVar2 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    plStack_60 = param_1;
    lStack_58 = lVar3;
    lStack_50 = lVar3;
    if ((lVar3 != 0) && (lVar4 = lVar3, FUN_0034990c(), lStack_58 = lVar4, param_2 != param_3)) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar3 + 0x20,param_2 + 4);
        FUN_00349690(lVar3 + 0x38,param_2 + 7);
        lVar3 = lStack_50;
        plVar2 = param_1;
        FUN_00349894(param_1,&uStack_48,lStack_50 + 0x20);
        FUN_00349400(param_1,uStack_48,plVar2,lVar3);
        lStack_50 = lStack_58;
        if (lStack_58 != 0) {
          FUN_0034990c();
        }
        plVar2 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar3 = lStack_50;
      } while (lStack_50 != 0 && param_2 != param_3);
    }
    FUN_00349960(&plStack_60);
  }
  while (param_2 != param_3) {
    FUN_00349a98(param_1,param_2 + 4);
    plVar2 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar2;
        plVar2 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 00349894; end: 0034990b;  */

long * FUN_00349894(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar1 = (long *)*plVar4;
    do {
      while (plVar4 = plVar1, lVar2 = param_1 + 0x10,
            FUN_003494f0(param_1 + 0x10,param_3,plVar4 + 4), (int)lVar2 == 0) {
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar3 = plVar4 + 1;
          goto LAB_003498f8;
        }
      }
      plVar3 = plVar4;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_003498f8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 0034990c; end: 0034995f;  */

void FUN_0034990c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 00349960; end: 00349a97;  */

undefined8 * FUN_00349960(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x003499b4(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    func_0x003499b4(*param_1);
  }
  return param_1;
}



/* Entry: 00349a98; end: 00349b17;  */

long FUN_00349a98(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_00349398(alStack_38);
  uVar2 = param_1;
  FUN_00349894(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_00349400(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  func_0x00349f6c(alStack_38,0);
  return lVar1;
}



/* Entry: 00349b18; end: 00349c87;  */

void FUN_00349b18(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1 + 2;
  if ((ulong)((*plVar1 - *param_1 >> 4) * -0x3333333333333333) < param_4) {
    FUN_00349c88(param_1);
    if (0x333333333333333 < param_4) {
      plVar1 = param_1;
      FUN_00349f14();
      param_1[1] = param_2;
      __Unwind_Resume();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        lVar5 = plVar1[1];
        lVar2 = lVar3;
        if (lVar5 != lVar3) {
          do {
            lVar5 = lVar5 + -0x50;
            FUN_00349e68(plVar1 + 2,lVar5);
          } while (lVar5 != lVar3);
          lVar2 = *plVar1;
        }
        plVar1[1] = lVar3;
        __ZdlPv(lVar2);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar3 * -0x6666666666666666;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x199999999999998 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar4 = 0x333333333333333;
    }
    FUN_00349cf4(param_1,uVar4);
    FUN_00349d44(plVar1,param_2,param_3,param_1[1]);
  }
  else {
    lVar3 = param_1[1] - *param_1 >> 4;
    if (param_4 <= (ulong)(lVar3 * -0x3333333333333333)) {
      FUN_00349eb8(param_2);
      lVar3 = param_1[1];
      while (lVar3 != param_3) {
        lVar3 = lVar3 + -0x50;
        FUN_00349e68(plVar1,lVar3);
      }
      param_1[1] = param_3;
      return;
    }
    lVar3 = param_2 + lVar3 * 0x10;
    FUN_00349eb8(param_2,lVar3);
    FUN_00349d44(plVar1,lVar3,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 00349c88; end: 00349cf3;  */

void FUN_00349c88(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x50;
        FUN_00349e68(param_1 + 2,lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 00349cf4; end: 00349d43;  */

long * FUN_00349cf4(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < 0x333333333333334) {
    plVar1 = param_1 + 2;
    FUN_00349f28();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 10);
    return plVar1;
  }
  FUN_00349f14();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_003495f4(param_4,param_2);
    param_4 = plStack_58 + 10;
  }
  uStack_68 = 1;
  FUN_00349de4(&plStack_80);
  return param_4;
}



/* Entry: 00349d44; end: 00349de3;  */

long FUN_00349d44(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_003495f4(param_4,param_2);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  FUN_00349de4(&uStack_60);
  return param_4;
}



/* Entry: 00349de4; end: 00349e17;  */

long FUN_00349de4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_00349e18(param_1);
  }
  return param_1;
}



/* Entry: 00349e18; end: 00349e67;  */

void FUN_00349e18(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1[2];
  lVar3 = *(long *)param_1[1];
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      lVar1 = lVar1 + -0x50;
      FUN_00349e68(uVar2,lVar1);
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 00349e68; end: 00349eb7;  */

void FUN_00349e68(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  lStack_28 = param_2 + 0x38;
  FUN_0034a050(&lStack_28);
  func_0x003499b4(param_2 + 0x20,*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 8));
  }
  return;
}



/* Entry: 00349eb8; end: 00349f13;  */

undefined1  [16] FUN_00349eb8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_00349690(param_3,param_1);
    param_3 = param_3 + 0x50;
    lVar1 = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 00349f14; end: 00349f27;  */

void FUN_00349f14(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < 0x333333333333334) {
    __Znwm(param_2 * 0x50);
    return;
  }
  FUN_00349558();
  uVar2 = *(ulong *)pcVar1;
  *(ulong *)pcVar1 = param_2;
  if (uVar2 != 0) {
    if ((char)*(ulong *)((long)pcVar1 + 0x10) != '\0') {
      func_0x00349a38(uVar2 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(uVar2);
    return;
  }
  return;
}



/* Entry: 00349f28; end: 00349faf;  */

void FUN_00349f28(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 < 0x333333333333334) {
    __Znwm(param_2 * 0x50);
    return;
  }
  FUN_00349558();
  uVar1 = *param_1;
  *param_1 = param_2;
  if (uVar1 != 0) {
    if ((char)param_1[2] != '\0') {
      func_0x00349a38(uVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(uVar1);
    return;
  }
  return;
}



/* Entry: 00349fb0; end: 0034a04f;  */

long FUN_00349fb0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_003495f4(param_4,param_2);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  FUN_00349de4(&uStack_60);
  return param_4;
}



/* Entry: 0034a050; end: 0034a0d3;  */

void FUN_0034a050(long *param_1)

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
        lVar2 = lVar2 + -0x50;
        FUN_00349e68(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 0034a0d4; end: 0034a143;  */

undefined8 FUN_0034a0d4(undefined8 param_1)

{
  ulong uStack_28;
  
  FUN_00552acc(&uStack_28,2,"",0);
  FUN_0034a144(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0034a144; end: 0034a19b;  */

long * FUN_0034a144(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 0034a19c; end: 0034a1eb;  */

ulong * FUN_0034a19c(ulong *param_1)

{
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_0034a1ec(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0034a1ec; end: 0034a25b;  */

void FUN_0034a1ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0xa8;
        FUN_0034a25c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar2);
    return;
  }
  return;
}



/* Entry: 0034a25c; end: 0034a293;  */

long FUN_0034a25c(long param_1)

{
  FUN_003a2a64(*(undefined8 *)(param_1 + 0x88));
  FUN_0034a294(param_1 + 0x90,*(undefined8 *)(param_1 + 0x98));
  return param_1;
}



/* Entry: 0034a294; end: 0034a333;  */

void FUN_0034a294(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_0034a294(param_1,*param_2);
    FUN_0034a294(param_1,param_2[1]);
    plVar1 = (long *)param_2[5];
    param_2[5] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 0034a334; end: 0034a3d3;  */

void FUN_0034a334(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    FUN_0034a480();
    uVar1 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = uVar1;
    param_1[3] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = uVar1;
    param_1[3] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar1 = *param_1;
    if (uVar1 != 0) {
      *param_1 = 0;
      if ((uVar1 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  return;
}



/* Entry: 0034a3d4; end: 0034a47f;  */

void FUN_0034a3d4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_0034a1ec(&puStack_28);
  }
  puVar1 = (ulong *)*param_2;
  *param_2 = 0x36;
  puVar2 = (ulong *)*param_1;
  if (puVar1 == puVar2) {
    puStack_28 = puVar1;
    if (((ulong)puVar1 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_1 = (ulong)puVar1;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar2 & 1) == 0) goto LAB_0034a448;
    FUN_0055293c(puVar2);
  }
  puVar1 = (ulong *)*param_1;
LAB_0034a448:
  if (puVar1 == (ulong *)0x0) {
    FUN_0055142c(param_1);
  }
  return;
}



/* Entry: 0034a480; end: 0034a4db;  */

void FUN_0034a480(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xa8;
        FUN_0034a25c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 0034a4dc; end: 0034a547;  */

ulong * FUN_0034a4dc(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong *puStack_28;
  
  FUN_003a2a64(param_1[8]);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
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
    FUN_0034a1ec(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0034a548; end: 0034a61b;  */

void FUN_0034a548(void)

{
  return;
}



/* Entry: 0034a61c; end: 0034a6b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0034a61c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  long alStack_38 [3];
  
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_48 = **(undefined8 **)(param_1 + 8);
  uStack_68 = 0;
  uStack_60 = *(undefined8 *)(lVar1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  uStack_88 = *(undefined8 *)(lVar1 + 0x30);
  uStack_80 = 0;
  uStack_50 = *(undefined8 *)(lVar1 + 0x38);
  lStack_78 = *(long *)(lVar1 + 0x40);
  alStack_38[0] = *(long *)(lStack_78 + 0x40) + 0x28;
  alStack_38[1] = 0;
  uStack_39 = 0;
  lStack_70 = lVar1;
  uStack_58 = uVar2;
  alStack_38[2] = param_2;
  FUN_003433cc(uVar2,&uStack_48,&uStack_88,alStack_38 + 2,alStack_38 + 1,alStack_38,&uStack_39);
  puVar3 = *(undefined8 **)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  return;
}



/* Entry: 0034a6b8; end: 0034a7cf;  */

void FUN_0034a6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  lStack_38 = 0;
  lVar6 = puVar5[9];
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0xf0) == 0) {
      lVar6 = 0;
    }
    else {
      FUN_003711c4();
      lVar6 = *(long *)(lVar6 + 0xf0);
      if (lStack_38 != 0) {
        func_0x003711f8();
      }
    }
    uStack_40 = 0;
    lStack_38 = lVar6;
    FUN_00353304(&uStack_40);
  }
  plVar3 = (long *)*puVar5;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  puVar4 = (undefined8 *)puVar5[9];
  puVar5[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  if (lStack_38 == 0) {
    uStack_48 = 0;
    FUN_003c1e6c(&uStack_40,param_3,&uStack_48);
    FUN_0033c494(&uStack_48);
  }
  else {
    func_0x0037119c(lStack_38,param_3);
  }
  FUN_00353304(&lStack_38);
  return;
}



/* Entry: 0034a7d0; end: 0034a847;  */

void FUN_0034a7d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x007717a8();
  }
  else if ((undefined **)*param_2 == &PTR_DAT_009dbac8) {
    puVar3 = (undefined8 *)param_2[1];
    piVar1 = *(int **)(param_3 + 8);
    FUN_003a28d0(piVar1,"grpc.internal.client_channel");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(piVar1 + 4);
    }
    *puVar3 = uVar2;
    *param_1 = 0;
    return;
  }
  func_0x007717dc();
  return;
}



/* Entry: 0034a848; end: 0034a84f;  */

void FUN_0034a848(void)

{
  return;
}



/* Entry: 0034a850; end: 0034a8db;  */

void FUN_0034a850(long param_1,long param_2)

{
  uint uVar1;
  long lStack_30;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      return;
    }
  }
  else if (uVar1 == 0xffffffff) {
    (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return;
  }
  lStack_30 = param_1;
  (*(code *)(&PTR_FUN_009dbc00)[uVar1])(&lStack_30,param_1,param_2);
  return;
}



/* Entry: 0034a8dc; end: 0034a943;  */

void FUN_0034a8dc(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    plVar3 = param_2 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0034a940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 0034a944; end: 0034a947;  */

void FUN_0034a944(void)

{
  return;
}



/* Entry: 0034a948; end: 0034a967;  */

void FUN_0034a948(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0034a968; end: 0034a987;  */

void FUN_0034a968(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0034a988; end: 0034a9bb;  */

long * FUN_0034a988(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_28;
  
  plVar4 = (long *)*param_1;
  if ((int)plVar4[2] != 0) {
    if (*(uint *)(plVar4 + 2) != 0xffffffff) {
      (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(plVar4 + 2)])((long)&uStack_28 + 7,plVar4);
    }
    *plVar4 = 0;
    *plVar4 = *param_3;
    lVar5 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    plVar4[1] = lVar5;
    *(undefined4 *)(plVar4 + 2) = 0;
    return plVar4;
  }
  lVar5 = *param_3;
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      uStack_28 = param_2;
      (**(code **)(*plVar4 + 8))();
      param_2 = uStack_28;
    }
  }
  *param_2 = lVar5;
  lVar5 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar4 = (long *)param_2[1];
  param_2[1] = lVar5;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0034aa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 0034a9bc; end: 0034aa5b;  */

long * FUN_0034a9bc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_28;
  
  if ((int)param_1[2] != 0) {
    if (*(uint *)(param_1 + 2) != 0xffffffff) {
      (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 2)])((long)&uStack_28 + 7,param_1);
    }
    *param_1 = 0;
    *param_1 = *param_3;
    lVar5 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    param_1[1] = lVar5;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
  }
  lVar5 = *param_3;
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      uStack_28 = param_2;
      (**(code **)(*plVar4 + 8))();
      param_2 = uStack_28;
    }
  }
  *param_2 = lVar5;
  lVar5 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar4 = (long *)param_2[1];
  param_2[1] = lVar5;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0034aa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 0034aa5c; end: 0034aacb;  */

undefined8 * FUN_0034aa5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 2)])(&uStack_21,param_1);
  }
  *param_1 = 0;
  *param_1 = *param_2;
  uVar1 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 0034aacc; end: 0034ab23;  */

long FUN_0034aacc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return param_1;
}



/* Entry: 0034ab24; end: 0034ab5f;  */

ulong * FUN_0034ab24(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  undefined1 uStack_21;
  
  if ((int)param_1[2] != 2) {
    if ((uint)param_1[2] != 0xffffffff) {
      (*(code *)(&PTR_FUN_009dbbe0)[(uint)param_1[2]])(&uStack_21,param_1);
    }
    *param_1 = *param_3;
    *param_3 = 0x36;
    *(undefined4 *)(param_1 + 2) = 2;
    return param_1;
  }
  puVar4 = (ulong *)*param_2;
  if ((ulong *)*param_3 != puVar4) {
    *param_2 = *param_3;
    *param_3 = 0x36;
    if (((ulong)puVar4 & 1) != 0) {
      puVar5 = (ulong *)((long)puVar4 - 1);
      if ((int)*puVar5 != 1) {
        do {
          iVar3 = (int)*puVar5 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(int *)puVar5 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 != 0) {
          return puVar4;
        }
      }
      plVar6 = *(long **)((long)puVar4 + 0x1f);
      *(undefined8 *)((long)puVar4 + 0x1f) = 0;
      if (plVar6 != (long *)0x0) {
        if (*plVar6 != 0) {
          FUN_00553a40(plVar6);
        }
        __ZdlPv(plVar6);
      }
      if (*(char *)((long)puVar4 + 0x1e) < '\0') {
        __ZdlPv(*(undefined8 *)((long)puVar4 + 7));
      }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(puVar5);
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 0034ab60; end: 0034abcb;  */

undefined8 * FUN_0034ab60(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 2)])(&uStack_21,param_1);
  }
  *param_1 = *param_2;
  *param_2 = 0x36;
  *(undefined4 *)(param_1 + 2) = 2;
  return param_1;
}



/* Entry: 0034abcc; end: 0034ac07;  */

ulong * FUN_0034abcc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  undefined1 uStack_21;
  
  if ((int)param_1[2] != 3) {
    if ((uint)param_1[2] != 0xffffffff) {
      (*(code *)(&PTR_FUN_009dbbe0)[(uint)param_1[2]])(&uStack_21,param_1);
    }
    *param_1 = *param_3;
    *param_3 = 0x36;
    *(undefined4 *)(param_1 + 2) = 3;
    return param_1;
  }
  puVar4 = (ulong *)*param_2;
  if ((ulong *)*param_3 != puVar4) {
    *param_2 = *param_3;
    *param_3 = 0x36;
    if (((ulong)puVar4 & 1) != 0) {
      puVar5 = (ulong *)((long)puVar4 - 1);
      if ((int)*puVar5 != 1) {
        do {
          iVar3 = (int)*puVar5 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(int *)puVar5 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 != 0) {
          return puVar4;
        }
      }
      plVar6 = *(long **)((long)puVar4 + 0x1f);
      *(undefined8 *)((long)puVar4 + 0x1f) = 0;
      if (plVar6 != (long *)0x0) {
        if (*plVar6 != 0) {
          FUN_00553a40(plVar6);
        }
        __ZdlPv(plVar6);
      }
      if (*(char *)((long)puVar4 + 0x1e) < '\0') {
        __ZdlPv(*(undefined8 *)((long)puVar4 + 7));
      }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(puVar5);
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 0034ac08; end: 0034ac73;  */

undefined8 * FUN_0034ac08(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 2)])(&uStack_21,param_1);
  }
  *param_1 = *param_2;
  *param_2 = 0x36;
  *(undefined4 *)(param_1 + 2) = 3;
  return param_1;
}


