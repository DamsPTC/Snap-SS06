/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ade1ac; end: 104ade1b7;  */

char * FUN_104ade1ac(void)

{
  return "http_connect";
}



/* Entry: 104ade1b8; end: 104ade23f;  */

void FUN_104ade1b8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1a8) = FUN_104ade240;
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
  func_0x0001004bd7e8(&uStack_21,param_1 + 0x1a0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ade240; end: 104ade363;  */

void FUN_104ade240(long *param_1,ulong *param_2)

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
  func_0x000100460448();
  uVar6 = *param_2;
  if (uVar6 == 0) {
    if ((char)param_1[10] == '\0') {
      uVar4 = *(undefined8 *)param_1[0xd];
      uVar5 = ((undefined8 *)param_1[0xd])[2];
      param_1[0x39] = (long)FUN_104ade504;
      param_1[0x3a] = (long)param_1;
      param_1[0x3b] = 0;
      func_0x0001005a7dc4(uVar4,uVar5,param_1 + 0x38,1,1);
      goto LAB_104ade2e0;
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
  FUN_104ade364(param_1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  uStack_28 = 1;
  func_0x000100466b80(plStack_30);
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
LAB_104ade2e0:
  FUN_104ab38e4(&plStack_30);
  return;
}



/* Entry: 104ade364; end: 104ade503;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ade364(long param_1,ulong *param_2)

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
  if (uStack_60 != 0) goto LAB_104ade3f0;
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_104ab5920(&uStack_30,2,"Handshaker shutdown",0x13,&uStack_31,auStack_58 + 1);
  uVar3 = *param_2;
  if (uStack_30 == uVar3) {
LAB_104ade3d4:
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = uStack_30;
    uStack_30 = 0x36;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
      uVar3 = uStack_30;
      goto LAB_104ade3d4;
    }
  }
  puStack_28 = auStack_58 + 1;
  func_0x000100482b64(&puStack_28);
  uStack_60 = *param_2;
LAB_104ade3f0:
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
    FUN_104aba5c4(uVar4,auStack_58);
    if ((auStack_58[0] & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x58) = *puVar6;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x60) = puVar6[2];
    puVar6[2] = 0;
    func_0x00010048650c(puVar6[1]);
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
  func_0x0001004bd7e8(&puStack_28,uVar4,&uStack_60);
  if ((uStack_60 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ade504; end: 104ade58b;  */

void FUN_104ade504(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1c8) = FUN_104ade58c;
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
  func_0x0001004bd7e8(&uStack_21,param_1 + 0x1c0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ade58c; end: 104adea4b;  */

void FUN_104ade58c(long *param_1,long *****param_2,long *******param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  ulong uVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *******ppppppplVar10;
  long ****pppplVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long ******pppppplVar15;
  long *****ppppplVar16;
  long *******unaff_x21;
  long ****pppplVar17;
  long *******unaff_x22;
  long *******ppppppplVar18;
  long ***ppplVar19;
  long *****unaff_x23;
  long *******unaff_x24;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  undefined8 *******pppppppuVar24;
  code *pcVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  long ****pppplVar30;
  long ****pppplVar31;
  long ****pppplVar32;
  long ***ppplStack_2d0;
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  long ***ppplStack_2b8;
  long lStack_2a8;
  undefined8 ******ppppppuStack_260;
  code *pcStack_258;
  undefined1 auStack_250 [8];
  long *****ppppplStack_248;
  long ****pppplStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  byte bStack_201;
  long ***ppplStack_200;
  long ***ppplStack_1f8;
  long ***ppplStack_1f0;
  long **pplStack_1e8;
  undefined1 uStack_1e0;
  undefined8 *puStack_1d8;
  long *****ppppplStack_1d0;
  long lStack_1c8;
  long ****apppplStack_1c0 [4];
  undefined1 auStack_1a0 [32];
  long ***ppplStack_180;
  undefined8 uStack_178;
  long lStack_58;
  
  pppplVar17 = (long ****)auStack_250;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_1e8 = (long **)(param_1 + 2);
  uStack_1e0 = 0;
  func_0x000100460448();
  pppplVar11 = *param_2;
  if (pppplVar11 == (long ****)0x0) {
    if ((char)param_1[10] != '\0') {
      ppplStack_1f0 = (long ***)0x0;
      goto LAB_104ade604;
    }
    lVar13 = param_1[0xd];
    lVar14 = *(long *)(lVar13 + 0x10);
    if (*(long *)(lVar14 + 0x10) != 0) {
      unaff_x23 = (long *****)0x0;
      unaff_x22 = (long *******)0x0;
      unaff_x21 = (long *******)(param_1 + 0x3c);
      unaff_x24 = (long *******)0x36;
      do {
        plVar1 = (long *)(*(long *)(lVar14 + 8) + (long)unaff_x23);
        if (*plVar1 == 0) {
          if ((char)plVar1[1] == '\0') goto LAB_104ade720;
LAB_104ade6c8:
          ppppplStack_1d0 = (long *****)0x0;
          param_3 = (long *******)&ppppplStack_1d0;
          FUN_104ab8f08(&ppplStack_180,unaff_x21);
          pppplVar11 = (long ****)ppplStack_180;
          pppplVar4 = *param_2;
          if ((long ****)ppplStack_180 == pppplVar4) {
LAB_104ade700:
            if (((ulong)pppplVar4 & 1) != 0) {
              func_0x00010084dad0();
            }
            pppplVar11 = *param_2;
          }
          else {
            *param_2 = (long ****)ppplStack_180;
            ppplStack_180 = (long ***)0x36;
            if (((ulong)pppplVar4 & 1) != 0) {
              func_0x00010084dad0();
              pppplVar4 = (long ****)ppplStack_180;
              goto LAB_104ade700;
            }
          }
          if (pppplVar11 != (long ****)0x0) {
            if (((ulong)pppplVar11 & 1) != 0) {
              piVar12 = (int *)((long)pppplVar11 + -1);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar3) {
                  *piVar12 = *piVar12 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            ppppplVar8 = (long *****)&ppplStack_1f8;
            ppplStack_1f8 = (long ***)pppplVar11;
            FUN_104ade364(param_1);
            if (((ulong)ppplStack_1f8 & 1) != 0) {
              func_0x00010084dad0();
            }
            goto LAB_104ade61c;
          }
          if (*(int *)unaff_x21 != 2) {
            lVar13 = param_1[0xd];
            goto LAB_104ade720;
          }
          func_0x0001004b800c(&ppplStack_180);
          lVar13 = *(long *)(param_1[0xd] + 0x10);
          lVar14 = *(long *)(lVar13 + 8);
          plVar1 = (long *)(lVar14 + (long)unaff_x23);
          if (*plVar1 == 0) {
            pppppplVar15 = (long ******)(ulong)*(byte *)(plVar1 + 1);
          }
          else {
            pppppplVar15 = (long ******)plVar1[1];
          }
          if (ppppplStack_1d0 < pppppplVar15) {
            FUN_104ad79f8(auStack_1a0);
            func_0x0001005a70c4(&ppplStack_180,auStack_1a0);
            lVar13 = *(long *)(param_1[0xd] + 0x10);
            lVar14 = *(long *)(lVar13 + 8);
          }
          FUN_104ad7bd8(&ppplStack_180,(long)unaff_x23 + lVar14 + 0x20,
                        ~(ulong)unaff_x22 + *(long *)(lVar13 + 0x10));
          func_0x0001006148f8(*(undefined8 *)(param_1[0xd] + 0x10),&ppplStack_180);
          func_0x00010061ce28(&ppplStack_180);
          break;
        }
        if (plVar1[1] != 0) goto LAB_104ade6c8;
LAB_104ade720:
        unaff_x22 = (long *******)((long)unaff_x22 + 1);
        lVar14 = *(long *)(lVar13 + 0x10);
        unaff_x23 = unaff_x23 + 4;
      } while (unaff_x22 < *(long ********)(lVar14 + 0x10));
    }
    if ((int)param_1[0x3c] == 2) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x242);
      if (*(uint *)(param_1 + 0x242) - 300 < 0xffffff9c) {
        ppplStack_180 = (long ***)0x10f23d572;
        uStack_178 = 0x22;
        func_0x00010ae8b9d8(uVar5,apppplStack_1c0);
        lStack_1c8 = uVar5 - (long)apppplStack_1c0;
        unaff_x21 = &pppppplStack_218;
        ppppplStack_1d0 = apppplStack_1c0;
        func_0x00010047c83c(&pppppplStack_218,&ppplStack_180,&ppppplStack_1d0);
        param_3 = (long *******)pppppplStack_210;
        ppppppplVar10 = (long *******)pppppplStack_218;
        if (-1 < (char)bStack_201) {
          param_3 = (long *******)(ulong)bStack_201;
          ppppppplVar10 = unaff_x21;
        }
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_238 = 0;
        FUN_104ab5920(&ppplStack_200,2,ppppppplVar10,param_3,&uStack_219,&uStack_238);
        pppplVar11 = *param_2;
        if ((long ****)ppplStack_200 != pppplVar11) {
          *param_2 = (long ****)ppplStack_200;
          ppplStack_200 = (long ***)0x36;
          if (((ulong)pppplVar11 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        func_0x0001004bdf74(&ppplStack_200);
        puStack_1d8 = &uStack_238;
        func_0x000100482b64(&puStack_1d8);
        if ((char)bStack_201 < '\0') {
          __ZdlPv(pppppplStack_218);
        }
        pppplStack_240 = *param_2;
        if (((ulong)pppplStack_240 & 1) != 0) {
          piVar12 = (int *)((long)pppplStack_240 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppplVar8 = &pppplStack_240;
        FUN_104ade364(param_1);
        pppppplVar15 = (long ******)&pppplStack_240;
      }
      else {
        ppppplVar8 = (long *****)param_1[0xe];
        ppppplStack_248 = (long *****)*param_2;
        if (((ulong)ppppplStack_248 & 1) != 0) {
          piVar12 = (int *)((long)ppppplStack_248 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_3 = (long *******)&ppppplStack_248;
        func_0x0001004bd7e8(&ppplStack_180);
        pppppplVar15 = &ppppplStack_248;
      }
      func_0x0001004bdf74(pppppplVar15);
      goto LAB_104ade61c;
    }
    func_0x0001005a7050(*(undefined8 *)(param_1[0xd] + 0x10));
    uVar6 = *(undefined8 *)param_1[0xd];
    ppppplVar8 = (long *****)((undefined8 *)param_1[0xd])[2];
    param_3 = (long *******)(param_1 + 0x38);
    param_1[0x39] = (long)FUN_104ade504;
    param_1[0x3a] = (long)param_1;
    param_1[0x3b] = 0;
    func_0x0001005a7dc4(uVar6,ppppplVar8,param_3,1,1);
  }
  else {
    ppplStack_1f0 = (long ***)pppplVar11;
    if (((ulong)pppplVar11 & 1) != 0) {
      piVar12 = (int *)((long)pppplVar11 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
LAB_104ade604:
    ppppplVar8 = (long *****)&ppplStack_1f0;
    FUN_104ade364(param_1);
    if (((ulong)ppplStack_1f0 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104ade61c:
    *(undefined1 *)(param_1 + 10) = 1;
    uStack_1e0 = 1;
    func_0x000100466b80(pplStack_1e8);
    plVar1 = param_1 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  pppplVar11 = (long ****)&pplStack_1e8;
  FUN_104ab38e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppplStack_200);
  puStack_1d8 = &uStack_238;
  func_0x000100482b64(&puStack_1d8);
  if ((char)bStack_201 < '\0') {
    __ZdlPv(pppppplStack_218);
  }
  FUN_104ab38e4(&pplStack_1e8);
  pppplVar7 = pppplVar11;
  __Unwind_Resume();
  pcStack_258 = FUN_104adea4c;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar16 = (long *****)pppplVar7[1];
  pppplVar4 = pppplVar7;
  ppppplVar9 = ppppplVar8;
  ppppppplVar10 = param_3;
  ppppppplVar20 = unaff_x24;
  ppppppuStack_260 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (ppppplVar16 != (long *****)0x0) {
    if (ppppplVar16[1] != (long ****)0x0) {
      ppppppplVar18 = (long *******)0x0;
      do {
        ppppppplVar21 = (long *******)((ulong)ppppplVar16[(long)ppppppplVar18 * 8 + 3] & 0xff);
        if (ppppplVar16[(long)ppppppplVar18 * 8 + 2] != (long ****)0x0) {
          ppppppplVar21 = (long *******)ppppplVar16[(long)ppppppplVar18 * 8 + 3];
        }
        if (ppppppplVar21 == param_3) {
          pppplVar4 = (long ****)((long)ppppplVar16 + (long)ppppppplVar18 * 0x40 + 0x19);
          if (ppppplVar16[(long)ppppppplVar18 * 8 + 2] != (long ****)0x0) {
            pppplVar4 = ppppplVar16[(long)ppppppplVar18 * 8 + 4];
          }
          ppppplVar9 = ppppplVar8;
          ppppppplVar10 = param_3;
          _memcmp();
          ppppppplVar21 = ppppppplVar18;
          ppppplVar22 = ppppplVar16;
          if ((int)pppplVar4 == 0) goto LAB_104adeb54;
        }
        ppppppplVar18 = (long *******)((long)ppppppplVar18 + 1);
        do {
          if (ppppppplVar18 != (long *******)ppppplVar16[1]) goto LAB_104adeaf4;
          ppppppplVar18 = (long *******)0x0;
          ppppplVar16 = (long *****)*ppppplVar16;
        } while (ppppplVar16 != (long *****)0x0);
        ppppppplVar18 = (long *******)0x0;
LAB_104adeaf4:
      } while ((ppppplVar16 != (long *****)0x0) || (ppppppplVar18 != (long *******)0x0));
      ppppplVar16 = (long *****)0x0;
      goto LAB_104adeb0c;
    }
    ppppplVar16 = (long *****)0x0;
  }
  ppppppplVar18 = (long *******)0x0;
  param_3 = unaff_x21;
  ppppplVar8 = unaff_x23;
LAB_104adeb0c:
  pppplVar26 = pppplVar7;
  ppppplVar22 = ppppplVar16;
  ppppppplVar21 = ppppppplVar18;
  pppppppuVar24 = (undefined8 *******)ppppppuStack_260;
  pcVar25 = pcStack_258;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    pppplVar17 = &ppplStack_2d0;
    pppplVar26 = pppplVar4;
    ppppplVar22 = ppppplVar9;
    ppppppplVar21 = ppppppplVar10;
    pppplVar11 = pppplVar7;
    param_2 = ppppplVar16;
    unaff_x21 = param_3;
    unaff_x22 = ppppppplVar18;
    unaff_x23 = ppppplVar8;
    unaff_x24 = ppppppplVar20;
    pppppppuVar24 = &ppppppuStack_260;
    pcVar25 = FUN_104adec18;
  }
  if (ppppplVar22 != (long *****)0x0 || ppppppplVar21 != (long *******)0x0) {
    *(long ********)((long)pppplVar17 + -0x40) = unaff_x24;
    *(long ******)((long)pppplVar17 + -0x38) = unaff_x23;
    *(long ********)((long)pppplVar17 + -0x30) = unaff_x22;
    *(long ********)((long)pppplVar17 + -0x28) = unaff_x21;
    *(long ******)((long)pppplVar17 + -0x20) = param_2;
    *(long *****)((long)pppplVar17 + -0x18) = pppplVar11;
    *(undefined8 ********)((long)pppplVar17 + -0x10) = pppppppuVar24;
    *(code **)((long)pppplVar17 + -8) = pcVar25;
    if (ppppppplVar21 < ppppplVar22[1]) {
      ppppplVar8 = ppppplVar22 + (long)ppppppplVar21 * 8 + 6;
      ppppppplVar10 = ppppppplVar21;
      do {
        func_0x0001004b6d90(ppppplVar8);
        func_0x0001004b6d90(ppppplVar8 + -4);
        ppppppplVar10 = (long *******)((long)ppppppplVar10 + 1);
        ppppplVar8 = ppppplVar8 + 8;
      } while (ppppppplVar10 < ppppplVar22[1]);
    }
    ppppplVar22[1] = (long ****)ppppppplVar21;
    pppplVar26[2] = (long ***)ppppplVar22;
    for (pppplVar17 = *ppppplVar22; pppplVar17 != (long ****)0x0;
        pppplVar17 = (long ****)*pppplVar17) {
      if (pppplVar17[1] != (long ***)0x0) {
        ppplVar19 = (long ***)0x0;
        pppplVar11 = pppplVar17 + 6;
        do {
          func_0x0001004b6d90(pppplVar11);
          func_0x0001004b6d90(pppplVar11 + -4);
          ppplVar19 = (long ***)((long)ppplVar19 + 1);
          pppplVar11 = pppplVar11 + 8;
        } while (ppplVar19 < pppplVar17[1]);
      }
      pppplVar17[1] = (long ***)0x0;
    }
  }
  return;
LAB_104adeb54:
  ppppppplVar21 = (long *******)((long)ppppppplVar21 + 1);
  if (ppppplVar22 == (long *****)0x0) {
    ppppppplVar20 = (long *******)0x0;
    if (ppppppplVar21 == (long *******)0x0) goto LAB_104adeb0c;
    ppppplVar22 = (long *****)0x0;
  }
  else {
    while (ppppppplVar21 == (long *******)ppppplVar22[1]) {
      ppppppplVar21 = (long *******)0x0;
      ppppplVar22 = (long *****)*ppppplVar22;
      ppppppplVar20 = ppppppplVar21;
      if (ppppplVar22 == (long *****)0x0) goto LAB_104adeb0c;
    }
  }
  ppppplVar23 = ppppplVar22 + (long)ppppppplVar21 * 8 + 2;
  ppppppplVar20 = (long *******)((ulong)ppppplVar22[(long)ppppppplVar21 * 8 + 3] & 0xff);
  if (*ppppplVar23 != (long ****)0x0) {
    ppppppplVar20 = (long *******)ppppplVar22[(long)ppppppplVar21 * 8 + 3];
  }
  if (ppppppplVar20 == param_3) goto code_r0x000104adeb9c;
  goto LAB_104adebbc;
code_r0x000104adeb9c:
  pppplVar4 = (long ****)((long)ppppplVar22 + (long)ppppppplVar21 * 0x40 + 0x19);
  if (*ppppplVar23 != (long ****)0x0) {
    pppplVar4 = ppppplVar22[(long)ppppppplVar21 * 8 + 4];
  }
  ppppplVar9 = ppppplVar8;
  ppppppplVar10 = param_3;
  _memcmp();
  if ((int)pppplVar4 != 0) {
LAB_104adebbc:
    pppplVar28 = ppppplVar16[(long)ppppppplVar18 * 8 + 3];
    pppplVar26 = ppppplVar16[(long)ppppppplVar18 * 8 + 2];
    pppplVar31 = ppppplVar16[(long)ppppppplVar18 * 8 + 5];
    pppplVar29 = ppppplVar16[(long)ppppppplVar18 * 8 + 4];
    pppplVar27 = *ppppplVar23;
    pppplVar32 = ppppplVar22[(long)ppppppplVar21 * 8 + 5];
    pppplVar30 = ppppplVar22[(long)ppppppplVar21 * 8 + 4];
    ppppplVar16[(long)ppppppplVar18 * 8 + 3] = ppppplVar22[(long)ppppppplVar21 * 8 + 3];
    ppppplVar16[(long)ppppppplVar18 * 8 + 2] = pppplVar27;
    ppppplVar16[(long)ppppppplVar18 * 8 + 5] = pppplVar32;
    ppppplVar16[(long)ppppppplVar18 * 8 + 4] = pppplVar30;
    ppppplVar22[(long)ppppppplVar21 * 8 + 3] = pppplVar28;
    *ppppplVar23 = pppplVar26;
    ppppplVar22[(long)ppppppplVar21 * 8 + 5] = pppplVar31;
    ppppplVar22[(long)ppppppplVar21 * 8 + 4] = pppplVar29;
    ppplStack_2c8 = (long ***)ppppplVar16[(long)ppppppplVar18 * 8 + 7];
    ppplStack_2d0 = (long ***)ppppplVar16[(long)ppppppplVar18 * 8 + 6];
    ppplStack_2b8 = (long ***)ppppplVar16[(long)ppppppplVar18 * 8 + 9];
    ppplStack_2c0 = (long ***)ppppplVar16[(long)ppppppplVar18 * 8 + 8];
    pppplVar26 = ppppplVar22[(long)ppppppplVar21 * 8 + 6];
    pppplVar28 = ppppplVar22[(long)ppppppplVar21 * 8 + 9];
    pppplVar27 = ppppplVar22[(long)ppppppplVar21 * 8 + 8];
    ppppplVar16[(long)ppppppplVar18 * 8 + 7] = ppppplVar22[(long)ppppppplVar21 * 8 + 7];
    ppppplVar16[(long)ppppppplVar18 * 8 + 6] = pppplVar26;
    ppppplVar16[(long)ppppppplVar18 * 8 + 9] = pppplVar28;
    ppppplVar16[(long)ppppppplVar18 * 8 + 8] = pppplVar27;
    ppppplVar22[(long)ppppppplVar21 * 8 + 7] = (long ****)ppplStack_2c8;
    ppppplVar22[(long)ppppppplVar21 * 8 + 6] = (long ****)ppplStack_2d0;
    ppppplVar22[(long)ppppppplVar21 * 8 + 9] = (long ****)ppplStack_2b8;
    ppppplVar22[(long)ppppppplVar21 * 8 + 8] = (long ****)ppplStack_2c0;
    ppppppplVar18 = (long *******)((long)ppppppplVar18 + 1);
    do {
      if (ppppppplVar18 != (long *******)ppppplVar16[1]) goto LAB_104adeb54;
      ppppppplVar18 = (long *******)0x0;
      ppppplVar16 = (long *****)*ppppplVar16;
    } while (ppppplVar16 != (long *****)0x0);
    ppppppplVar18 = (long *******)0x0;
  }
  goto LAB_104adeb54;
}



/* Entry: 104adea4c; end: 104adec17;  */

void FUN_104adea4c(long param_1,long *param_2,ulong param_3)

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
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
          if ((int)lVar2 == 0) goto LAB_104adeb54;
        }
        uVar6 = uVar6 + 1;
        do {
          if (uVar6 != plVar4[1]) goto LAB_104adeaf4;
          uVar6 = 0;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        uVar6 = 0;
LAB_104adeaf4:
      } while ((plVar4 != (long *)0x0) || (uVar6 != 0));
      plVar4 = (long *)0x0;
      goto LAB_104adeb0c;
    }
    plVar4 = (long *)0x0;
  }
  uVar6 = 0;
  param_3 = unaff_x21;
  param_2 = unaff_x23;
LAB_104adeb0c:
  lVar11 = param_1;
  plVar5 = plVar4;
  uVar9 = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    unaff_x30 = FUN_104adec18;
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
        func_0x0001004b6d90(plVar3);
        func_0x0001004b6d90(plVar3 + -4);
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
          func_0x0001004b6d90(lVar2);
          func_0x0001004b6d90(lVar2 + -0x20);
          uVar7 = uVar7 + 1;
          lVar2 = lVar2 + 0x40;
        } while (uVar7 < (ulong)plVar5[1]);
      }
      plVar5[1] = 0;
    }
  }
  return;
LAB_104adeb54:
  uVar9 = uVar9 + 1;
  if (plVar5 == (long *)0x0) {
    uVar8 = 0;
    if (uVar9 == 0) goto LAB_104adeb0c;
    plVar5 = (long *)0x0;
  }
  else {
    while (uVar9 == plVar5[1]) {
      uVar9 = 0;
      plVar5 = (long *)*plVar5;
      uVar8 = uVar9;
      if (plVar5 == (long *)0x0) goto LAB_104adeb0c;
    }
  }
  plVar10 = plVar5 + uVar9 * 8 + 2;
  uVar8 = plVar5[uVar9 * 8 + 3] & 0xff;
  if (*plVar10 != 0) {
    uVar8 = plVar5[uVar9 * 8 + 3];
  }
  if (uVar8 == param_3) goto code_r0x000104adeb9c;
  goto LAB_104adebbc;
code_r0x000104adeb9c:
  lVar2 = (long)plVar5 + uVar9 * 0x40 + 0x19;
  if (*plVar10 != 0) {
    lVar2 = plVar5[uVar9 * 8 + 4];
  }
  plVar3 = param_2;
  uVar7 = param_3;
  _memcmp();
  if ((int)lVar2 != 0) {
LAB_104adebbc:
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
      if (uVar6 != plVar4[1]) goto LAB_104adeb54;
      uVar6 = 0;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    uVar6 = 0;
  }
  goto LAB_104adeb54;
}



/* Entry: 104adec18; end: 104adece7;  */

void FUN_104adec18(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (param_2 != (long *)0x0 || param_3 != 0) {
    if (param_3 < (ulong)param_2[1]) {
      plVar2 = param_2 + param_3 * 8 + 6;
      uVar3 = param_3;
      do {
        func_0x0001004b6d90(plVar2);
        func_0x0001004b6d90(plVar2 + -4);
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
          func_0x0001004b6d90(lVar1);
          func_0x0001004b6d90(lVar1 + -0x20);
          uVar3 = uVar3 + 1;
          lVar1 = lVar1 + 0x40;
        } while (uVar3 < (ulong)param_2[1]);
      }
      param_2[1] = 0;
    }
  }
  return;
}



/* Entry: 104adece8; end: 104adee93;  */

long ** FUN_104adece8(long *param_1,long **param_2,undefined8 param_3,ulong param_4,long *param_5)

{
  long **pplVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_a0;
  ulong uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar6 = param_2[1];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    lVar7 = 0;
    bVar3 = false;
    plVar9 = (long *)*param_1;
    uVar8 = param_1[1];
    do {
      if (plVar6[lVar7 * 8 + 2] == 0) {
        param_2 = (long **)((long)plVar6 + lVar7 * 0x40 + 0x19);
        uVar5 = (ulong)*(byte *)(plVar6 + lVar7 * 8 + 3);
      }
      else {
        uVar5 = plVar6[lVar7 * 8 + 3];
        param_2 = (long **)plVar6[lVar7 * 8 + 4];
      }
      if ((uVar5 == param_4) && (_memcmp(param_2,param_3,param_4), (int)param_2 == 0)) {
        if (bVar3) {
          puStack_d0 = &DAT_10f68e8ee;
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
          plStack_a0 = plVar9;
          uStack_98 = uVar8;
          func_0x000100066c24(&lStack_118,param_2,&puStack_d0,&lStack_100);
          if (*(char *)((long)param_5 + 0x17) < '\0') {
            param_2 = (long **)*param_5;
            __ZdlPv();
          }
          param_5[2] = uStack_108;
          param_5[1] = lStack_110;
          *param_5 = lStack_118;
          uVar8 = param_5[1];
          plVar9 = (long *)*param_5;
          if (-1 < (long)uStack_108) {
            uVar8 = uStack_108 >> 0x38;
            plVar9 = param_5;
          }
          *param_1 = (long)plVar9;
          param_1[1] = uVar8;
        }
        else {
          if (plVar6[lVar7 * 8 + 6] == 0) {
            plVar9 = (long *)((long)plVar6 + lVar7 * 0x40 + 0x39);
            uVar8 = (ulong)*(byte *)(plVar6 + lVar7 * 8 + 7);
          }
          else {
            uVar8 = plVar6[lVar7 * 8 + 7];
            plVar9 = (long *)plVar6[lVar7 * 8 + 8];
          }
          *param_1 = (long)plVar9;
          param_1[1] = uVar8;
          bVar3 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar7 = lVar7 + 1;
      do {
        if (lVar7 != plVar6[1]) goto LAB_104adee4c;
        lVar7 = 0;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      lVar7 = 0;
LAB_104adee4c:
    } while ((plVar6 != (long *)0x0) || (lVar7 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    iVar4 = (int)param_2;
    __Unwind_Resume();
    pplVar1 = (long **)"";
    if (iVar4 != 1) {
      pplVar1 = (long **)"<discarded-invalid-value>";
    }
    pplVar2 = (long **)"application/grpc";
    if (iVar4 != 0) {
      pplVar2 = pplVar1;
    }
    return pplVar2;
  }
  return param_2;
}



/* Entry: 104adee94; end: 104adeebf;  */

char * FUN_104adee94(int param_1)

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



/* Entry: 104adeec0; end: 104adef13;  */

void FUN_104adeec0(undefined8 param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x000104adf980();
  if ((uVar1 & 0xff) == 0) {
    (*param_3)(param_2,"invalid value",0xd,param_1);
  }
  return;
}



/* Entry: 104adef14; end: 104adef97;  */

long FUN_104adef14(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0x7fffffffffffffff;
  if (param_1 != (ulong *)0x7fffffffffffffff) {
    puVar1 = param_1;
    func_0x000100460dc4();
    uVar2 = *puVar1;
    func_0x0001004671a4();
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



/* Entry: 104adef98; end: 104adf017;  */

undefined8 FUN_104adef98(long *param_1,undefined8 param_2,code *param_3)

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



/* Entry: 104adf018; end: 104adf033;  */

char * FUN_104adf018(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "trailers";
  if (param_1 != 0) {
    pcVar1 = "<discarded-invalid-value>";
  }
  return pcVar1;
}



/* Entry: 104adf034; end: 104adf07b;  */

char * FUN_104adf034(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if ((int)param_2 == 0) {
    pcVar2 = "http";
    uVar3 = 4;
  }
  else {
    if ((int)param_2 != 1) {
      _abort();
      pcVar2 = "https";
      if ((int)param_2 != 1) {
        pcVar2 = "<discarded-invalid-value>";
      }
      pcVar1 = "http";
      if ((int)param_2 != 0) {
        pcVar1 = pcVar2;
      }
      return pcVar1;
    }
    pcVar2 = "https";
    uVar3 = 5;
  }
  *param_1 = 1;
  param_1[1] = uVar3;
  param_1[2] = pcVar2;
  return param_2;
}



/* Entry: 104adf07c; end: 104adf0a7;  */

char * FUN_104adf07c(int param_1)

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



/* Entry: 104adf0a8; end: 104adf0e7;  */

char * FUN_104adf0a8(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10dd580a0 + (long)(int)uVar1 * 8);
    puVar3 = (&PTR_s_POST_1107c75f8)[(int)uVar1];
    *param_1 = 1;
    param_1[1] = uVar2;
    param_1[2] = puVar3;
    return param_2;
  }
  _abort();
  if ((uint)param_2 < 3) {
    return (&PTR_s_POST_1107c75f8)[(int)(uint)param_2];
  }
  return "<discarded-invalid-value>";
}



/* Entry: 104adf0e8; end: 104adf10b;  */

char * FUN_104adf0e8(uint param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_POST_1107c75f8)[(int)param_1];
  }
  return "<discarded-invalid-value>";
}



/* Entry: 104adf10c; end: 104adf18b;  */

undefined8 FUN_104adf10c(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = (long)param_1 + 9;
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  func_0x00010084d874(uVar1,uVar2,&uStack_38,10);
  if ((uVar1 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,param_1);
    uStack_38 = 0x8000000000000000;
  }
  return uStack_38;
}



/* Entry: 104adf18c; end: 104adf27b;  */

undefined ***** FUN_104adf18c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [8];
  byte bVar3;
  long *plVar4;
  char *pcVar5;
  undefined *****pppppuVar6;
  undefined1 *puVar7;
  undefined *****pppppuVar8;
  char **ppcVar9;
  undefined1 **ppuVar10;
  undefined ****ppppuVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined ****ppppuVar12;
  undefined ***pppuVar13;
  undefined1 auStack_18c [4];
  undefined1 auStack_188 [8];
  undefined1 ***pppuStack_180;
  undefined ***pppuStack_178;
  undefined8 in_stack_fffffffffffffe90;
  undefined8 uStack_168;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 auStack_118 [32];
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined ****ppppuStack_c8;
  undefined ***pppuStack_c0;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)((long)param_2 + 0x1f);
  uVar1 = param_2[2];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  func_0x0001005a7e6c(&lStack_68,uVar1 + 8);
  auVar2 = (undefined1  [8])(auStack_60 + 1);
  if (lStack_68 != 0) {
    auVar2 = auStack_58;
  }
  *(undefined8 *)auVar2 = *param_2;
  pppppuVar8 = (undefined *****)(auStack_58 + 1);
  if (lStack_68 != 0) {
    pppppuVar8 = (undefined *****)((long)auStack_58 + 8);
  }
  bVar3 = *(byte *)((long)param_2 + 0x1f);
  uVar1 = param_2[2];
  plVar4 = (long *)param_2[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
    plVar4 = param_2 + 1;
  }
  _memcpy(pppppuVar8,plVar4,uVar1);
  param_1[1] = (long)auStack_60;
  *param_1 = lStack_68;
  param_1[3] = lStack_50;
  param_1[2] = (long)auStack_58;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_78 = FUN_104adf27c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_c0 = (undefined ***)pppppuVar8[2];
  ppppuStack_c8 = pppppuVar8[1];
  if (-1 < (char)*(byte *)((long)pppppuVar8 + 0x1f)) {
    pppuStack_c0 = (undefined ***)(ulong)*(byte *)((long)pppppuVar8 + 0x1f);
    ppppuStack_c8 = (undefined ****)(pppppuVar8 + 1);
  }
  pcStack_f8 = ":";
  uStack_f0 = 1;
  puVar7 = auStack_118;
  puStack_90 = param_2;
  plStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010ae8bc6c(*pppppuVar8);
  pppppuVar8 = &ppppuStack_c8;
  ppcVar9 = &pcStack_f8;
  ppuVar10 = &puStack_128;
  puStack_128 = auStack_118;
  puStack_120 = puVar7;
  func_0x000100066c24(extraout_x8,pppppuVar8,ppcVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_104adf32c;
  ppuStack_140 = &puStack_80;
  if (*pppppuVar8 == (undefined ****)0x0) {
    ppppuVar12 = (undefined ****)(ulong)*(byte *)(pppppuVar8 + 1);
    if ((undefined ****)0x7 < ppppuVar12) {
      extraout_x8_00[1] = 0;
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      ppppuVar11 = (undefined ****)((long)pppppuVar8 + 9);
      pppuVar13 = *ppppuVar11;
      goto LAB_104adf3d0;
    }
  }
  else {
    ppppuVar12 = pppppuVar8[1];
    if ((undefined ****)0x7 < ppppuVar12) {
      extraout_x8_00[1] = 0;
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      ppppuVar11 = pppppuVar8[2];
      pppuVar13 = *ppppuVar11;
LAB_104adf3d0:
      *extraout_x8_00 = pppuVar13;
      pppppuVar8 = (undefined *****)&pppuStack_178;
      func_0x000100741c30(pppppuVar8,ppppuVar11 + 1,ppppuVar12 + -1);
      if (*(char *)((long)extraout_x8_00 + 0x1f) < '\0') {
        pppppuVar8 = (undefined *****)extraout_x8_00[1];
        __ZdlPv(pppppuVar8);
      }
      extraout_x8_00[2] = in_stack_fffffffffffffe90;
      extraout_x8_00[1] = pppuStack_178;
      extraout_x8_00[3] = uStack_168;
      return pppppuVar8;
    }
  }
  (*(code *)ppuVar10)(ppcVar9,"too short",9);
  pppppuVar8 = (undefined *****)(extraout_x8_00 + 1);
  *extraout_x8_00 = 0;
  pcVar5 = "";
  func_0x000107c613d0();
  if ((char *)0x7ffffffffffffff7 < pcVar5) {
    func_0x000104a6fa5c(pppppuVar8);
    pppuStack_178 = (undefined ***)&UNK_10002b0d4;
    pppppuVar8 = (undefined *****)0x2947bdebdbc7a448;
    pppuStack_180 = &ppuStack_140;
    func_0x00010002b140(0x2947bdebdbc7a448,auStack_18c,auStack_188);
    return pppppuVar8;
  }
  if (pcVar5 < (char *)0x17) {
    *(char *)((long)extraout_x8_00 + 0x1f) = (char)pcVar5;
    pppppuVar6 = pppppuVar8;
    if (pcVar5 == (char *)0x0) goto code_r0x00010002b0b0;
  }
  else {
    uVar1 = ((ulong)pcVar5 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar5 | 7) != 0x17) {
      uVar1 = (ulong)pcVar5 | 7;
    }
    pppppuVar6 = (undefined *****)(uVar1 + 1);
    func_0x000107c60e20();
    extraout_x8_00[2] = pcVar5;
    extraout_x8_00[3] = uVar1 + 1 | 0x8000000000000000;
    *pppppuVar8 = (undefined ****)pppppuVar6;
  }
  func_0x000107c610b8(pppppuVar6,"",pcVar5);
code_r0x00010002b0b0:
  *(char *)((long)pppppuVar6 + (long)pcVar5) = '\0';
  return pppppuVar8;
}



/* Entry: 104adf27c; end: 104adf32b;  */

undefined ** FUN_104adf27c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  char **ppcVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [8];
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 in_stack_ffffffffffffff00;
  undefined8 in_stack_ffffffffffffff08;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  char *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_58;
  ulong uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = param_2[2];
  puStack_58 = (undefined *)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x1f)) {
    uStack_50 = (ulong)*(byte *)((long)param_2 + 0x1f);
    puStack_58 = (undefined *)(param_2 + 1);
  }
  pcStack_88 = ":";
  uStack_80 = 1;
  puVar4 = auStack_a8;
  func_0x00010ae8bc6c(*param_2);
  ppuVar5 = &puStack_58;
  ppcVar6 = &pcStack_88;
  ppuVar7 = &puStack_b8;
  puStack_b8 = auStack_a8;
  puStack_b0 = puVar4;
  func_0x000100066c24(param_1,ppuVar5,ppcVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_c8 = FUN_104adf32c;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (*ppuVar5 == (undefined *)0x0) {
    puVar9 = (undefined *)(ulong)*(byte *)(ppuVar5 + 1);
    if ((undefined *)0x7 < puVar9) {
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      puVar8 = (undefined8 *)((long)ppuVar5 + 9);
      uVar10 = *puVar8;
      goto LAB_104adf3d0;
    }
  }
  else {
    puVar9 = ppuVar5[1];
    if ((undefined *)0x7 < puVar9) {
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      puVar8 = (undefined8 *)ppuVar5[2];
      uVar10 = *puVar8;
LAB_104adf3d0:
      *extraout_x8 = uVar10;
      ppuVar5 = &puStack_108;
      func_0x000100741c30(ppuVar5,puVar8 + 1,puVar9 + -8);
      if (*(char *)((long)extraout_x8 + 0x1f) < '\0') {
        ppuVar5 = (undefined **)extraout_x8[1];
        __ZdlPv(ppuVar5);
      }
      extraout_x8[2] = in_stack_ffffffffffffff00;
      extraout_x8[1] = puStack_108;
      extraout_x8[3] = in_stack_ffffffffffffff08;
      return ppuVar5;
    }
  }
  (*(code *)ppuVar7)(ppcVar6,"too short",9);
  ppuVar5 = (undefined **)(extraout_x8 + 1);
  *extraout_x8 = 0;
  pcVar2 = "";
  func_0x000107c613d0();
  if ((char *)0x7ffffffffffffff7 < pcVar2) {
    func_0x000104a6fa5c(ppuVar5);
    puStack_108 = &UNK_10002b0d4;
    ppuVar5 = (undefined **)0x2947bdebdbc7a448;
    ppuStack_110 = &puStack_d0;
    func_0x00010002b140(0x2947bdebdbc7a448,auStack_11c,auStack_118);
    return ppuVar5;
  }
  if (pcVar2 < (char *)0x17) {
    *(char *)((long)extraout_x8 + 0x1f) = (char)pcVar2;
    ppuVar3 = ppuVar5;
    if (pcVar2 == (char *)0x0) goto code_r0x00010002b0b0;
  }
  else {
    uVar1 = ((ulong)pcVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar2 | 7) != 0x17) {
      uVar1 = (ulong)pcVar2 | 7;
    }
    ppuVar3 = (undefined **)(uVar1 + 1);
    func_0x000107c60e20();
    extraout_x8[2] = pcVar2;
    extraout_x8[3] = uVar1 + 1 | 0x8000000000000000;
    *ppuVar5 = (undefined *)ppuVar3;
  }
  func_0x000107c610b8(ppuVar3,"",pcVar2);
code_r0x00010002b0b0:
  *(char *)((long)ppuVar3 + (long)pcVar2) = '\0';
  return ppuVar5;
}



/* Entry: 104adf32c; end: 104adf433;  */

undefined ** FUN_104adf32c(undefined8 *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  undefined *puStack_48;
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
      goto LAB_104adf3d0;
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
LAB_104adf3d0:
      *param_1 = uVar6;
      ppuVar3 = &puStack_48;
      func_0x000100741c30(ppuVar3,puVar4 + 1,uVar5 - 8);
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        ppuVar3 = (undefined **)param_1[1];
        __ZdlPv(ppuVar3);
      }
      param_1[2] = in_stack_ffffffffffffffc0;
      param_1[1] = puStack_48;
      param_1[3] = in_stack_ffffffffffffffc8;
      return ppuVar3;
    }
  }
  (*param_4)(param_3,"too short",9);
  ppuVar3 = (undefined **)(param_1 + 1);
  *param_1 = 0;
  pcVar1 = "";
  func_0x000107c613d0();
  if ((char *)0x7ffffffffffffff7 < pcVar1) {
    func_0x000104a6fa5c(ppuVar3);
    puStack_48 = &UNK_10002b0d4;
    ppuVar3 = (undefined **)0x2947bdebdbc7a448;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010002b140(0x2947bdebdbc7a448,auStack_5c,auStack_58);
    return ppuVar3;
  }
  if (pcVar1 < (char *)0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)pcVar1;
    ppuVar2 = ppuVar3;
    if (pcVar1 == (char *)0x0) goto code_r0x00010002b0b0;
  }
  else {
    uVar5 = ((ulong)pcVar1 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar1 | 7) != 0x17) {
      uVar5 = (ulong)pcVar1 | 7;
    }
    ppuVar2 = (undefined **)(uVar5 + 1);
    func_0x000107c60e20();
    param_1[2] = pcVar1;
    param_1[3] = uVar5 + 1 | 0x8000000000000000;
    *ppuVar3 = (undefined *)ppuVar2;
  }
  func_0x000107c610b8(ppuVar2,"",pcVar1);
