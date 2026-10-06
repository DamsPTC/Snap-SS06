/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003fb71c; end: 003fb767;  */

undefined8 FUN_003fb71c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  FUN_003fb768();
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 003fb768; end: 003fb7d7;  */

long * FUN_003fb768(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_003535bc(param_1[1]);
  return plVar4;
}



/* Entry: 003fb7d8; end: 003fbc6b;  */

void FUN_003fb7d8(ulong *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,int *param_5,
                 long *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char **ppcVar4;
  int *piVar5;
  char *pcVar6;
  ulong uStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  ulong uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  char cStack_81;
  char *pcStack_80;
  char *pcStack_78;
  int aiStack_70 [2];
  ulong uStack_68;
  ulong uStack_60;
  char *pcStack_58;
  
  uStack_60 = *param_1;
  if (uStack_60 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4,"");
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if ((uStack_60 & 1) != 0) {
      piVar5 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003fbc6c(&pcStack_58,&uStack_60,3);
    FUN_0033c494(&uStack_60);
    if (pcStack_58 == (char *)0x0) {
      uStack_68 = *param_1;
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
      FUN_003fbc6c(&pcStack_98,&uStack_68,7);
      pcVar6 = pcStack_58;
      if (pcStack_98 != pcStack_58) {
        pcStack_58 = pcStack_98;
        pcStack_98 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pcStack_98);
      FUN_0033c494(&uStack_68);
      if (pcStack_58 == (char *)0x0) {
        FUN_003450b4(&pcStack_58,param_1);
      }
    }
    if (((ulong)pcStack_58 & 1) != 0) {
      pcVar6 = pcStack_58 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar2) {
          *(int *)pcVar6 = *(int *)pcVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppcVar4 = &pcStack_78;
    pcStack_78 = pcStack_58;
    FUN_003be1d0(ppcVar4,3,aiStack_70);
    FUN_0033c494(&pcStack_78);
    iVar3 = aiStack_70[0];
    if ((int)ppcVar4 == 0) {
      pcStack_80 = pcStack_58;
      if (((ulong)pcStack_58 & 1) != 0) {
        pcVar6 = pcStack_58 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar2) {
            *(int *)pcVar6 = *(int *)pcVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppcVar4 = &pcStack_80;
      FUN_003be1d0(ppcVar4,7,aiStack_70);
      FUN_0033c494(&pcStack_80);
      if ((int)ppcVar4 == 0) {
        iVar3 = (int)&pcStack_58;
        FUN_00552acc();
      }
      else {
        iVar3 = aiStack_70[0];
        FUN_003ff3bc(aiStack_70[0],param_2);
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar3;
    }
    if ((param_6 != (long *)0x0) && (iVar3 != 0)) {
      uStack_a0 = *param_1;
      if ((uStack_a0 & 1) != 0) {
        piVar5 = (int *)(uStack_a0 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003be004(&pcStack_98,&uStack_a0);
      pcVar6 = pcStack_98;
      if (-1 < cStack_81) {
        pcVar6 = (char *)&pcStack_98;
      }
      FUN_00339490();
      *param_6 = (long)pcVar6;
      if (cStack_81 < '\0') {
        __ZdlPv(pcStack_98);
      }
      FUN_0033c494(&uStack_a0);
    }
    if (param_5 != (int *)0x0) {
      pcStack_a8 = pcStack_58;
      if (((ulong)pcStack_58 & 1) != 0) {
        pcVar6 = pcStack_58 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar2) {
            *(int *)pcVar6 = *(int *)pcVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppcVar4 = &pcStack_a8;
      FUN_003be1d0(ppcVar4,7,aiStack_70);
      FUN_0033c494(&pcStack_a8);
      if ((int)ppcVar4 == 0) {
        pcStack_b0 = pcStack_58;
        if (((ulong)pcStack_58 & 1) != 0) {
          pcVar6 = pcStack_58 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
            if (bVar2) {
              *(int *)pcVar6 = *(int *)pcVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppcVar4 = &pcStack_b0;
        FUN_003be1d0(ppcVar4,3,aiStack_70);
        FUN_0033c494(&pcStack_b0);
        if ((int)ppcVar4 == 0) {
          aiStack_70[0] = (uint)(pcStack_58 != (char *)0x0) << 1;
        }
        else {
          func_0x003ff39c();
        }
      }
      *param_5 = aiStack_70[0];
    }
    if (param_4 != (undefined8 *)0x0) {
      pcStack_b8 = pcStack_58;
      if (((ulong)pcStack_58 & 1) != 0) {
        pcVar6 = pcStack_58 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar2) {
            *(int *)pcVar6 = *(int *)pcVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppcVar4 = &pcStack_b8;
      FUN_003be374(ppcVar4,5,param_4);
      FUN_0033c494(&pcStack_b8);
      if (((ulong)ppcVar4 & 1) == 0) {
        pcStack_c0 = pcStack_58;
        if (((ulong)pcStack_58 & 1) != 0) {
          pcVar6 = pcStack_58 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
            if (bVar2) {
              *(int *)pcVar6 = *(int *)pcVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppcVar4 = &pcStack_c0;
        FUN_003be374(ppcVar4,0,param_4);
        FUN_0033c494(&pcStack_c0);
        if (((ulong)ppcVar4 & 1) == 0) {
          uStack_c8 = *param_1;
          if ((uStack_c8 & 1) != 0) {
            piVar5 = (int *)(uStack_c8 - 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar2) {
                *piVar5 = *piVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_003be004(&pcStack_98,&uStack_c8);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            __ZdlPv(*param_4);
          }
          param_4[1] = uStack_90;
          *param_4 = pcStack_98;
          param_4[2] = CONCAT17(cStack_81,uStack_88);
          cStack_81 = '\0';
          pcStack_98 = (char *)((ulong)pcStack_98 & 0xffffffffffffff00);
          FUN_0033c494(&uStack_c8);
        }
      }
    }
    FUN_0033c494(&pcStack_58);
  }
  return;
}



/* Entry: 003fbc6c; end: 003fbde7;  */

void FUN_003fbc6c(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  ulong **ppuStack_38;
  
  uStack_48 = *param_2;
  if ((uStack_48 & 1) != 0) {
    piVar4 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3 = &uStack_48;
  FUN_003be1d0(puVar3,param_3,auStack_40);
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  if ((int)puVar3 == 0) {
    uStack_68 = *param_2;
    if ((uStack_68 & 1) != 0) {
      piVar4 = (int *)(uStack_68 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003b6dec(&puStack_60,&uStack_68);
    puVar3 = puStack_60;
    if ((uStack_68 & 1) != 0) {
      FUN_0055293c();
      puVar3 = puStack_60;
    }
    for (; puVar3 != puStack_58; puVar3 = puVar3 + 1) {
      uStack_70 = *puVar3;
      if ((uStack_70 & 1) != 0) {
        piVar4 = (int *)(uStack_70 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003fbc6c(param_1,&uStack_70,param_3);
      if ((uStack_70 & 1) != 0) {
        FUN_0055293c();
      }
      if (*param_1 != 0) goto LAB_003fbd78;
    }
    *param_1 = 0;
LAB_003fbd78:
    ppuStack_38 = &puStack_60;
    FUN_0033d548(&ppuStack_38);
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0x36;
  }
  return;
}



/* Entry: 003fbde8; end: 003fbec3;  */

void FUN_003fbde8(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  int *piVar5;
  ulong uStack_48;
  undefined8 **ppuStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined4 uStack_24;
  
  ppuStack_40 = (undefined8 ***)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = *param_2;
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
  FUN_003fb7d8(&uStack_48,0x7fffffffffffffff,&uStack_24,&ppuStack_40,0,0);
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  uVar1 = uStack_38;
  pppuVar4 = (undefined8 ***)ppuStack_40;
  if (-1 < (long)uStack_30) {
    uVar1 = uStack_30 >> 0x38;
    pppuVar4 = &ppuStack_40;
  }
  FUN_00552acc(param_1,uStack_24,pppuVar4,uVar1);
  if ((long)uStack_30 < 0) {
    __ZdlPv(ppuStack_40);
  }
  return;
}



/* Entry: 003fbec4; end: 003fbfbf;  */

void FUN_003fbec4(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      puVar2 = &UNK_00810ff6;
      bVar1 = (uVar3 & 3) != 2;
      if (bVar1) {
        puVar2 = (undefined *)0x0;
      }
      uVar3 = 0x1b;
      if (bVar1) {
        uVar3 = 0;
      }
    }
    else if ((char)*(byte *)(uVar3 + 0x1e) < '\0') {
      puVar2 = *(undefined **)(uVar3 + 7);
      uVar3 = *(ulong *)(uVar3 + 0xf);
    }
    else {
      puVar2 = (undefined *)(uVar3 + 7);
      uVar3 = (ulong)*(byte *)(uVar3 + 0x1e);
    }
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_003b646c(&uStack_30,2,puVar2,uVar3,&uStack_31,&uStack_50);
    FUN_00552acc(param_2);
    FUN_003be104(param_1,&uStack_30,3,(long)(int)param_2);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    FUN_0033d548(&puStack_28);
  }
  return;
}



/* Entry: 003fbfc0; end: 003fc12b;  */

undefined1 * FUN_003fbfc0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  ulong **ppuStack_38;
  
  uStack_48 = *param_1;
  if ((uStack_48 & 1) != 0) {
    piVar4 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3 = &uStack_48;
  FUN_003be1d0(puVar3,3,auStack_40);
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)puVar3 & 1) == 0) {
    uStack_68 = *param_1;
    if ((uStack_68 & 1) != 0) {
      piVar4 = (int *)(uStack_68 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003b6dec(&puStack_60,&uStack_68);
    if ((uStack_68 & 1) != 0) {
      FUN_0055293c();
    }
    puVar3 = puStack_60;
    if (puStack_60 == puStack_58) {
      puVar6 = (ulong *)0x0;
    }
    else {
      do {
        uVar7 = *puVar3;
        if ((uVar7 & 1) != 0) {
          piVar4 = (int *)(uVar7 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar6 = &uStack_70;
        uStack_70 = uVar7;
        FUN_003fbfc0();
        if ((uVar7 & 1) != 0) {
          FUN_0055293c(uVar7);
        }
        puVar3 = puVar3 + 1;
        uVar5 = (uint)puVar6;
        if (puVar3 == puStack_58) {
          uVar5 = 1;
        }
      } while ((uVar5 & 1) == 0);
    }
    ppuStack_38 = &puStack_60;
    FUN_0033d548(&ppuStack_38);
  }
  else {
    puVar6 = (ulong *)((long)&MACH_HEADER.magic + 1);
  }
  return (undefined1 *)puVar6;
}



/* Entry: 003fc12c; end: 003fc17b;  */

undefined8 * FUN_003fc12c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e1fa8;
  param_1[1] = 1;
  FUN_00339d50(param_1 + 2);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



/* Entry: 003fc17c; end: 003fc1df;  */

void FUN_003fc17c(long param_1,undefined8 param_2)

{
  func_0x00339d8c(param_1 + 0x10);
  FUN_003fcacc(param_1 + 0x58,param_2);
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 003fc1e0; end: 003fc237;  */

undefined8 * FUN_003fc1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e1fa8;
  FUN_003fc238(param_1 + 0xb);
  FUN_003fc9f4(param_1 + 0xb);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 003fc238; end: 003fc2d3;  */

void FUN_003fc238(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  puVar7 = param_1 + 1;
  uVar5 = *param_1;
  puVar8 = puVar7;
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)*puVar7;
  }
  if (1 < uVar5) {
    uVar5 = uVar5 >> 1;
    do {
      while( true ) {
        uVar5 = uVar5 - 1;
        plVar4 = (long *)puVar8[uVar5];
        if (plVar4 != (long *)0x0) break;
LAB_003fc294:
        if (uVar5 == 0) goto LAB_003fc2ac;
      }
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
      if (lVar6 + -1 != 0) goto LAB_003fc294;
      (**(code **)(*plVar4 + 8))();
    } while (uVar5 != 0);
LAB_003fc2ac:
    uVar5 = *param_1;
  }
  if ((uVar5 & 1) != 0) {
    __ZdlPv(*puVar7);
  }
  *param_1 = 0;
  return;
}



/* Entry: 003fc2d4; end: 003fc2d7;  */

undefined8 * FUN_003fc2d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e1fa8;
  FUN_003fc238(param_1 + 0xb);
  FUN_003fc9f4(param_1 + 0xb);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 003fc2d8; end: 003fc2eb;  */

void FUN_003fc2d8(void)

{
  FUN_003fc1e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003fc2ec; end: 003fc3c7;  */

void FUN_003fc2ec(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x50) == '\0') && (*(long *)(param_1 + 0x70) != 0)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    puVar5 = (undefined8 *)(param_1 + 0x60);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
    plVar3 = (long *)puVar5[*(long *)(param_1 + 0x70) + -1];
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
    (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 003fc3c8; end: 003fc657;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_003fc3c8(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  ulong uStack_98;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  uVar5 = param_1[0xe];
  uVar7 = param_1[0xb];
  if (uVar7 >> 1 < uVar5) {
    func_0x00775df4();
    FUN_0033c494(&uStack_30);
    puStack_28 = auStack_58 + 1;
    FUN_0033d548(&puStack_28);
    __Unwind_Resume();
    plVar8 = param_1 + 2;
    func_0x00339d8c(plVar8);
    uStack_98 = *param_2;
    if ((uStack_98 & 1) != 0) {
      piVar6 = (int *)(uStack_98 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar4 = param_1;
    FUN_003fc3c8(param_1,&uStack_98);
    if ((uStack_98 & 1) != 0) {
      FUN_0055293c();
    }
    func_0x00339da8(plVar8);
    if ((int)plVar4 != 0) {
      plVar4 = param_1 + 1;
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0 && param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003fc714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 8))(param_1);
        return param_1;
      }
    }
    return plVar8;
  }
  if (*param_2 == 0) {
    if ((char)param_1[10] == '\0') {
      if (uVar5 != uVar7 >> 1 && (char)param_1[0x26] == '\0') {
        plVar8 = param_1 + 0xc;
        if ((uVar7 & 1) != 0) {
          plVar8 = (long *)*plVar8;
        }
        if (plVar8[uVar5] == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar4 = (long *)(plVar8[uVar5] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar8 = (long *)plVar8[uVar5];
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,param_1[0x13],param_1 + 0xf,param_1 + 0x23);
        plVar4 = plVar8 + 1;
        do {
          lVar3 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
        goto LAB_003fc444;
      }
    }
    else {
      auStack_58[2] = 0;
      auStack_58[3] = 0;
      auStack_58[1] = 0;
      FUN_003b646c(&uStack_30,2,"handshaker shutdown",0x13,&uStack_31,auStack_58 + 1);
      uVar5 = *param_2;
      if (uStack_30 == uVar5) {
LAB_003fc4bc:
        if ((uVar5 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_2 = uStack_30;
        uStack_30 = 0x36;
        if ((uVar5 & 1) != 0) {
          FUN_0055293c();
          uVar5 = uStack_30;
          goto LAB_003fc4bc;
        }
      }
      puStack_28 = auStack_58 + 1;
      FUN_0033d548(&puStack_28);
      lVar3 = param_1[0x23];
      if (lVar3 != 0) {
        auStack_58[0] = *param_2;
        if ((auStack_58[0] & 1) != 0) {
          piVar6 = (int *)(auStack_58[0] - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003bcee0(lVar3,auStack_58);
        if ((auStack_58[0] & 1) != 0) {
          FUN_0055293c();
        }
        FUN_003bcf54(param_1[0x23]);
        param_1[0x23] = 0;
        FUN_003a2a64(param_1[0x24]);
        param_1[0x24] = 0;
        FUN_003ecf54(param_1[0x25]);
        FUN_00338cb8(param_1[0x25]);
        param_1[0x25] = 0;
      }
    }
  }
  func_0x003cf020(param_1 + 0x14);
  uStack_60 = *param_2;
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
  FUN_003c1e6c(&puStack_28,param_1 + 0x1f,&uStack_60);
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  *(undefined1 *)(param_1 + 10) = 1;
LAB_003fc444:
  param_1[0xe] = param_1[0xe] + 1;
  return (long *)(ulong)*(byte *)(param_1 + 10);
}



/* Entry: 003fc658; end: 003fc73f;  */

void FUN_003fc658(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 2);
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
  plVar3 = param_1;
  FUN_003fc3c8(param_1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339da8(param_1 + 2);
  if ((int)plVar3 != 0) {
    plVar3 = param_1 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0 && param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003fc714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 003fc740; end: 003fc81b;  */

void FUN_003fc740(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  if (*param_2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_003b646c(&uStack_30,2,"Handshake timed out",0x13,&uStack_31,&uStack_50);
    FUN_003fc2ec(param_1,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    FUN_0033d548(&puStack_28);
  }
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
  if (lVar4 + -1 == 0 && param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 003fc81c; end: 003fc9f3;  */

void FUN_003fc81c(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_58;
  
  func_0x00339d8c(param_1 + 2);
  if (param_1[0xe] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/handshaker.cc"
                 ,0xb7,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3fc99c);
    (*pcVar4)();
  }
  param_1[0x23] = param_2;
  param_1[0x28] = param_4;
  FUN_003a277c();
  param_1[0x24] = param_3;
  param_1[0x27] = param_7;
  lVar5 = 0x128;
  FUN_00338c74();
  param_1[0x25] = lVar5;
  FUN_003ecf38();
  if (((param_5 != 0) && (*(char *)(param_5 + 0x10) != '\0')) && (*(long *)(param_5 + 0x18) != 0)) {
    FUN_003ed190(param_1[0x25],*(long *)(param_5 + 0x18) + 0x18);
  }
  param_1[0x10] = (long)FUN_003fc658;
  param_1[0x11] = (long)param_1;
  param_1[0x12] = 0;
  param_1[0x13] = param_5;
  param_1[0x20] = param_6;
  param_1[0x21] = (long)(param_1 + 0x23);
  plVar1 = param_1 + 1;
  param_1[0x22] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x1c] = (long)FUN_003fc740;
  param_1[0x1d] = (long)param_1;
  param_1[0x1e] = 0;
  func_0x003cf010(param_1 + 0x14,param_4,param_1 + 0x1b);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_58 = 0;
  plVar6 = param_1;
  FUN_003fc3c8(param_1,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339da8(param_1 + 2);
  if ((int)plVar6 != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x003fc9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 003fc9f4; end: 003fca27;  */

long * FUN_003fc9f4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_003fca28(param_1);
  }
  return param_1;
}



/* Entry: 003fca28; end: 003fcacb;  */

void FUN_003fca28(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  puVar7 = param_1 + 1;
  uVar5 = *param_1;
  puVar8 = puVar7;
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)*puVar7;
  }
  if (1 < uVar5) {
    uVar5 = uVar5 >> 1;
    do {
      while( true ) {
        uVar5 = uVar5 - 1;
        plVar4 = (long *)puVar8[uVar5];
        if (plVar4 != (long *)0x0) break;
LAB_003fca84:
        if (uVar5 == 0) goto LAB_003fca9c;
      }
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
      if (lVar6 + -1 != 0) goto LAB_003fca84;
      (**(code **)(*plVar4 + 8))();
    } while (uVar5 != 0);
LAB_003fca9c:
    uVar5 = *param_1;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*puVar7);
  return;
}



/* Entry: 003fcacc; end: 003fcb17;  */

ulong * FUN_003fcacc(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong **ppuVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar7 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar11 = 2;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar11 = param_1[2];
  }
  if (uVar9 >> 1 != uVar11) {
    puVar7 = puVar7 + (uVar9 >> 1);
    *puVar7 = 0;
    *puVar7 = *param_2;
    *param_2 = 0;
    *param_1 = uVar9 + 2;
    return puVar7;
  }
  ppuVar5 = &puStack_50;
  puVar7 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar11 = 4;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_003fcc40();
  uVar13 = uVar9 >> 1;
  puVar2 = (ulong *)(ppuVar5 + uVar13);
  puStack_50 = (ulong *)ppuVar5;
  uStack_48 = uVar11;
  *puVar2 = 0;
  *puVar2 = *param_2;
  *param_2 = 0;
  puVar8 = puStack_50;
  uVar11 = uVar13;
  puVar12 = puVar7;
  if (1 < uVar9) {
    do {
      *puVar8 = 0;
      *puVar8 = *puVar12;
      *puVar12 = 0;
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
    do {
      while( true ) {
        uVar13 = uVar13 - 1;
        plVar6 = (long *)puVar7[uVar13];
        if (plVar6 != (long *)0x0) break;
LAB_003fcbe0:
        if (uVar13 == 0) goto LAB_003fcbe4;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 != 0) goto LAB_003fcbe0;
      (**(code **)(*plVar6 + 8))();
    } while (uVar13 != 0);
  }
LAB_003fcbe4:
  uVar9 = *param_1;
  if ((uVar9 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar9 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar9 | 1) + 2;
  return puVar2;
}



/* Entry: 003fcb18; end: 003fcc3f;  */

ulong * FUN_003fcb18(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong **ppuVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar5 = &puStack_50;
  puVar11 = param_1 + 1;
  uVar13 = *param_1;
  if ((uVar13 & 1) == 0) {
    uVar7 = 4;
  }
  else {
    puVar11 = (ulong *)param_1[1];
    uVar7 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_003fcc40();
  uVar12 = uVar13 >> 1;
  puVar2 = (ulong *)(ppuVar5 + uVar12);
  puStack_50 = (ulong *)ppuVar5;
  uStack_48 = uVar7;
  *puVar2 = 0;
  *puVar2 = *param_2;
  *param_2 = 0;
  puVar8 = puStack_50;
  uVar7 = uVar12;
  puVar10 = puVar11;
  if (1 < uVar13) {
    do {
      *puVar8 = 0;
      *puVar8 = *puVar10;
      *puVar10 = 0;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 != 0);
    do {
      while( true ) {
        uVar12 = uVar12 - 1;
        plVar6 = (long *)puVar11[uVar12];
        if (plVar6 != (long *)0x0) break;
LAB_003fcbe0:
        if (uVar12 == 0) goto LAB_003fcbe4;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 != 0) goto LAB_003fcbe0;
      (**(code **)(*plVar6 + 8))();
    } while (uVar12 != 0);
  }
LAB_003fcbe4:
  uVar13 = *param_1;
  if ((uVar13 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar13 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar13 | 1) + 2;
  return puVar2;
}



/* Entry: 003fcc40; end: 003fcc73;  */

undefined1  [16] FUN_003fcc40(long param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long *****ppppplVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  undefined8 *puVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long ****pppplStack_78;
  long ****pppplStack_70;
  long ****pppplStack_68;
  long ****pppplStack_60;
  long ****pppplStack_58;
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar2;
    return auVar12;
  }
  FUN_00349558();
  ppppplVar3 = (long *****)(param_1 + (param_3 & 0xffffffff) * 0x18);
  ppppplVar7 = ppppplVar3;
  if ((int)param_2 == 0) {
    ppppplVar7 = ppppplVar3 + 1;
  }
  ppppplVar7 = (long *****)*ppppplVar7;
  ppppplVar8 = (long *****)ppppplVar3[1];
  ppppplVar5 = ppppplVar3 + 2;
  if (ppppplVar8 < *ppppplVar5) {
    ppppplVar5 = ppppplVar7;
    if (ppppplVar7 == ppppplVar8) {
      pppplVar4 = (long ****)*param_4;
      *param_4 = 0;
      *ppppplVar7 = pppplVar4;
      ppppplVar3[1] = (long ****)(ppppplVar7 + 1);
      ppppplVar3 = ppppplVar7;
    }
    else {
      FUN_003fceb0(ppppplVar3,ppppplVar7,ppppplVar8,ppppplVar7 + 1);
      pppplVar9 = (long ****)*param_4;
      *param_4 = 0;
      pppplVar4 = *ppppplVar7;
      *ppppplVar7 = pppplVar9;
      ppppplVar3 = ppppplVar7;
      if (pppplVar4 != (long ****)0x0) {
        (*(code *)(*pppplVar4)[2])();
      }
    }
  }
  else {
    pppplVar4 = *ppppplVar3;
    uVar1 = ((long)ppppplVar8 - (long)pppplVar4 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_003fd11c();
      FUN_003fd1d4(&pppplStack_78);
      __Unwind_Resume();
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      FUN_003fd234(extraout_x8);
      pppplVar4 = *ppppplVar3;
      extraout_x8[1] = ppppplVar3[1];
      *extraout_x8 = pppplVar4;
      extraout_x8[2] = ppppplVar3[2];
      ppppplVar3[1] = (long ****)0x0;
      ppppplVar3[2] = (long ****)0x0;
      *ppppplVar3 = (long ****)0x0;
      puVar6 = extraout_x8 + 3;
      FUN_003fd234(puVar6);
      pppplVar4 = ppppplVar3[3];
      extraout_x8[4] = ppppplVar3[4];
      extraout_x8[3] = pppplVar4;
      extraout_x8[5] = ppppplVar3[5];
      ppppplVar3[4] = (long ****)0x0;
      ppppplVar3[5] = (long ****)0x0;
      ppppplVar3[3] = (long ****)0x0;
      auVar14._8_8_ = ppppplVar7;
      auVar14._0_8_ = puVar6;
      return auVar14;
    }
    uVar10 = (long)*ppppplVar5 - (long)pppplVar4;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    pppplStack_58 = (long ****)ppppplVar5;
    if (uVar11 == 0) {
      pppplStack_78 = (long ****)0x0;
    }
    else {
      FUN_003fd130();
      pppplStack_78 = (long ****)ppppplVar5;
    }
    pppplStack_70 = pppplStack_78 + ((long)ppppplVar7 - (long)pppplVar4 >> 3);
    pppplStack_60 = pppplStack_78 + uVar11;
    pppplStack_68 = pppplStack_70;
    FUN_003fcef8(&pppplStack_78,param_4);
    ppppplVar5 = &pppplStack_78;
    FUN_003fd018(ppppplVar3,ppppplVar5,ppppplVar7);
    FUN_003fd1d4(&pppplStack_78);
  }
  auVar13._8_8_ = ppppplVar5;
  auVar13._0_8_ = ppppplVar3;
  return auVar13;
}



/* Entry: 003fcc74; end: 003fcc93;  */

long * FUN_003fcc74(long param_1,int param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *extraout_x8;
  ulong uVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = (long *)(param_1 + (param_3 & 0xffffffff) * 0x18);
  plVar4 = plVar2;
  if (param_2 == 0) {
    plVar4 = plVar2 + 1;
  }
  plVar4 = (long *)*plVar4;
  plVar5 = (long *)plVar2[1];
  plVar3 = plVar2 + 2;
  if (plVar5 < (long *)*plVar3) {
    if (plVar4 == plVar5) {
      lVar6 = *param_4;
      *param_4 = 0;
      *plVar4 = lVar6;
      plVar2[1] = (long)(plVar4 + 1);
      plVar2 = plVar4;
    }
    else {
      FUN_003fceb0(plVar2,plVar4,plVar5,plVar4 + 1);
      lVar6 = *param_4;
      *param_4 = 0;
      plVar3 = (long *)*plVar4;
      *plVar4 = lVar6;
      plVar2 = plVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else {
    lVar6 = *plVar2;
    uVar1 = ((long)plVar5 - lVar6 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_003fd11c();
      FUN_003fd1d4(&plStack_58);
      __Unwind_Resume();
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      FUN_003fd234(extraout_x8);
      lVar6 = *plVar2;
      extraout_x8[1] = plVar2[1];
      *extraout_x8 = lVar6;
      extraout_x8[2] = plVar2[2];
      plVar2[1] = 0;
      plVar2[2] = 0;
      *plVar2 = 0;
      plVar4 = extraout_x8 + 3;
      FUN_003fd234(plVar4);
      lVar6 = plVar2[3];
      extraout_x8[4] = plVar2[4];
      extraout_x8[3] = lVar6;
      extraout_x8[5] = plVar2[5];
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[3] = 0;
      return plVar4;
    }
    uVar7 = *plVar3 - lVar6;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar3;
    if (uVar8 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_003fd130();
      plStack_58 = plVar3;
    }
    plStack_50 = plStack_58 + ((long)plVar4 - lVar6 >> 3);
    plStack_40 = plStack_58 + uVar8;
    plStack_48 = plStack_50;
    FUN_003fcef8(&plStack_58,param_4);
    FUN_003fd018(plVar2,&plStack_58,plVar4);
    FUN_003fd1d4(&plStack_58);
  }
  return plVar2;
}



/* Entry: 003fcc94; end: 003fcdd7;  */

long * FUN_003fcc94(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *extraout_x8;
  ulong uVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)param_1[1];
  plVar2 = param_1 + 2;
  if (plVar3 < (long *)*plVar2) {
    if (param_2 == plVar3) {
      lVar4 = *param_3;
      *param_3 = 0;
      *param_2 = lVar4;
      param_1[1] = (long)(param_2 + 1);
      param_1 = param_2;
    }
    else {
      FUN_003fceb0(param_1,param_2,plVar3,param_2 + 1);
      lVar4 = *param_3;
      *param_3 = 0;
      plVar2 = (long *)*param_2;
      *param_2 = lVar4;
      param_1 = param_2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  else {
    lVar4 = *param_1;
    uVar1 = ((long)plVar3 - lVar4 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_003fd11c();
      FUN_003fd1d4(&plStack_58);
      __Unwind_Resume();
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      FUN_003fd234(extraout_x8);
      lVar4 = *param_1;
      extraout_x8[1] = param_1[1];
      *extraout_x8 = lVar4;
      extraout_x8[2] = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      plVar2 = extraout_x8 + 3;
      FUN_003fd234(plVar2);
      lVar4 = param_1[3];
      extraout_x8[4] = param_1[4];
      extraout_x8[3] = lVar4;
      extraout_x8[5] = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[3] = 0;
      return plVar2;
    }
    uVar5 = *plVar2 - lVar4;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar2;
    if (uVar6 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_003fd130();
      plStack_58 = plVar2;
    }
    plStack_50 = plStack_58 + ((long)param_2 - lVar4 >> 3);
    plStack_40 = plStack_58 + uVar6;
    plStack_48 = plStack_50;
    FUN_003fcef8(&plStack_58,param_3);
    FUN_003fd018(param_1,&plStack_58,param_2);
    FUN_003fd1d4(&plStack_58);
  }
  return param_1;
}



/* Entry: 003fcdd8; end: 003fce43;  */

void FUN_003fcdd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_003fd234(param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003fd234(param_1 + 3);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 003fce44; end: 003fceaf;  */

void FUN_003fce44(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x18);
  puVar1 = (undefined8 *)plVar2[1];
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,param_3,param_4,param_5);
  }
  return;
}



/* Entry: 003fceb0; end: 003fcef7;  */

undefined1  [16] FUN_003fceb0(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)((long)param_2 + ((long)plVar3 - param_4));
  plVar5 = plVar3;
  for (plVar2 = plVar1; plVar2 < param_3; plVar2 = plVar2 + 1) {
    lVar4 = *plVar2;
    *plVar2 = 0;
    *plVar5 = lVar4;
    plVar5 = plVar5 + 1;
  }
  *(long **)(param_1 + 8) = plVar5;
  plVar5 = plVar1;
  while (plVar5 != param_2) {
    plVar5 = plVar5 + -1;
    lVar4 = *plVar5;
    *plVar5 = 0;
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    *plVar3 = lVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  auVar6._8_8_ = plVar3;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 003fcef8; end: 003fd017;  */

void FUN_003fcef8(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 == (undefined8 *)param_1[3]) {
    uVar1 = *param_1;
    uVar6 = param_1[1];
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = (long)((long)puVar4 - uVar1) >> 2;
      if ((long)puVar4 - uVar1 == 0) {
        uVar6 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar6;
      uStack_38 = uVar2;
      FUN_003fd130();
      puVar4 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
      puStack_50 = (undefined8 *)param_1[1];
      uVar1 = param_1[2] - (long)puStack_50;
      puVar8 = puVar4;
      puStack_48 = puStack_50;
      if (uVar1 != 0) {
        lVar5 = ((long)uVar1 >> 3) << 3;
        do {
          uVar7 = *puStack_50;
          *puStack_50 = 0;
          *puVar8 = uVar7;
          lVar5 = lVar5 + -8;
          puStack_50 = puStack_50 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
        puStack_50 = (undefined8 *)param_1[1];
        puVar8 = (undefined8 *)((long)puVar4 + (uVar1 & 0xfffffffffffffff8));
        puStack_48 = (undefined8 *)param_1[2];
      }
      uStack_58 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar4;
      uStack_40 = param_1[3];
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      FUN_003fd1d4(&uStack_58);
      puVar4 = (undefined8 *)param_1[2];
    }
    else {
      lVar5 = (long)(uVar6 - uVar1) >> 3;
      uVar1 = lVar5 + 2;
      if (-2 < lVar5) {
        uVar1 = lVar5 + 1;
      }
      FUN_003fd164(uVar6,puVar4,uVar6 + (uVar1 >> 1) * -8);
      param_1[1] = param_1[1] + (uVar1 >> 1) * -8;
      param_1[2] = (ulong)puVar4;
    }
  }
  uVar7 = *param_2;
  *param_2 = 0;
  *puVar4 = uVar7;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 003fd018; end: 003fd0b3;  */

void FUN_003fd018(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_1;
  puVar3 = param_3;
  while (puVar2 != puVar3) {
    puVar3 = puVar3 + -1;
    uVar6 = *puVar3;
    *puVar3 = 0;
    puVar1 = puVar1 + -1;
    *puVar1 = uVar6;
  }
  param_2[1] = puVar1;
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_2[2];
  puVar3 = puVar2;
  if (puVar5 != param_3) {
    do {
      uVar6 = *param_3;
      puVar1 = param_3 + 1;
      *param_3 = 0;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar6;
      param_3 = puVar1;
      puVar3 = puVar2;
    } while (puVar1 != puVar5);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = puVar2;
  lVar4 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003fd0b4; end: 003fd11b;  */

undefined1  [16] FUN_003fd0b4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  plVar3 = param_2;
  while (plVar3 != param_1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    param_3 = param_3 + -1;
    plVar1 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 003fd11c; end: 003fd12f;  */

undefined1  [16] FUN_003fd11c(undefined8 param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  plVar3 = (long *)pcVar1;
  for (; (long *)pcVar1 != param_2; pcVar1 = (char *)((long)pcVar1 + 8)) {
    lVar2 = *(long *)pcVar1;
    *(long *)pcVar1 = 0;
    plVar3 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    param_3 = param_3 + 1;
    plVar3 = param_2;
  }
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 003fd130; end: 003fd163;  */

undefined1  [16] FUN_003fd130(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  plVar2 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = *param_1;
    *param_1 = 0;
    plVar2 = (long *)*param_3;
    *param_3 = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    param_3 = param_3 + 1;
    plVar2 = param_2;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 003fd164; end: 003fd1d3;  */

undefined1  [16] FUN_003fd164(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar2 = *param_1;
    *param_1 = 0;
    plVar1 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    param_3 = param_3 + 1;
    plVar1 = param_2;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = plVar1;
  return auVar3;
}



/* Entry: 003fd1d4; end: 003fd233;  */

long * FUN_003fd1d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 003fd234; end: 003fd2a3;  */

void FUN_003fd234(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    __ZdlPv(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 003fd2a4; end: 003fd32f;  */

void FUN_003fd2a4(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e1ff8;
  pdStack_28 = pdVar1;
  FUN_003fcc74(param_1 + 0x90,1,0,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 0x10))();
  }
  return;
}



/* Entry: 003fd330; end: 003fd467;  */

void FUN_003fd330(void)

{
  char cVar1;
  bool bVar2;
  qword *pqVar3;
  undefined8 in_x3;
  qword qVar4;
  qword *pqStack_38;
  
  pqVar3 = &segment_command_00001228.vmsize;
  __Znwm();
  *pqVar3 = (qword)&PTR_FUN_009e2038;
  pqVar3[1] = 1;
  FUN_00339d50(pqVar3 + 2);
  *(undefined1 *)(pqVar3 + 10) = 0;
  *(undefined4 *)(pqVar3 + 0x242) = 0;
  pqVar3[0x243] = 0;
  pqVar3[0x245] = 0;
  pqVar3[0x244] = 0;
  *(undefined4 *)(pqVar3 + 0x246) = 0;
  pqVar3[0x248] = 0;
  pqVar3[0x247] = 0;
  pqVar3[0xc] = 0;
  pqVar3[0xb] = 0;
  pqVar3[0xe] = 0;
  pqVar3[0xd] = 0;
  FUN_003ecf38(pqVar3 + 0xf);
  FUN_003ba4e8(pqVar3 + 0x3c,0,pqVar3 + 0x242);
  pqStack_38 = pqVar3;
  FUN_003fc17c(in_x3,&pqStack_38);
  if (pqStack_38 != (qword *)0x0) {
    pqVar3 = pqStack_38 + 1;
    do {
      qVar4 = *pqVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pqVar3,0x10);
      if (bVar2) {
        *pqVar3 = qVar4 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (qVar4 - 1 == 0) {
      (**(code **)(*pqStack_38 + 8))();
    }
  }
  return;
}



/* Entry: 003fd468; end: 003fd46f;  */

void FUN_003fd468(void)

{
  return;
}



/* Entry: 003fd470; end: 003fd4e7;  */

undefined8 * FUN_003fd470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2038;
  if (param_1[0xb] != 0) {
    FUN_003bcf54();
  }
  if (param_1[0xc] != 0) {
    FUN_003ecf54();
    FUN_00338cb8(param_1[0xc]);
  }
  FUN_003ecf54(param_1 + 0xf);
  FUN_003ba52c(param_1 + 0x3c);
  FUN_003ba530(param_1 + 0x242);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 003fd4e8; end: 003fd4fb;  */

void FUN_003fd4e8(void)

{
  FUN_003fd470();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003fd4fc; end: 003fd5df;  */

void FUN_003fd4fc(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 0x10);
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar4 = **(undefined8 **)(param_1 + 0x68);
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
    FUN_003bcee0(uVar4,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    uVar4 = *puVar6;
    uVar1 = puVar6[1];
    *puVar6 = 0;
    uVar7 = puVar6[2];
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    puVar6[2] = 0;
    FUN_003a2a64(uVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = 0;
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 003fd5e0; end: 003fd97f;  */

void FUN_003fd5e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  char *pcVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  char *apcStack_118 [2];
  undefined4 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = param_4[1];
  FUN_003a28d0(lVar6,"grpc.http_connect_server");
  FUN_003a2d78();
  if (lVar6 == 0) {
    func_0x00339d8c(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x50) = 1;
    func_0x00339da8(param_1 + 0x10);
    uStack_b8 = 0;
    FUN_003c1e6c(apcStack_118,param_3,&uStack_b8);
    if ((uStack_b8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    lVar7 = param_4[1];
    pcVar10 = "grpc.http_connect_headers";
    FUN_003a28d0();
    FUN_003a2d78();
    uStack_c8 = 0;
    lStack_c0 = 0;
    if (lVar7 == 0) {
      lVar7 = 0;
LAB_003fd73c:
      lVar13 = 0;
    }
    else {
      pcVar10 = "\n";
      FUN_00339a80();
      lVar7 = uStack_c8 << 4;
      FUN_00338c74();
      if (uStack_c8 == 0) goto LAB_003fd73c;
      uVar12 = 0;
      lVar13 = 0;
      do {
        puVar11 = *(undefined1 **)(lStack_c0 + uVar12 * 8);
        pcVar10 = "";
        _strchr();
        if (puVar11 == (undefined1 *)0x0) {
          pcVar10 = "\x04";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/http_connect_handshaker.cc"
                       ,0x149,2,"skipping unparseable HTTP CONNECT header: %s");
        }
        else {
          *puVar11 = 0;
          puVar2 = (undefined8 *)(lVar7 + lVar13 * 0x10);
          *puVar2 = *(undefined8 *)(lStack_c0 + uVar12 * 8);
          puVar2[1] = puVar11 + 1;
          lVar13 = lVar13 + 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_c8);
    }
    func_0x00339d8c(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x68) = param_4;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    uVar8 = *param_4;
    func_0x003bcf60(uVar8);
    if ((char *)0x7ffffffffffffff7 < pcVar10) goto LAB_003fd908;
    if (pcVar10 < "") {
      uStack_d0 = CONCAT17((char)pcVar10,(undefined7)uStack_d0);
      ppppuVar9 = &pppuStack_e0;
      if (pcVar10 != (char *)0x0) goto LAB_003fd7b4;
    }
    else {
      uVar12 = ((ulong)pcVar10 & 0xfffffffffffffff8) + 8;
      if (((ulong)pcVar10 | 7) != 0x17) {
        uVar12 = (ulong)pcVar10 | 7;
      }
      ppppuVar9 = (undefined8 ****)(uVar12 + 1);
      __Znwm();
      uStack_d0 = uVar12 + 1 | 0x8000000000000000;
      pppuStack_e0 = ppppuVar9;
      pcStack_d8 = pcVar10;
LAB_003fd7b4:
      _memmove(ppppuVar9,uVar8,pcVar10);
    }
    *(char *)((long)ppppuVar9 + (long)pcVar10) = '\0';
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/http_connect_handshaker.cc"
                 ,0x159,1,"Connecting to server %s via HTTP proxy %s");
    apcStack_118[0] = "CONNECT";
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lStack_100 = lVar13;
    lStack_f8 = lVar7;
    FUN_003b9e4c(&uStack_90,apcStack_118,lVar6,lVar6);
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    FUN_003ecb34(param_1 + 0x78,&uStack_b0);
    FUN_00338cb8(lVar7);
    if (uStack_c8 != 0) {
      uVar12 = 0;
      do {
        FUN_00338cb8(*(undefined8 *)(lStack_c0 + uVar12 * 8));
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_c8);
    }
    FUN_00338cb8(lStack_c0);
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = *param_4;
    *(code **)(param_1 + 0x1a8) = FUN_003fd98c;
    *(long *)(param_1 + 0x1b0) = param_1;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    func_0x003bceb0(uVar8,param_1 + 0x78,param_1 + 0x1a0,0,0x7fffffff);
    if ((long)uStack_d0 < 0) {
      __ZdlPv(pppuStack_e0);
    }
    func_0x00339da8(param_1 + 0x10);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_003fd908:
  func_0x0033b318(&pppuStack_e0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3fd914);
  (*pcVar5)();
}



/* Entry: 003fd980; end: 003fd98b;  */

char * FUN_003fd980(void)

{
  return "http_connect";
}



/* Entry: 003fd98c; end: 003fda13;  */

void FUN_003fd98c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1a8) = FUN_003fda14;
  *(long *)(param_1 + 0x1b0) = param_1;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_1 + 0x1a0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003fda14; end: 003fdb37;  */

void FUN_003fda14(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  
  plStack_30 = param_1 + 2;
  uStack_28 = 0;
  func_0x00339d8c();
  uVar6 = *param_2;
  if (uVar6 == 0) {
    if ((char)param_1[10] == '\0') {
      uVar4 = *(undefined8 *)param_1[0xd];
      uVar5 = ((undefined8 *)param_1[0xd])[2];
      param_1[0x39] = (long)FUN_003fdcd8;
      param_1[0x3a] = (long)param_1;
      param_1[0x3b] = 0;
      FUN_003bcea4(uVar4,uVar5,param_1 + 0x38,1,1);
      goto LAB_003fdab4;
    }
    uStack_38 = 0;
  }
  else {
    uStack_38 = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  FUN_003fdb38(param_1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_28 = 1;
  func_0x00339da8(plStack_30);
  plVar1 = param_1 + 1;
  do {
    lVar8 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0 && param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
LAB_003fdab4:
  FUN_003b3ad8(&plStack_30);
  return;
}



/* Entry: 003fdb38; end: 003fdcd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003fdb38(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  uStack_60 = *param_2;
  if (uStack_60 != 0) goto LAB_003fdbc4;
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_003b646c(&uStack_30,2,"Handshaker shutdown",0x13,&uStack_31,auStack_58 + 1);
  uVar3 = *param_2;
  if (uStack_30 == uVar3) {
LAB_003fdba8:
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = uStack_30;
    uStack_30 = 0x36;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
      uVar3 = uStack_30;
      goto LAB_003fdba8;
    }
  }
  puStack_28 = auStack_58 + 1;
  FUN_0033d548(&puStack_28);
  uStack_60 = *param_2;
LAB_003fdbc4:
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = **(undefined8 **)(param_1 + 0x68);
    if ((uStack_60 & 1) != 0) {
      piVar5 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    auStack_58[0] = uStack_60;
    FUN_003bcee0(uVar4,auStack_58);
    if ((auStack_58[0] & 1) != 0) {
      FUN_0055293c();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x58) = *puVar6;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x60) = puVar6[2];
    puVar6[2] = 0;
    FUN_003a2a64(puVar6[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
    uStack_60 = *param_2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  if ((uStack_60 & 1) != 0) {
    piVar5 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&puStack_28,uVar4,&uStack_60);
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003fdcd8; end: 003fdd5f;  */

void FUN_003fdcd8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1c8) = FUN_003fdd60;
  *(long *)(param_1 + 0x1d0) = param_1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_1 + 0x1c0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003fdd60; end: 003fe21f;  */

void FUN_003fdd60(long *param_1,ulong *param_2,qword *param_3,qword *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  char *pcVar7;
  undefined8 uVar8;
  char **ppcVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  char **ppcVar13;
  qword *pqVar14;
  qword *pqVar15;
  qword *pqVar16;
  char *pcVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  qword *pqVar23;
  qword *unaff_x21;
  qword *unaff_x22;
  qword *pqVar24;
  ulong uVar25;
  qword *unaff_x23;
  qword *unaff_x24;
  qword *pqVar26;
  qword *pqVar27;
  qword *pqVar28;
  undefined8 ******ppppppuVar29;
  code *pcVar30;
  qword qVar31;
  qword qVar32;
  qword qVar33;
  qword qVar34;
  qword qVar35;
  qword qVar36;
  qword qVar37;
  qword qStack_380;
  qword qStack_378;
  qword qStack_370;
  qword qStack_368;
  long lStack_358;
  undefined8 *****pppppuStack_310;
  code *pcStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long lStack_278;
  ulong *puStack_270;
  long **pplStack_268;
  undefined8 ****ppppuStack_260;
  code *pcStack_258;
  char *pcStack_248;
  char *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  qword *pqStack_218;
  qword *pqStack_210;
  byte bStack_201;
  ulong uStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  long *plStack_1e8;
  undefined1 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 *puStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  char *pcStack_180;
  undefined8 uStack_178;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_1e8 = param_1 + 2;
  uStack_1e0 = 0;
  func_0x00339d8c();
  pcVar17 = (char *)*param_2;
  if (pcVar17 == (char *)0x0) {
    if ((char)param_1[10] != '\0') {
      pcStack_1f0 = (char *)0x0;
      goto LAB_003fddd8;
    }
    lVar20 = param_1[0xd];
    lVar21 = *(long *)(lVar20 + 0x10);
    if (*(long *)(lVar21 + 0x10) != 0) {
      unaff_x23 = (qword *)0x0;
      unaff_x22 = (qword *)0x0;
      unaff_x21 = (qword *)(param_1 + 0x3c);
      unaff_x24 = (qword *)(segment_command_00000020.segname + 0xe);
      do {
        plVar19 = (long *)(*(long *)(lVar21 + 8) + (long)unaff_x23);
        if (*plVar19 == 0) {
          if ((char)plVar19[1] == '\0') goto LAB_003fdef4;
LAB_003fde9c:
          puStack_1d0 = (undefined1 *)0x0;
          param_3 = (qword *)&puStack_1d0;
          FUN_003ba5a0(&pcStack_180,unaff_x21);
          pcVar17 = pcStack_180;
          pcVar7 = (char *)*param_2;
          if (pcStack_180 == pcVar7) {
LAB_003fded4:
            if (((ulong)pcVar7 & 1) != 0) {
              FUN_0055293c();
            }
            pcVar17 = (char *)*param_2;
          }
          else {
            *param_2 = (ulong)pcStack_180;
            pcStack_180 = "";
            if (((ulong)pcVar7 & 1) != 0) {
              FUN_0055293c();
              pcVar7 = pcStack_180;
              goto LAB_003fded4;
            }
          }
          if (pcVar17 != (char *)0x0) {
            if (((ulong)pcVar17 & 1) != 0) {
              piVar18 = (int *)(pcVar17 + -1);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar2) {
                  *piVar18 = *piVar18 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            ppcVar13 = &pcStack_1f8;
            pcStack_1f8 = pcVar17;
            FUN_003fdb38(param_1,ppcVar13);
            if (((ulong)pcStack_1f8 & 1) != 0) {
              FUN_0055293c();
            }
            goto LAB_003fddf0;
          }
          if ((int)*unaff_x21 != 2) {
            lVar20 = param_1[0xd];
            goto LAB_003fdef4;
          }
          FUN_003ecf38(&pcStack_180);
          lVar20 = *(long *)(param_1[0xd] + 0x10);
          lVar21 = *(long *)(lVar20 + 8);
          plVar19 = (long *)(lVar21 + (long)unaff_x23);
          if (*plVar19 == 0) {
            puVar22 = (undefined1 *)(ulong)*(byte *)(plVar19 + 1);
          }
          else {
            puVar22 = (undefined1 *)plVar19[1];
          }
          if (puStack_1d0 < puVar22) {
            FUN_003ec680(auStack_1a0);
            FUN_003ecb34(&pcStack_180,auStack_1a0);
            lVar20 = *(long *)(param_1[0xd] + 0x10);
            lVar21 = *(long *)(lVar20 + 8);
          }
          FUN_003ed0d4(&pcStack_180,(long)unaff_x23 + lVar21 + 0x20,
                       ~(ulong)unaff_x22 + *(long *)(lVar20 + 0x10));
          FUN_003ed190(*(undefined8 *)(param_1[0xd] + 0x10),&pcStack_180);
          func_0x003ecf54(&pcStack_180);
          break;
        }
        if (plVar19[1] != 0) goto LAB_003fde9c;
LAB_003fdef4:
        unaff_x22 = (qword *)((long)unaff_x22 + 1);
        lVar21 = *(long *)(lVar20 + 0x10);
        unaff_x23 = unaff_x23 + 4;
      } while (unaff_x22 < *(long **)(lVar21 + 0x10));
    }
    if ((int)param_1[0x3c] == 2) {
      uVar25 = (ulong)*(uint *)(param_1 + 0x242);
      if (*(uint *)(param_1 + 0x242) - 300 < 0xffffff9c) {
        pcStack_180 = "HTTP proxy returned response code ";
        uStack_178 = 0x22;
        func_0x00574ac0(uVar25,auStack_1c0);
        lStack_1c8 = uVar25 - (long)auStack_1c0;
        unaff_x21 = (qword *)&pqStack_218;
        puStack_1d0 = auStack_1c0;
        FUN_00575d30(&pqStack_218,&pcStack_180,&puStack_1d0);
        param_3 = pqStack_210;
        pqVar15 = pqStack_218;
        if (-1 < (char)bStack_201) {
          param_3 = (qword *)(ulong)bStack_201;
          pqVar15 = unaff_x21;
        }
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_238 = 0;
        param_4 = (qword *)&uStack_219;
        FUN_003b646c(&uStack_200,2,pqVar15,param_3,param_4,&uStack_238);
        uVar25 = *param_2;
        if (uStack_200 != uVar25) {
          *param_2 = uStack_200;
          uStack_200 = 0x36;
          if ((uVar25 & 1) != 0) {
            FUN_0055293c();
          }
        }
        FUN_0033c494(&uStack_200);
        puStack_1d8 = &uStack_238;
        FUN_0033d548(&puStack_1d8);
        if ((char)bStack_201 < '\0') {
          __ZdlPv(pqStack_218);
        }
        pcStack_240 = (char *)*param_2;
        if (((ulong)pcStack_240 & 1) != 0) {
          piVar18 = (int *)(pcStack_240 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar2) {
              *piVar18 = *piVar18 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppcVar13 = &pcStack_240;
        FUN_003fdb38(param_1,ppcVar13);
        ppcVar9 = &pcStack_240;
      }
      else {
        ppcVar13 = (char **)param_1[0xe];
        pcStack_248 = (char *)*param_2;
        if (((ulong)pcStack_248 & 1) != 0) {
          piVar18 = (int *)(pcStack_248 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar2) {
              *piVar18 = *piVar18 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        param_3 = (qword *)&pcStack_248;
        FUN_003c1e6c(&pcStack_180,ppcVar13);
        ppcVar9 = &pcStack_248;
      }
      FUN_0033c494(ppcVar9);
      goto LAB_003fddf0;
    }
    func_0x003ecf8c(*(undefined8 *)(param_1[0xd] + 0x10));
    uVar8 = *(undefined8 *)param_1[0xd];
    ppcVar13 = (char **)((undefined8 *)param_1[0xd])[2];
    param_3 = (qword *)(param_1 + 0x38);
    param_1[0x39] = (long)FUN_003fdcd8;
    param_1[0x3a] = (long)param_1;
    param_1[0x3b] = 0;
    param_4 = (qword *)((long)&MACH_HEADER.magic + 1);
    FUN_003bcea4(uVar8,ppcVar13,param_3,1,1);
  }
  else {
    pcStack_1f0 = pcVar17;
    if (((ulong)pcVar17 & 1) != 0) {
      piVar18 = (int *)(pcVar17 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar2) {
          *piVar18 = *piVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
LAB_003fddd8:
    ppcVar13 = &pcStack_1f0;
    FUN_003fdb38(param_1,ppcVar13);
    if (((ulong)pcStack_1f0 & 1) != 0) {
      FUN_0055293c();
    }
LAB_003fddf0:
    *(undefined1 *)(param_1 + 10) = 1;
    uStack_1e0 = 1;
    func_0x00339da8(plStack_1e8);
    plVar19 = param_1 + 1;
    do {
      lVar20 = *plVar19;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar2) {
        *plVar19 = lVar20 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  pplVar6 = &plStack_1e8;
  FUN_003b3ad8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&uStack_200);
  puStack_1d8 = &uStack_238;
  FUN_0033d548(&puStack_1d8);
  if ((char)bStack_201 < '\0') {
    __ZdlPv(pqStack_218);
  }
  FUN_003b3ad8(&plStack_1e8);
  pplVar10 = pplVar6;
  __Unwind_Resume();
  pplVar5 = &plStack_300;
  pcStack_258 = FUN_003fe220;
  lStack_278 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar15 = param_3;
  puStack_270 = param_2;
  pplStack_268 = pplVar6;
  ppppuStack_260 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x003ec288(&plStack_2e0,ppcVar13);
  plVar19 = (long *)*param_4;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar19) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar2) {
        *plVar19 = *plVar19 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_2f8 = (long *)param_4[1];
  plStack_300 = (long *)*param_4;
  plStack_2e8 = (long *)param_4[3];
  plStack_2f0 = (long *)param_4[2];
  FUN_003ff12c();
  pplVar10[1] = plStack_2d8;
  *pplVar10 = plStack_2e0;
  pplVar10[3] = plStack_2c8;
  pplVar10[2] = plStack_2d0;
  plVar4 = plStack_2e8;
  plVar3 = plStack_2f0;
  plVar19 = plStack_300;
  pplVar10[5] = plStack_2f8;
  pplVar10[4] = plVar19;
  pplVar10[7] = plVar4;
  pplVar10[6] = plVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  FUN_0034b418(&plStack_300);
  FUN_0034b418(&plStack_2e0);
  pplVar11 = pplVar10;
  __Unwind_Resume();
  pcStack_308 = FUN_003fe2e4;
  lStack_358 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar23 = (qword *)pplVar11[1];
  pplVar6 = pplVar11;
  pqVar14 = param_3;
  pqVar16 = pqVar15;
  pqVar26 = unaff_x24;
  pppppuStack_310 = &ppppuStack_260;
  if (pqVar23 != (qword *)0x0) {
    if (pqVar23[1] != 0) {
      pqVar24 = (qword *)0x0;
      do {
        plVar19 = (long *)((ulong)pqVar23[(long)pqVar24 * 8 + 3] & 0xff);
        if (pqVar23[(long)pqVar24 * 8 + 2] != 0) {
          plVar19 = (long *)pqVar23[(long)pqVar24 * 8 + 3];
        }
        if ((qword *)plVar19 == pqVar15) {
          pplVar6 = (long **)((long)pqVar23 + (long)pqVar24 * 0x40 + 0x19);
          if (pqVar23[(long)pqVar24 * 8 + 2] != 0) {
            pplVar6 = (long **)pqVar23[(long)pqVar24 * 8 + 4];
          }
          pqVar14 = param_3;
          pqVar16 = pqVar15;
          _memcmp();
          pqVar27 = pqVar24;
          pqVar28 = pqVar23;
          if ((int)pplVar6 == 0) goto LAB_003fe3ec;
        }
        pqVar24 = (qword *)((long)pqVar24 + 1);
        do {
          if (pqVar24 != (qword *)pqVar23[1]) goto LAB_003fe38c;
          pqVar24 = (qword *)0x0;
          pqVar23 = (qword *)*pqVar23;
        } while (pqVar23 != (qword *)0x0);
        pqVar24 = (qword *)0x0;
LAB_003fe38c:
      } while ((pqVar23 != (qword *)0x0) || (pqVar24 != (qword *)0x0));
      pqVar23 = (qword *)0x0;
      goto LAB_003fe3a4;
    }
    pqVar23 = (qword *)0x0;
  }
  pqVar24 = (qword *)0x0;
  pqVar15 = unaff_x21;
  param_3 = unaff_x23;
LAB_003fe3a4:
  pplVar12 = pplVar11;
  pqVar27 = pqVar23;
  pqVar28 = pqVar24;
  ppppppuVar29 = (undefined8 ******)pppppuStack_310;
  pcVar30 = pcStack_308;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_358) {
    ___stack_chk_fail();
    pplVar5 = (long **)&qStack_380;
    pplVar12 = pplVar6;
    pqVar27 = pqVar14;
    pqVar28 = pqVar16;
    pplVar10 = pplVar11;
    param_4 = pqVar23;
    unaff_x21 = pqVar15;
    unaff_x22 = pqVar24;
    unaff_x23 = param_3;
    unaff_x24 = pqVar26;
    ppppppuVar29 = &pppppuStack_310;
    pcVar30 = FUN_003fe4b0;
  }
  if (pqVar27 != (qword *)0x0 || pqVar28 != (qword *)0x0) {
    *(qword **)((long)pplVar5 + -0x40) = unaff_x24;
    *(qword **)((long)pplVar5 + -0x38) = unaff_x23;
    *(qword **)((long)pplVar5 + -0x30) = unaff_x22;
    *(qword **)((long)pplVar5 + -0x28) = unaff_x21;
    *(qword **)((long)pplVar5 + -0x20) = param_4;
    *(long ***)((long)pplVar5 + -0x18) = pplVar10;
    *(undefined8 *******)((long)pplVar5 + -0x10) = ppppppuVar29;
    *(code **)((long)pplVar5 + -8) = pcVar30;
    if (pqVar28 < (long *)pqVar27[1]) {
      pqVar15 = pqVar27 + (long)pqVar28 * 8 + 6;
      pqVar14 = pqVar28;
      do {
        FUN_0034b418(pqVar15);
        FUN_0034b418(pqVar15 + -4);
        pqVar14 = (qword *)((long)pqVar14 + 1);
        pqVar15 = pqVar15 + 8;
      } while (pqVar14 < (long *)pqVar27[1]);
    }
    pqVar27[1] = (qword)pqVar28;
    pplVar12[2] = (long *)pqVar27;
    for (plVar19 = (long *)*pqVar27; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
      if (plVar19[1] != 0) {
        uVar25 = 0;
        lVar20 = (long)(plVar19 + 6);
        do {
          FUN_0034b418(lVar20);
          FUN_0034b418(lVar20 + -0x20);
          uVar25 = uVar25 + 1;
          lVar20 = lVar20 + 0x40;
        } while (uVar25 < (ulong)plVar19[1]);
      }
      plVar19[1] = 0;
    }
  }
  return;
LAB_003fe3ec:
  pqVar27 = (qword *)((long)pqVar27 + 1);
  if (pqVar28 == (qword *)0x0) {
    pqVar26 = (qword *)0x0;
    if (pqVar27 == (qword *)0x0) goto LAB_003fe3a4;
    pqVar28 = (qword *)0x0;
  }
  else {
    while (pqVar27 == (qword *)pqVar28[1]) {
      pqVar27 = (qword *)0x0;
      pqVar28 = (qword *)*pqVar28;
      pqVar26 = pqVar27;
      if (pqVar28 == (qword *)0x0) goto LAB_003fe3a4;
    }
  }
  pqVar26 = pqVar28 + (long)pqVar27 * 8 + 2;
  plVar19 = (long *)((ulong)pqVar28[(long)pqVar27 * 8 + 3] & 0xff);
  if (*pqVar26 != 0) {
    plVar19 = (long *)pqVar28[(long)pqVar27 * 8 + 3];
  }
  if ((qword *)plVar19 == pqVar15) goto code_r0x003fe434;
  goto LAB_003fe454;
code_r0x003fe434:
  pplVar6 = (long **)((long)pqVar28 + (long)pqVar27 * 0x40 + 0x19);
  if (*pqVar26 != 0) {
    pplVar6 = (long **)pqVar28[(long)pqVar27 * 8 + 4];
  }
  pqVar14 = param_3;
  pqVar16 = pqVar15;
  _memcmp();
  if ((int)pplVar6 != 0) {
LAB_003fe454:
    qVar33 = pqVar23[(long)pqVar24 * 8 + 3];
    qVar31 = pqVar23[(long)pqVar24 * 8 + 2];
    qVar36 = pqVar23[(long)pqVar24 * 8 + 5];
    qVar34 = pqVar23[(long)pqVar24 * 8 + 4];
    qVar32 = *pqVar26;
    qVar37 = pqVar28[(long)pqVar27 * 8 + 5];
    qVar35 = pqVar28[(long)pqVar27 * 8 + 4];
    pqVar23[(long)pqVar24 * 8 + 3] = pqVar28[(long)pqVar27 * 8 + 3];
    pqVar23[(long)pqVar24 * 8 + 2] = qVar32;
    pqVar23[(long)pqVar24 * 8 + 5] = qVar37;
    pqVar23[(long)pqVar24 * 8 + 4] = qVar35;
    pqVar28[(long)pqVar27 * 8 + 3] = qVar33;
    *pqVar26 = qVar31;
    pqVar28[(long)pqVar27 * 8 + 5] = qVar36;
    pqVar28[(long)pqVar27 * 8 + 4] = qVar34;
    qStack_378 = pqVar23[(long)pqVar24 * 8 + 7];
    qStack_380 = pqVar23[(long)pqVar24 * 8 + 6];
    qStack_368 = pqVar23[(long)pqVar24 * 8 + 9];
    qStack_370 = pqVar23[(long)pqVar24 * 8 + 8];
    qVar31 = pqVar28[(long)pqVar27 * 8 + 6];
    qVar33 = pqVar28[(long)pqVar27 * 8 + 9];
    qVar32 = pqVar28[(long)pqVar27 * 8 + 8];
    pqVar23[(long)pqVar24 * 8 + 7] = pqVar28[(long)pqVar27 * 8 + 7];
    pqVar23[(long)pqVar24 * 8 + 6] = qVar31;
    pqVar23[(long)pqVar24 * 8 + 9] = qVar33;
    pqVar23[(long)pqVar24 * 8 + 8] = qVar32;
    pqVar28[(long)pqVar27 * 8 + 7] = qStack_378;
    pqVar28[(long)pqVar27 * 8 + 6] = qStack_380;
    pqVar28[(long)pqVar27 * 8 + 9] = qStack_368;
    pqVar28[(long)pqVar27 * 8 + 8] = qStack_370;
    pqVar24 = (qword *)((long)pqVar24 + 1);
    do {
      if (pqVar24 != (qword *)pqVar23[1]) goto LAB_003fe3ec;
      pqVar24 = (qword *)0x0;
      pqVar23 = (qword *)*pqVar23;
    } while (pqVar23 != (qword *)0x0);
    pqVar24 = (qword *)0x0;
  }
  goto LAB_003fe3ec;
}



/* Entry: 003fe220; end: 003fe2e3;  */

void FUN_003fe220(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x21;
  long *plVar11;
  long *unaff_x22;
  long *plVar12;
  ulong uVar13;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 ****ppppuVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_28;
  
  plVar3 = &lStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = param_3;
  func_0x003ec288(&uStack_90,param_2);
  plVar9 = (long *)*param_4;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_a8 = param_4[1];
  lStack_b0 = *param_4;
  lStack_98 = param_4[3];
  lStack_a0 = param_4[2];
  FUN_003ff12c();
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = lStack_a8;
  param_1[4] = lStack_b0;
  param_1[7] = lStack_98;
  param_1[6] = lStack_a0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_0034b418(&lStack_b0);
  FUN_0034b418(&uStack_90);
  puVar4 = param_1;
  __Unwind_Resume();
  pcStack_b8 = FUN_003fe2e4;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar10 = (long *)puVar4[1];
  puVar5 = puVar4;
  plVar9 = param_3;
  plVar8 = plVar7;
  plVar14 = unaff_x24;
  pppuStack_c0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (plVar10 != (long *)0x0) {
    if (plVar10[1] != 0) {
      plVar12 = (long *)0x0;
      do {
        plVar11 = (long *)((ulong)plVar10[(long)plVar12 * 8 + 3] & 0xff);
        if (plVar10[(long)plVar12 * 8 + 2] != 0) {
          plVar11 = (long *)plVar10[(long)plVar12 * 8 + 3];
        }
        if (plVar11 == plVar7) {
          puVar5 = (undefined8 *)((long)plVar10 + (long)plVar12 * 0x40 + 0x19);
          if (plVar10[(long)plVar12 * 8 + 2] != 0) {
            puVar5 = (undefined8 *)plVar10[(long)plVar12 * 8 + 4];
          }
          plVar9 = param_3;
          plVar8 = plVar7;
          _memcmp();
          plVar11 = plVar12;
          plVar15 = plVar10;
          if ((int)puVar5 == 0) goto LAB_003fe3ec;
        }
        plVar12 = (long *)((long)plVar12 + 1);
        do {
          if (plVar12 != (long *)plVar10[1]) goto LAB_003fe38c;
          plVar12 = (long *)0x0;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
        plVar12 = (long *)0x0;
LAB_003fe38c:
      } while ((plVar10 != (long *)0x0) || (plVar12 != (long *)0x0));
      plVar10 = (long *)0x0;
      goto LAB_003fe3a4;
    }
    plVar10 = (long *)0x0;
  }
  plVar12 = (long *)0x0;
  plVar7 = unaff_x21;
  param_3 = unaff_x23;
LAB_003fe3a4:
  puVar6 = puVar4;
  plVar11 = plVar10;
  plVar15 = plVar12;
  ppppuVar17 = (undefined8 ****)pppuStack_c0;
  pcVar18 = pcStack_b8;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_108) {
    ___stack_chk_fail();
    plVar3 = &lStack_130;
    puVar6 = puVar5;
    plVar11 = plVar9;
    plVar15 = plVar8;
    param_1 = puVar4;
    param_4 = plVar10;
    unaff_x21 = plVar7;
    unaff_x22 = plVar12;
    unaff_x23 = param_3;
    unaff_x24 = plVar14;
    ppppuVar17 = &pppuStack_c0;
    pcVar18 = FUN_003fe4b0;
  }
  if (plVar11 != (long *)0x0 || plVar15 != (long *)0x0) {
    *(long **)((long)plVar3 + -0x40) = unaff_x24;
    *(long **)((long)plVar3 + -0x38) = unaff_x23;
    *(long **)((long)plVar3 + -0x30) = unaff_x22;
    *(long **)((long)plVar3 + -0x28) = unaff_x21;
    *(long **)((long)plVar3 + -0x20) = param_4;
    *(undefined8 **)((long)plVar3 + -0x18) = param_1;
    *(undefined8 *****)((long)plVar3 + -0x10) = ppppuVar17;
    *(code **)((long)plVar3 + -8) = pcVar18;
    if (plVar15 < (long *)plVar11[1]) {
      plVar3 = plVar11 + (long)plVar15 * 8 + 6;
      plVar7 = plVar15;
      do {
        FUN_0034b418(plVar3);
        FUN_0034b418(plVar3 + -4);
        plVar7 = (long *)((long)plVar7 + 1);
        plVar3 = plVar3 + 8;
      } while (plVar7 < (long *)plVar11[1]);
    }
    plVar11[1] = (long)plVar15;
    puVar6[2] = plVar11;
    for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11[1] != 0) {
        uVar13 = 0;
        lVar19 = (long)(plVar11 + 6);
        do {
          FUN_0034b418(lVar19);
          FUN_0034b418(lVar19 + -0x20);
          uVar13 = uVar13 + 1;
          lVar19 = lVar19 + 0x40;
        } while (uVar13 < (ulong)plVar11[1]);
      }
      plVar11[1] = 0;
    }
  }
  return;
LAB_003fe3ec:
  plVar11 = (long *)((long)plVar11 + 1);
  if (plVar15 == (long *)0x0) {
    plVar14 = (long *)0x0;
    if (plVar11 == (long *)0x0) goto LAB_003fe3a4;
    plVar15 = (long *)0x0;
  }
  else {
    while (plVar11 == (long *)plVar15[1]) {
      plVar11 = (long *)0x0;
      plVar15 = (long *)*plVar15;
      plVar14 = plVar11;
      if (plVar15 == (long *)0x0) goto LAB_003fe3a4;
    }
  }
  plVar16 = plVar15 + (long)plVar11 * 8 + 2;
  plVar14 = (long *)((ulong)plVar15[(long)plVar11 * 8 + 3] & 0xff);
  if (*plVar16 != 0) {
    plVar14 = (long *)plVar15[(long)plVar11 * 8 + 3];
  }
  if (plVar14 == plVar7) goto code_r0x003fe434;
  goto LAB_003fe454;
code_r0x003fe434:
  puVar5 = (undefined8 *)((long)plVar15 + (long)plVar11 * 0x40 + 0x19);
  if (*plVar16 != 0) {
    puVar5 = (undefined8 *)plVar15[(long)plVar11 * 8 + 4];
  }
  plVar9 = param_3;
  plVar8 = plVar7;
  _memcmp();
  if ((int)puVar5 != 0) {
LAB_003fe454:
    lVar21 = plVar10[(long)plVar12 * 8 + 3];
    lVar19 = plVar10[(long)plVar12 * 8 + 2];
    lVar24 = plVar10[(long)plVar12 * 8 + 5];
    lVar22 = plVar10[(long)plVar12 * 8 + 4];
    lVar20 = *plVar16;
    lVar25 = plVar15[(long)plVar11 * 8 + 5];
    lVar23 = plVar15[(long)plVar11 * 8 + 4];
    plVar10[(long)plVar12 * 8 + 3] = plVar15[(long)plVar11 * 8 + 3];
    plVar10[(long)plVar12 * 8 + 2] = lVar20;
    plVar10[(long)plVar12 * 8 + 5] = lVar25;
    plVar10[(long)plVar12 * 8 + 4] = lVar23;
    plVar15[(long)plVar11 * 8 + 3] = lVar21;
    *plVar16 = lVar19;
    plVar15[(long)plVar11 * 8 + 5] = lVar24;
    plVar15[(long)plVar11 * 8 + 4] = lVar22;
    lStack_128 = plVar10[(long)plVar12 * 8 + 7];
    lStack_130 = plVar10[(long)plVar12 * 8 + 6];
    lStack_118 = plVar10[(long)plVar12 * 8 + 9];
    lStack_120 = plVar10[(long)plVar12 * 8 + 8];
    lVar19 = plVar15[(long)plVar11 * 8 + 6];
    lVar21 = plVar15[(long)plVar11 * 8 + 9];
    lVar20 = plVar15[(long)plVar11 * 8 + 8];
    plVar10[(long)plVar12 * 8 + 7] = plVar15[(long)plVar11 * 8 + 7];
    plVar10[(long)plVar12 * 8 + 6] = lVar19;
    plVar10[(long)plVar12 * 8 + 9] = lVar21;
    plVar10[(long)plVar12 * 8 + 8] = lVar20;
    plVar15[(long)plVar11 * 8 + 7] = lStack_128;
    plVar15[(long)plVar11 * 8 + 6] = lStack_130;
    plVar15[(long)plVar11 * 8 + 9] = lStack_118;
    plVar15[(long)plVar11 * 8 + 8] = lStack_120;
    plVar12 = (long *)((long)plVar12 + 1);
    do {
      if (plVar12 != (long *)plVar10[1]) goto LAB_003fe3ec;
      plVar12 = (long *)0x0;
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    plVar12 = (long *)0x0;
  }
  goto LAB_003fe3ec;
}



/* Entry: 003fe2e4; end: 003fe4af;  */

void FUN_003fe2e4(long param_1,long *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x20;
  long *plVar4;
  ulong unaff_x21;
  long *plVar5;
  ulong unaff_x22;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x23;
  ulong unaff_x24;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar4 = *(long **)(param_1 + 8);
  lVar2 = param_1;
  plVar3 = param_2;
  uVar7 = param_3;
  uVar8 = unaff_x24;
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] != 0) {
      uVar6 = 0;
      do {
        uVar9 = plVar4[uVar6 * 8 + 3] & 0xff;
        if (plVar4[uVar6 * 8 + 2] != 0) {
          uVar9 = plVar4[uVar6 * 8 + 3];
        }
        if (uVar9 == param_3) {
          lVar2 = (long)plVar4 + uVar6 * 0x40 + 0x19;
          if (plVar4[uVar6 * 8 + 2] != 0) {
            lVar2 = plVar4[uVar6 * 8 + 4];
          }
          plVar3 = param_2;
          uVar7 = param_3;
          _memcmp();
          uVar9 = uVar6;
          plVar5 = plVar4;
          if ((int)lVar2 == 0) goto LAB_003fe3ec;
        }
        uVar6 = uVar6 + 1;
        do {
          if (uVar6 != plVar4[1]) goto LAB_003fe38c;
          uVar6 = 0;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        uVar6 = 0;
LAB_003fe38c:
      } while ((plVar4 != (long *)0x0) || (uVar6 != 0));
      plVar4 = (long *)0x0;
      goto LAB_003fe3a4;
    }
    plVar4 = (long *)0x0;
  }
  uVar6 = 0;
  param_3 = unaff_x21;
  param_2 = unaff_x23;
LAB_003fe3a4:
  lVar11 = param_1;
  plVar5 = plVar4;
  uVar9 = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    unaff_x30 = FUN_003fe4b0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)&lStack_80;
    lVar11 = lVar2;
    plVar5 = plVar3;
    uVar9 = uVar7;
    unaff_x19 = param_1;
    unaff_x20 = plVar4;
    unaff_x21 = param_3;
    unaff_x22 = uVar6;
    unaff_x23 = param_2;
    unaff_x24 = uVar8;
    unaff_x29 = puVar1;
  }
  if (plVar5 != (long *)0x0 || uVar9 != 0) {
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (uVar9 < (ulong)plVar5[1]) {
      plVar3 = plVar5 + uVar9 * 8 + 6;
      uVar7 = uVar9;
      do {
        FUN_0034b418(plVar3);
        FUN_0034b418(plVar3 + -4);
        uVar7 = uVar7 + 1;
        plVar3 = plVar3 + 8;
      } while (uVar7 < (ulong)plVar5[1]);
    }
    plVar5[1] = uVar9;
    *(long **)(lVar11 + 0x10) = plVar5;
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] != 0) {
        uVar7 = 0;
        lVar2 = (long)(plVar5 + 6);
        do {
          FUN_0034b418(lVar2);
          FUN_0034b418(lVar2 + -0x20);
          uVar7 = uVar7 + 1;
          lVar2 = lVar2 + 0x40;
        } while (uVar7 < (ulong)plVar5[1]);
      }
      plVar5[1] = 0;
    }
  }
  return;
LAB_003fe3ec:
  uVar9 = uVar9 + 1;
  if (plVar5 == (long *)0x0) {
    uVar8 = 0;
    if (uVar9 == 0) goto LAB_003fe3a4;
    plVar5 = (long *)0x0;
  }
  else {
    while (uVar9 == plVar5[1]) {
      uVar9 = 0;
      plVar5 = (long *)*plVar5;
      uVar8 = uVar9;
      if (plVar5 == (long *)0x0) goto LAB_003fe3a4;
    }
  }
  plVar10 = plVar5 + uVar9 * 8 + 2;
  uVar8 = plVar5[uVar9 * 8 + 3] & 0xff;
  if (*plVar10 != 0) {
    uVar8 = plVar5[uVar9 * 8 + 3];
  }
  if (uVar8 == param_3) goto code_r0x003fe434;
  goto LAB_003fe454;
code_r0x003fe434:
  lVar2 = (long)plVar5 + uVar9 * 0x40 + 0x19;
  if (*plVar10 != 0) {
    lVar2 = plVar5[uVar9 * 8 + 4];
  }
  plVar3 = param_2;
  uVar7 = param_3;
  _memcmp();
  if ((int)lVar2 != 0) {
LAB_003fe454:
    lVar13 = plVar4[uVar6 * 8 + 3];
    lVar11 = plVar4[uVar6 * 8 + 2];
    lVar16 = plVar4[uVar6 * 8 + 5];
    lVar14 = plVar4[uVar6 * 8 + 4];
    lVar12 = *plVar10;
    lVar17 = plVar5[uVar9 * 8 + 5];
    lVar15 = plVar5[uVar9 * 8 + 4];
    plVar4[uVar6 * 8 + 3] = plVar5[uVar9 * 8 + 3];
    plVar4[uVar6 * 8 + 2] = lVar12;
    plVar4[uVar6 * 8 + 5] = lVar17;
    plVar4[uVar6 * 8 + 4] = lVar15;
    plVar5[uVar9 * 8 + 3] = lVar13;
    *plVar10 = lVar11;
    plVar5[uVar9 * 8 + 5] = lVar16;
    plVar5[uVar9 * 8 + 4] = lVar14;
    lStack_78 = plVar4[uVar6 * 8 + 7];
    lStack_80 = plVar4[uVar6 * 8 + 6];
    lStack_68 = plVar4[uVar6 * 8 + 9];
    lStack_70 = plVar4[uVar6 * 8 + 8];
    lVar11 = plVar5[uVar9 * 8 + 6];
    lVar13 = plVar5[uVar9 * 8 + 9];
    lVar12 = plVar5[uVar9 * 8 + 8];
    plVar4[uVar6 * 8 + 7] = plVar5[uVar9 * 8 + 7];
    plVar4[uVar6 * 8 + 6] = lVar11;
    plVar4[uVar6 * 8 + 9] = lVar13;
    plVar4[uVar6 * 8 + 8] = lVar12;
    plVar5[uVar9 * 8 + 7] = lStack_78;
    plVar5[uVar9 * 8 + 6] = lStack_80;
    plVar5[uVar9 * 8 + 9] = lStack_68;
    plVar5[uVar9 * 8 + 8] = lStack_70;
    uVar6 = uVar6 + 1;
    do {
      if (uVar6 != plVar4[1]) goto LAB_003fe3ec;
      uVar6 = 0;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    uVar6 = 0;
  }
  goto LAB_003fe3ec;
}



/* Entry: 003fe4b0; end: 003fe57f;  */

void FUN_003fe4b0(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (param_2 != (long *)0x0 || param_3 != 0) {
    if (param_3 < (ulong)param_2[1]) {
      plVar2 = param_2 + param_3 * 8 + 6;
      uVar3 = param_3;
      do {
        FUN_0034b418(plVar2);
        FUN_0034b418(plVar2 + -4);
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 8;
      } while (uVar3 < (ulong)param_2[1]);
    }
    param_2[1] = param_3;
    *(long **)(param_1 + 0x10) = param_2;
    for (param_2 = (long *)*param_2; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
      if (param_2[1] != 0) {
        uVar3 = 0;
        lVar1 = (long)(param_2 + 6);
        do {
          FUN_0034b418(lVar1);
          FUN_0034b418(lVar1 + -0x20);
          uVar3 = uVar3 + 1;
          lVar1 = lVar1 + 0x40;
        } while (uVar3 < (ulong)param_2[1]);
      }
      param_2[1] = 0;
    }
  }
  return;
}



/* Entry: 003fe580; end: 003fe72b;  */

long ** FUN_003fe580(long *param_1,long **param_2,char **param_3,code *param_4,long *param_5)

{
  bool bVar1;
  char **ppcVar2;
  code *pcVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  long *plStack_a0;
  ulong uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar6 = param_2[1];
  ppcVar2 = param_3;
  pcVar3 = param_4;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    lVar7 = 0;
    bVar1 = false;
    plVar5 = (long *)*param_1;
    uVar8 = param_1[1];
    do {
      if (plVar6[lVar7 * 8 + 2] == 0) {
        param_2 = (long **)((long)plVar6 + lVar7 * 0x40 + 0x19);
        pcVar4 = (code *)(ulong)*(byte *)(plVar6 + lVar7 * 8 + 3);
      }
      else {
        pcVar4 = (code *)plVar6[lVar7 * 8 + 3];
        param_2 = (long **)plVar6[lVar7 * 8 + 4];
      }
      if ((pcVar4 == param_4) &&
         (ppcVar2 = param_3, pcVar3 = param_4, _memcmp(param_2,param_3), (int)param_2 == 0)) {
        if (bVar1) {
          pcStack_d0 = ",";
          uStack_c8 = 1;
          if (plVar6[lVar7 * 8 + 6] == 0) {
            lStack_100 = (long)plVar6 + lVar7 * 0x40 + 0x39;
            uStack_f8 = (ulong)*(byte *)(plVar6 + lVar7 * 8 + 7);
          }
          else {
            uStack_f8 = plVar6[lVar7 * 8 + 7];
            lStack_100 = plVar6[lVar7 * 8 + 8];
          }
          param_2 = &plStack_a0;
          ppcVar2 = &pcStack_d0;
          pcVar3 = (code *)&lStack_100;
          plStack_a0 = plVar5;
          uStack_98 = uVar8;
          FUN_00575ddc(&lStack_118,param_2,ppcVar2);
          if (*(char *)((long)param_5 + 0x17) < '\0') {
            param_2 = (long **)*param_5;
            __ZdlPv();
          }
          param_5[2] = uStack_108;
          param_5[1] = lStack_110;
          *param_5 = lStack_118;
          uVar8 = param_5[1];
          plVar5 = (long *)*param_5;
          if (-1 < (long)uStack_108) {
            uVar8 = uStack_108 >> 0x38;
            plVar5 = param_5;
          }
          *param_1 = (long)plVar5;
          param_1[1] = uVar8;
        }
        else {
          if (plVar6[lVar7 * 8 + 6] == 0) {
            plVar5 = (long *)((long)plVar6 + lVar7 * 0x40 + 0x39);
            uVar8 = (ulong)*(byte *)(plVar6 + lVar7 * 8 + 7);
          }
          else {
            uVar8 = plVar6[lVar7 * 8 + 7];
            plVar5 = (long *)plVar6[lVar7 * 8 + 8];
          }
          *param_1 = (long)plVar5;
          param_1[1] = uVar8;
          bVar1 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar7 = lVar7 + 1;
      do {
        if (lVar7 != plVar6[1]) goto LAB_003fe6e4;
        lVar7 = 0;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      lVar7 = 0;
LAB_003fe6e4:
    } while ((plVar6 != (long *)0x0) || (lVar7 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*param_2 == (long *)0x0) {
    plVar6 = (long *)((long)param_2 + 9);
    plVar5 = (long *)(ulong)*(byte *)(param_2 + 1);
  }
  else {
    plVar5 = param_2[1];
    plVar6 = param_2[2];
  }
  if (plVar5 == (long *)0x10) {
    if (*plVar6 == 0x746163696c707061 && plVar6[1] == 0x637072672f6e6f69) {
      return (long **)0x0;
    }
  }
  else if (plVar5 < (long *)0x11) {
    if (plVar5 == (long *)0x0) {
      return (long **)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    if ((*plVar6 == 0x746163696c707061 && plVar6[1] == 0x637072672f6e6f69) && (char)plVar6[2] == ';'
       ) {
      return (long **)0x0;
    }
    if ((*plVar6 == 0x746163696c707061 && plVar6[1] == 0x637072672f6e6f69) && (char)plVar6[2] == '+'
       ) {
      return (long **)0x0;
    }
  }
  (*pcVar3)(ppcVar2,"invalid value",0xd);
  return (long **)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 003fe72c; end: 003fe87b;  */

undefined8 FUN_003fe72c(long *param_1,undefined8 param_2,code *param_3)

{
  long *plVar1;
  ulong uVar2;
  
  if (*param_1 == 0) {
    plVar1 = (long *)((long)param_1 + 9);
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    plVar1 = (long *)param_1[2];
  }
  if (uVar2 == 0x10) {
    if (*plVar1 == 0x746163696c707061 && plVar1[1] == 0x637072672f6e6f69) {
      return 0;
    }
  }
  else if (uVar2 < 0x11) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else {
    if ((*plVar1 == 0x746163696c707061 && plVar1[1] == 0x637072672f6e6f69) && (char)plVar1[2] == ';'
       ) {
      return 0;
    }
    if ((*plVar1 == 0x746163696c707061 && plVar1[1] == 0x637072672f6e6f69) && (char)plVar1[2] == '+'
       ) {
      return 0;
    }
  }
  (*param_3)(param_2,"invalid value",0xd);
  return 2;
}



/* Entry: 003fe87c; end: 003fe8a7;  */

char * FUN_003fe87c(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "";
  if (param_1 != 1) {
    pcVar1 = "<discarded-invalid-value>";
  }
  pcVar2 = "application/grpc";
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}



/* Entry: 003fe8a8; end: 003fe8fb;  */

void FUN_003fe8a8(undefined8 param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x004003dc();
  if ((uVar1 & 0xff) == 0) {
    (*param_3)(param_2,"invalid value",0xd,param_1);
  }
  return;
}



/* Entry: 003fe8fc; end: 003fea27;  */

long FUN_003fe8fc(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0x7fffffffffffffff;
  if (param_1 != (ulong *)0x7fffffffffffffff) {
    puVar1 = param_1;
    func_0x003c1f6c();
    uVar2 = *puVar1;
    FUN_003c1e28();
    if (((uVar2 != 0x7fffffffffffffff) &&
        (lVar3 = -0x8000000000000000, param_1 != (ulong *)0x8000000000000000)) &&
       (uVar2 != 0x8000000000000000)) {
      if ((long)uVar2 < 1) {
        if ((long)param_1 < (long)(-0x8000000000000000 - uVar2)) {
          return -0x8000000000000000;
        }
      }
      else if ((long)(uVar2 ^ 0x7fffffffffffffff) < (long)param_1) {
        return 0x7fffffffffffffff;
      }
      lVar3 = uVar2 + (long)param_1;
    }
  }
  return lVar3;
}



/* Entry: 003fea28; end: 003feaa7;  */

undefined8 FUN_003fea28(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((long)param_1 + 9);
    if (*param_1 != 0) {
      plVar2 = (long *)param_1[2];
    }
    if (*plVar2 == 0x7372656c69617274) {
      return 0;
    }
  }
  (*param_3)(param_2,"invalid value",0xd);
  return 1;
}



/* Entry: 003feaa8; end: 003feac3;  */

char * FUN_003feaa8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "trailers";
  if (param_1 != 0) {
    pcVar1 = "<discarded-invalid-value>";
  }
  return pcVar1;
}



/* Entry: 003feac4; end: 003febf3;  */

char * FUN_003feac4(int *param_1,long param_2,undefined8 param_3,code *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined *puVar9;
  undefined8 uVar10;
  long *aplStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2 == 5) {
    iVar7 = 0x91e19c;
    piVar6 = param_1;
    _memcmp(param_1,&DAT_0091e19c,5);
    if ((int)piVar6 == 0) {
      pcVar5 = (char *)0x1;
      goto LAB_003feb90;
    }
  }
  else if ((param_2 == 4) && (*param_1 == 0x70747468)) {
    pcVar5 = (char *)0x0;
    iVar7 = 4;
    goto LAB_003feb90;
  }
  func_0x003ec288(aplStack_58,param_1,param_2);
  iVar7 = 0x8cd6c5;
  (*param_4)(param_3,"invalid value",0xd,aplStack_58);
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_58[0]) {
    do {
      lVar8 = *aplStack_58[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_58[0],0x10);
      if (bVar4) {
        *aplStack_58[0] = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)aplStack_58[0][1])();
    }
  }
  pcVar5 = (char *)0x2;
LAB_003feb90:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pcVar5;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_58);
  }
  __Unwind_Resume();
  if ((int)pcVar5 == 0) {
    puVar9 = &DAT_0091e197;
    uVar10 = 4;
  }
  else {
    if ((int)pcVar5 != 1) {
      _abort();
      pcVar1 = "https";
      if ((int)pcVar5 != 1) {
        pcVar1 = "<discarded-invalid-value>";
      }
      pcVar2 = "http";
      if ((int)pcVar5 != 0) {
        pcVar2 = pcVar1;
      }
      return pcVar2;
    }
    puVar9 = &DAT_0091e19c;
    uVar10 = 5;
  }
  *extraout_x8 = 1;
  extraout_x8[1] = uVar10;
  extraout_x8[2] = puVar9;
  return pcVar5;
}



/* Entry: 003febf4; end: 003fec3b;  */

char * FUN_003febf4(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((int)param_2 == 0) {
    puVar3 = &DAT_0091e197;
    uVar4 = 4;
  }
  else {
    if ((int)param_2 != 1) {
      _abort();
      pcVar1 = "https";
      if ((int)param_2 != 1) {
        pcVar1 = "<discarded-invalid-value>";
      }
      pcVar2 = "http";
      if ((int)param_2 != 0) {
        pcVar2 = pcVar1;
      }
      return pcVar2;
    }
    puVar3 = &DAT_0091e19c;
    uVar4 = 5;
  }
  *param_1 = 1;
  param_1[1] = uVar4;
  param_1[2] = puVar3;
  return param_2;
}



/* Entry: 003fec3c; end: 003fec67;  */

char * FUN_003fec3c(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "https";
  if (param_1 != 1) {
    pcVar1 = "<discarded-invalid-value>";
  }
  pcVar2 = "http";
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}



/* Entry: 003fec68; end: 003fed33;  */

undefined8 FUN_003fec68(long *param_1,undefined8 param_2,code *param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    piVar3 = (int *)((long)param_1 + 9);
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    piVar3 = (int *)param_1[2];
  }
  if (uVar2 == 3) {
    piVar1 = piVar3;
    _memcmp(piVar3,"PUT");
    if ((int)piVar1 == 0) {
      return 2;
    }
    if ((short)*piVar3 == 0x4547 && *(char *)((long)piVar3 + 2) == 'T') {
      return 1;
    }
  }
  else if ((uVar2 == 4) && (*piVar3 == 0x54534f50)) {
    return 0;
  }
  (*param_3)(param_2,"invalid value",0xd,param_1);
  return 3;
}



/* Entry: 003fed34; end: 003fed73;  */

char * FUN_003fed34(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_007fb950 + (long)(int)uVar1 * 8);
    puVar3 = (&PTR_s_POST_009e2090)[(int)uVar1];
    *param_1 = 1;
    param_1[1] = uVar2;
    param_1[2] = puVar3;
    return param_2;
  }
  _abort();
  if ((uint)param_2 < 3) {
    return (&PTR_s_POST_009e2090)[(int)(uint)param_2];
  }
  return "<discarded-invalid-value>";
}



/* Entry: 003fed74; end: 003fed97;  */

char * FUN_003fed74(uint param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_POST_009e2090)[(int)param_1];
  }
  return "<discarded-invalid-value>";
}



/* Entry: 003fed98; end: 003fee83;  */

void FUN_003fed98(long *param_1,undefined8 param_2,code *param_3)

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
  FUN_003b0650(uVar1,uVar2);
  if ((uVar1 & 0xff00000000) == 0) {
    (*param_3)(param_2,"invalid value",0xd,param_1);
  }
  return;
}



/* Entry: 003fee84; end: 003fef73;  */

code ***** FUN_003fee84(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [8];
  byte bVar3;
  long *plVar4;
  char *pcVar5;
  code *****pppppcVar6;
  undefined1 *puVar7;
  code *****pppppcVar8;
  char **ppcVar9;
  undefined1 **ppuVar10;
  code ****ppppcVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  code ****ppppcVar12;
  code ***pppcVar13;
  code ***pppcStack_178;
  undefined8 in_stack_fffffffffffffe90;
  undefined8 uStack_168;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 auStack_118 [32];
  char *pcStack_f8;
  undefined8 uStack_f0;
  code ****ppppcStack_c8;
  code ***pppcStack_c0;
  long lStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  bVar3 = *(byte *)((long)param_2 + 0x1f);
  uVar1 = param_2[2];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  FUN_003ec0c8(&lStack_68,uVar1 + 8);
  auVar2 = (undefined1  [8])(auStack_60 + 1);
  if (lStack_68 != 0) {
    auVar2 = auStack_58;
  }
  *(undefined8 *)auVar2 = *param_2;
  pppppcVar8 = (code *****)(auStack_58 + 1);
  if (lStack_68 != 0) {
    pppppcVar8 = (code *****)((long)auStack_58 + 8);
  }
  bVar3 = *(byte *)((long)param_2 + 0x1f);
  uVar1 = param_2[2];
  plVar4 = (long *)param_2[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
    plVar4 = param_2 + 1;
  }
  _memcpy(pppppcVar8,plVar4,uVar1);
  param_1[1] = (long)auStack_60;
  *param_1 = lStack_68;
  param_1[3] = lStack_50;
  param_1[2] = (long)auStack_58;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pppppcVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_78 = FUN_003fef74;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  pppcStack_c0 = (code ***)pppppcVar8[2];
  ppppcStack_c8 = pppppcVar8[1];
  if (-1 < (char)*(byte *)((long)pppppcVar8 + 0x1f)) {
    pppcStack_c0 = (code ***)(ulong)*(byte *)((long)pppppcVar8 + 0x1f);
    ppppcStack_c8 = (code ****)(pppppcVar8 + 1);
  }
  pcStack_f8 = ":";
  uStack_f0 = 1;
  puVar7 = auStack_118;
  puStack_90 = param_2;
  plStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_00574d58(*pppppcVar8);
  pppppcVar8 = &ppppcStack_c8;
  ppcVar9 = &pcStack_f8;
  ppuVar10 = &puStack_128;
  puStack_128 = auStack_118;
  puStack_120 = puVar7;
  FUN_00575ddc(extraout_x8,pppppcVar8,ppcVar9);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return pppppcVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*pppppcVar8 == (code ****)0x0) {
    ppppcVar12 = (code ****)(ulong)*(byte *)(pppppcVar8 + 1);
    if ((code ****)0x7 < ppppcVar12) {
      extraout_x8_00[1] = 0;
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      ppppcVar11 = (code ****)((long)pppppcVar8 + 9);
      pppcVar13 = *ppppcVar11;
      goto LAB_003ff0c8;
    }
  }
  else {
    ppppcVar12 = pppppcVar8[1];
    if ((code ****)0x7 < ppppcVar12) {
      extraout_x8_00[1] = 0;
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      ppppcVar11 = pppppcVar8[2];
      pppcVar13 = *ppppcVar11;
LAB_003ff0c8:
      *extraout_x8_00 = pppcVar13;
      pppppcVar8 = (code *****)&pppcStack_178;
      FUN_0035d0e4(pppppcVar8,ppppcVar11 + 1,ppppcVar12 + -1);
      if (*(char *)((long)extraout_x8_00 + 0x1f) < '\0') {
        pppppcVar8 = (code *****)extraout_x8_00[1];
        __ZdlPv(pppppcVar8);
      }
      extraout_x8_00[2] = in_stack_fffffffffffffe90;
      extraout_x8_00[1] = pppcStack_178;
      extraout_x8_00[3] = uStack_168;
      return pppppcVar8;
    }
  }
  (*(code *)ppuVar10)(ppcVar9,"too short",9);
  pppppcVar8 = (code *****)(extraout_x8_00 + 1);
  *extraout_x8_00 = 0;
  pcVar5 = "";
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar5) {
    func_0x0033b318();
    pppcStack_178 = (code ***)FUN_00353304;
    if (*pppppcVar8 != (code ****)0x0) {
      func_0x003711f8();
    }
    return pppppcVar8;
  }
  if (pcVar5 < "") {
    *(char *)((long)extraout_x8_00 + 0x1f) = (char)pcVar5;
    pppppcVar6 = pppppcVar8;
    if (pcVar5 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar1 = ((ulong)pcVar5 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar5 | 7) != 0x17) {
      uVar1 = (ulong)pcVar5 | 7;
    }
    pppppcVar6 = (code *****)(uVar1 + 1);
    __Znwm();
    extraout_x8_00[2] = pcVar5;
    extraout_x8_00[3] = uVar1 + 1 | 0x8000000000000000;
    *pppppcVar8 = (code ****)pppppcVar6;
  }
  _memmove(pppppcVar6,"",pcVar5);
LAB_003532e0:
  *(char *)((long)pppppcVar6 + (long)pcVar5) = '\0';
  return pppppcVar8;
}



/* Entry: 003fef74; end: 003ff023;  */

code ** FUN_003fef74(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  code **ppcVar3;
  undefined1 *puVar4;
  code **ppcVar5;
  char **ppcVar6;
  undefined1 **ppuVar7;
  code *pcVar8;
  undefined8 *extraout_x8;
  code *pcVar9;
  undefined8 uVar10;
  code *pcStack_108;
  undefined8 in_stack_ffffffffffffff00;
  undefined8 in_stack_ffffffffffffff08;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  char *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_58;
  ulong uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_50 = param_2[2];
  pcStack_58 = (code *)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x1f)) {
    uStack_50 = (ulong)*(byte *)((long)param_2 + 0x1f);
    pcStack_58 = (code *)(param_2 + 1);
  }
  pcStack_88 = ":";
  uStack_80 = 1;
  puVar4 = auStack_a8;
  FUN_00574d58(*param_2);
  ppcVar5 = &pcStack_58;
  ppcVar6 = &pcStack_88;
  ppuVar7 = &puStack_b8;
  puStack_b8 = auStack_a8;
  puStack_b0 = puVar4;
  FUN_00575ddc(param_1,ppcVar5,ppcVar6);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return ppcVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*ppcVar5 == (code *)0x0) {
    pcVar9 = (code *)(ulong)*(byte *)(ppcVar5 + 1);
    if ((code *)0x7 < pcVar9) {
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      pcVar8 = (code *)((long)ppcVar5 + 9);
      uVar10 = *(undefined8 *)pcVar8;
      goto LAB_003ff0c8;
    }
  }
  else {
    pcVar9 = ppcVar5[1];
    if ((code *)0x7 < pcVar9) {
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      pcVar8 = ppcVar5[2];
      uVar10 = *(undefined8 *)pcVar8;
LAB_003ff0c8:
      *extraout_x8 = uVar10;
      ppcVar5 = &pcStack_108;
      FUN_0035d0e4(ppcVar5,pcVar8 + 8,pcVar9 + -8);
      if (*(char *)((long)extraout_x8 + 0x1f) < '\0') {
        ppcVar5 = (code **)extraout_x8[1];
        __ZdlPv(ppcVar5);
      }
      extraout_x8[2] = in_stack_ffffffffffffff00;
      extraout_x8[1] = pcStack_108;
      extraout_x8[3] = in_stack_ffffffffffffff08;
      return ppcVar5;
    }
  }
  (*(code *)ppuVar7)(ppcVar6,"too short",9);
  ppcVar5 = (code **)(extraout_x8 + 1);
  *extraout_x8 = 0;
  pcVar2 = "";
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar2) {
    func_0x0033b318();
    pcStack_108 = FUN_00353304;
    if (*ppcVar5 != (code *)0x0) {
      func_0x003711f8();
    }
    return ppcVar5;
  }
  if (pcVar2 < "") {
    *(char *)((long)extraout_x8 + 0x1f) = (char)pcVar2;
    ppcVar3 = ppcVar5;
    if (pcVar2 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar1 = ((ulong)pcVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar2 | 7) != 0x17) {
      uVar1 = (ulong)pcVar2 | 7;
    }
    ppcVar3 = (code **)(uVar1 + 1);
    __Znwm();
    extraout_x8[2] = pcVar2;
    extraout_x8[3] = uVar1 + 1 | 0x8000000000000000;
    *ppcVar5 = (code *)ppcVar3;
  }
  _memmove(ppcVar3,"",pcVar2);
LAB_003532e0:
  *(code *)((long)ppcVar3 + (long)pcVar2) = (code)0x0;
  return ppcVar5;
}



/* Entry: 003ff024; end: 003ff12b;  */

code ** FUN_003ff024(undefined8 *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  char *pcVar1;
  code **ppcVar2;
  code **ppcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcStack_48;
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 in_stack_ffffffffffffffc8;
  
  if (*param_2 == 0) {
    uVar5 = (ulong)*(byte *)(param_2 + 1);
    if (7 < uVar5) {
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      puVar4 = (undefined8 *)((long)param_2 + 9);
      uVar6 = *puVar4;
      goto LAB_003ff0c8;
    }
  }
  else {
    uVar5 = param_2[1];
    if (7 < uVar5) {
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      puVar4 = (undefined8 *)param_2[2];
      uVar6 = *puVar4;
LAB_003ff0c8:
      *param_1 = uVar6;
      ppcVar3 = &pcStack_48;
      FUN_0035d0e4(ppcVar3,puVar4 + 1,uVar5 - 8);
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        ppcVar3 = (code **)param_1[1];
        __ZdlPv(ppcVar3);
      }
      param_1[2] = in_stack_ffffffffffffffc0;
      param_1[1] = pcStack_48;
      param_1[3] = in_stack_ffffffffffffffc8;
      return ppcVar3;
    }
  }
  (*param_4)(param_3,"too short",9);
  ppcVar3 = (code **)(param_1 + 1);
  *param_1 = 0;
  pcVar1 = "";
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar1) {
    func_0x0033b318();
    pcStack_48 = FUN_00353304;
    if (*ppcVar3 != (code *)0x0) {
      func_0x003711f8();
    }
    return ppcVar3;
  }
  if (pcVar1 < "") {
    *(char *)((long)param_1 + 0x1f) = (char)pcVar1;
    ppcVar2 = ppcVar3;
    if (pcVar1 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar5 = ((ulong)pcVar1 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar1 | 7) != 0x17) {
      uVar5 = (ulong)pcVar1 | 7;
    }
    ppcVar2 = (code **)(uVar5 + 1);
    __Znwm();
    param_1[2] = pcVar1;
    param_1[3] = uVar5 + 1 | 0x8000000000000000;
    *ppcVar3 = (code *)ppcVar2;
  }
  _memmove(ppcVar2,"",pcVar1);
LAB_003532e0:
  *(code *)((long)ppcVar2 + (long)pcVar1) = (code)0x0;
  return ppcVar3;
}



/* Entry: 003ff12c; end: 003ff21f;  */

undefined8 **
FUN_003ff12c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  long *plVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)0x0) {
    if (param_1[1] != 0) {
      func_0x00775e2c();
      pcStack_28 = FUN_003ff220;
      lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
      pcStack_98 = ": ";
      uStack_90 = 2;
      ppuVar3 = &puStack_68;
      uStack_c8 = param_3;
      uStack_c0 = param_4;
      puStack_68 = param_1;
      uStack_60 = param_2;
      puStack_30 = &stack0xfffffffffffffff0;
      FUN_00575ddc(ppuVar3,&pcStack_98,&uStack_c8);
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
        return ppuVar3;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      plVar6 = *ppuVar3;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar8 = *ppuVar3;
      puVar10 = ppuVar3[3];
      puVar9 = ppuVar3[2];
      extraout_x8[1] = ppuVar3[1];
      *extraout_x8 = puVar8;
      extraout_x8[3] = puVar10;
      extraout_x8[2] = puVar9;
      return ppuVar3;
    }
    puVar7 = (ulong *)*param_1;
    do {
      uVar4 = *puVar7;
      uVar5 = uVar4 + 0x290;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar2) {
        *puVar7 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7[2] < uVar5) {
      func_0x003d6048(puVar7,0x290);
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar4 + 0x30);
    }
    _bzero(puVar7,0x290);
    param_1[1] = puVar7;
  }
  else {
    if (puVar7[1] != 10) goto LAB_003ff1fc;
    puVar7 = (ulong *)*puVar7;
    if (puVar7 == (ulong *)0x0) {
      puVar7 = (ulong *)*param_1;
      do {
        uVar4 = *puVar7;
        uVar5 = uVar4 + 0x290;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar2) {
          *puVar7 = uVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar7[2] < uVar5) {
        func_0x003d6048(puVar7,0x290);
      }
      else {
        puVar7 = (ulong *)((long)puVar7 + uVar4 + 0x30);
      }
      _bzero(puVar7,0x290);
      *(ulong **)param_1[2] = puVar7;
    }
  }
  param_1[2] = puVar7;
LAB_003ff1fc:
  uVar5 = puVar7[1];
  puVar7[1] = uVar5 + 1;
  return (undefined8 **)(puVar7 + uVar5 * 8 + 2);
}



/* Entry: 003ff220; end: 003ff28f;  */

void FUN_003ff220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_78 = ": ";
  uStack_70 = 2;
  puVar3 = &uStack_48;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_48 = param_1;
  uStack_40 = param_2;
  FUN_00575ddc(puVar3,&pcStack_78,&uStack_a8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*puVar3;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar5 = *puVar3;
  uVar7 = puVar3[3];
  uVar6 = puVar3[2];
  extraout_x8[1] = puVar3[1];
  *extraout_x8 = uVar5;
  extraout_x8[3] = uVar7;
  extraout_x8[2] = uVar6;
  return;
}



/* Entry: 003ff290; end: 003ff3bb;  */

void FUN_003ff290(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  return;
}



/* Entry: 003ff3bc; end: 003ff433;  */

dword * FUN_003ff3bc(undefined4 param_1,long param_2)

{
  dword *pdVar1;
  long lVar2;
  uint uVar3;
  
  pdVar1 = (dword *)((long)&MACH_HEADER.filetype + 1);
  switch(param_1) {
  case 7:
    pdVar1 = (dword *)((long)&MACH_HEADER.filetype + 2);
    break;
  case 8:
    func_0x003c1f6c();
    lVar2 = *(long *)pdVar1;
    FUN_003c1e28();
    uVar3 = 4;
    if (lVar2 <= param_2) {
      uVar3 = 1;
    }
    return (dword *)(ulong)uVar3;
  case 0xb:
    return &MACH_HEADER.cpusubtype;
  case 0xc:
    return (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  return pdVar1;
}



/* Entry: 003ff434; end: 003ff4cb;  */

undefined8 FUN_003ff434(int param_1)

{
  if (param_1 < 0x1ad) {
    switch(param_1) {
    case 400:
      return 0xd;
    case 0x191:
      return 0x10;
    case 0x192:
      break;
    case 0x193:
      return 7;
    case 0x194:
      return 0xc;
    default:
      if (param_1 == 200) {
        return 0;
      }
    }
  }
  else if (param_1 < 0x1f7) {
    if ((param_1 == 0x1ad) || (param_1 == 0x1f6)) {
      return 0xe;
    }
  }
  else {
    if (param_1 == 0x1f7) {
      return 0xe;
    }
    if (param_1 == 0x1f8) {
      return 0xe;
    }
  }
  return 2;
}



/* Entry: 003ff4cc; end: 003ff557;  */

void FUN_003ff4cc(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e20b8;
  pdStack_28 = pdVar1;
  FUN_003fcc74(param_1 + 0x90,1,0,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 0x10))();
  }
  return;
}



/* Entry: 003ff558; end: 003ff693;  */

void FUN_003ff558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  dword *pdVar4;
  long lVar5;
  dword *pdStack_38;
  
  pdVar3 = &section_00000108.offset;
  __Znwm();
  *(undefined ***)pdVar3 = &PTR_FUN_009e20f8;
  *(undefined8 *)(pdVar3 + 2) = 1;
  pdVar4 = pdVar3 + 4;
  FUN_00339d50();
  *(undefined1 *)(pdVar3 + 0x14) = 0;
  *(undefined8 *)(pdVar3 + 0x18) = 0;
  *(undefined8 *)(pdVar3 + 0x1a) = 0;
  *(undefined8 *)(pdVar3 + 0x16) = 0;
  func_0x003c3ee0();
  *(dword **)(pdVar3 + 0x1c) = pdVar4;
  FUN_003c3d28();
  *(undefined8 *)(pdVar3 + 0x1e) = param_3;
  *(undefined8 *)(pdVar3 + 0x20) = param_2;
  *(undefined8 *)(pdVar3 + 0x22) = 0;
  *(undefined1 *)(pdVar3 + 0x24) = 0;
  if (*(long *)(pdVar3 + 0x1c) != 0) {
    FUN_003c3d80(pdVar3 + 0x1e);
  }
  *(code **)(pdVar3 + 0x48) = FUN_003ff69c;
  *(dword **)(pdVar3 + 0x4a) = pdVar3;
  *(undefined8 *)(pdVar3 + 0x4c) = 0;
  pdStack_38 = pdVar3;
  FUN_003fc17c(param_4,&pdStack_38);
  if (pdStack_38 != (dword *)0x0) {
    pdVar4 = pdStack_38 + 2;
    do {
      lVar5 = *(long *)pdVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
      if (bVar2) {
        *(long *)pdVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*(long *)pdStack_38 + 8))();
    }
  }
  return;
}



/* Entry: 003ff694; end: 003ff69b;  */

void FUN_003ff694(void)

{
  return;
}



/* Entry: 003ff69c; end: 003ff93f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003ff69c(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  func_0x00339d8c(param_1 + 2);
  if (*param_2 == 0) {
    if ((char)param_1[10] == '\0') {
      lVar6 = param_1[0xb];
      if (lVar6 == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                     ,0xc1,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3ff890);
        (*pcVar4)();
      }
      *(long *)param_1[0x11] = lVar6;
      param_1[0xb] = 0;
      if ((char)param_1[0x12] != '\0') {
        func_0x003bcec8(lVar6,param_1[0xe]);
      }
      uStack_78 = 0;
      FUN_003ffcfc(param_1,&uStack_78);
      goto LAB_003ff818;
    }
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    FUN_003b646c(&uStack_40,2,"tcp handshaker shutdown",0x17,&uStack_41,auStack_68 + 1);
    uVar5 = *param_2;
    if (uStack_40 == uVar5) {
LAB_003ff724:
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = uStack_40;
      uStack_40 = 0x36;
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
        uVar5 = uStack_40;
        goto LAB_003ff724;
      }
    }
    puStack_38 = auStack_68 + 1;
    FUN_0033d548(&puStack_38);
  }
  lVar6 = param_1[0xb];
  if (lVar6 != 0) {
    auStack_68[0] = *param_2;
    if ((auStack_68[0] & 1) != 0) {
      piVar7 = (int *)(auStack_68[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bcee0(lVar6,auStack_68);
    if ((auStack_68[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((char)param_1[10] == '\0') {
    lVar6 = param_1[0x11];
    param_1[0xc] = *(long *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    FUN_003a2a64(*(undefined8 *)(lVar6 + 8));
    *(undefined8 *)(param_1[0x11] + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) {
      piVar7 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_70 = uVar5;
    FUN_003ffcfc(param_1,&uStack_70);
    if ((uVar5 & 1) != 0) {
      FUN_0055293c(uVar5);
    }
  }
LAB_003ff818:
  func_0x00339da8(param_1 + 2);
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 003ff940; end: 003ff9a3;  */

undefined8 * FUN_003ff940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e20f8;
  if (param_1[0xb] != 0) {
    FUN_003bcf54();
  }
  if (param_1[0xc] != 0) {
    FUN_003ecf54();
    FUN_00338cb8(param_1[0xc]);
  }
  func_0x003c3ef0(param_1[0xe]);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 003ff9a4; end: 003ff9b7;  */

void FUN_003ff9a4(void)

{
  FUN_003ff940();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003ff9b8; end: 003ffabf;  */

void FUN_003ff9b8(long param_1)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  func_0x00339d8c(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x50) == '\0') &&
     (*(undefined1 *)(param_1 + 0x50) = 1, *(long *)(param_1 + 0x68) != 0)) {
    lVar1 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_003a2a64(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(*(long *)(param_1 + 0x88) + 8) = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_003b646c(&uStack_30,2,"tcp handshaker shutdown",0x17,&uStack_31,&uStack_50);
    FUN_003ffcfc(param_1,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    FUN_0033d548(&puStack_28);
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 003ffac0; end: 003ffcef;  */

long * FUN_003ffac0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  char acStack_120 [31];
  undefined1 uStack_101;
  ulong uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [144];
  char *pcStack_60;
  char *pcStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = param_1 + 0x10;
  func_0x00339d8c(lVar7);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  func_0x00339da8(lVar7);
  if (*param_4 != 0) {
    func_0x00775e64();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x3ffc7c);
    (*pcVar3)();
  }
  *(long **)(param_1 + 0x88) = param_4;
  lVar4 = param_4[1];
  func_0x003a2dcc(lVar4,"grpc.internal.tcp_handshaker_resolved_address");
  lVar5 = lVar4;
  _strlen();
  FUN_004011d4(&lStack_f8,lVar4,lVar5);
  if (lStack_f8 == 0) {
    puVar6 = auStack_f0;
    func_0x003a0320(puVar6,param_1 + 0x94);
    if (((ulong)puVar6 & 1) != 0) {
      lVar7 = param_4[1];
      func_0x003a2e80(lVar7,"grpc.internal.tcp_handshaker_bind_endpoint_to_pollset",0);
      *(char *)(param_1 + 0x90) = (char)lVar7;
      pcStack_58 = "grpc.internal.tcp_handshaker_bind_endpoint_to_pollset";
      pcStack_60 = "grpc.internal.tcp_handshaker_resolved_address";
      lVar7 = param_4[1];
      FUN_003a26f0(lVar7,&pcStack_60,2);
      FUN_003a2a64(param_4[1]);
      param_4[1] = lVar7;
      plVar8 = (long *)(param_1 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar7 = param_1 + 0x58;
      FUN_003c60c4(param_1 + 0x118,lVar7,*(undefined8 *)(param_1 + 0x70),param_4[1],param_1 + 0x94,
                   param_4[5]);
      iVar9 = (int)lVar7;
      goto LAB_003ffc3c;
    }
  }
  func_0x00339d8c(lVar7);
  acStack_120[8] = '\0';
  acStack_120[9] = '\0';
  acStack_120[10] = '\0';
  acStack_120[0xb] = '\0';
  acStack_120[0xc] = '\0';
  acStack_120[0xd] = '\0';
  acStack_120[0xe] = '\0';
  acStack_120[0xf] = '\0';
  acStack_120[0x10] = '\0';
  acStack_120[0x11] = '\0';
  acStack_120[0x12] = '\0';
  acStack_120[0x13] = '\0';
  acStack_120[0x14] = '\0';
  acStack_120[0x15] = '\0';
  acStack_120[0x16] = '\0';
  acStack_120[0x17] = '\0';
  acStack_120[0] = '\0';
  acStack_120[1] = '\0';
  acStack_120[2] = '\0';
  acStack_120[3] = '\0';
  acStack_120[4] = '\0';
  acStack_120[5] = '\0';
  acStack_120[6] = '\0';
  acStack_120[7] = '\0';
  FUN_003b646c(&uStack_100,2,"Resolved address in invalid format",0x22,&uStack_101,acStack_120);
  iVar9 = (int)&uStack_100;
  FUN_003ffcfc(param_1);
  if ((uStack_100 & 1) != 0) {
    FUN_0055293c();
  }
  pcStack_60 = acStack_120;
  FUN_0033d548(&pcStack_60);
  func_0x00339da8(lVar7);
LAB_003ffc3c:
  plVar8 = &lStack_f8;
  FUN_0035afe0(plVar8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar8;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10(plVar8);
  }
  __Unwind_Resume(plVar8);
  return (long *)"tcp_connect";
}



/* Entry: 003ffcf0; end: 003ffcfb;  */

char * FUN_003ffcf0(void)

{
  return "tcp_connect";
}



/* Entry: 003ffcfc; end: 003ffd8b;  */

void FUN_003ffcfc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x003c3de0(param_1 + 0x78);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
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
  FUN_003c1e6c(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 003ffd8c; end: 003ffd8f;  */

uint FUN_003ffd8c(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((long)param_1 < 1) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (param_1 < 1000) {
    uVar1 = 0;
    uVar3 = 0x10000;
    uVar2 = param_1;
  }
  else {
    if (param_1 >> 4 < 0x271) {
      uVar1 = ((uint)param_1 & 0xffff) + 9;
      uVar2 = (ulong)uVar1 / 10;
      uVar1 = uVar1 / 10;
      if (0x28f5c28 < (uVar1 * -0x3d70a3d7 >> 2 | uVar1 * 0x40000000)) {
        uVar1 = 0;
        uVar3 = 0x20000;
        goto LAB_003ffe9c;
      }
    }
    else if ((param_1 >> 5 < 0xc35) &&
            (uVar3 = (uint)param_1 + 99, uVar1 = uVar3 / 100,
            0x19999999 < ((uVar1 & 0xffff) * -0x33333333 >> 1 | uVar1 * -0x80000000))) {
      uVar1 = 0;
      uVar2 = (ulong)uVar3 / 100;
      uVar3 = 0x30000;
      goto LAB_003ffe9c;
    }
    uVar2 = (long)(param_1 + 999) / 1000;
    FUN_004001a4(uVar2);
    uVar1 = (uint)uVar2 & 0xff000000;
    uVar3 = (uint)uVar2 & 0xff0000;
  }
LAB_003ffe9c:
  return uVar3 | uVar1 | (uint)uVar2 & 0xffff;
}



/* Entry: 003ffd90; end: 003ffeab;  */

uint FUN_003ffd90(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((long)param_1 < 1) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (param_1 < 1000) {
    uVar1 = 0;
    uVar3 = 0x10000;
    uVar2 = param_1;
  }
  else {
    if (param_1 >> 4 < 0x271) {
      uVar1 = ((uint)param_1 & 0xffff) + 9;
      uVar2 = (ulong)uVar1 / 10;
      uVar1 = uVar1 / 10;
      if (0x28f5c28 < (uVar1 * -0x3d70a3d7 >> 2 | uVar1 * 0x40000000)) {
        uVar1 = 0;
        uVar3 = 0x20000;
        goto LAB_003ffe9c;
      }
    }
    else if ((param_1 >> 5 < 0xc35) &&
            (uVar3 = (uint)param_1 + 99, uVar1 = uVar3 / 100,
            0x19999999 < ((uVar1 & 0xffff) * -0x33333333 >> 1 | uVar1 * -0x80000000))) {
      uVar1 = 0;
      uVar2 = (ulong)uVar3 / 100;
      uVar3 = 0x30000;
      goto LAB_003ffe9c;
    }
    uVar2 = (long)(param_1 + 999) / 1000;
    FUN_004001a4(uVar2);
    uVar1 = (uint)uVar2 & 0xff000000;
    uVar3 = (uint)uVar2 & 0xff0000;
  }
LAB_003ffe9c:
  return uVar3 | uVar1 | (uint)uVar2 & 0xffff;
}



/* Entry: 003ffeac; end: 003fff1f;  */

double FUN_003ffeac(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  FUN_003fff20();
  puVar1 = &uStack_24;
  FUN_003fff20();
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar3 = -100.0;
  }
  dVar2 = 100.0;
  if (param_1 < 1) {
    dVar2 = dVar3;
  }
  dVar3 = ((double)param_1 / (double)(long)puVar1 + -1.0) * 100.0;
  if (puVar1 == (undefined4 *)0x0) {
    dVar3 = dVar2;
  }
  return dVar3;
}



/* Entry: 003fff20; end: 003fffd7;  */

byte * FUN_003fff20(ushort *param_1)

{
  ushort uVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *extraout_x8;
  byte *pbVar7;
  uint uVar8;
  byte abStack_62 [10];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  pbVar2 = (byte *)(ulong)(byte)param_1[1];
  if ((byte)param_1[1] < 0xb) {
    pbVar6 = (byte *)(ulong)*param_1;
    switch(pbVar2) {
    case (byte *)0x0:
      goto code_r0x003fffb8;
    case (byte *)0x1:
      return pbVar6;
    case (byte *)0x2:
      return (byte *)((long)pbVar6 * 10);
    case (byte *)0x3:
      uVar5 = 100;
      break;
    case (byte *)0x4:
      uVar5 = 1000;
      break;
    case (byte *)0x5:
      uVar5 = 10000;
      break;
    case (byte *)0x6:
      uVar5 = 100000;
      break;
    case (byte *)0x7:
      uVar5 = 60000;
      break;
    case (byte *)0x8:
      uVar5 = 600000;
      break;
    case (byte *)0x9:
      uVar5 = 6000000;
      break;
    case (byte *)0xa:
      uVar5 = 3600000;
    }
    pbVar2 = (byte *)((long)pbVar6 * (ulong)uVar5);
code_r0x003fffb8:
    return pbVar2;
  }
  pcVar3 = "return Duration::NegativeInfinity()";
  func_0x00338df0("return Duration::NegativeInfinity()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/timeout_encoding.cc"
                  ,0x58);
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(ushort *)pcVar3;
  uVar5 = (uint)uVar1;
  if (uVar1 >> 4 < 0x271) {
    pbVar2 = abStack_62;
    pbVar6 = pbVar2;
    if (999 < uVar1) goto LAB_00400044;
    if (99 < uVar1) goto LAB_00400064;
    if (9 < uVar5) goto LAB_00400084;
  }
  else {
    uVar5 = (uVar1 >> 4) / 0x271;
    abStack_62[0] = (byte)uVar5 | 0x30;
    uVar5 = (uint)uVar1 + uVar5 * -10000;
    pbVar6 = abStack_62 + 1;
LAB_00400044:
    uVar8 = (uVar5 >> 3 & 0x1fff) / 0x7d;
    pbVar2 = pbVar6 + 1;
    *pbVar6 = (char)uVar8 + 0x30;
    uVar5 = uVar5 + uVar8 * -1000;
LAB_00400064:
    uVar8 = (uVar5 >> 2 & 0x3fff) / 0x19;
    *pbVar2 = (char)uVar8 + 0x30;
    uVar5 = uVar5 + uVar8 * -100;
    pbVar6 = pbVar2 + 1;
LAB_00400084:
    uVar8 = (uVar5 & 0xff) / 10;
    pbVar2 = pbVar6 + 1;
    *pbVar6 = (char)uVar8 + 0x30;
    uVar5 = uVar5 + uVar8 * -10;
  }
  pbVar6 = pbVar2 + 1;
  *pbVar2 = (char)uVar5 + 0x30;
  pbVar7 = pbVar6;
  switch((char)*(ushort *)((long)pcVar3 + 2)) {
  case '\0':
    bVar4 = 0x6e;
    goto code_r0x00400198;
  case '\x03':
    pbVar6 = pbVar2 + 2;
    pbVar2[1] = 0x30;
  case '\x02':
    pbVar7 = pbVar6 + 1;
    *pbVar6 = 0x30;
  case '\x01':
    bVar4 = 0x6d;
    break;
  case '\x06':
    pbVar6 = pbVar2 + 2;
    pbVar2[1] = 0x30;
  case '\x05':
    pbVar7 = pbVar6 + 1;
    *pbVar6 = 0x30;
  case '\x04':
    bVar4 = 0x53;
    break;
  case '\t':
    pbVar7 = pbVar2 + 2;
    pbVar2[1] = 0x30;
  case '\b':
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x30;
  case '\a':
    bVar4 = 0x4d;
    pbVar7 = pbVar6;
    break;
  case '\n':
    bVar4 = 0x48;
code_r0x00400198:
    pbVar6 = pbVar2 + 2;
    pbVar2[1] = bVar4;
  default:
    goto LAB_00400148;
  }
  pbVar6 = pbVar7 + 1;
  *pbVar7 = bVar4;
LAB_00400148:
  pbVar2 = abStack_62;
  func_0x003ec288(&uStack_58,pbVar2,(long)pbVar6 - (long)abStack_62);
  extraout_x8[1] = uStack_50;
  *extraout_x8 = uStack_58;
  extraout_x8[3] = uStack_40;
  extraout_x8[2] = uStack_48;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pbVar2;
  }
  ___stack_chk_fail();
  if ((long)pbVar2 < 1000) {
    if (0x444444444444444 <
        ((long)pbVar2 * -0x1111111111111111 + 0x888888888888888U >> 2 |
        (long)pbVar2 * -0x1111111111111111 << 0x3e)) {
      uVar5 = 0;
      uVar8 = 0x40000;
      pbVar6 = pbVar2;
      goto LAB_004002bc;
    }
  }
  else if ((ulong)pbVar2 >> 4 < 0x271) {
    uVar5 = ((uint)pbVar2 & 0xffff) + 9;
    pbVar6 = (byte *)((ulong)uVar5 / 10);
    uVar5 = uVar5 / 10;
    if (0x4444444 < (uVar5 * 0x55555556 >> 2 | uVar5 * -0x80000000)) {
      uVar5 = 0;
      uVar8 = 0x50000;
      goto LAB_004002bc;
    }
  }
  else if (((ulong)pbVar2 >> 5 < 0xc35) &&
          (uVar5 = (uint)pbVar2 + 99, pbVar6 = (byte *)((ulong)uVar5 / 100),
          0x4444444 < (uVar5 / 100) * 0x5555555c >> 2)) {
    uVar5 = 0;
    uVar8 = 0x60000;
    goto LAB_004002bc;
  }
  pbVar6 = (byte *)((long)(pbVar2 + 0x3b) / 0x3c);
  FUN_004002cc(pbVar6);
  uVar5 = (uint)pbVar6 & 0xff000000;
  uVar8 = (uint)pbVar6 & 0xff0000;
LAB_004002bc:
  return (byte *)(ulong)(uVar8 | uVar5 | (uint)pbVar6 & 0xffff);
}



/* Entry: 003fffd8; end: 004001a3;  */

byte * FUN_003fffd8(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte abStack_52 [10];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_2;
  uVar3 = (uint)uVar1;
  if (uVar1 >> 4 < 0x271) {
    pbVar4 = abStack_52;
    pbVar5 = pbVar4;
    if (999 < uVar1) goto LAB_00400044;
    if (99 < uVar1) goto LAB_00400064;
    if (9 < uVar3) goto LAB_00400084;
  }
  else {
    uVar3 = (uVar1 >> 4) / 0x271;
    abStack_52[0] = (byte)uVar3 | 0x30;
    uVar3 = (uint)uVar1 + uVar3 * -10000;
    pbVar5 = abStack_52 + 1;
LAB_00400044:
    uVar7 = (uVar3 >> 3 & 0x1fff) / 0x7d;
    pbVar4 = pbVar5 + 1;
    *pbVar5 = (char)uVar7 + 0x30;
    uVar3 = uVar3 + uVar7 * -1000;
LAB_00400064:
    uVar7 = (uVar3 >> 2 & 0x3fff) / 0x19;
    *pbVar4 = (char)uVar7 + 0x30;
    uVar3 = uVar3 + uVar7 * -100;
    pbVar5 = pbVar4 + 1;
LAB_00400084:
    uVar7 = (uVar3 & 0xff) / 10;
    pbVar4 = pbVar5 + 1;
    *pbVar5 = (char)uVar7 + 0x30;
    uVar3 = uVar3 + uVar7 * -10;
  }
  pbVar5 = pbVar4 + 1;
  *pbVar4 = (char)uVar3 + 0x30;
  pbVar6 = pbVar5;
  switch((char)param_2[1]) {
  case '\0':
    bVar2 = 0x6e;
    goto code_r0x00400198;
  case '\x03':
    pbVar5 = pbVar4 + 2;
    pbVar4[1] = 0x30;
  case '\x02':
    pbVar6 = pbVar5 + 1;
    *pbVar5 = 0x30;
  case '\x01':
    bVar2 = 0x6d;
    break;
  case '\x06':
    pbVar5 = pbVar4 + 2;
    pbVar4[1] = 0x30;
  case '\x05':
    pbVar6 = pbVar5 + 1;
    *pbVar5 = 0x30;
  case '\x04':
    bVar2 = 0x53;
    break;
  case '\t':
    pbVar6 = pbVar4 + 2;
    pbVar4[1] = 0x30;
  case '\b':
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x30;
  case '\a':
    bVar2 = 0x4d;
    pbVar6 = pbVar5;
    break;
  case '\n':
    bVar2 = 0x48;
code_r0x00400198:
    pbVar5 = pbVar4 + 2;
    pbVar4[1] = bVar2;
  default:
    goto LAB_00400148;
  }
  pbVar5 = pbVar6 + 1;
  *pbVar6 = bVar2;
LAB_00400148:
  pbVar4 = abStack_52;
  func_0x003ec288(&uStack_48,pbVar4,(long)pbVar5 - (long)abStack_52);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pbVar4;
  }
  ___stack_chk_fail();
  if ((long)pbVar4 < 1000) {
    if (0x444444444444444 <
        ((long)pbVar4 * -0x1111111111111111 + 0x888888888888888U >> 2 |
        (long)pbVar4 * -0x1111111111111111 << 0x3e)) {
      uVar3 = 0;
      uVar7 = 0x40000;
      pbVar5 = pbVar4;
      goto LAB_004002bc;
    }
  }
  else if ((ulong)pbVar4 >> 4 < 0x271) {
    uVar3 = ((uint)pbVar4 & 0xffff) + 9;
    pbVar5 = (byte *)((ulong)uVar3 / 10);
    uVar3 = uVar3 / 10;
    if (0x4444444 < (uVar3 * 0x55555556 >> 2 | uVar3 * -0x80000000)) {
      uVar3 = 0;
      uVar7 = 0x50000;
      goto LAB_004002bc;
    }
  }
  else if (((ulong)pbVar4 >> 5 < 0xc35) &&
          (uVar3 = (uint)pbVar4 + 99, pbVar5 = (byte *)((ulong)uVar3 / 100),
          0x4444444 < (uVar3 / 100) * 0x5555555c >> 2)) {
    uVar3 = 0;
    uVar7 = 0x60000;
    goto LAB_004002bc;
  }
  pbVar5 = (byte *)((long)(pbVar4 + 0x3b) / 0x3c);
  FUN_004002cc(pbVar5);
  uVar3 = (uint)pbVar5 & 0xff000000;
  uVar7 = (uint)pbVar5 & 0xff0000;
LAB_004002bc:
  return (byte *)(ulong)(uVar7 | uVar3 | (uint)pbVar5 & 0xffff);
}



/* Entry: 004001a4; end: 004002cb;  */

uint FUN_004001a4(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((long)param_1 < 1000) {
    if (0x444444444444444 <
        (param_1 * -0x1111111111111111 + 0x888888888888888 >> 2 |
        param_1 * -0x1111111111111111 << 0x3e)) {
      uVar1 = 0;
      uVar3 = 0x40000;
      uVar2 = param_1;
      goto LAB_004002bc;
    }
  }
  else if (param_1 >> 4 < 0x271) {
    uVar1 = ((uint)param_1 & 0xffff) + 9;
    uVar2 = (ulong)uVar1 / 10;
    uVar1 = uVar1 / 10;
    if (0x4444444 < (uVar1 * 0x55555556 >> 2 | uVar1 * -0x80000000)) {
      uVar1 = 0;
      uVar3 = 0x50000;
      goto LAB_004002bc;
    }
  }
  else if ((param_1 >> 5 < 0xc35) &&
          (uVar1 = (uint)param_1 + 99, uVar2 = (ulong)uVar1 / 100,
          0x4444444 < (uVar1 / 100) * 0x5555555c >> 2)) {
    uVar1 = 0;
    uVar3 = 0x60000;
    goto LAB_004002bc;
  }
  uVar2 = (long)(param_1 + 0x3b) / 0x3c;
  FUN_004002cc(uVar2);
  uVar1 = (uint)uVar2 & 0xff000000;
  uVar3 = (uint)uVar2 & 0xff0000;
LAB_004002bc:
  return uVar3 | uVar1 | (uint)uVar2 & 0xffff;
}



/* Entry: 004002cc; end: 004005eb;  */

uint FUN_004002cc(undefined *param_1)

{
  uint uVar1;
  
  if ((long)param_1 < 1000) {
    if (0x444444444444444 <
        ((long)param_1 * -0x1111111111111111 + 0x888888888888888U >> 2 |
        (long)param_1 * -0x1111111111111111 << 0x3e)) {
      uVar1 = 0x70000;
      goto LAB_004003d0;
    }
  }
  else if ((ulong)param_1 >> 4 < 0x271) {
    uVar1 = (((uint)param_1 & 0xffff) + 9) / 10;
    if (0x4444444 < (uVar1 * 0x55555556 >> 2 | uVar1 * -0x80000000)) {
      param_1 = (undefined *)(ulong)uVar1;
      uVar1 = 0x80000;
      goto LAB_004003d0;
    }
  }
  else if (((ulong)param_1 >> 5 < 0xc35) &&
          (uVar1 = ((uint)param_1 + 99) / 100, 0x4444444 < uVar1 * 0x5555555c >> 2)) {
    param_1 = (undefined *)(ulong)uVar1;
    uVar1 = 0x90000;
    goto LAB_004003d0;
  }
  param_1 = (undefined *)((long)(param_1 + 0x3b) / 0x3c);
  if (26999 < (long)param_1) {
    param_1 = &UNK_00006978;
  }
  uVar1 = 0xa0000;
LAB_004003d0:
  return (uint)param_1 & 0xffff | uVar1;
}



/* Entry: 004005ec; end: 00400697;  */

void FUN_004005ec(long *param_1)

{
  long *plVar1;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  plVar1 = param_1;
  FUN_003c3188();
  if ((((ulong)plVar1 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar1 + 0x28) >> 1 & 1) != 0))
  {
    uStack_28 = 0;
    FUN_003c2968(param_1 + 1,&uStack_28,0,0);
    if ((uStack_28 & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
  uStack_38 = 0;
  FUN_003c1e6c(&uStack_29,param_1 + 1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00400698; end: 0040076b;  */

void FUN_00400698(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  *param_1 = 1;
  return;
}



/* Entry: 0040076c; end: 004007e7;  */

void FUN_0040076c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_3;
  func_0x003c3d38();
  if (lVar1 == 0) {
    func_0x003c3d54();
    if (param_3 == 0) {
      return;
    }
    puVar2 = (undefined8 *)(*param_1 + 0x28);
  }
  else {
    puVar2 = (undefined8 *)(*param_1 + 0x20);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,param_2,param_3);
  return;
}



/* Entry: 004007e8; end: 004007f3;  */

void FUN_004007e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004007f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* Entry: 004007f4; end: 004008c3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004007f4(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  char *pcStack_110;
  ulong uStack_108;
  ulong auStack_c8 [20];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar6 = *param_2;
  auStack_c8[1] = 0;
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
  puVar4 = auStack_c8 + 1;
  auStack_c8[0] = uVar6;
  FUN_004008c4(param_1,auStack_c8,puVar4);
  if ((uVar6 & 1) != 0) {
    FUN_0055293c(uVar6);
  }
  FUN_00346f8c(auStack_c8 + 1);
  puVar3 = auStack_c8 + 1;
  FUN_0034afe4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0034afe4(auStack_c8 + 1);
  }
  __Unwind_Resume();
  if (((byte)puVar3[2] >> 3 & 1) != 0) {
    uStack_108 = *(ulong *)(puVar3[1] + 0x48);
    uStack_118 = *param_3;
    if ((uStack_118 & 1) != 0) {
      piVar5 = (int *)(uStack_118 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_110 = "failing recv_initial_metadata_ready";
    FUN_0034accc(puVar4,&uStack_108,&uStack_118,&pcStack_110);
    if ((uStack_118 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (((byte)puVar3[2] >> 4 & 1) != 0) {
    uStack_108 = *(ulong *)(puVar3[1] + 0x78);
    uStack_120 = *param_3;
    if ((uStack_120 & 1) != 0) {
      piVar5 = (int *)(uStack_120 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_110 = "failing recv_message_ready";
    FUN_0034accc(puVar4,&uStack_108,&uStack_120,&pcStack_110);
    if ((uStack_120 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (((byte)puVar3[2] >> 5 & 1) != 0) {
    uStack_108 = *(ulong *)(puVar3[1] + 0x90);
    uStack_128 = *param_3;
    if ((uStack_128 & 1) != 0) {
      piVar5 = (int *)(uStack_128 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_110 = "failing recv_trailing_metadata_ready";
    FUN_0034accc(puVar4,&uStack_108,&uStack_128,&pcStack_110);
    if ((uStack_128 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uStack_108 = *puVar3;
  if (uStack_108 != 0) {
    uStack_130 = *param_3;
    if ((uStack_130 & 1) != 0) {
      piVar5 = (int *)(uStack_130 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_110 = "failing on_complete";
    FUN_0034accc(puVar4,&uStack_108,&uStack_130,&pcStack_110);
    if ((uStack_130 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 004008c4; end: 00400ab7;  */

void FUN_004008c4(long *param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char *pcStack_40;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 2) >> 3 & 1) != 0) {
    lStack_38 = *(long *)(param_1[1] + 0x48);
    uStack_48 = *param_2;
    if ((uStack_48 & 1) != 0) {
      piVar3 = (int *)(uStack_48 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_40 = "failing recv_initial_metadata_ready";
    FUN_0034accc(param_3,&lStack_38,&uStack_48,&pcStack_40);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((*(byte *)(param_1 + 2) >> 4 & 1) != 0) {
    lStack_38 = *(long *)(param_1[1] + 0x78);
    uStack_50 = *param_2;
    if ((uStack_50 & 1) != 0) {
      piVar3 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_40 = "failing recv_message_ready";
    FUN_0034accc(param_3,&lStack_38,&uStack_50,&pcStack_40);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((*(byte *)(param_1 + 2) >> 5 & 1) != 0) {
    lStack_38 = *(long *)(param_1[1] + 0x90);
    uStack_58 = *param_2;
    if ((uStack_58 & 1) != 0) {
      piVar3 = (int *)(uStack_58 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_40 = "failing recv_trailing_metadata_ready";
    FUN_0034accc(param_3,&lStack_38,&uStack_58,&pcStack_40);
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
  }
  lStack_38 = *param_1;
  if (lStack_38 != 0) {
    uStack_60 = *param_2;
    if ((uStack_60 & 1) != 0) {
      piVar3 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_40 = "failing on_complete";
    FUN_0034accc(param_3,&lStack_38,&uStack_60,&pcStack_40);
    if ((uStack_60 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00400ab8; end: 00400b2f;  */

dword * FUN_00400ab8(undefined8 param_1)

{
  qword *pqVar1;
  
  pqVar1 = &section_000000b8.addr;
  __Znwm();
  pqVar1[0x17] = 0;
  pqVar1[0x16] = 0;
  pqVar1[0x19] = 0;
  pqVar1[0x18] = 0;
  pqVar1[0x1a] = 0;
  pqVar1[9] = 0;
  pqVar1[10] = 0;
  pqVar1[8] = 0;
  *(undefined1 *)(pqVar1 + 0xb) = 0;
  pqVar1[0xc] = 0;
  pqVar1[0xd] = 0;
  *(undefined1 *)(pqVar1 + 0xe) = 0;
  pqVar1[0x10] = 0;
  pqVar1[0xf] = 0;
  pqVar1[0x12] = 0;
  pqVar1[0x11] = 0;
  pqVar1[0x14] = 0;
  pqVar1[0x13] = 0;
  *(undefined1 *)(pqVar1 + 0x15) = 0;
  pqVar1[1] = 0;
  *pqVar1 = 0;
  pqVar1[3] = 0;
  pqVar1[2] = 0;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  *(undefined8 *)((long)pqVar1 + 0x34) = 0;
  *(undefined8 *)((long)pqVar1 + 0x2c) = 0;
  pqVar1[1] = (qword)FUN_00400b30;
  pqVar1[2] = (qword)pqVar1;
  pqVar1[4] = param_1;
  pqVar1[5] = (qword)pqVar1;
  return (dword *)(pqVar1 + 5);
}



/* Entry: 00400b30; end: 00400bef;  */

void FUN_00400b30(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,uVar4,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  if ((*(ulong *)(param_1 + 0x50) & 1) != 0) {
    FUN_0055293c();
  }
  if ((*(ulong *)(param_1 + 0x48) & 1) != 0) {
    FUN_0055293c();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 00400bf0; end: 00400c5b;  */

dword * FUN_00400bf0(qword param_1)

{
  char *pcVar1;
  
  pcVar1 = section_00000108.sectname + 8;
  __Znwm();
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 0x18) = 0;
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(undefined8 *)(pcVar1 + 0x38) = 0;
  *(undefined8 *)(pcVar1 + 0x30) = 0;
  *(undefined8 *)(pcVar1 + 0x48) = 0;
  *(undefined8 *)(pcVar1 + 0x40) = 0;
  *(undefined8 *)(pcVar1 + 0x58) = 0;
  *(undefined8 *)(pcVar1 + 0x50) = 0;
  *(undefined8 *)(pcVar1 + 0x68) = 0;
  *(undefined8 *)(pcVar1 + 0x60) = 0;
  *(undefined8 *)(pcVar1 + 0x78) = 0;
  *(undefined8 *)(pcVar1 + 0x70) = 0;
  *(undefined8 *)(pcVar1 + 0x88) = 0;
  *(undefined8 *)(pcVar1 + 0x80) = 0;
  *(undefined8 *)(pcVar1 + 0x98) = 0;
  *(undefined8 *)(pcVar1 + 0x90) = 0;
  *(undefined8 *)(pcVar1 + 0xa8) = 0;
  *(undefined8 *)(pcVar1 + 0xa0) = 0;
  *(undefined8 *)(pcVar1 + 0xb8) = 0;
  *(undefined8 *)(pcVar1 + 0xb0) = 0;
  *(undefined8 *)(pcVar1 + 200) = 0;
  *(undefined8 *)(pcVar1 + 0xc0) = 0;
  *(undefined8 *)(pcVar1 + 0xd8) = 0;
  *(undefined8 *)(pcVar1 + 0xd0) = 0;
  *(undefined8 *)(pcVar1 + 0xe8) = 0;
  *(undefined8 *)(pcVar1 + 0xe0) = 0;
  *(undefined8 *)(pcVar1 + 0xf8) = 0;
  *(undefined8 *)(pcVar1 + 0xf0) = 0;
  *(char **)(pcVar1 + 0x28) = pcVar1;
  *(char **)(pcVar1 + 0x30) = pcVar1 + 0x68;
  *(undefined8 *)(pcVar1 + 0x108) = 0;
  *(undefined8 *)(pcVar1 + 0x100) = 0;
  *(code **)(pcVar1 + 8) = FUN_00400c5c;
  *(char **)(pcVar1 + 0x10) = pcVar1;
  *(qword *)(pcVar1 + 0x20) = param_1;
  return (dword *)(pcVar1 + 0x28);
}