code_r0x00010002b0b0:
  *(char *)((long)ppuVar2 + (long)pcVar1) = '\0';
  return ppuVar3;
}



/* Entry: 104adf434; end: 104adf4a3;  */

void FUN_104adf434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = ": ";
  uStack_70 = 2;
  puVar3 = &uStack_48;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100066c24(puVar3,&pcStack_78,&uStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*puVar3;
  if ((long *)0x1 < plVar4) {
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



/* Entry: 104adf4a4; end: 104adf517;  */

void FUN_104adf4a4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
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



/* Entry: 104adf518; end: 104adf58f;  */

long * FUN_104adf518(undefined4 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  plVar1 = (long *)0xd;
  switch(param_1) {
  case 7:
    plVar1 = (long *)0xe;
    break;
  case 8:
    func_0x000100460dc4();
    lVar2 = *plVar1;
    func_0x0001004671a4();
    uVar3 = 4;
    if (lVar2 <= param_2) {
      uVar3 = 1;
    }
    return (long *)(ulong)uVar3;
  case 0xb:
    return (long *)0x8;
  case 0xc:
    return (long *)0x7;
  }
  return plVar1;
}



/* Entry: 104adf590; end: 104adf62f;  */

undefined8 FUN_104adf590(int param_1)

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



/* Entry: 104adf630; end: 104adf737;  */

void FUN_104adf630(long param_1)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  func_0x000100460448(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x50) == '\0') &&
     (*(undefined1 *)(param_1 + 0x50) = 1, *(long *)(param_1 + 0x68) != 0)) {
    lVar1 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    func_0x00010048650c(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(*(long *)(param_1 + 0x88) + 8) = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_104ab5920(&uStack_30,2,"tcp handshaker shutdown",0x17,&uStack_31,&uStack_50);
    func_0x0001005a6218(param_1,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    func_0x000100482b64(&puStack_28);
  }
  func_0x000100466b80(param_1 + 0x10);
  return;
}



/* Entry: 104adf738; end: 104adf743;  */

char * FUN_104adf738(void)

{
  return "tcp_connect";
}



/* Entry: 104adf744; end: 104adf7b7;  */

double FUN_104adf744(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  FUN_104adf7b8();
  puVar1 = &uStack_24;
  FUN_104adf7b8();
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



/* Entry: 104adf7b8; end: 104adf86f;  */

ulong FUN_104adf7b8(ushort *param_1)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = (ulong)(byte)param_1[1];
  if (10 < (byte)param_1[1]) {
    pcVar2 = "return Duration::NegativeInfinity()";
    FUN_104a6e964("return Duration::NegativeInfinity()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/timeout_encoding.cc"
                  ,0x58);
    if ((long)pcVar2 < 1000) {
      if (0x444444444444444 <
          ((long)pcVar2 * -0x1111111111111111 + 0x888888888888888U >> 2 |
          (long)pcVar2 * -0x1111111111111111 << 0x3e)) {
        uVar3 = 0x70000;
        goto LAB_104adf974;
      }
    }
    else if ((ulong)pcVar2 >> 4 < 0x271) {
      uVar3 = (((uint)pcVar2 & 0xffff) + 9) / 10;
      if (0x4444444 < (uVar3 * 0x55555556 >> 2 | uVar3 * -0x80000000)) {
        pcVar2 = (char *)(ulong)uVar3;
        uVar3 = 0x80000;
        goto LAB_104adf974;
      }
    }
    else if (((ulong)pcVar2 >> 5 < 0xc35) &&
            (uVar3 = ((uint)pcVar2 + 99) / 100, 0x4444444 < uVar3 * 0x5555555c >> 2)) {
      pcVar2 = (char *)(ulong)uVar3;
      uVar3 = 0x90000;
      goto LAB_104adf974;
    }
    pcVar2 = (char *)((long)(pcVar2 + 0x3b) / 0x3c);
    if (26999 < (long)pcVar2) {
      pcVar2 = (char *)0x6978;
    }
    uVar3 = 0xa0000;
LAB_104adf974:
    return (ulong)((uint)pcVar2 & 0xffff | uVar3);
  }
  uVar4 = (ulong)*param_1;
  switch(uVar1) {
  case 0:
    goto code_r0x000104adf850;
  case 1:
    return uVar4;
  case 2:
    return uVar4 * 10;
  case 3:
    uVar3 = 100;
    break;
  case 4:
    uVar3 = 1000;
    break;
  case 5:
    uVar3 = 10000;
    break;
  case 6:
    uVar3 = 100000;
    break;
  case 7:
    uVar3 = 60000;
    break;
  case 8:
    uVar3 = 600000;
    break;
  case 9:
    uVar3 = 6000000;
    break;
  case 10:
    uVar3 = 3600000;
  }
  uVar1 = uVar4 * uVar3;
code_r0x000104adf850:
  return uVar1;
}



/* Entry: 104adf870; end: 104adfc17;  */

uint FUN_104adf870(ulong param_1)

{
  uint uVar1;
  
  if ((long)param_1 < 1000) {
    if (0x444444444444444 <
        (param_1 * -0x1111111111111111 + 0x888888888888888 >> 2 |
        param_1 * -0x1111111111111111 << 0x3e)) {
      uVar1 = 0x70000;
      goto LAB_104adf974;
    }
  }
  else if (param_1 >> 4 < 0x271) {
    uVar1 = (((uint)param_1 & 0xffff) + 9) / 10;
    if (0x4444444 < (uVar1 * 0x55555556 >> 2 | uVar1 * -0x80000000)) {
      param_1 = (ulong)uVar1;
      uVar1 = 0x80000;
      goto LAB_104adf974;
    }
  }
  else if ((param_1 >> 5 < 0xc35) &&
          (uVar1 = ((uint)param_1 + 99) / 100, 0x4444444 < uVar1 * 0x5555555c >> 2)) {
    param_1 = (ulong)uVar1;
    uVar1 = 0x90000;
    goto LAB_104adf974;
  }
  param_1 = (long)(param_1 + 0x3b) / 0x3c;
  if (26999 < (long)param_1) {
    param_1 = 27000;
  }
  uVar1 = 0xa0000;
LAB_104adf974:
  return (uint)param_1 & 0xffff | uVar1;
}



/* Entry: 104adfc18; end: 104adfce7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104adfc18(undefined8 param_1,ulong *param_2,ulong *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  FUN_104adfce8(param_1,auStack_c8,puVar4);
  if ((uVar6 & 1) != 0) {
    func_0x00010084dad0(uVar6);
  }
  func_0x0001004dffa0(auStack_c8 + 1);
  puVar3 = auStack_c8 + 1;
  func_0x0001004e0194();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_104bd46a0();
    func_0x0001004e0194(auStack_c8 + 1);
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
    func_0x0001004dfd88(puVar4,&uStack_108,&uStack_118,&pcStack_110);
    if ((uStack_118 & 1) != 0) {
      func_0x00010084dad0();
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
    func_0x0001004dfd88(puVar4,&uStack_108,&uStack_120,&pcStack_110);
    if ((uStack_120 & 1) != 0) {
      func_0x00010084dad0();
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
    func_0x0001004dfd88(puVar4,&uStack_108,&uStack_128,&pcStack_110);
    if ((uStack_128 & 1) != 0) {
      func_0x00010084dad0();
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
    func_0x0001004dfd88(puVar4,&uStack_108,&uStack_130,&pcStack_110);
    if ((uStack_130 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104adfce8; end: 104adfedb;  */

void FUN_104adfce8(long *param_1,ulong *param_2,undefined8 param_3)

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
    func_0x0001004dfd88(param_3,&lStack_38,&uStack_48,&pcStack_40);
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
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
    func_0x0001004dfd88(param_3,&lStack_38,&uStack_50,&pcStack_40);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
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
    func_0x0001004dfd88(param_3,&lStack_38,&uStack_58,&pcStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x00010084dad0();
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
    func_0x0001004dfd88(param_3,&lStack_38,&uStack_60,&pcStack_40);
    if ((uStack_60 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104adfedc; end: 104adff47;  */

undefined8 * FUN_104adfedc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x110;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[5] = puVar1;
  puVar1[6] = puVar1 + 0xd;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[1] = FUN_104adff48;
  puVar1[2] = puVar1;
  puVar1[4] = param_1;
  return puVar1 + 5;
}



/* Entry: 104adff48; end: 104adffeb;  */

void FUN_104adff48(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uStack_40;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x100) & 1) != 0) {
    func_0x00010084dad0();
  }
  __ZdlPv(param_1);
  if (lVar4 != 0) {
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
    func_0x00010082b8d4(&uStack_31,lVar4,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104adffec; end: 104ae0037;  */

uint FUN_104adffec(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x0001004d6934();
  uVar2 = (int)param_1 - 0x21;
  uVar1 = 0;
  if (uVar2 < 0x3d) {
    uVar1 = (uint)(0x1400000096000fe9 >> ((ulong)uVar2 & 0x3f)) & 1;
  }
  uVar2 = 1;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 104ae0038; end: 104ae0127;  */

ulong *** FUN_104ae0038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong ***pppuVar2;
  ulong ***pppuVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong **ppuVar11;
  ulong **ppuStack_f8;
  ulong **ppuStack_f0;
  ulong **ppuStack_e8;
  ulong **ppuStack_e0;
  ulong **ppuStack_d8;
  ulong **ppuStack_a0;
  ulong *puStack_98;
  byte bStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = &uStack_68;
  puStack_50 = &UNK_1004d504c;
  puStack_48 = &uStack_78;
  puStack_40 = &UNK_1004d504c;
  puStack_38 = &uStack_88;
  puStack_30 = &UNK_1004d504c;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x0001004d4da0(&ppuStack_a0,"Could not parse \'%s\' from uri \'%s\'. %s",0x26,&puStack_58,3);
  puVar4 = puStack_98;
  pppuVar2 = (ulong ***)ppuStack_a0;
  if (-1 < (char)bStack_89) {
    puVar4 = (undefined8 *)(ulong)bStack_89;
    pppuVar2 = &ppuStack_a0;
  }
  func_0x00010ae775f4(param_1);
  if ((char)bStack_89 < '\0') {
    pppuVar2 = (ulong ***)ppuStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((char)bStack_89 < '\0') {
      __ZdlPv(ppuStack_a0);
    }
    __Unwind_Resume();
    pppuVar3 = pppuVar2 + 2;
    ppuVar5 = pppuVar2[1];
    if (ppuVar5 < *pppuVar3) {
      puVar10 = (ulong *)puVar4[1];
      puVar9 = (ulong *)*puVar4;
      ppuVar5[2] = (ulong *)puVar4[2];
      ppuVar5[1] = puVar10;
      *ppuVar5 = puVar9;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar10 = (ulong *)puVar4[4];
      puVar9 = (ulong *)puVar4[3];
      ppuVar5[5] = (ulong *)puVar4[5];
      ppuVar5[4] = puVar10;
      ppuVar5[3] = puVar9;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      ppuVar5 = ppuVar5 + 6;
      pppuVar2[1] = ppuVar5;
    }
    else {
      lVar6 = (long)ppuVar5 - (long)*pppuVar2 >> 4;
      uVar1 = lVar6 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar1) {
        FUN_104ae044c();
        FUN_104ae05dc(&ppuStack_f8);
        __Unwind_Resume();
        if (*(char *)((long)pppuVar2 + 0x2f) < '\0') {
          __ZdlPv(pppuVar2[3]);
        }
        if (*(char *)((long)pppuVar2 + 0x17) < '\0') {
          __ZdlPv(*pppuVar2);
        }
        return pppuVar2;
      }
      lVar7 = (long)*pppuVar3 - (long)*pppuVar2 >> 4;
      uVar8 = lVar7 * 0x5555555555555556;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        uVar8 = uVar1;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar8 = 0x555555555555555;
      }
      ppuStack_d8 = (ulong **)pppuVar3;
      if (uVar8 == 0) {
        ppuStack_f8 = (ulong **)0x0;
      }
      else {
        FUN_104ae0460();
        ppuStack_f8 = (ulong **)pppuVar3;
      }
      ppuStack_f0 = ppuStack_f8 + lVar6 * 2;
      ppuStack_e0 = ppuStack_f8 + uVar8 * 6;
      ppuVar11 = (ulong **)puVar4[1];
      ppuVar5 = (ulong **)*puVar4;
      ppuStack_f0[2] = (ulong *)puVar4[2];
      ppuStack_f0[1] = (ulong *)ppuVar11;
      *ppuStack_f0 = (ulong *)ppuVar5;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      ppuVar11 = (ulong **)puVar4[4];
      ppuVar5 = (ulong **)puVar4[3];
      ppuStack_f0[5] = (ulong *)puVar4[5];
      ppuStack_f0[4] = (ulong *)ppuVar11;
      ppuStack_f0[3] = (ulong *)ppuVar5;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      ppuStack_e8 = ppuStack_f0 + 6;
      FUN_104ae03d8(pppuVar2,&ppuStack_f8);
      ppuVar5 = pppuVar2[1];
      pppuVar3 = &ppuStack_f8;
      FUN_104ae05dc(pppuVar3);
    }
    pppuVar2[1] = ppuVar5;
    return pppuVar3;
  }
  return pppuVar2;
}



/* Entry: 104ae0128; end: 104ae028f;  */

ulong *** FUN_104ae0128(ulong ***param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong ***pppuVar2;
  ulong **ppuVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong **ppuVar9;
  ulong **ppuStack_58;
  ulong **ppuStack_50;
  ulong **ppuStack_48;
  ulong **ppuStack_40;
  ulong **ppuStack_38;
  
  pppuVar2 = param_1 + 2;
  ppuVar3 = param_1[1];
  if (ppuVar3 < *pppuVar2) {
    puVar8 = (ulong *)param_2[1];
    puVar7 = (ulong *)*param_2;
    ppuVar3[2] = (ulong *)param_2[2];
    ppuVar3[1] = puVar8;
    *ppuVar3 = puVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar8 = (ulong *)param_2[4];
    puVar7 = (ulong *)param_2[3];
    ppuVar3[5] = (ulong *)param_2[5];
    ppuVar3[4] = puVar8;
    ppuVar3[3] = puVar7;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    ppuVar3 = ppuVar3 + 6;
    param_1[1] = ppuVar3;
  }
  else {
    lVar4 = (long)ppuVar3 - (long)*param_1 >> 4;
    uVar1 = lVar4 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_104ae044c();
      FUN_104ae05dc(&ppuStack_58);
      __Unwind_Resume();
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        __ZdlPv(param_1[3]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    lVar5 = (long)*pppuVar2 - (long)*param_1 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    ppuStack_38 = (ulong **)pppuVar2;
    if (uVar6 == 0) {
      ppuStack_58 = (ulong **)0x0;
    }
    else {
      FUN_104ae0460();
      ppuStack_58 = (ulong **)pppuVar2;
    }
    ppuStack_50 = ppuStack_58 + lVar4 * 2;
    ppuStack_40 = ppuStack_58 + uVar6 * 6;
    ppuVar9 = (ulong **)param_2[1];
    ppuVar3 = (ulong **)*param_2;
    ppuStack_50[2] = (ulong *)param_2[2];
    ppuStack_50[1] = (ulong *)ppuVar9;
    *ppuStack_50 = (ulong *)ppuVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    ppuVar9 = (ulong **)param_2[4];
    ppuVar3 = (ulong **)param_2[3];
    ppuStack_50[5] = (ulong *)param_2[5];
    ppuStack_50[4] = (ulong *)ppuVar9;
    ppuStack_50[3] = (ulong *)ppuVar3;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    ppuStack_48 = ppuStack_50 + 6;
    FUN_104ae03d8(param_1,&ppuStack_58);
    ppuVar3 = param_1[1];
    pppuVar2 = &ppuStack_58;
    FUN_104ae05dc(pppuVar2);
  }
  param_1[1] = ppuVar3;
  return pppuVar2;
}



/* Entry: 104ae0290; end: 104ae0333;  */

undefined8 * FUN_104ae0290(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 104ae0334; end: 104ae033b;  */

void FUN_104ae0334(void)

{
  return;
}



/* Entry: 104ae033c; end: 104ae0373;  */

void FUN_104ae033c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c76c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104ae0374; end: 104ae038f;  */

void FUN_104ae0374(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c76c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104ae0390; end: 104ae03cb;  */

long FUN_104ae0390(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c7740);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ae03cc; end: 104ae03d7;  */

undefined ** FUN_104ae03cc(void)

{
  return &PTR_DAT_1107c7740;
}



/* Entry: 104ae03d8; end: 104ae044b;  */

void FUN_104ae03d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x000104ae04a4(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104ae044c; end: 104ae045f;  */

undefined1  [16]
FUN_104ae044c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_104a7757c();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  lStack_58 = param_7;
  lVar2 = param_7;
  for (; param_3 != param_5; param_3 = param_3 + -0x30) {
    uVar4 = *(undefined8 *)(param_3 + -0x28);
    uVar3 = *(undefined8 *)(param_3 + -0x30);
    *(undefined8 *)(lStack_58 + -0x20) = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lStack_58 + -0x28) = uVar4;
    *(undefined8 *)(lStack_58 + -0x30) = uVar3;
    *(undefined8 *)(param_3 + -0x28) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    *(undefined8 *)(param_3 + -0x30) = 0;
    uVar4 = *(undefined8 *)(param_3 + -0x10);
    uVar3 = *(undefined8 *)(param_3 + -0x18);
    *(undefined8 *)(lStack_58 + -8) = *(undefined8 *)(param_3 + -8);
    *(undefined8 *)(lStack_58 + -0x10) = uVar4;
    *(undefined8 *)(lStack_58 + -0x18) = uVar3;
    lStack_58 = lStack_58 + -0x30;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -0x18) = 0;
    lVar2 = lVar2 + -0x30;
  }
  uStack_78 = 1;
  puStack_90 = puVar1;
  uStack_70 = param_6;
  lStack_68 = param_7;
  uStack_60 = param_6;
  FUN_104ae0558(&puStack_90);
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = param_6;
  return auVar6;
}



/* Entry: 104ae0460; end: 104ae0557;  */

undefined1  [16]
FUN_104ae0460(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_104a7757c();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  lStack_48 = param_7;
  lVar1 = param_7;
  for (; param_3 != param_5; param_3 = param_3 + -0x30) {
    uVar3 = *(undefined8 *)(param_3 + -0x28);
    uVar2 = *(undefined8 *)(param_3 + -0x30);
    *(undefined8 *)(lStack_48 + -0x20) = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lStack_48 + -0x28) = uVar3;
    *(undefined8 *)(lStack_48 + -0x30) = uVar2;
    *(undefined8 *)(param_3 + -0x28) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    *(undefined8 *)(param_3 + -0x30) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x10);
    uVar2 = *(undefined8 *)(param_3 + -0x18);
    *(undefined8 *)(lStack_48 + -8) = *(undefined8 *)(param_3 + -8);
    *(undefined8 *)(lStack_48 + -0x10) = uVar3;
    *(undefined8 *)(lStack_48 + -0x18) = uVar2;
    lStack_48 = lStack_48 + -0x30;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -0x18) = 0;
    lVar1 = lVar1 + -0x30;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  lStack_58 = param_7;
  uStack_50 = param_6;
  FUN_104ae0558(&uStack_80);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 104ae0558; end: 104ae058b;  */

long FUN_104ae0558(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_104ae058c(param_1);
  }
  return param_1;
}



/* Entry: 104ae058c; end: 104ae05db;  */

void FUN_104ae058c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_104a82d24(uVar2,lVar1);
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 104ae05dc; end: 104ae064f;  */

long * FUN_104ae05dc(long *param_1)

{
  func_0x000104ae060c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104ae0650; end: 104ae0753;  */

ulong FUN_104ae0650(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar5 * -0x5555555555555555 + 1;
  if (uVar7 < 0xaaaaaaaaaaaaaab) {
    plVar2 = param_1 + 2;
    lVar4 = *plVar2 - *param_1 >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = plVar2;
    if (uVar6 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      func_0x0001004d69d4();
      plStack_58 = plVar2;
    }
    plStack_50 = plStack_58 + lVar5;
    plStack_40 = plStack_58 + uVar6 * 3;
    plStack_48 = plStack_50;
    func_0x00010002b024(plStack_50,param_2);
    plStack_48 = plStack_48 + 3;
    func_0x00010004824c(param_1,&plStack_58);
    uVar7 = param_1[1];
    func_0x0001000482e8(&plStack_58);
    return uVar7;
  }
  FUN_104a9439c();
  func_0x0001000482e8(&plStack_58);
  __Unwind_Resume();
  uVar1 = (uint)param_1;
  if ((uVar1 != 0x26) && (uVar1 != 0x3d)) {
    func_0x0001004d6934();
    if ((((ulong)param_1 & 1) == 0) &&
       ((0x1c < uVar1 - 0x21 || ((0x14000fe9U >> (ulong)(uVar1 - 0x21 & 0x1f) & 1) == 0)))) {
      uVar3 = (uint)(uVar1 == 0x3a || uVar1 == 0x40);
    }
    else {
      uVar3 = 1;
    }
    if ((uVar1 & 0xffffffef) == 0x2f) {
      uVar3 = 1;
    }
    return (ulong)uVar3;
  }
  return 0;
}



/* Entry: 104ae0754; end: 104ae0773;  */

bool FUN_104ae0754(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if ((uVar2 != 0x26) && (uVar2 != 0x3d)) {
    func_0x0001004d6934();
    if (((param_1 & 1) == 0) &&
       ((0x1c < uVar2 - 0x21 || ((0x14000fe9U >> (ulong)(uVar2 - 0x21 & 0x1f) & 1) == 0)))) {
      bVar1 = uVar2 == 0x3a || uVar2 == 0x40;
    }
    else {
      bVar1 = true;
    }
    if ((uVar2 & 0xffffffef) == 0x2f) {
      bVar1 = true;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 104ae0774; end: 104ae07d7;  */

undefined8 FUN_104ae0774(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 2;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                        ,0xa3,2,"Invalid arguments to local_tsi_handshaker_create()");
  }
  else {
    puVar1 = (undefined8 *)0x10;
    func_0x000100460860();
    uVar2 = 0;
    *puVar1 = &UNK_1107c7760;
    *param_1 = puVar1;
  }
  return uVar2;
}



/* Entry: 104ae07d8; end: 104ae07e3;  */

void FUN_104ae07d8(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 104ae07e4; end: 104ae08a7;  */

undefined8
FUN_104ae07e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 2;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                        ,0x80,2,"Invalid arguments to handshaker_next()");
  }
  else {
    *param_5 = 0;
    if (param_6 == (undefined8 *)0x0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                          ,0x68,2,"Invalid arguments to create_handshaker_result()");
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)0x18;
      func_0x000100460860();
      if (param_3 != 0) {
        lVar2 = param_3;
        func_0x000100460200();
        puVar1[1] = lVar2;
        _memcpy();
      }
      uVar3 = 0;
      puVar1[2] = param_3;
      *puVar1 = &PTR_FUN_1107c77a0;
      *param_6 = puVar1;
    }
  }
  return uVar3;
}



/* Entry: 104ae08a8; end: 104ae08bf;  */

undefined8 FUN_104ae08a8(void)

{
  return 0;
}



/* Entry: 104ae08c0; end: 104ae094b;  */

undefined8 FUN_104ae08c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (undefined8 *)0x0)) {
    uVar2 = 2;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                        ,0x47,2,"Invalid arguments to get_unused_bytes()");
  }
  else {
    uVar2 = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *param_3 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = uVar1;
  }
  return uVar2;
}



/* Entry: 104ae094c; end: 104ae0bdf;  */

void FUN_104ae094c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  int *piVar9;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ***apppuStack_58 [2];
  char cStack_41;
  
  func_0x000100460448(param_1 + 0x10);
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    if (uVar2 != 0) {
      func_0x00010046a6d8(apppuStack_58,uVar2 + 2,&uStack_60);
      ppppuVar7 = (undefined8 ****)apppuStack_58[0];
      if (-1 < cStack_41) {
        ppppuVar7 = apppuStack_58;
      }
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      _memmove(ppppuVar7,plVar1,uVar2);
      *(undefined2 *)((long)ppppuVar7 + uVar2) = 0xa0d;
      *(undefined1 *)((undefined2 *)((long)ppppuVar7 + uVar2) + 1) = 0;
      ppppuVar7 = (undefined8 ****)apppuStack_58[0];
      if (-1 < cStack_41) {
        ppppuVar7 = apppuStack_58;
      }
      uVar2 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      _fwrite(ppppuVar7,1,uVar2 + 1,*(undefined8 *)(param_1 + 0x50));
      ppppuVar3 = (undefined8 ****)param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        ppppuVar3 = (undefined8 ****)(ulong)*(byte *)((long)param_3 + 0x17);
      }
      ppppuVar8 = ppppuVar7;
      if (cStack_41 < '\0') {
        ppppuVar8 = (undefined8 ****)apppuStack_58[0];
        __ZdlPv();
      }
      if (ppppuVar7 < ppppuVar3) {
        ___error();
        FUN_104aba954(&uStack_68,apppuStack_58,*(undefined4 *)ppppuVar8,"fwrite");
        uVar2 = uStack_68;
        if (uStack_68 == 0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x104ae0b64);
          (*pcVar6)();
        }
        uStack_68 = 0x36;
        uStack_60 = uVar2;
        uStack_70 = uVar2;
        if ((uVar2 & 1) != 0) {
          piVar9 = (int *)(uVar2 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
              *piVar9 = *piVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_104aba950(apppuStack_58,&uStack_70);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl/key_logging/ssl_key_logging.cc"
                            ,0x5a,2,"Error Appending to TLS session key log file: %s");
        if (cStack_41 < '\0') {
          __ZdlPv(apppuStack_58[0]);
        }
        if ((uStack_70 & 1) != 0) {
          func_0x00010084dad0();
        }
        _fclose(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x50) = 0;
        if ((uVar2 & 1) != 0) {
          func_0x00010084dad0(uVar2);
        }
      }
      else {
        _fflush(*(undefined8 *)(param_1 + 0x50));
      }
    }
  }
  func_0x000100466b80(param_1 + 0x10);
  return;
}



/* Entry: 104ae0be0; end: 104ae0cb7;  */

void FUN_104ae0be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *param_2;
  *param_2 = 0;
  *puVar1 = &PTR_DAT_1107c77e0;
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 104ae0cb8; end: 104ae0cdf;  */

void FUN_104ae0cb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000100229edc();
  }
  return;
}



/* Entry: 104ae0ce0; end: 104ae0d57;  */

long FUN_104ae0ce0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x70;
  FUN_104ae1250();
  if (param_1 + 0x78 == lVar3) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x38);
    FUN_104ae0d58(param_1,lVar3);
    lVar2 = *(long *)(param_1 + 0x58);
    plVar1 = (long *)(param_1 + 0x60);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x28);
    }
    *plVar1 = lVar3;
    *(long *)(param_1 + 0x58) = lVar3;
    *(long *)(lVar3 + 0x20) = lVar2;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  }
  return lVar3;
}



/* Entry: 104ae0d58; end: 104ae0da7;  */

void FUN_104ae0d58(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 *puStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    param_1[0xb] = lVar5;
  }
  else {
    *(long *)(lVar1 + 0x20) = lVar5;
    lVar5 = *(long *)(param_2 + 0x20);
  }
  plVar4 = param_1 + 0xc;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x28);
  }
  *plVar4 = lVar1;
  if (param_1[0xd] != 0) {
    param_1[0xd] = param_1[0xd] + -1;
    return;
  }
  func_0x00010bdae0e0();
  lStack_58 = param_2;
  func_0x000100460448(param_1 + 2);
  func_0x00010002b024(auStack_78,param_2);
  puVar3 = param_1;
  FUN_104ae0ce0(param_1,auStack_78);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  puStack_60 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    func_0x00010002b024(auStack_78,param_2);
    lStack_88 = *param_3;
    *param_3 = 0;
    FUN_104ae1180(puVar3,auStack_78,&lStack_88);
    lVar5 = lStack_88;
    lStack_88 = 0;
    puStack_60 = puVar3;
    if (lVar5 != 0) {
      func_0x000100229edc();
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    lVar5 = param_1[0xb];
    plVar4 = param_1 + 0xc;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0x28);
    }
    *plVar4 = (long)puVar3;
    param_1[0xb] = puVar3;
    puVar3[4] = lVar5;
    puVar3[5] = 0;
    param_1[0xd] = param_1[0xd] + 1;
    FUN_104ae12dc(param_1 + 0xe,&lStack_58,&puStack_60);
    if ((ulong)param_1[10] < (ulong)param_1[0xd]) {
      puVar3 = (undefined8 *)param_1[0xc];
      if (puVar3 == (undefined8 *)0x0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                            ,0x6b,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104ae0f8c);
        (*pcVar2)();
      }
      puStack_60 = puVar3;
      FUN_104ae0d58(param_1);
      func_0x000104ae154c(param_1 + 0xe,puStack_60);
      puVar3 = puStack_60;
      if (puStack_60 != (undefined8 *)0x0) {
        plVar4 = (long *)puStack_60[3];
        puStack_60[3] = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          __ZdlPv(*puVar3);
        }
        __ZdlPv(puVar3);
      }
    }
  }
  else {
    lStack_80 = *param_3;
    *param_3 = 0;
    FUN_104ae1010(puVar3,&lStack_80);
    lVar5 = lStack_80;
    lStack_80 = 0;
    if (lVar5 != 0) {
      func_0x000100229edc();
    }
  }
  func_0x000100466b80(param_1 + 2);
  return;
}



/* Entry: 104ae0da8; end: 104ae100f;  */

void FUN_104ae0da8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_2;
  func_0x000100460448(param_1 + 2);
  func_0x00010002b024(auStack_68,param_2);
  puVar2 = param_1;
  FUN_104ae0ce0(param_1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  puStack_50 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    func_0x00010002b024(auStack_68,param_2);
    lStack_78 = *param_3;
    *param_3 = 0;
    FUN_104ae1180(puVar2,auStack_68,&lStack_78);
    lVar4 = lStack_78;
    lStack_78 = 0;
    puStack_50 = puVar2;
    if (lVar4 != 0) {
      func_0x000100229edc();
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    lVar4 = param_1[0xb];
    plVar3 = param_1 + 0xc;
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x28);
    }
    *plVar3 = (long)puVar2;
    param_1[0xb] = puVar2;
    puVar2[4] = lVar4;
    puVar2[5] = 0;
    param_1[0xd] = param_1[0xd] + 1;
    FUN_104ae12dc(param_1 + 0xe,&uStack_48,&puStack_50);
    if ((ulong)param_1[10] < (ulong)param_1[0xd]) {
      puVar2 = (undefined8 *)param_1[0xc];
      if (puVar2 == (undefined8 *)0x0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                            ,0x6b,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104ae0f8c);
        (*pcVar1)();
      }
      puStack_50 = puVar2;
      FUN_104ae0d58(param_1);
      func_0x000104ae154c(param_1 + 0xe,puStack_50);
      puVar2 = puStack_50;
      if (puStack_50 != (undefined8 *)0x0) {
        plVar3 = (long *)puStack_50[3];
        puStack_50[3] = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __ZdlPv(*puVar2);
        }
        __ZdlPv(puVar2);
      }
    }
  }
  else {
    lStack_70 = *param_3;
    *param_3 = 0;
    FUN_104ae1010(puVar2,&lStack_70);
    lVar4 = lStack_70;
    lStack_70 = 0;
    if (lVar4 != 0) {
      func_0x000100229edc();
    }
  }
  func_0x000100466b80(param_1 + 2);
  return;
}



/* Entry: 104ae1010; end: 104ae10af;  */

void FUN_104ae1010(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  *param_2 = 0;
  FUN_104ae0be0(&plStack_28,&lStack_30);
  plVar2 = plStack_28;
  plStack_28 = (long *)0x0;
  plVar3 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar2 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  lVar1 = lStack_30;
  lStack_30 = 0;
  if (lVar1 != 0) {
    func_0x000100229edc();
  }
  return;
}



/* Entry: 104ae10b0; end: 104ae117f;  */

void FUN_104ae10b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = param_2 + 0x10;
  func_0x000100460448(lVar1);
  func_0x00010002b024(auStack_48,param_3);
  FUN_104ae0ce0(param_2,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(param_1);
  }
  func_0x000100466b80(lVar1);
  return;
}



/* Entry: 104ae1180; end: 104ae124f;  */

undefined8 * FUN_104ae1180(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lStack_38 = *param_3;
  *param_3 = 0;
  FUN_104ae1010(param_1,&lStack_38);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x000100229edc();
  }
  return param_1;
}



/* Entry: 104ae1250; end: 104ae12db;  */

long * FUN_104ae1250(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_104a77514(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_104a77514(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 104ae12dc; end: 104ae1383;  */

undefined1  [16] FUN_104ae12dc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  FUN_104ae1384(&lStack_38);
  plVar2 = param_1;
  FUN_104ae1410(param_1,&uStack_40,lStack_38 + 0x20);
  lVar1 = lStack_38;
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    func_0x000104ae14ac(param_1,uStack_40,plVar2,lStack_38);
    uVar3 = 1;
    lVar4 = lStack_38;
  }
  else {
    lStack_38 = 0;
    uVar3 = 0;
    if (lVar1 != 0) {
      func_0x000104ae1500(auStack_30);
      uVar3 = 0;
    }
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}



/* Entry: 104ae1384; end: 104ae140f;  */

void FUN_104ae1384(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x00010002b024(lVar1 + 0x20,*param_3);
  *(undefined8 *)(lVar1 + 0x38) = *param_4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104ae1410; end: 104ae14ab;  */

long * FUN_104ae1410(long param_1,undefined8 *param_2,undefined8 param_3)

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
        FUN_104a77514(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_104ae1490;
      }
      lVar2 = param_1;
      FUN_104a77514(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_104ae1490:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 104ae14ac; end: 104ae163f;  */

void FUN_104ae14ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 104ae1640; end: 104ae173b;  */

long * FUN_104ae1640(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x3eb,2,"The root certificates are empty.");
  }
  else {
    plVar1 = (long *)0x8;
    func_0x000100460860();
    if (plVar1 == (long *)0x0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x3f1,2,"Could not allocate buffer for ssl_root_certs_store.");
      return (long *)0x0;
    }
    plVar2 = plVar1;
    func_0x0001004cad58();
    *plVar1 = (long)plVar2;
    if (plVar2 == (long *)0x0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x3f6,2,"Could not allocate buffer for X509_STORE.");
    }
    else {
      lVar3 = param_1;
      _strlen(param_1);
      func_0x0001004cb6b8(plVar2,param_1,lVar3,0);
      if ((int)plVar2 == 0) {
        return plVar1;
      }
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x3fd,2,"Could not load root certificates.");
      func_0x00010ae4ba70(*plVar1);
    }
    func_0x000100460314(plVar1);
  }
  return (long *)0x0;
}



/* Entry: 104ae173c; end: 104ae1747;  */

void FUN_104ae173c(undefined8 *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = (int)param_1 + 8;
    func_0x0001005a5e70();
    if (((iVar1 != 0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) &&
       (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100747e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 104ae1748; end: 104ae17e3;  */

void FUN_104ae1748(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lStack_178;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010ae29af8();
  if ((int)param_1 != 0) {
    do {
      func_0x00010ae29da8();
      param_2 = 0x213;
      param_1 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
      ;
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x213,2,"%s");
      func_0x00010ae29af8();
    } while ((int)param_1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    pcVar1 = param_1;
    func_0x00010ae63728();
    if (pcVar1 != (char *)0x0) {
      func_0x00010ae63738();
      func_0x00010ae636c4(param_1,0);
      if (param_1 != (char *)0x0) {
        lStack_178 = param_2;
        FUN_104ae0da8(*(undefined8 *)(pcVar1 + 0x28),param_1,&lStack_178);
        lVar2 = lStack_178;
        lStack_178 = 0;
        if (lVar2 != 0) {
          func_0x000100229edc();
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 104ae17e4; end: 104ae187f;  */

void FUN_104ae17e4(long param_1,long param_2)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010ae63728();
  if (lVar1 != 0) {
    func_0x00010ae63738();
    func_0x00010ae636c4(param_1,0);
    if (param_1 != 0) {
      lStack_38 = param_2;
      FUN_104ae0da8(*(undefined8 *)(lVar1 + 0x28),param_1,&lStack_38);
      lVar1 = lStack_38;
      lStack_38 = 0;
      if (lVar1 != 0) {
        func_0x000100229edc();
      }
    }
  }
  return;
}



/* Entry: 104ae1880; end: 104ae1913;  */

byte * FUN_104ae1880(long param_1,undefined8 *param_2,byte *param_3,byte *param_4,ulong param_5,
                    long param_6)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *apbStack_48 [2];
  char cStack_31;
  
  puVar6 = param_2;
  func_0x00010ae63728();
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x00010ae63738();
    pbVar7 = *(byte **)(lVar4 + 0x30);
    func_0x00010002b024(apbStack_48,param_2);
    FUN_104ae094c(pbVar7,param_1,apbStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(apbStack_48[0]);
      pbVar7 = apbStack_48[0];
    }
    return pbVar7;
  }
  func_0x00010bdae270();
  if (cStack_31 < '\0') {
    __ZdlPv(apbStack_48[0]);
  }
  __Unwind_Resume(param_1);
  pbVar7 = *(byte **)(param_6 + 0x18);
  uVar1 = *(ulong *)(param_6 + 0x20);
  pbVar5 = pbVar7;
  if (uVar1 != 0) {
    do {
      pbVar8 = pbVar5 + 1;
      bVar2 = *pbVar5;
      pbVar5 = param_4;
      if ((param_5 & 0xffffffff) != 0) {
        do {
          pbVar9 = pbVar5 + 1;
          bVar3 = *pbVar5;
          if ((bVar2 == bVar3) &&
             (pbVar5 = pbVar8, _memcmp(pbVar8,pbVar9,(ulong)bVar2), (int)pbVar5 == 0)) {
            *puVar6 = pbVar9;
            *param_3 = bVar2;
            return pbVar5;
          }
          pbVar5 = pbVar9 + bVar3;
        } while (param_4 <= pbVar5 && (ulong)((long)pbVar5 - (long)param_4) < (param_5 & 0xffffffff)
                );
      }
      pbVar5 = pbVar8 + bVar2;
      if (uVar1 <= (uint)((int)(pbVar8 + bVar2) - (int)pbVar7)) {
        return (byte *)0x3;
      }
    } while( true );
  }
  return (byte *)0x3;
}



/* Entry: 104ae1914; end: 104ae193b;  */

byte * FUN_104ae1914(undefined8 param_1,undefined8 *param_2,byte *param_3,byte *param_4,
                    ulong param_5,long param_6)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar1 = *(byte **)(param_6 + 0x18);
  uVar2 = *(ulong *)(param_6 + 0x20);
  pbVar5 = pbVar1;
  if (uVar2 == 0) {
    return (byte *)0x3;
  }
  do {
    pbVar6 = pbVar5 + 1;
    bVar3 = *pbVar5;
    pbVar5 = param_4;
    if ((param_5 & 0xffffffff) != 0) {
      do {
        pbVar7 = pbVar5 + 1;
        bVar4 = *pbVar5;
        if ((bVar3 == bVar4) &&
           (pbVar5 = pbVar6, _memcmp(pbVar6,pbVar7,(ulong)bVar3), (int)pbVar5 == 0)) {
          *param_2 = pbVar7;
          *param_3 = bVar3;
          return pbVar5;
        }
        pbVar5 = pbVar7 + bVar4;
      } while (param_4 <= pbVar5 && (ulong)((long)pbVar5 - (long)param_4) < (param_5 & 0xffffffff));
    }
    pbVar5 = pbVar6 + bVar3;
    if (uVar2 <= (uint)((int)(pbVar6 + bVar3) - (int)pbVar1)) {
      return (byte *)0x3;
    }
  } while( true );
}



/* Entry: 104ae193c; end: 104ae1aa3;  */

undefined8 FUN_104ae193c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  func_0x00010ae4c758();
  if (param_2 != 0) {
    if (param_2 == 3) {
      pcVar3 = "Certificate verification failed to get CRL files. Ignoring error.";
      param_1 = 1;
      uVar1 = 0x7b9;
      uVar2 = 1;
    }
    else {
      pcVar3 = "Certificate verify failed with code %d";
      uVar1 = 0x7be;
      uVar2 = 2;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,uVar1,uVar2,pcVar3);
  }
  return param_1;
}



/* Entry: 104ae1aa4; end: 104ae1b5f;  */

byte * FUN_104ae1aa4(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4,byte *param_5,
                    ulong param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar3 = param_3;
  if (param_4 == 0) {
    return (byte *)0x3;
  }
  do {
    pbVar4 = pbVar3 + 1;
    bVar1 = *pbVar3;
    pbVar3 = param_5;
    if (param_6 != 0) {
      do {
        pbVar5 = pbVar3 + 1;
        bVar2 = *pbVar3;
        if ((bVar1 == bVar2) &&
           (pbVar3 = pbVar4, _memcmp(pbVar4,pbVar5,(ulong)bVar1), (int)pbVar3 == 0)) {
          *param_1 = pbVar5;
          *param_2 = bVar1;
          return pbVar3;
        }
        pbVar3 = pbVar5 + bVar2;
      } while (param_5 <= pbVar3 && (ulong)((long)pbVar3 - (long)param_5) < param_6);
    }
    pbVar3 = pbVar4 + bVar1;
    if (param_4 <= (uint)((int)(pbVar4 + bVar1) - (int)param_3)) {
      return (byte *)0x3;
    }
  } while( true );
}



/* Entry: 104ae1b60; end: 104ae1b9f;  */

undefined1  [16]
FUN_104ae1b60(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 104ae1ba0; end: 104ae1bdf;  */

void FUN_104ae1ba0(long *param_1)

{
  code *pcVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x38);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
  return;
}



/* Entry: 104ae1be0; end: 104ae2907;  */

long * FUN_104ae1be0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  plVar1 = (long *)0x2;
  if ((param_3 != 0) && (*param_1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104ae1c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return param_1;
    }
    plVar1 = (long *)0x6;
  }
  return plVar1;
}



/* Entry: 104ae2908; end: 104ae2a67;  */

void FUN_104ae2908(undefined8 param_1,int param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *****pppppuVar3;
  undefined8 ***pppuVar4;
  int iVar5;
  undefined8 **ppuVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_130 [72];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_58 = (undefined8 ***)(param_3 & 0xffffffff);
  puStack_50 = &UNK_1004d50a8;
  puStack_40 = &UNK_1005616c4;
  uStack_48 = param_4;
  func_0x0001004d4da0(&ppppuStack_78,"Cronet error code:%d, Cronet error detail:%s",0x2c,
                      &pppuStack_58,2);
  pppppuVar3 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppppuVar3 = &ppppuStack_78;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  ppuStack_98 = (undefined8 ***)0x0;
  FUN_104ab5920(&uStack_60,2,pppppuVar3,uStack_70,&uStack_79,&ppuStack_98);
  iVar5 = 3;
  FUN_104abaa50(param_1,&uStack_60,3,(long)param_2);
  if ((uStack_60 & 1) != 0) {
    func_0x00010084dad0();
  }
  pppuStack_58 = &ppuStack_98;
  pppppuVar3 = (undefined8 *****)&pppuStack_58;
  func_0x000100482b64();
  if ((char)bStack_61 < '\0') {
    pppppuVar3 = (undefined8 *****)ppppuStack_78;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar5 != 0) {
      FUN_104bd46a0();
      func_0x0001004bdf74(&uStack_60);
      pppuStack_58 = &ppuStack_98;
      func_0x000100482b64(&pppuStack_58);
      if ((char)bStack_61 < '\0') {
        __ZdlPv(ppppuStack_78);
      }
    }
    __Unwind_Resume();
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/cronet/transport/cronet_transport.cc"
                        ,0x1bd,2,"on_failed(%p, %d)");
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    func_0x0001004b62b4(&uStack_e8,0);
    func_0x000100460de4(auStack_130);
    ppppuVar7 = pppppuVar3[1];
    func_0x000100460448(ppppuVar7 + 0xc0);
    func_0x0001008303c0(ppppuVar7[5]);
    *(undefined1 *)((long)ppppuVar7 + 0x5d) = 1;
    *(int *)(ppppuVar7 + 0xd) = iVar5;
    ppppuVar7[5] = (undefined8 ***)0x0;
    if (ppppuVar7[8] != (undefined8 ***)0x0) {
      func_0x000100460314();
      ppppuVar7[8] = (undefined8 ***)0x0;
    }
    if (ppppuVar7[0xbd] != (undefined8 ***)0x0) {
      func_0x000100460314();
      ppppuVar7[0xbd] = (undefined8 ***)0x0;
    }
    if (ppppuVar7[0xf] != (undefined8 ***)0x0 &&
        ppppuVar7[0xf] != (undefined8 ***)((long)ppppuVar7 + 0x91)) {
      func_0x000100460314();
    }
    ppppuVar7[0xf] = (undefined8 ***)0x0;
    func_0x000100466b80(ppppuVar7 + 0xc0);
    func_0x000100617338(ppppuVar7);
    pppuVar4 = ppppuVar7[200];
    do {
      ppuVar6 = *pppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar2) {
        *pppuVar4 = (undefined8 **)((long)ppuVar6 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((undefined8 **)((long)ppuVar6 + -1) == (undefined8 **)0x0) {
      func_0x000100836ca4();
    }
    func_0x000100467a48(auStack_130);
    func_0x0001004b6ddc(&uStack_e8);
    return;
  }
  return;
}



/* Entry: 104ae2a68; end: 104ae2b9b;  */

void FUN_104ae2a68(long param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/cronet/transport/cronet_transport.cc"
                      ,0x1bd,2,"on_failed(%p, %d)");
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001004b62b4(&uStack_48,0);
  func_0x000100460de4(auStack_90);
  lVar4 = *(long *)(param_1 + 8);
  func_0x000100460448(lVar4 + 0x600);
  func_0x0001008303c0(*(undefined8 *)(lVar4 + 0x28));
  *(undefined1 *)(lVar4 + 0x5d) = 1;
  *(undefined4 *)(lVar4 + 0x68) = param_2;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  if (*(long *)(lVar4 + 0x40) != 0) {
    func_0x000100460314();
    *(undefined8 *)(lVar4 + 0x40) = 0;
  }
  if (*(long *)(lVar4 + 0x5e8) != 0) {
    func_0x000100460314();
    *(undefined8 *)(lVar4 + 0x5e8) = 0;
  }
  if (*(long *)(lVar4 + 0x78) != 0 && *(long *)(lVar4 + 0x78) != lVar4 + 0x91) {
    func_0x000100460314();
  }
  *(undefined8 *)(lVar4 + 0x78) = 0;
  func_0x000100466b80(lVar4 + 0x600);
  func_0x000100617338(lVar4);
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
    func_0x000100836ca4();
  }
  func_0x000100467a48(auStack_90);
  func_0x0001004b6ddc(&uStack_48);
  return;
}



/* Entry: 104ae2b9c; end: 104ae2c9f;  */

void FUN_104ae2b9c(long param_1)

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
  func_0x000100460de4(auStack_80);
  lVar4 = *(long *)(param_1 + 8);
  func_0x000100460448(lVar4 + 0x600);
  func_0x0001008303c0(*(undefined8 *)(lVar4 + 0x28));
  *(undefined1 *)(lVar4 + 0x5f) = 1;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  if (*(long *)(lVar4 + 0x40) != 0) {
    func_0x000100460314();
    *(undefined8 *)(lVar4 + 0x40) = 0;
  }
  if (*(long *)(lVar4 + 0x5e8) != 0) {
    func_0x000100460314();
    *(undefined8 *)(lVar4 + 0x5e8) = 0;
  }
  if (*(long *)(lVar4 + 0x78) != 0 && *(long *)(lVar4 + 0x78) != lVar4 + 0x91) {
    func_0x000100460314();
  }
  *(undefined8 *)(lVar4 + 0x78) = 0;
  func_0x000100466b80(lVar4 + 0x600);
  func_0x000100617338(lVar4);
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
    func_0x000100836ca4();
  }
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  return;
}



/* Entry: 104ae2ca0; end: 104ae2df7;  */

/* WARNING: Possible PIC construction at 0x000104ae2d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ae2d94) */
/* WARNING: Removing unreachable block (ram,0x000104ae2d9c) */
/* WARNING: Removing unreachable block (ram,0x000104ae2da4) */
/* WARNING: Removing unreachable block (ram,0x000104ae2dd0) */
/* WARNING: Removing unreachable block (ram,0x000104ae2de0) */
/* WARNING: Removing unreachable block (ram,0x000104ae2df0) */
/* WARNING: Removing unreachable block (ram,0x000104ae2dbc) */

undefined1  [16]
FUN_104ae2ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_148 [8];
  long lStack_108;
  undefined8 **appuStack_c0 [2];
  undefined8 **appuStack_b0 [2];
  char cStack_99;
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(*(long *)(*(long *)*param_1 + 0x10) + *(long *)param_1[1] * 0x10);
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar5;
    _strlen();
  }
  uStack_40 = param_4[1] & 0xff;
  lStack_48 = (long)param_4 + 9;
  if (*param_4 != 0) {
    uStack_40 = param_4[1];
    lStack_48 = param_4[2];
  }
  pcStack_98 = "key=";
  uStack_90 = 4;
  pcStack_78 = " error=";
  uStack_70 = 7;
  pcStack_58 = " value=";
  uStack_50 = 7;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x00010ae8c7e0(appuStack_b0,&pcStack_98,6);
  appuStack_c0[0] = appuStack_b0[0];
  if (-1 < cStack_99) {
    appuStack_c0[0] = appuStack_b0;
  }
  uVar3 = 0x1b0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x0;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_148;
    func_0x000107c616d0(plVar1,0x40,"Failed to parse metadata: %s",appuStack_c0);
    if ((int)(uint)plVar1 < 0) {
      plVar2 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar2 = alStack_148;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar2 = plVar1;
    }
    uVar3 = 0x1b0;
    FUN_104a6e9e0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/cronet/transport/cronet_transport.cc"
                  ,0x1b0,0,plVar2);
    func_0x000100460314();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    func_0x000107c60e78();
    if (uVar3 >> 0x3d != 0) {
      FUN_104a7757c();
      lVar5 = plVar1[1];
      lVar4 = plVar1[2];
      while (lVar4 != lVar5) {
        plVar1[2] = lVar4 + -8;
        plVar2 = *(long **)(lVar4 + -8);
        *(undefined8 *)(lVar4 + -8) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        lVar4 = plVar1[2];
      }
      if (*plVar1 != 0) {
        func_0x000107c60e14();
      }
      auVar8._8_8_ = uVar3;
      auVar8._0_8_ = plVar1;
      return auVar8;
    }
    lVar5 = uVar3 << 3;
    func_0x000107c60e20(lVar5);
    auVar7._8_8_ = uVar3;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 104ae2df8; end: 104ae2dff;  */

undefined1  [16]
FUN_104ae2df8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 104ae2e00; end: 104ae2ebb;  */

long FUN_104ae2e00(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  FUN_104ad97bc();
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    func_0x000100480c90();
    if (iVar1 == 0) {
      FUN_104ae41c4(lVar2);
    }
    else {
      FUN_104ae3ee8(lVar2);
    }
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  lStack_28 = param_1 + 0x98;
  func_0x0001004889dc(&lStack_28);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 0x50);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010046df00(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104ae2ebc; end: 104ae2ecf;  */

long FUN_104ae2ebc(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  FUN_104ad97bc();
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    func_0x000100480c90();
    if (iVar1 == 0) {
      FUN_104ae41c4(lVar2);
    }
    else {
      FUN_104ae3ee8(lVar2);
    }
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  lStack_28 = param_1 + 0x98;
  func_0x0001004889dc(&lStack_28);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 0x50);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010046df00(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104ae2ed0; end: 104ae2f13;  */

void FUN_104ae2ed0(void)

{
  FUN_104ae2e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae2f14; end: 104ae2f2f;  */

void FUN_104ae2f14(undefined8 param_1,long *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae2f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  return;
}



/* Entry: 104ae2f30; end: 104ae2f9b;  */

void FUN_104ae2f30(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_c0 [72];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = (undefined8 *)0x10;
  __Znwm();
  *puVar7 = &PTR_FUN_1107c7be0;
  puVar7[1] = param_6;
  lVar8 = *(long *)(param_1 + 0x48);
  uVar9 = *(ulong *)(param_5 + 0x10);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001004b62b4(&uStack_78,0);
  func_0x000100460de4(auStack_c0);
  puVar5 = (undefined8 *)0xd8;
  __Znwm();
  plVar10 = puVar5 + 1;
  *plVar10 = 0x100000000;
  *puVar5 = &PTR_FUN_1107c0f20;
  plVar1 = (long *)(lVar8 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined4 *)(puVar5 + 5) = param_2;
  puVar5[2] = lVar8;
  puVar5[3] = uVar9;
  puVar5[4] = puVar7;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  uVar6 = uVar9;
  func_0x0001004bd5bc(uVar9,puVar7);
  if ((uVar6 & 1) != 0) {
    puVar5[0xc] = FUN_104a748ec;
    puVar5[0xd] = puVar5;
    puVar5[0xe] = 0;
    puVar5[0x17] = 0x104a74914;
    puVar5[0x18] = puVar5;
    puVar5[0x19] = 0;
    lVar8 = puVar5[2];
    FUN_104a75678();
    if (lVar8 == 0) {
      puVar7 = *(undefined8 **)(puVar5[2] + 0xc0);
      FUN_104aab068();
      if ((undefined **)*puVar7 != &PTR_DAT_1107c7238) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                            ,0x7f,2,
                            "grpc_channel_watch_connectivity_state called on something that is not a client channel"
                           );
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                            ,0x82,2,"assertion failed: %s");
        _abort();
        goto LAB_104a7484c;
      }
      func_0x000100491618(param_3,param_4);
      func_0x000100480ee4(puVar5 + 0xf,param_3,puVar5 + 0x16);
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 0x100000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar7 = (undefined8 *)0x30;
      __Znwm();
      func_0x000100491618(param_3,param_4);
      *puVar7 = puVar5;
      puVar7[1] = param_3;
      puVar7[3] = 0x104a74c34;
      puVar7[4] = puVar7;
      puVar7[5] = 0;
      func_0x0001004b85fc(uVar9);
      func_0x0001004b8624();
      FUN_104a7495c(lVar8,uVar9,param_4,puVar5 + 5,puVar5 + 0xb,puVar7 + 2);
    }
    func_0x000100467a48(auStack_c0);
    func_0x0001004b6ddc(&uStack_78);
    return;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                      ,0x6f,2,"assertion failed: %s");
  _abort();
LAB_104a7484c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a74850);
  (*pcVar4)();
}



/* Entry: 104ae2f9c; end: 104ae30ef;  */

long * FUN_104ae2f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  byte bStack_c9;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = 2;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_104c4f3d4(auStack_b0,&lStack_c8);
  bStack_c9 = 0;
  lStack_c8 = 0;
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  *puVar2 = &PTR_FUN_1107c7be0;
  puVar2[1] = 0;
  FUN_104a74610(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_4,uStack_a0,puVar2);
  uVar5 = 1;
  plVar6 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
  func_0x000100491574(auStack_b0,&lStack_c8,&bStack_c9,plVar6,uVar5);
  if (lStack_c8 != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/channel_cc.cc"
                        ,0xe4,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104ae30d0);
    (*pcVar1)();
  }
  plVar6 = (long *)(ulong)bStack_c9;
  puVar3 = auStack_b0;
  FUN_104c4f64c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar6 = *(long **)(puVar3 + 0x90);
  if (plVar6 == (long *)0x0) {
    plVar4 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,puVar3 + 0x50);
    plVar6 = *(long **)(puVar3 + 0x90);
    if (*(long **)(puVar3 + 0x90) == (long *)0x0) {
      func_0x000100480c90();
      if ((int)plVar4 == 0) {
        FUN_104ae3f24();
      }
      else {
        puVar2 = (undefined8 *)0x20;
        __Znwm();
        puVar2[3] = 0;
        *puVar2 = FUN_104ae3260;
        *(undefined4 *)(puVar2 + 1) = 1;
        plVar4 = (long *)0x78;
        __Znwm();
        FUN_104c4f3d4();
        puVar2[3] = plVar4;
      }
      *(long **)(puVar3 + 0x90) = plVar4;
      plVar6 = plVar4;
    }
    (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,puVar3 + 0x50);
  }
  return plVar6;
}



/* Entry: 104ae30f0; end: 104ae3213;  */

long * FUN_104ae30f0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x90);
  if (plVar3 == (long *)0x0) {
    plVar2 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,param_1 + 0x50);
    plVar3 = *(long **)(param_1 + 0x90);
    if (*(long **)(param_1 + 0x90) == (long *)0x0) {
      func_0x000100480c90();
      if ((int)plVar2 == 0) {
        FUN_104ae3f24();
      }
      else {
        puVar1 = (undefined8 *)0x20;
        __Znwm();
        puVar1[3] = 0;
        *puVar1 = FUN_104ae3260;
        *(undefined4 *)(puVar1 + 1) = 1;
        plVar2 = (long *)0x78;
        __Znwm();
        FUN_104c4f3d4();
        puVar1[3] = plVar2;
      }
      *(long **)(param_1 + 0x90) = plVar2;
      plVar3 = plVar2;
    }
    (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,param_1 + 0x50);
  }
  return plVar3;
}



/* Entry: 104ae3214; end: 104ae3223;  */

void FUN_104ae3214(void)

{
  return;
}



/* Entry: 104ae3224; end: 104ae3237;  */

void FUN_104ae3224(void)

{
  FUN_104a6fa70(&DAT_10f62a4d8);
  return;
}



/* Entry: 104ae3238; end: 104ae323f;  */

void FUN_104ae3238(void)

{
  return;
}



/* Entry: 104ae3240; end: 104ae325f;  */

undefined8 FUN_104ae3240(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  __ZdlPv();
  return 1;
}



/* Entry: 104ae3260; end: 104ae3293;  */

void FUN_104ae3260(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104ae3294; end: 104ae3303;  */

void FUN_104ae3294(long param_1)

{
  ulong uVar1;
  undefined **ppuStack_38;
  
  ppuStack_38 = &PTR_FUN_1107c7c78;
  if (*(long *)(param_1 + 0x1a0) != *(long *)(param_1 + 0x198)) {
    uVar1 = 0;
    do {
      func_0x0001004b9778(param_1 + 0x170,&ppuStack_38,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 3));
  }
  return;
}


