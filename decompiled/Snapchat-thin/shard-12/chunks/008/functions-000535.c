/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109890924; end: 109890a0b;  */

void FUN_109890924(long *param_1,long *param_2,long *param_3,long **param_4,long *param_5,
                  undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long **unaff_x21;
  long **pplVar11;
  long **pplVar12;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  plVar9 = *(long **)(*param_2 + 0x10);
  plVar6 = (long *)param_1[0x21];
  iVar1 = (int)*param_3;
  if (iVar1 < 4) {
    if (1 < iVar1) {
      if (iVar1 == 2) {
        _JSValueMakeBoolean(plVar6,(char)param_3[1]);
        param_3 = plVar6;
      }
      else {
        if (iVar1 != 3) goto LAB_109890a08;
        _JSValueMakeNumber(param_3[1]);
        param_3 = plVar6;
      }
      goto LAB_1098909d4;
    }
    if (iVar1 == 0) {
      _JSValueMakeUndefined();
      param_3 = plVar6;
      goto LAB_1098909d4;
    }
    if (iVar1 == 1) {
      _JSValueMakeNull();
      param_3 = plVar6;
      goto LAB_1098909d4;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar6,*(undefined8 *)(param_3[1] + 0x10));
        param_3 = plVar6;
        goto LAB_1098909d4;
      }
      if (iVar1 != 7) goto LAB_109890a08;
    }
    param_3 = *(long **)(param_3[1] + 0x10);
LAB_1098909d4:
    plStack_28 = (long *)0x0;
    param_4 = &plStack_28;
    _JSObjectHasPropertyForKey(param_1[0x21],plVar9);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar6 = param_1;
    param_2 = plStack_28;
    FUN_109890ee0();
  }
LAB_109890a08:
  _abort();
  puVar4 = &stack0xffffffffffffffa0;
  pcStack_38 = FUN_109890a0c;
  ppppuVar13 = &pppuStack_40;
  plVar10 = *(long **)(*param_2 + 0x10);
  pplVar11 = *(long ***)(*param_3 + 0x10);
  plVar7 = (long *)plVar6[0x21];
  iVar1 = *(int *)param_4;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        param_5 = plVar7;
      }
      else {
        if (iVar1 != 1) {
LAB_109890ae8:
          pcVar3 = FUN_109890aec;
          _abort();
          goto code_r0x000109890aec;
        }
        _JSValueMakeNull();
        param_5 = plVar7;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar7,*(undefined1 *)(param_4 + 1));
      param_5 = plVar7;
    }
    else {
      if (iVar1 != 3) goto LAB_109890ae8;
      _JSValueMakeNumber(param_4[1]);
      param_5 = plVar7;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar7,param_4[1][2]);
        param_5 = plVar7;
        goto LAB_109890ac4;
      }
      if (iVar1 != 7) goto LAB_109890ae8;
    }
    param_5 = (long *)param_4[1][2];
  }
LAB_109890ac4:
  param_2 = (long *)plVar6[0x21];
  param_6 = 0;
  puVar4 = auStack_30;
  plVar7 = plVar6;
  param_3 = plVar10;
  param_4 = pplVar11;
  plVar6 = param_1;
  plVar10 = plVar9;
  pplVar11 = unaff_x21;
  ppppuVar13 = (undefined8 ****)pppuStack_40;
  pcVar3 = pcStack_38;
code_r0x000109890aec:
  do {
    *(long **)(puVar4 + -0x20) = plVar10;
    *(long **)(puVar4 + -0x18) = plVar6;
    *(undefined8 *****)(puVar4 + -0x10) = ppppuVar13;
    *(code **)(puVar4 + -8) = pcVar3;
    *(undefined8 *)(puVar4 + -0x28) = 0;
    _JSObjectSetProperty(param_2,param_3,param_4,param_5,param_6,puVar4 + -0x28);
    plVar6 = *(long **)(puVar4 + -0x28);
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar9 = plVar7;
    FUN_109890ee0();
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(long ***)(puVar4 + -0x58) = pplVar11;
    *(long **)(puVar4 + -0x50) = plVar10;
    *(long **)(puVar4 + -0x48) = plVar7;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x38) = FUN_109890b44;
    param_3 = *(long **)(*plVar6 + 0x10);
    pplVar12 = (long **)(*param_4)[2];
    plVar8 = (long *)plVar9[0x21];
    iVar1 = (int)*param_5;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          _JSValueMakeUndefined();
        }
        else {
          if (iVar1 != 1) {
LAB_109890c20:
            _abort();
            *(undefined8 *)(puVar4 + -0x90) = unaff_x22;
            *(long ***)(puVar4 + -0x88) = pplVar12;
            *(long **)(puVar4 + -0x80) = param_3;
            *(long **)(puVar4 + -0x78) = plVar9;
            *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
            *(code **)(puVar4 + -0x68) = FUN_109890c24;
            (**(code **)(*plVar8 + 0x30))(puVar4 + -0xa0);
            FUN_109880f00(puVar4 + -0xb0,puVar4 + -0xa0,plVar8,&UNK_10f581ea2);
            FUN_1098811a4(puVar4 + -0x98,puVar4 + -0xb0,plVar8,&UNK_10f581f0b);
            if (*(undefined8 **)(puVar4 + -0xb0) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar4 + -0xb0))();
            }
            if (*(undefined8 **)(puVar4 + -0xa0) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar4 + -0xa0))();
            }
            FUN_109883838(puVar4 + -0xb0,puVar4 + -0x98,plVar8,plVar6,param_4,param_5);
            bVar2 = puVar4[-0xa8];
            if ((3 < *(int *)(puVar4 + -0xb0)) &&
               (*(undefined8 **)(puVar4 + -0xa8) != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)(puVar4 + -0xa8))();
            }
            if ((bVar2 & 1) == 0) {
              uVar5 = 0x60;
              ___cxa_allocate_exception(0x60);
              FUN_109882324();
              ___cxa_throw(uVar5,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098837d8);
              (*pcVar3)();
            }
            if (*(undefined8 **)(puVar4 + -0x98) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar4 + -0x98))();
            }
            return;
          }
          _JSValueMakeNull();
        }
      }
      else if (iVar1 == 2) {
        _JSValueMakeBoolean(plVar8,(char)param_5[1]);
      }
      else {
        if (iVar1 != 3) goto LAB_109890c20;
        _JSValueMakeNumber(param_5[1]);
      }
    }
    else {
      if (1 < iVar1 - 4U) {
        if (iVar1 == 6) {
          _JSValueMakeString(plVar8,*(undefined8 *)(param_5[1] + 0x10));
          goto LAB_109890bfc;
        }
        if (iVar1 != 7) goto LAB_109890c20;
      }
      plVar8 = *(long **)(param_5[1] + 0x10);
    }
LAB_109890bfc:
    param_2 = (long *)plVar9[0x21];
    param_6 = 0;
    ppppuVar13 = *(undefined8 *****)(puVar4 + -0x40);
    pcVar3 = *(code **)(puVar4 + -0x38);
    plVar10 = *(long **)(puVar4 + -0x50);
    plVar6 = *(long **)(puVar4 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar4 + -0x60);
    pplVar11 = *(long ***)(puVar4 + -0x58);
    puVar4 = puVar4 + -0x30;
    plVar7 = plVar9;
    param_4 = pplVar12;
    param_5 = plVar8;
  } while( true );
}



/* Entry: 109890a0c; end: 109890aeb;  */

void FUN_109890a0c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long *unaff_x21;
  long *plVar11;
  long *plVar12;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  code *unaff_x30;
  
  puVar4 = &stack0xffffffffffffffd0;
  puVar13 = &stack0xfffffffffffffff0;
  plVar10 = *(long **)(*param_2 + 0x10);
  plVar11 = *(long **)(*param_3 + 0x10);
  plVar6 = (long *)param_1[0x21];
  iVar1 = (int)*param_4;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        param_5 = plVar6;
      }
      else {
        if (iVar1 != 1) {
LAB_109890ae8:
          unaff_x30 = FUN_109890aec;
          _abort();
          goto code_r0x000109890aec;
        }
        _JSValueMakeNull();
        param_5 = plVar6;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar6,(char)param_4[1]);
      param_5 = plVar6;
    }
    else {
      if (iVar1 != 3) goto LAB_109890ae8;
      _JSValueMakeNumber(param_4[1]);
      param_5 = plVar6;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar6,*(undefined8 *)(param_4[1] + 0x10));
        param_5 = plVar6;
        goto LAB_109890ac4;
      }
      if (iVar1 != 7) goto LAB_109890ae8;
    }
    param_5 = *(long **)(param_4[1] + 0x10);
  }
LAB_109890ac4:
  param_2 = (long *)param_1[0x21];
  param_6 = 0;
  puVar4 = (undefined1 *)register0x00000008;
  plVar6 = param_1;
  param_3 = plVar10;
  param_4 = plVar11;
  param_1 = unaff_x19;
  plVar10 = unaff_x20;
  plVar11 = unaff_x21;
  puVar13 = unaff_x29;
code_r0x000109890aec:
  do {
    *(long **)(puVar4 + -0x20) = plVar10;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar13;
    *(code **)(puVar4 + -8) = unaff_x30;
    *(undefined8 *)(puVar4 + -0x28) = 0;
    _JSObjectSetProperty(param_2,param_3,param_4,param_5,param_6,puVar4 + -0x28);
    plVar9 = *(long **)(puVar4 + -0x28);
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar7 = plVar6;
    FUN_109890ee0();
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(long **)(puVar4 + -0x58) = plVar11;
    *(long **)(puVar4 + -0x50) = plVar10;
    *(long **)(puVar4 + -0x48) = plVar6;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x38) = FUN_109890b44;
    param_3 = *(long **)(*plVar9 + 0x10);
    plVar12 = *(long **)(*param_4 + 0x10);
    plVar8 = (long *)plVar7[0x21];
    iVar1 = (int)*param_5;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          _JSValueMakeUndefined();
        }
        else {
          if (iVar1 != 1) {
LAB_109890c20:
            _abort();
            *(undefined8 *)(puVar4 + -0x90) = unaff_x22;
            *(long **)(puVar4 + -0x88) = plVar12;
            *(long **)(puVar4 + -0x80) = param_3;
            *(long **)(puVar4 + -0x78) = plVar7;
            *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
            *(code **)(puVar4 + -0x68) = FUN_109890c24;
            (**(code **)(*plVar8 + 0x30))(puVar4 + -0xa0);
            FUN_109880f00(puVar4 + -0xb0,puVar4 + -0xa0,plVar8,&UNK_10f581ea2);
            FUN_1098811a4(puVar4 + -0x98,puVar4 + -0xb0,plVar8,&UNK_10f581f0b);
            if (*(undefined8 **)(puVar4 + -0xb0) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar4 + -0xb0))();
            }
            if (*(undefined8 **)(puVar4 + -0xa0) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar4 + -0xa0))();
            }
            FUN_109883838(puVar4 + -0xb0,puVar4 + -0x98,plVar8,plVar9,param_4,param_5);
            bVar2 = puVar4[-0xa8];
            if ((3 < *(int *)(puVar4 + -0xb0)) &&
               (*(undefined8 **)(puVar4 + -0xa8) != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)(puVar4 + -0xa8))();
            }
            if ((bVar2 & 1) == 0) {
              uVar5 = 0x60;
              ___cxa_allocate_exception(0x60);
              FUN_109882324();
              ___cxa_throw(uVar5,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098837d8);
              (*pcVar3)();
            }
            if (*(undefined8 **)(puVar4 + -0x98) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar4 + -0x98))();
            }
            return;
          }
          _JSValueMakeNull();
        }
      }
      else if (iVar1 == 2) {
        _JSValueMakeBoolean(plVar8,(char)param_5[1]);
      }
      else {
        if (iVar1 != 3) goto LAB_109890c20;
        _JSValueMakeNumber(param_5[1]);
      }
    }
    else {
      if (1 < iVar1 - 4U) {
        if (iVar1 == 6) {
          _JSValueMakeString(plVar8,*(undefined8 *)(param_5[1] + 0x10));
          goto LAB_109890bfc;
        }
        if (iVar1 != 7) goto LAB_109890c20;
      }
      plVar8 = *(long **)(param_5[1] + 0x10);
    }
LAB_109890bfc:
    param_2 = (long *)plVar7[0x21];
    param_6 = 0;
    puVar13 = *(undefined1 **)(puVar4 + -0x40);
    unaff_x30 = *(code **)(puVar4 + -0x38);
    plVar10 = *(long **)(puVar4 + -0x50);
    param_1 = *(long **)(puVar4 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar4 + -0x60);
    plVar11 = *(long **)(puVar4 + -0x58);
    puVar4 = puVar4 + -0x30;
    plVar6 = plVar7;
    param_4 = plVar12;
    param_5 = plVar8;
  } while( true );
}



/* Entry: 109890aec; end: 109890b43;  */

void FUN_109890aec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5,
                  undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    _JSObjectSetProperty
              (param_2,param_3,param_4,param_5,param_6,
               (undefined1 *)((long)register0x00000008 + -0x28));
    plVar7 = *(long **)((long)register0x00000008 + -0x28);
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar5 = param_1;
    FUN_109890ee0();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_109890b44;
    param_3 = *(undefined8 *)(*plVar7 + 0x10);
    plVar8 = *(long **)(*param_4 + 0x10);
    plVar6 = *(long **)(lVar5 + 0x108);
    iVar1 = (int)*param_5;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          _JSValueMakeUndefined();
        }
        else {
          if (iVar1 != 1) {
LAB_109890c20:
            _abort();
            *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
            *(long **)((long)register0x00000008 + -0x88) = plVar8;
            *(undefined8 *)((long)register0x00000008 + -0x80) = param_3;
            *(long *)((long)register0x00000008 + -0x78) = lVar5;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x40);
            *(code **)((long)register0x00000008 + -0x68) = FUN_109890c24;
            (**(code **)(*plVar6 + 0x30))((undefined1 *)((long)register0x00000008 + -0xa0));
            FUN_109880f00((undefined1 *)((long)register0x00000008 + -0xb0),
                          (undefined1 *)((long)register0x00000008 + -0xa0),plVar6,&UNK_10f581ea2);
            FUN_1098811a4((undefined1 *)((long)register0x00000008 + -0x98),
                          (undefined1 *)((long)register0x00000008 + -0xb0),plVar6,&UNK_10f581f0b);
            if (*(undefined8 **)((long)register0x00000008 + -0xb0) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0xb0))();
            }
            if (*(undefined8 **)((long)register0x00000008 + -0xa0) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0xa0))();
            }
            FUN_109883838((undefined1 *)((long)register0x00000008 + -0xb0),
                          (undefined1 *)((long)register0x00000008 + -0x98),plVar6,plVar7,param_4,
                          param_5);
            bVar2 = *(byte *)((long)register0x00000008 + -0xa8);
            if ((3 < *(int *)((long)register0x00000008 + -0xb0)) &&
               (*(undefined8 **)((long)register0x00000008 + -0xa8) != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0xa8))();
            }
            if ((bVar2 & 1) == 0) {
              uVar4 = 0x60;
              ___cxa_allocate_exception(0x60);
              FUN_109882324();
              ___cxa_throw(uVar4,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098837d8);
              (*pcVar3)();
            }
            if (*(undefined8 **)((long)register0x00000008 + -0x98) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0x98))();
            }
            return;
          }
          _JSValueMakeNull();
        }
      }
      else if (iVar1 == 2) {
        _JSValueMakeBoolean(plVar6,(char)param_5[1]);
      }
      else {
        if (iVar1 != 3) goto LAB_109890c20;
        _JSValueMakeNumber(param_5[1]);
      }
    }
    else {
      if (1 < iVar1 - 4U) {
        if (iVar1 == 6) {
          _JSValueMakeString(plVar6,*(undefined8 *)(param_5[1] + 0x10));
          goto LAB_109890bfc;
        }
        if (iVar1 != 7) goto LAB_109890c20;
      }
      plVar6 = *(long **)(param_5[1] + 0x10);
    }
LAB_109890bfc:
    param_2 = *(undefined8 *)(lVar5 + 0x108);
    param_6 = 0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = lVar5;
    param_4 = plVar8;
    param_5 = plVar6;
  } while( true );
}



/* Entry: 109890b44; end: 109890c23;  */

void FUN_109890b44(long param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  long *plVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar7 = *(undefined8 *)(*param_2 + 0x10);
    plVar8 = *(long **)(*param_3 + 0x10);
    plVar5 = *(long **)(lVar4 + 0x108);
    iVar1 = (int)*param_4;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          _JSValueMakeUndefined();
          param_4 = plVar5;
        }
        else {
          if (iVar1 != 1) {
LAB_109890c20:
            _abort();
            *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
            *(long **)((long)register0x00000008 + -0x58) = plVar8;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar7;
            *(long *)((long)register0x00000008 + -0x48) = lVar4;
            *(undefined1 **)((long)register0x00000008 + -0x40) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(code **)((long)register0x00000008 + -0x38) = FUN_109890c24;
            (**(code **)(*plVar5 + 0x30))((undefined1 *)((long)register0x00000008 + -0x70));
            FUN_109880f00((undefined1 *)((long)register0x00000008 + -0x80),
                          (undefined1 *)((long)register0x00000008 + -0x70),plVar5,&UNK_10f581ea2);
            FUN_1098811a4((undefined1 *)((long)register0x00000008 + -0x68),
                          (undefined1 *)((long)register0x00000008 + -0x80),plVar5,&UNK_10f581f0b);
            if (*(undefined8 **)((long)register0x00000008 + -0x80) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0x80))();
            }
            if (*(undefined8 **)((long)register0x00000008 + -0x70) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0x70))();
            }
            FUN_109883838((undefined1 *)((long)register0x00000008 + -0x80),
                          (undefined1 *)((long)register0x00000008 + -0x68),plVar5,param_2,param_3,
                          param_4);
            bVar2 = *(byte *)((long)register0x00000008 + -0x78);
            if ((3 < *(int *)((long)register0x00000008 + -0x80)) &&
               (*(undefined8 **)((long)register0x00000008 + -0x78) != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0x78))();
            }
            if ((bVar2 & 1) == 0) {
              uVar7 = 0x60;
              ___cxa_allocate_exception(0x60);
              FUN_109882324();
              ___cxa_throw(uVar7,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098837d8);
              (*pcVar3)();
            }
            if (*(undefined8 **)((long)register0x00000008 + -0x68) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)((long)register0x00000008 + -0x68))();
            }
            return;
          }
          _JSValueMakeNull();
          param_4 = plVar5;
        }
      }
      else if (iVar1 == 2) {
        _JSValueMakeBoolean(plVar5,(char)param_4[1]);
        param_4 = plVar5;
      }
      else {
        if (iVar1 != 3) goto LAB_109890c20;
        _JSValueMakeNumber(param_4[1]);
        param_4 = plVar5;
      }
    }
    else {
      if (1 < iVar1 - 4U) {
        if (iVar1 == 6) {
          _JSValueMakeString(plVar5,*(undefined8 *)(param_4[1] + 0x10));
          param_4 = plVar5;
          goto LAB_109890bfc;
        }
        if (iVar1 != 7) goto LAB_109890c20;
      }
      param_4 = *(long **)(param_4[1] + 0x10);
    }
LAB_109890bfc:
    uVar6 = *(undefined8 *)(lVar4 + 0x108);
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
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    _JSObjectSetProperty
              (uVar6,uVar7,plVar8,param_4,0,(undefined1 *)((long)register0x00000008 + -0x28));
    param_2 = *(long **)((long)register0x00000008 + -0x28);
    if (param_2 == (long *)0x0) {
      return;
    }
    unaff_x30 = FUN_109890b44;
    param_1 = lVar4;
    FUN_109890ee0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_3 = plVar8;
    unaff_x19 = lVar4;
  } while( true );
}



/* Entry: 109890c24; end: 109890c47;  */

void FUN_109890c24(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int iStack_50;
  undefined4 uStack_4c;
  byte bStack_48;
  undefined7 uStack_47;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  (**(code **)(*param_1 + 0x30))(&puStack_40);
  FUN_109880f00(&iStack_50,&puStack_40,param_1,&UNK_10f581ea2);
  FUN_1098811a4(&puStack_38,&iStack_50,param_1,&UNK_10f581f0b);
  if ((undefined8 *)CONCAT44(uStack_4c,iStack_50) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_4c,iStack_50))();
  }
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  FUN_109883838(&iStack_50,&puStack_38,param_1,param_2,param_3,param_4);
  if ((3 < iStack_50) && ((undefined8 *)CONCAT71(uStack_47,bStack_48) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_47,bStack_48))();
  }
  if ((bStack_48 & 1) != 0) {
    if (puStack_38 != (undefined8 *)0x0) {
      (**(code **)*puStack_38)();
    }
    return;
  }
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109882324();
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098837d8);
  (*pcVar1)();
}



/* Entry: 109890c48; end: 109890c73;  */

bool FUN_109890c48(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _JSValueGetTypedArrayType(uVar1,*(undefined8 *)(*param_2 + 0x10),0);
  return (int)uVar1 == 9;
}



/* Entry: 109890c74; end: 109890cc3;  */

void FUN_109890c74(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectGetArrayBufferBytesPtr_110346e20)
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),0);
  return;
}



/* Entry: 109890cc4; end: 109890d7f;  */

void FUN_109890cc4(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_2 + 0x108);
  _JSObjectCopyPropertyNames(lVar1,*(undefined8 *)(*param_3 + 0x10));
  lVar2 = lVar1;
  _JSPropertyNameArrayGetCount();
  FUN_109890d80(param_1,param_2,lVar2);
  if (lVar2 != 0) {
    lVar5 = 0;
    lVar8 = *param_1;
    do {
      lVar3 = lVar1;
      _JSPropertyNameArrayGetNameAtIndex(lVar1,lVar5);
      uVar6 = *(undefined8 *)(param_2 + 0x108);
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      uVar4 = uVar6;
      _JSValueMakeString(uVar6,lVar3);
      _JSObjectSetPropertyAtIndex(uVar6,uVar7,lVar5,uVar4,0);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSPropertyNameArrayRelease_110346f00)(lVar1);
  return;
}



/* Entry: 109890d80; end: 109890edf;  */

double ** FUN_109890d80(long *param_1,double *param_2,double *param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  double **ppdVar7;
  long *plVar8;
  long *plVar9;
  double *pdVar10;
  double **ppdVar11;
  double **ppdVar12;
  undefined8 *puVar13;
  double *pdVar14;
  int extraout_w8;
  undefined4 uVar15;
  undefined8 *extraout_x8;
  undefined4 *extraout_x8_00;
  long *extraout_x8_01;
  undefined4 *extraout_x8_02;
  long *extraout_x8_03;
  double unaff_x21;
  double **ppdVar16;
  undefined8 uVar17;
  long lStack_1e8;
  long *plStack_1e0;
  double *pdStack_1d8;
  double **ppdStack_1d0;
  undefined8 ******ppppppuStack_1c0;
  undefined8 uStack_1b8;
  double *pdStack_1a8;
  long *plStack_1a0;
  double *pdStack_198;
  double **ppdStack_190;
  double **ppdStack_188;
  undefined1 ******ppppppuStack_180;
  code *pcStack_178;
  long *plStack_168;
  double **ppdStack_160;
  undefined1 *****pppppuStack_150;
  code *pcStack_148;
  long *plStack_138;
  undefined1 ****ppppuStack_100;
  code *pcStack_f8;
  double *pdStack_e8;
  ulong uStack_e0;
  double dStack_d8;
  double **ppdStack_d0;
  double *pdStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  int aiStack_b0 [2];
  double *pdStack_a8;
  double *pdStack_a0;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  double dStack_68;
  long *plStack_60;
  double *pdStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long *plStack_38;
  
  dVar3 = param_3[0x21];
  plStack_38 = (long *)0x0;
  _JSObjectMakeArray(dVar3,0,0,&plStack_38);
  if (plStack_38 == (long *)0x0) {
    dVar4 = param_3[0x21];
    param_2 = (double *)(double)param_4;
    _JSValueMakeNumber(dVar4);
    plStack_38 = (long *)0x0;
    _JSObjectSetProperty(param_3[0x21],dVar3,param_3[0x2e],dVar4,0,&plStack_38);
    unaff_x21 = dVar3;
    if (plStack_38 == (long *)0x0) {
      ppdVar16 = (double **)(param_3 + 2);
      FUN_10988e404(ppdVar16,param_3,dVar3,0);
      *param_1 = (long)ppdVar16;
      return ppdVar16;
    }
  }
  pdVar6 = param_3;
  plVar8 = plStack_38;
  FUN_109890ee0();
  uStack_48 = 0x109890e2c;
  uStack_78 = *(undefined8 *)(*plVar8 + 0x10);
  plStack_80 = (long *)0x0;
  pdVar5 = (double *)pdVar6[0x21];
  uStack_70 = param_4;
  dStack_68 = unaff_x21;
  plStack_60 = param_1;
  pdStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _JSObjectCallAsConstructor
            (pdVar5,*(undefined8 *)((long)pdVar6[0x1d] + 0x10),1,&uStack_78,&plStack_80);
  if (plStack_80 == (long *)0x0) {
    ppdVar16 = (double **)pdVar6[6];
    if (ppdVar16 == (double **)0x0) {
      FUN_109892840(pdVar6 + 2);
      ppdVar16 = (double **)pdVar6[6];
    }
    pdVar6[6] = (double)*ppdVar16;
    ppdVar16[1] = pdVar6;
    ppdVar16[2] = pdVar5;
    *(undefined4 *)(ppdVar16 + 3) = 1;
    *ppdVar16 = (double *)&PTR_FUN_110b16db0;
    *(undefined2 *)((long)ppdVar16 + 0x1c) = 0xffff;
    ppdVar12 = ppdVar16;
    FUN_109892990(ppdVar16);
    *extraout_x8 = ppdVar16;
    return ppdVar12;
  }
  pdVar5 = pdVar6;
  plVar8 = plStack_80;
  FUN_109890ee0();
  pcStack_88 = FUN_109890ee0;
  iVar2 = *(int *)(pdVar5 + 0xf);
  pdStack_a0 = pdVar6;
  ppuStack_90 = &puStack_50;
  if (4 < iVar2) {
    *(undefined4 *)(pdVar5 + 0xf) = 0;
    FUN_109893d9c(pdVar5);
    iVar2 = extraout_w8;
  }
  *(int *)(pdVar5 + 0xf) = iVar2 + 1;
  ppdVar16 = (double **)pdVar5[0x21];
  plVar9 = plVar8;
  _JSValueGetType();
  iVar2 = (int)ppdVar16;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        aiStack_b0[0] = 0;
LAB_109891074:
        FUN_109893df4(pdVar5,aiStack_b0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109891084);
        (*pcVar1)();
      }
      if (iVar2 == 1) {
        aiStack_b0[0] = 1;
        goto LAB_109891074;
      }
    }
    else {
      if (iVar2 == 2) {
        dVar3 = pdVar5[0x21];
        _JSValueToBoolean(dVar3,plVar8);
        aiStack_b0[0] = 2;
        pdStack_a8 = (double *)CONCAT71(pdStack_a8._1_7_,SUB81(dVar3,0));
        goto LAB_109891074;
      }
      if (iVar2 == 3) {
        _JSValueToNumber(pdVar5[0x21],plVar8,0);
        aiStack_b0[0] = 3;
        pdStack_a8 = param_2;
        goto LAB_109891074;
      }
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      dVar3 = pdVar5[0x21];
      _JSValueToStringCopy(dVar3,plVar8,0);
      pdStack_a8 = (double *)pdVar5[0xb];
      if (pdStack_a8 == (double *)0x0) {
        FUN_109892d80(pdVar5 + 7);
        pdStack_a8 = (double *)pdVar5[0xb];
      }
      pdVar5[0xb] = *pdStack_a8;
      pdStack_a8[1] = (double)pdVar5;
      pdStack_a8[2] = dVar3;
      *(undefined4 *)(pdStack_a8 + 3) = 1;
      *pdStack_a8 = (double)&PTR_FUN_110b16e18;
      aiStack_b0[0] = 6;
      goto LAB_109891074;
    }
    if (iVar2 == 5) {
      pdVar6 = pdVar5 + 2;
      FUN_1098927b8(pdVar6,pdVar5,plVar8,0);
      aiStack_b0[0] = 7;
      pdStack_a8 = pdVar6;
      goto LAB_109891074;
    }
  }
  else {
    if (iVar2 == 6) {
      pdVar6 = pdVar5 + 2;
      FUN_1098927b8(pdVar6,pdVar5,plVar8,0);
      aiStack_b0[0] = 4;
      pdStack_a8 = pdVar6;
      goto LAB_109891074;
    }
    if (iVar2 == 7) {
      pdVar6 = pdVar5 + 2;
      FUN_1098927b8(pdVar6,pdVar5,plVar8,0);
      aiStack_b0[0] = 5;
      pdStack_a8 = pdVar6;
      goto LAB_109891074;
    }
  }
  _abort();
  if ((3 < aiStack_b0[0]) && (pdStack_a8 != (double *)0x0)) {
    (**(code **)*pdStack_a8)();
  }
  *(int *)(pdVar5 + 0xf) = *(int *)(pdVar5 + 0xf) + -1;
  ppdVar12 = ppdVar16;
  __Unwind_Resume();
  pcStack_b8 = FUN_1098910c0;
  pdStack_e8 = (double *)0x0;
  pdVar6 = ppdVar12[0x21];
  uStack_e0 = param_4;
  dStack_d8 = unaff_x21;
  ppdStack_d0 = ppdVar16;
  pdStack_c8 = pdVar5;
  pppuStack_c0 = &ppuStack_90;
  _JSObjectCallAsFunction(pdVar6,ppdVar12[0x1f][2],*(undefined8 *)(*plVar9 + 0x10),0,0,&pdStack_e8);
  if (pdStack_e8 == (double *)0x0) {
    ppdVar16 = (double **)ppdVar12[0x21];
    pdVar5 = pdVar6;
    _JSValueGetType();
    iVar2 = (int)ppdVar16;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          *extraout_x8_00 = 0;
          return ppdVar16;
        }
        if (iVar2 == 1) {
          *extraout_x8_00 = 1;
          return ppdVar16;
        }
      }
      else {
        if (iVar2 == 2) {
          ppdVar16 = (double **)ppdVar12[0x21];
          _JSValueToBoolean(ppdVar16,pdVar6);
          *extraout_x8_00 = 2;
          *(char *)(extraout_x8_00 + 2) = (char)ppdVar16;
          return ppdVar16;
        }
        if (iVar2 == 3) {
          ppdVar16 = (double **)ppdVar12[0x21];
          _JSValueToNumber(ppdVar16,pdVar6,0);
          *extraout_x8_00 = 3;
          *(double **)(extraout_x8_00 + 2) = param_2;
          return ppdVar16;
        }
      }
    }
    else if (iVar2 < 6) {
      if (iVar2 == 4) {
        ppdVar7 = (double **)ppdVar12[0x21];
        _JSValueToStringCopy(ppdVar7,pdVar6,0);
        pdVar6 = ppdVar12[0xb];
        ppdVar16 = ppdVar7;
        if (pdVar6 == (double *)0x0) {
          ppdVar16 = ppdVar12 + 7;
          FUN_109892d80(ppdVar16);
          pdVar6 = ppdVar12[0xb];
        }
        ppdVar12[0xb] = (double *)*pdVar6;
        pdVar6[1] = (double)ppdVar12;
        pdVar6[2] = (double)ppdVar7;
        *(undefined4 *)(pdVar6 + 3) = 1;
        *pdVar6 = (double)&PTR_FUN_110b16e18;
        *extraout_x8_00 = 6;
        *(double **)(extraout_x8_00 + 2) = pdVar6;
        return ppdVar16;
      }
      if (iVar2 == 5) {
        ppdVar16 = ppdVar12 + 2;
        FUN_1098927b8(ppdVar16,ppdVar12,pdVar6,0);
        uVar15 = 7;
        goto LAB_109891268;
      }
    }
    else {
      if (iVar2 == 6) {
        ppdVar16 = ppdVar12 + 2;
        FUN_1098927b8(ppdVar16,ppdVar12,pdVar6,0);
        uVar15 = 4;
LAB_109891268:
        *extraout_x8_00 = uVar15;
        *(double ***)(extraout_x8_00 + 2) = ppdVar16;
        return ppdVar16;
      }
      if (iVar2 == 7) {
        ppdVar16 = ppdVar12 + 2;
        FUN_1098927b8(ppdVar16,ppdVar12,pdVar6,0);
        uVar15 = 5;
        goto LAB_109891268;
      }
    }
  }
  else {
    pdVar5 = pdStack_e8;
    FUN_109890ee0();
    ppdVar16 = ppdVar12;
  }
  _abort();
  pcStack_f8 = FUN_109891290;
  plVar8 = (long *)*pdVar5;
  ppppuStack_100 = &pppuStack_c0;
  (**(code **)(*plVar8 + 0x18))();
  plVar9 = (long *)*pdVar5;
  (**(code **)(*plVar9 + 0x10))();
  pdVar6 = (double *)0x10;
  __Znwm();
  dVar3 = *pdVar5;
  pdVar6[1] = pdVar5[1];
  *pdVar6 = dVar3;
  *pdVar5 = 0.0;
  pdVar5[1] = 0.0;
  plStack_138 = (long *)0x0;
  pdVar10 = ppdVar16[0x21];
  _JSObjectMakeArrayBufferWithBytesNoCopy(pdVar10,plVar8,plVar9,FUN_109892cc8,pdVar6,&plStack_138);
  if (plStack_138 == (long *)0x0) {
    ppdVar12 = ppdVar16 + 2;
    FUN_10988e48c(ppdVar12,ppdVar16,pdVar10);
    *extraout_x8_01 = (long)ppdVar12;
    return ppdVar12;
  }
  ppdVar12 = ppdVar16;
  plVar9 = plStack_138;
  FUN_109890ee0();
  pcStack_148 = FUN_109891350;
  pdVar6 = ppdVar12[0x21];
  pdVar10 = ppdVar12[0x2e];
  plStack_168 = (long *)0x0;
  ppdStack_160 = ppdVar16;
  pppppuStack_150 = &ppppuStack_100;
  _JSObjectGetProperty(pdVar6,*(undefined8 *)(*plVar9 + 0x10),pdVar10,&plStack_168);
  if (plStack_168 == (long *)0x0) {
    _JSValueToNumber(ppdVar12[0x21],pdVar6,0);
    return (double **)(long)dVar3;
  }
  ppdVar11 = ppdVar12;
  plVar9 = plStack_168;
  FUN_109890ee0();
  pcStack_178 = FUN_1098913b8;
  pdVar6 = ppdVar11[0x21];
  pdStack_1a8 = (double *)0x0;
  ppdVar7 = &pdStack_1a8;
  plStack_1a0 = plVar8;
  pdStack_198 = pdVar5;
  ppdStack_190 = ppdVar16;
  ppdStack_188 = ppdVar12;
  ppppppuStack_180 = &pppppuStack_150;
  _JSObjectGetPropertyAtIndex(pdVar6,*(undefined8 *)(*plVar9 + 0x10));
  if (pdStack_1a8 == (double *)0x0) {
    ppdVar16 = (double **)ppdVar11[0x21];
    pdVar14 = pdVar6;
    _JSValueGetType();
    iVar2 = (int)ppdVar16;
    pdVar5 = pdVar6;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          *extraout_x8_02 = 0;
          return ppdVar16;
        }
        if (iVar2 == 1) {
          *extraout_x8_02 = 1;
          return ppdVar16;
        }
      }
      else {
        if (iVar2 == 2) {
          ppdVar16 = (double **)ppdVar11[0x21];
          _JSValueToBoolean(ppdVar16,pdVar6);
          *extraout_x8_02 = 2;
          *(char *)(extraout_x8_02 + 2) = (char)ppdVar16;
          return ppdVar16;
        }
        if (iVar2 == 3) {
          ppdVar16 = (double **)ppdVar11[0x21];
          _JSValueToNumber(ppdVar16,pdVar6,0);
          *extraout_x8_02 = 3;
          *(double *)(extraout_x8_02 + 2) = dVar3;
          return ppdVar16;
        }
      }
    }
    else if (iVar2 < 6) {
      if (iVar2 == 4) {
        ppdVar12 = (double **)ppdVar11[0x21];
        _JSValueToStringCopy(ppdVar12,pdVar6,0);
        pdVar6 = ppdVar11[0xb];
        ppdVar16 = ppdVar12;
        if (pdVar6 == (double *)0x0) {
          ppdVar16 = ppdVar11 + 7;
          FUN_109892d80(ppdVar16);
          pdVar6 = ppdVar11[0xb];
        }
        ppdVar11[0xb] = (double *)*pdVar6;
        pdVar6[1] = (double)ppdVar11;
        pdVar6[2] = (double)ppdVar12;
        *(undefined4 *)(pdVar6 + 3) = 1;
        *pdVar6 = (double)&PTR_FUN_110b16e18;
        *extraout_x8_02 = 6;
        *(double **)(extraout_x8_02 + 2) = pdVar6;
        return ppdVar16;
      }
      if (iVar2 == 5) {
        ppdVar16 = ppdVar11 + 2;
        FUN_1098927b8(ppdVar16,ppdVar11,pdVar6,0);
        uVar15 = 7;
        goto LAB_109891550;
      }
    }
    else {
      if (iVar2 == 6) {
        ppdVar16 = ppdVar11 + 2;
        FUN_1098927b8(ppdVar16,ppdVar11,pdVar6,0);
        uVar15 = 4;
LAB_109891550:
        *extraout_x8_02 = uVar15;
        *(double ***)(extraout_x8_02 + 2) = ppdVar16;
        return ppdVar16;
      }
      if (iVar2 == 7) {
        ppdVar16 = ppdVar11 + 2;
        FUN_1098927b8(ppdVar16,ppdVar11,pdVar6,0);
        uVar15 = 5;
        goto LAB_109891550;
      }
    }
  }
  else {
    ppdVar16 = ppdVar11;
    pdVar14 = pdStack_1a8;
    FUN_109890ee0();
  }
  _abort();
  uStack_1b8 = 0x109891578;
  uVar17 = *(undefined8 *)((long)*pdVar14 + 0x10);
  ppdVar12 = (double **)ppdVar16[0x21];
  iVar2 = *(int *)ppdVar7;
  plStack_1e0 = plVar8;
  pdStack_1d8 = pdVar5;
  ppdStack_1d0 = ppdVar11;
  ppppppuStack_1c0 = &ppppppuStack_180;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        _JSValueMakeUndefined();
        ppdVar7 = ppdVar12;
      }
      else {
        if (iVar2 != 1) goto LAB_10989166c;
        _JSValueMakeNull();
        ppdVar7 = ppdVar12;
      }
    }
    else if (iVar2 == 2) {
      _JSValueMakeBoolean(ppdVar12,*(undefined1 *)(ppdVar7 + 1));
      ppdVar7 = ppdVar12;
    }
    else {
      if (iVar2 != 3) goto LAB_10989166c;
      _JSValueMakeNumber(ppdVar7[1]);
      ppdVar7 = ppdVar12;
    }
  }
  else {
    if (1 < iVar2 - 4U) {
      if (iVar2 == 6) {
        _JSValueMakeString(ppdVar12,ppdVar7[1][2]);
        ppdVar7 = ppdVar12;
        goto LAB_109891630;
      }
      if (iVar2 != 7) goto LAB_10989166c;
    }
    ppdVar7 = (double **)ppdVar7[1][2];
  }
LAB_109891630:
  ppdVar12 = (double **)ppdVar16[0x21];
  lStack_1e8 = 0;
  _JSObjectSetPropertyAtIndex(ppdVar12,uVar17,pdVar10,ppdVar7,&lStack_1e8);
  if (lStack_1e8 == 0) {
    return ppdVar12;
  }
  FUN_109890ee0();
  ppdVar12 = ppdVar16;
LAB_10989166c:
  _abort();
  pdVar6 = ppdVar12[0x21];
  pdVar10 = ppdVar12[0x1c];
  puVar13 = (undefined8 *)0x48;
  __Znwm();
  pdVar5 = *ppdVar7;
  *puVar13 = ppdVar12;
  puVar13[1] = pdVar5;
  (*(code *)ppdVar7[1][2])(puVar13 + 2,ppdVar7 + 1);
  _JSObjectMake(pdVar6,pdVar10,puVar13);
  _JSObjectSetPrototype(ppdVar12[0x21],pdVar6,ppdVar12[0x2d]);
  ppdVar16 = ppdVar12 + 2;
  FUN_10988e404(ppdVar16,ppdVar12,pdVar6,0);
  *extraout_x8_03 = (long)ppdVar16;
  return ppdVar16;
}



/* Entry: 109890ee0; end: 1098910bf;  */

double ** FUN_109890ee0(undefined8 *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  int iVar2;
  double **ppdVar3;
  double *pdVar4;
  double **ppdVar5;
  double **ppdVar6;
  long *plVar7;
  long *plVar8;
  double *pdVar9;
  double **ppdVar10;
  undefined8 *puVar11;
  double *pdVar12;
  int extraout_w8;
  undefined4 uVar13;
  undefined4 *extraout_x8;
  long *extraout_x8_00;
  undefined4 *extraout_x8_01;
  long *extraout_x8_02;
  double *pdVar14;
  undefined8 uVar15;
  double dVar16;
  long lStack_168;
  long *plStack_160;
  double *pdStack_158;
  double **ppdStack_150;
  undefined1 *****pppppuStack_140;
  undefined8 uStack_138;
  double *pdStack_128;
  long *plStack_120;
  double *pdStack_118;
  double **ppdStack_110;
  double **ppdStack_108;
  undefined1 ****ppppuStack_100;
  code *pcStack_f8;
  long *plStack_e8;
  double **ppdStack_e0;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  double *pdStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  iVar2 = *(int *)(param_2 + 0x78);
  if (4 < iVar2) {
    *(undefined4 *)(param_2 + 0x78) = 0;
    FUN_109893d9c(param_2);
    iVar2 = extraout_w8;
  }
  *(int *)(param_2 + 0x78) = iVar2 + 1;
  ppdVar3 = *(double ***)(param_2 + 0x108);
  plVar7 = param_3;
  _JSValueGetType();
  iVar2 = (int)ppdVar3;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        aiStack_30[0] = 0;
LAB_109891074:
        FUN_109893df4(param_2,aiStack_30);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109891084);
        (*pcVar1)();
      }
      if (iVar2 == 1) {
        aiStack_30[0] = 1;
        goto LAB_109891074;
      }
    }
    else {
      if (iVar2 == 2) {
        uVar15 = *(undefined8 *)(param_2 + 0x108);
        _JSValueToBoolean(uVar15,param_3);
        aiStack_30[0] = 2;
        puStack_28 = (undefined8 *)CONCAT71(puStack_28._1_7_,(char)uVar15);
        goto LAB_109891074;
      }
      if (iVar2 == 3) {
        _JSValueToNumber(*(undefined8 *)(param_2 + 0x108),param_3,0);
        aiStack_30[0] = 3;
        puStack_28 = param_1;
        goto LAB_109891074;
      }
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      uVar15 = *(undefined8 *)(param_2 + 0x108);
      _JSValueToStringCopy(uVar15,param_3,0);
      puStack_28 = *(undefined8 **)(param_2 + 0x58);
      if (puStack_28 == (undefined8 *)0x0) {
        FUN_109892d80(param_2 + 0x38);
        puStack_28 = *(undefined8 **)(param_2 + 0x58);
      }
      *(undefined8 *)(param_2 + 0x58) = *puStack_28;
      puStack_28[1] = param_2;
      puStack_28[2] = uVar15;
      *(undefined4 *)(puStack_28 + 3) = 1;
      *puStack_28 = &PTR_FUN_110b16e18;
      aiStack_30[0] = 6;
      goto LAB_109891074;
    }
    if (iVar2 == 5) {
      puVar11 = (undefined8 *)(param_2 + 0x10);
      FUN_1098927b8(puVar11,param_2,param_3,0);
      aiStack_30[0] = 7;
      puStack_28 = puVar11;
      goto LAB_109891074;
    }
  }
  else {
    if (iVar2 == 6) {
      puVar11 = (undefined8 *)(param_2 + 0x10);
      FUN_1098927b8(puVar11,param_2,param_3,0);
      aiStack_30[0] = 4;
      puStack_28 = puVar11;
      goto LAB_109891074;
    }
    if (iVar2 == 7) {
      puVar11 = (undefined8 *)(param_2 + 0x10);
      FUN_1098927b8(puVar11,param_2,param_3,0);
      aiStack_30[0] = 5;
      puStack_28 = puVar11;
      goto LAB_109891074;
    }
  }
  _abort();
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + -1;
  __Unwind_Resume();
  pcStack_38 = FUN_1098910c0;
  pdStack_68 = (double *)0x0;
  pdVar4 = ppdVar3[0x21];
  puStack_40 = &stack0xfffffffffffffff0;
  _JSObjectCallAsFunction(pdVar4,ppdVar3[0x1f][2],*(undefined8 *)(*plVar7 + 0x10),0,0,&pdStack_68);
  if (pdStack_68 == (double *)0x0) {
    ppdVar5 = (double **)ppdVar3[0x21];
    pdVar14 = pdVar4;
    _JSValueGetType();
    iVar2 = (int)ppdVar5;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          *extraout_x8 = 0;
          return ppdVar5;
        }
        if (iVar2 == 1) {
          *extraout_x8 = 1;
          return ppdVar5;
        }
      }
      else {
        if (iVar2 == 2) {
          ppdVar3 = (double **)ppdVar3[0x21];
          _JSValueToBoolean(ppdVar3,pdVar4);
          *extraout_x8 = 2;
          *(char *)(extraout_x8 + 2) = (char)ppdVar3;
          return ppdVar3;
        }
        if (iVar2 == 3) {
          ppdVar3 = (double **)ppdVar3[0x21];
          _JSValueToNumber(ppdVar3,pdVar4,0);
          *extraout_x8 = 3;
          *(undefined8 **)(extraout_x8 + 2) = param_1;
          return ppdVar3;
        }
      }
    }
    else if (iVar2 < 6) {
      if (iVar2 == 4) {
        ppdVar6 = (double **)ppdVar3[0x21];
        _JSValueToStringCopy(ppdVar6,pdVar4,0);
        pdVar4 = ppdVar3[0xb];
        ppdVar5 = ppdVar6;
        if (pdVar4 == (double *)0x0) {
          ppdVar5 = ppdVar3 + 7;
          FUN_109892d80(ppdVar5);
          pdVar4 = ppdVar3[0xb];
        }
        ppdVar3[0xb] = (double *)*pdVar4;
        pdVar4[1] = (double)ppdVar3;
        pdVar4[2] = (double)ppdVar6;
        *(undefined4 *)(pdVar4 + 3) = 1;
        *pdVar4 = (double)&PTR_FUN_110b16e18;
        *extraout_x8 = 6;
        *(double **)(extraout_x8 + 2) = pdVar4;
        return ppdVar5;
      }
      if (iVar2 == 5) {
        ppdVar5 = ppdVar3 + 2;
        FUN_1098927b8(ppdVar5,ppdVar3,pdVar4,0);
        uVar13 = 7;
        goto LAB_109891268;
      }
    }
    else {
      if (iVar2 == 6) {
        ppdVar5 = ppdVar3 + 2;
        FUN_1098927b8(ppdVar5,ppdVar3,pdVar4,0);
        uVar13 = 4;
LAB_109891268:
        *extraout_x8 = uVar13;
        *(double ***)(extraout_x8 + 2) = ppdVar5;
        return ppdVar5;
      }
      if (iVar2 == 7) {
        ppdVar5 = ppdVar3 + 2;
        FUN_1098927b8(ppdVar5,ppdVar3,pdVar4,0);
        uVar13 = 5;
        goto LAB_109891268;
      }
    }
  }
  else {
    pdVar14 = pdStack_68;
    FUN_109890ee0();
    ppdVar5 = ppdVar3;
  }
  _abort();
  pcStack_78 = FUN_109891290;
  plVar7 = (long *)*pdVar14;
  ppuStack_80 = &puStack_40;
  (**(code **)(*plVar7 + 0x18))();
  plVar8 = (long *)*pdVar14;
  (**(code **)(*plVar8 + 0x10))();
  pdVar4 = (double *)0x10;
  __Znwm();
  dVar16 = *pdVar14;
  pdVar4[1] = pdVar14[1];
  *pdVar4 = dVar16;
  *pdVar14 = 0.0;
  pdVar14[1] = 0.0;
  plStack_b8 = (long *)0x0;
  pdVar9 = ppdVar5[0x21];
  _JSObjectMakeArrayBufferWithBytesNoCopy(pdVar9,plVar7,plVar8,FUN_109892cc8,pdVar4,&plStack_b8);
  if (plStack_b8 == (long *)0x0) {
    ppdVar3 = ppdVar5 + 2;
    FUN_10988e48c(ppdVar3,ppdVar5,pdVar9);
    *extraout_x8_00 = (long)ppdVar3;
    return ppdVar3;
  }
  ppdVar3 = ppdVar5;
  plVar8 = plStack_b8;
  FUN_109890ee0();
  pcStack_c8 = FUN_109891350;
  pdVar4 = ppdVar3[0x21];
  pdVar9 = ppdVar3[0x2e];
  plStack_e8 = (long *)0x0;
  ppdStack_e0 = ppdVar5;
  pppuStack_d0 = &ppuStack_80;
  _JSObjectGetProperty(pdVar4,*(undefined8 *)(*plVar8 + 0x10),pdVar9,&plStack_e8);
  if (plStack_e8 == (long *)0x0) {
    _JSValueToNumber(ppdVar3[0x21],pdVar4,0);
    return (double **)(long)dVar16;
  }
  ppdVar10 = ppdVar3;
  plVar8 = plStack_e8;
  FUN_109890ee0();
  pcStack_f8 = FUN_1098913b8;
  pdVar4 = ppdVar10[0x21];
  pdStack_128 = (double *)0x0;
  ppdVar6 = &pdStack_128;
  plStack_120 = plVar7;
  pdStack_118 = pdVar14;
  ppdStack_110 = ppdVar5;
  ppdStack_108 = ppdVar3;
  ppppuStack_100 = &pppuStack_d0;
  _JSObjectGetPropertyAtIndex(pdVar4,*(undefined8 *)(*plVar8 + 0x10));
  if (pdStack_128 == (double *)0x0) {
    ppdVar3 = (double **)ppdVar10[0x21];
    pdVar12 = pdVar4;
    _JSValueGetType();
    iVar2 = (int)ppdVar3;
    pdVar14 = pdVar4;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          *extraout_x8_01 = 0;
          return ppdVar3;
        }
        if (iVar2 == 1) {
          *extraout_x8_01 = 1;
          return ppdVar3;
        }
      }
      else {
        if (iVar2 == 2) {
          ppdVar3 = (double **)ppdVar10[0x21];
          _JSValueToBoolean(ppdVar3,pdVar4);
          *extraout_x8_01 = 2;
          *(char *)(extraout_x8_01 + 2) = (char)ppdVar3;
          return ppdVar3;
        }
        if (iVar2 == 3) {
          ppdVar3 = (double **)ppdVar10[0x21];
          _JSValueToNumber(ppdVar3,pdVar4,0);
          *extraout_x8_01 = 3;
          *(double *)(extraout_x8_01 + 2) = dVar16;
          return ppdVar3;
        }
      }
    }
    else if (iVar2 < 6) {
      if (iVar2 == 4) {
        ppdVar5 = (double **)ppdVar10[0x21];
        _JSValueToStringCopy(ppdVar5,pdVar4,0);
        pdVar4 = ppdVar10[0xb];
        ppdVar3 = ppdVar5;
        if (pdVar4 == (double *)0x0) {
          ppdVar3 = ppdVar10 + 7;
          FUN_109892d80(ppdVar3);
          pdVar4 = ppdVar10[0xb];
        }
        ppdVar10[0xb] = (double *)*pdVar4;
        pdVar4[1] = (double)ppdVar10;
        pdVar4[2] = (double)ppdVar5;
        *(undefined4 *)(pdVar4 + 3) = 1;
        *pdVar4 = (double)&PTR_FUN_110b16e18;
        *extraout_x8_01 = 6;
        *(double **)(extraout_x8_01 + 2) = pdVar4;
        return ppdVar3;
      }
      if (iVar2 == 5) {
        ppdVar3 = ppdVar10 + 2;
        FUN_1098927b8(ppdVar3,ppdVar10,pdVar4,0);
        uVar13 = 7;
        goto LAB_109891550;
      }
    }
    else {
      if (iVar2 == 6) {
        ppdVar3 = ppdVar10 + 2;
        FUN_1098927b8(ppdVar3,ppdVar10,pdVar4,0);
        uVar13 = 4;
LAB_109891550:
        *extraout_x8_01 = uVar13;
        *(double ***)(extraout_x8_01 + 2) = ppdVar3;
        return ppdVar3;
      }
      if (iVar2 == 7) {
        ppdVar3 = ppdVar10 + 2;
        FUN_1098927b8(ppdVar3,ppdVar10,pdVar4,0);
        uVar13 = 5;
        goto LAB_109891550;
      }
    }
  }
  else {
    ppdVar3 = ppdVar10;
    pdVar12 = pdStack_128;
    FUN_109890ee0();
  }
  _abort();
  uStack_138 = 0x109891578;
  uVar15 = *(undefined8 *)((long)*pdVar12 + 0x10);
  ppdVar5 = (double **)ppdVar3[0x21];
  iVar2 = *(int *)ppdVar6;
  plStack_160 = plVar7;
  pdStack_158 = pdVar14;
  ppdStack_150 = ppdVar10;
  pppppuStack_140 = &ppppuStack_100;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        _JSValueMakeUndefined();
        ppdVar6 = ppdVar5;
      }
      else {
        if (iVar2 != 1) goto LAB_10989166c;
        _JSValueMakeNull();
        ppdVar6 = ppdVar5;
      }
    }
    else if (iVar2 == 2) {
      _JSValueMakeBoolean(ppdVar5,*(undefined1 *)(ppdVar6 + 1));
      ppdVar6 = ppdVar5;
    }
    else {
      if (iVar2 != 3) goto LAB_10989166c;
      _JSValueMakeNumber(ppdVar6[1]);
      ppdVar6 = ppdVar5;
    }
  }
  else {
    if (1 < iVar2 - 4U) {
      if (iVar2 == 6) {
        _JSValueMakeString(ppdVar5,ppdVar6[1][2]);
        ppdVar6 = ppdVar5;
        goto LAB_109891630;
      }
      if (iVar2 != 7) goto LAB_10989166c;
    }
    ppdVar6 = (double **)ppdVar6[1][2];
  }
LAB_109891630:
  ppdVar5 = (double **)ppdVar3[0x21];
  lStack_168 = 0;
  _JSObjectSetPropertyAtIndex(ppdVar5,uVar15,pdVar9,ppdVar6,&lStack_168);
  if (lStack_168 == 0) {
    return ppdVar5;
  }
  FUN_109890ee0();
  ppdVar5 = ppdVar3;
LAB_10989166c:
  _abort();
  pdVar4 = ppdVar5[0x21];
  pdVar9 = ppdVar5[0x1c];
  puVar11 = (undefined8 *)0x48;
  __Znwm();
  pdVar14 = *ppdVar6;
  *puVar11 = ppdVar5;
  puVar11[1] = pdVar14;
  (*(code *)ppdVar6[1][2])(puVar11 + 2,ppdVar6 + 1);
  _JSObjectMake(pdVar4,pdVar9,puVar11);
  _JSObjectSetPrototype(ppdVar5[0x21],pdVar4,ppdVar5[0x2d]);
  ppdVar3 = ppdVar5 + 2;
  FUN_10988e404(ppdVar3,ppdVar5,pdVar4,0);
  *extraout_x8_02 = (long)ppdVar3;
  return ppdVar3;
}



/* Entry: 1098910c0; end: 10989128f;  */

double ** FUN_1098910c0(undefined4 *param_1,undefined8 param_2,double **param_3,long *param_4)

{
  int iVar1;
  double *pdVar2;
  double **ppdVar3;
  long *plVar4;
  long *plVar5;
  double *pdVar6;
  double **ppdVar7;
  double **ppdVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double **ppdVar11;
  undefined4 uVar12;
  long *extraout_x8;
  undefined4 *extraout_x8_00;
  long *extraout_x8_01;
  double *pdVar13;
  undefined8 uVar14;
  double dVar15;
  long lStack_138;
  long *plStack_130;
  double *pdStack_128;
  double **ppdStack_120;
  undefined1 ****ppppuStack_110;
  undefined8 uStack_108;
  double *pdStack_f8;
  long *plStack_f0;
  double *pdStack_e8;
  double **ppdStack_e0;
  double **ppdStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  double **ppdStack_b0;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long *plStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  double *pdStack_38;
  
  pdStack_38 = (double *)0x0;
  pdVar2 = param_3[0x21];
  _JSObjectCallAsFunction(pdVar2,param_3[0x1f][2],*(undefined8 *)(*param_4 + 0x10),0,0,&pdStack_38);
  if (pdStack_38 == (double *)0x0) {
    ppdVar3 = (double **)param_3[0x21];
    pdVar13 = pdVar2;
    _JSValueGetType();
    iVar1 = (int)ppdVar3;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *param_1 = 0;
          return ppdVar3;
        }
        if (iVar1 == 1) {
          *param_1 = 1;
          return ppdVar3;
        }
      }
      else {
        if (iVar1 == 2) {
          ppdVar3 = (double **)param_3[0x21];
          _JSValueToBoolean(ppdVar3,pdVar2);
          *param_1 = 2;
          *(char *)(param_1 + 2) = (char)ppdVar3;
          return ppdVar3;
        }
        if (iVar1 == 3) {
          ppdVar3 = (double **)param_3[0x21];
          _JSValueToNumber(ppdVar3,pdVar2,0);
          *param_1 = 3;
          *(undefined8 *)(param_1 + 2) = param_2;
          return ppdVar3;
        }
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 4) {
        ppdVar8 = (double **)param_3[0x21];
        _JSValueToStringCopy(ppdVar8,pdVar2,0);
        pdVar2 = param_3[0xb];
        ppdVar3 = ppdVar8;
        if (pdVar2 == (double *)0x0) {
          ppdVar3 = param_3 + 7;
          FUN_109892d80(ppdVar3);
          pdVar2 = param_3[0xb];
        }
        param_3[0xb] = (double *)*pdVar2;
        pdVar2[1] = (double)param_3;
        pdVar2[2] = (double)ppdVar8;
        *(undefined4 *)(pdVar2 + 3) = 1;
        *pdVar2 = (double)&PTR_FUN_110b16e18;
        *param_1 = 6;
        *(double **)(param_1 + 2) = pdVar2;
        return ppdVar3;
      }
      if (iVar1 == 5) {
        ppdVar3 = param_3 + 2;
        FUN_1098927b8(ppdVar3,param_3,pdVar2,0);
        uVar12 = 7;
        goto LAB_109891268;
      }
    }
    else {
      if (iVar1 == 6) {
        ppdVar3 = param_3 + 2;
        FUN_1098927b8(ppdVar3,param_3,pdVar2,0);
        uVar12 = 4;
LAB_109891268:
        *param_1 = uVar12;
        *(double ***)(param_1 + 2) = ppdVar3;
        return ppdVar3;
      }
      if (iVar1 == 7) {
        ppdVar3 = param_3 + 2;
        FUN_1098927b8(ppdVar3,param_3,pdVar2,0);
        uVar12 = 5;
        goto LAB_109891268;
      }
    }
  }
  else {
    pdVar13 = pdStack_38;
    FUN_109890ee0();
    ppdVar3 = param_3;
  }
  _abort();
  pcStack_48 = FUN_109891290;
  plVar4 = (long *)*pdVar13;
  puStack_50 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = (long *)*pdVar13;
  (**(code **)(*plVar5 + 0x10))();
  pdVar2 = (double *)0x10;
  __Znwm();
  dVar15 = *pdVar13;
  pdVar2[1] = pdVar13[1];
  *pdVar2 = dVar15;
  *pdVar13 = 0.0;
  pdVar13[1] = 0.0;
  plStack_88 = (long *)0x0;
  pdVar6 = ppdVar3[0x21];
  _JSObjectMakeArrayBufferWithBytesNoCopy(pdVar6,plVar4,plVar5,FUN_109892cc8,pdVar2,&plStack_88);
  if (plStack_88 == (long *)0x0) {
    ppdVar8 = ppdVar3 + 2;
    FUN_10988e48c(ppdVar8,ppdVar3,pdVar6);
    *extraout_x8 = (long)ppdVar8;
    return ppdVar8;
  }
  ppdVar8 = ppdVar3;
  plVar5 = plStack_88;
  FUN_109890ee0();
  pcStack_98 = FUN_109891350;
  pdVar2 = ppdVar8[0x21];
  pdVar6 = ppdVar8[0x2e];
  plStack_b8 = (long *)0x0;
  ppdStack_b0 = ppdVar3;
  ppuStack_a0 = &puStack_50;
  _JSObjectGetProperty(pdVar2,*(undefined8 *)(*plVar5 + 0x10),pdVar6,&plStack_b8);
  if (plStack_b8 == (long *)0x0) {
    _JSValueToNumber(ppdVar8[0x21],pdVar2,0);
    return (double **)(long)dVar15;
  }
  ppdVar7 = ppdVar8;
  plVar5 = plStack_b8;
  FUN_109890ee0();
  pcStack_c8 = FUN_1098913b8;
  pdVar2 = ppdVar7[0x21];
  pdStack_f8 = (double *)0x0;
  ppdVar11 = &pdStack_f8;
  plStack_f0 = plVar4;
  pdStack_e8 = pdVar13;
  ppdStack_e0 = ppdVar3;
  ppdStack_d8 = ppdVar8;
  pppuStack_d0 = &ppuStack_a0;
  _JSObjectGetPropertyAtIndex(pdVar2,*(undefined8 *)(*plVar5 + 0x10));
  if (pdStack_f8 == (double *)0x0) {
    ppdVar3 = (double **)ppdVar7[0x21];
    pdVar10 = pdVar2;
    _JSValueGetType();
    iVar1 = (int)ppdVar3;
    pdVar13 = pdVar2;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8_00 = 0;
          return ppdVar3;
        }
        if (iVar1 == 1) {
          *extraout_x8_00 = 1;
          return ppdVar3;
        }
      }
      else {
        if (iVar1 == 2) {
          ppdVar3 = (double **)ppdVar7[0x21];
          _JSValueToBoolean(ppdVar3,pdVar2);
          *extraout_x8_00 = 2;
          *(char *)(extraout_x8_00 + 2) = (char)ppdVar3;
          return ppdVar3;
        }
        if (iVar1 == 3) {
          ppdVar3 = (double **)ppdVar7[0x21];
          _JSValueToNumber(ppdVar3,pdVar2,0);
          *extraout_x8_00 = 3;
          *(double *)(extraout_x8_00 + 2) = dVar15;
          return ppdVar3;
        }
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 4) {
        ppdVar8 = (double **)ppdVar7[0x21];
        _JSValueToStringCopy(ppdVar8,pdVar2,0);
        pdVar2 = ppdVar7[0xb];
        ppdVar3 = ppdVar8;
        if (pdVar2 == (double *)0x0) {
          ppdVar3 = ppdVar7 + 7;
          FUN_109892d80(ppdVar3);
          pdVar2 = ppdVar7[0xb];
        }
        ppdVar7[0xb] = (double *)*pdVar2;
        pdVar2[1] = (double)ppdVar7;
        pdVar2[2] = (double)ppdVar8;
        *(undefined4 *)(pdVar2 + 3) = 1;
        *pdVar2 = (double)&PTR_FUN_110b16e18;
        *extraout_x8_00 = 6;
        *(double **)(extraout_x8_00 + 2) = pdVar2;
        return ppdVar3;
      }
      if (iVar1 == 5) {
        ppdVar3 = ppdVar7 + 2;
        FUN_1098927b8(ppdVar3,ppdVar7,pdVar2,0);
        uVar12 = 7;
        goto LAB_109891550;
      }
    }
    else {
      if (iVar1 == 6) {
        ppdVar3 = ppdVar7 + 2;
        FUN_1098927b8(ppdVar3,ppdVar7,pdVar2,0);
        uVar12 = 4;
LAB_109891550:
        *extraout_x8_00 = uVar12;
        *(double ***)(extraout_x8_00 + 2) = ppdVar3;
        return ppdVar3;
      }
      if (iVar1 == 7) {
        ppdVar3 = ppdVar7 + 2;
        FUN_1098927b8(ppdVar3,ppdVar7,pdVar2,0);
        uVar12 = 5;
        goto LAB_109891550;
      }
    }
  }
  else {
    ppdVar3 = ppdVar7;
    pdVar10 = pdStack_f8;
    FUN_109890ee0();
  }
  _abort();
  uStack_108 = 0x109891578;
  uVar14 = *(undefined8 *)((long)*pdVar10 + 0x10);
  ppdVar8 = (double **)ppdVar3[0x21];
  iVar1 = *(int *)ppdVar11;
  plStack_130 = plVar4;
  pdStack_128 = pdVar13;
  ppdStack_120 = ppdVar7;
  ppppuStack_110 = &pppuStack_d0;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        ppdVar11 = ppdVar8;
      }
      else {
        if (iVar1 != 1) goto LAB_10989166c;
        _JSValueMakeNull();
        ppdVar11 = ppdVar8;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(ppdVar8,*(undefined1 *)(ppdVar11 + 1));
      ppdVar11 = ppdVar8;
    }
    else {
      if (iVar1 != 3) goto LAB_10989166c;
      _JSValueMakeNumber(ppdVar11[1]);
      ppdVar11 = ppdVar8;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(ppdVar8,ppdVar11[1][2]);
        ppdVar11 = ppdVar8;
        goto LAB_109891630;
      }
      if (iVar1 != 7) goto LAB_10989166c;
    }
    ppdVar11 = (double **)ppdVar11[1][2];
  }
LAB_109891630:
  ppdVar8 = (double **)ppdVar3[0x21];
  lStack_138 = 0;
  _JSObjectSetPropertyAtIndex(ppdVar8,uVar14,pdVar6,ppdVar11,&lStack_138);
  if (lStack_138 == 0) {
    return ppdVar8;
  }
  FUN_109890ee0();
  ppdVar8 = ppdVar3;
LAB_10989166c:
  _abort();
  pdVar2 = ppdVar8[0x21];
  pdVar6 = ppdVar8[0x1c];
  puVar9 = (undefined8 *)0x48;
  __Znwm();
  pdVar13 = *ppdVar11;
  *puVar9 = ppdVar8;
  puVar9[1] = pdVar13;
  (*(code *)ppdVar11[1][2])(puVar9 + 2,ppdVar11 + 1);
  _JSObjectMake(pdVar2,pdVar6,puVar9);
  _JSObjectSetPrototype(ppdVar8[0x21],pdVar2,ppdVar8[0x2d]);
  ppdVar3 = ppdVar8 + 2;
  FUN_10988e404(ppdVar3,ppdVar8,pdVar2,0);
  *extraout_x8_01 = (long)ppdVar3;
  return ppdVar3;
}



/* Entry: 109891290; end: 10989134f;  */

double ** FUN_109891290(long *param_1,double **param_2,double *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  double *pdVar4;
  double *pdVar5;
  double **ppdVar6;
  double **ppdVar7;
  double **ppdVar8;
  double **ppdVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 *extraout_x8;
  long *extraout_x8_00;
  undefined8 uVar12;
  double *pdVar13;
  double dVar14;
  long lStack_f8;
  long *plStack_f0;
  double *pdStack_e8;
  double **ppdStack_e0;
  undefined1 ***pppuStack_d0;
  undefined8 uStack_c8;
  double *pdStack_b8;
  long *plStack_b0;
  double *pdStack_a8;
  double **ppdStack_a0;
  double **ppdStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_78;
  double **ppdStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  
  plVar2 = (long *)*param_3;
  (**(code **)(*plVar2 + 0x18))();
  plVar3 = (long *)*param_3;
  (**(code **)(*plVar3 + 0x10))();
  pdVar4 = (double *)0x10;
  __Znwm();
  dVar14 = *param_3;
  pdVar4[1] = param_3[1];
  *pdVar4 = dVar14;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  plStack_48 = (long *)0x0;
  pdVar5 = param_2[0x21];
  _JSObjectMakeArrayBufferWithBytesNoCopy(pdVar5,plVar2,plVar3,FUN_109892cc8,pdVar4,&plStack_48);
  if (plStack_48 == (long *)0x0) {
    ppdVar6 = param_2 + 2;
    FUN_10988e48c(ppdVar6,param_2,pdVar5);
    *param_1 = (long)ppdVar6;
    return ppdVar6;
  }
  ppdVar6 = param_2;
  plVar3 = plStack_48;
  FUN_109890ee0();
  pcStack_58 = FUN_109891350;
  pdVar4 = ppdVar6[0x21];
  pdVar5 = ppdVar6[0x2e];
  plStack_78 = (long *)0x0;
  ppdStack_70 = param_2;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _JSObjectGetProperty(pdVar4,*(undefined8 *)(*plVar3 + 0x10),pdVar5,&plStack_78);
  if (plStack_78 == (long *)0x0) {
    _JSValueToNumber(ppdVar6[0x21],pdVar4,0);
    return (double **)(long)dVar14;
  }
  ppdVar9 = ppdVar6;
  plVar3 = plStack_78;
  FUN_109890ee0();
  pcStack_88 = FUN_1098913b8;
  pdVar4 = ppdVar9[0x21];
  pdStack_b8 = (double *)0x0;
  ppdVar7 = &pdStack_b8;
  plStack_b0 = plVar2;
  pdStack_a8 = param_3;
  ppdStack_a0 = param_2;
  ppdStack_98 = ppdVar6;
  ppuStack_90 = &puStack_60;
  _JSObjectGetPropertyAtIndex(pdVar4,*(undefined8 *)(*plVar3 + 0x10));
  if (pdStack_b8 == (double *)0x0) {
    ppdVar6 = (double **)ppdVar9[0x21];
    pdVar13 = pdVar4;
    _JSValueGetType();
    iVar1 = (int)ppdVar6;
    param_3 = pdVar4;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8 = 0;
          return ppdVar6;
        }
        if (iVar1 == 1) {
          *extraout_x8 = 1;
          return ppdVar6;
        }
      }
      else {
        if (iVar1 == 2) {
          ppdVar6 = (double **)ppdVar9[0x21];
          _JSValueToBoolean(ppdVar6,pdVar4);
          *extraout_x8 = 2;
          *(char *)(extraout_x8 + 2) = (char)ppdVar6;
          return ppdVar6;
        }
        if (iVar1 == 3) {
          ppdVar6 = (double **)ppdVar9[0x21];
          _JSValueToNumber(ppdVar6,pdVar4,0);
          *extraout_x8 = 3;
          *(double *)(extraout_x8 + 2) = dVar14;
          return ppdVar6;
        }
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 4) {
        ppdVar7 = (double **)ppdVar9[0x21];
        _JSValueToStringCopy(ppdVar7,pdVar4,0);
        pdVar4 = ppdVar9[0xb];
        ppdVar6 = ppdVar7;
        if (pdVar4 == (double *)0x0) {
          ppdVar6 = ppdVar9 + 7;
          FUN_109892d80(ppdVar6);
          pdVar4 = ppdVar9[0xb];
        }
        ppdVar9[0xb] = (double *)*pdVar4;
        pdVar4[1] = (double)ppdVar9;
        pdVar4[2] = (double)ppdVar7;
        *(undefined4 *)(pdVar4 + 3) = 1;
        *pdVar4 = (double)&PTR_FUN_110b16e18;
        *extraout_x8 = 6;
        *(double **)(extraout_x8 + 2) = pdVar4;
        return ppdVar6;
      }
      if (iVar1 == 5) {
        ppdVar6 = ppdVar9 + 2;
        FUN_1098927b8(ppdVar6,ppdVar9,pdVar4,0);
        uVar11 = 7;
        goto LAB_109891550;
      }
    }
    else {
      if (iVar1 == 6) {
        ppdVar6 = ppdVar9 + 2;
        FUN_1098927b8(ppdVar6,ppdVar9,pdVar4,0);
        uVar11 = 4;
LAB_109891550:
        *extraout_x8 = uVar11;
        *(double ***)(extraout_x8 + 2) = ppdVar6;
        return ppdVar6;
      }
      if (iVar1 == 7) {
        ppdVar6 = ppdVar9 + 2;
        FUN_1098927b8(ppdVar6,ppdVar9,pdVar4,0);
        uVar11 = 5;
        goto LAB_109891550;
      }
    }
  }
  else {
    ppdVar6 = ppdVar9;
    pdVar13 = pdStack_b8;
    FUN_109890ee0();
  }
  _abort();
  uStack_c8 = 0x109891578;
  uVar12 = *(undefined8 *)((long)*pdVar13 + 0x10);
  ppdVar8 = (double **)ppdVar6[0x21];
  iVar1 = *(int *)ppdVar7;
  plStack_f0 = plVar2;
  pdStack_e8 = param_3;
  ppdStack_e0 = ppdVar9;
  pppuStack_d0 = &ppuStack_90;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        ppdVar7 = ppdVar8;
      }
      else {
        if (iVar1 != 1) goto LAB_10989166c;
        _JSValueMakeNull();
        ppdVar7 = ppdVar8;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(ppdVar8,*(undefined1 *)(ppdVar7 + 1));
      ppdVar7 = ppdVar8;
    }
    else {
      if (iVar1 != 3) goto LAB_10989166c;
      _JSValueMakeNumber(ppdVar7[1]);
      ppdVar7 = ppdVar8;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(ppdVar8,ppdVar7[1][2]);
        ppdVar7 = ppdVar8;
        goto LAB_109891630;
      }
      if (iVar1 != 7) goto LAB_10989166c;
    }
    ppdVar7 = (double **)ppdVar7[1][2];
  }
LAB_109891630:
  ppdVar9 = (double **)ppdVar6[0x21];
  lStack_f8 = 0;
  _JSObjectSetPropertyAtIndex(ppdVar9,uVar12,pdVar5,ppdVar7,&lStack_f8);
  if (lStack_f8 == 0) {
    return ppdVar9;
  }
  FUN_109890ee0();
  ppdVar8 = ppdVar6;
LAB_10989166c:
  _abort();
  pdVar4 = ppdVar8[0x21];
  pdVar13 = ppdVar8[0x1c];
  puVar10 = (undefined8 *)0x48;
  __Znwm();
  pdVar5 = *ppdVar7;
  *puVar10 = ppdVar8;
  puVar10[1] = pdVar5;
  (*(code *)ppdVar7[1][2])(puVar10 + 2,ppdVar7 + 1);
  _JSObjectMake(pdVar4,pdVar13,puVar10);
  _JSObjectSetPrototype(ppdVar8[0x21],pdVar4,ppdVar8[0x2d]);
  ppdVar6 = ppdVar8 + 2;
  FUN_10988e404(ppdVar6,ppdVar8,pdVar4,0);
  *extraout_x8_00 = (long)ppdVar6;
  return ppdVar6;
}



/* Entry: 109891350; end: 1098913b7;  */

long ** FUN_109891350(double param_1,long **param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 *extraout_x8;
  long *extraout_x8_00;
  undefined8 uVar10;
  long lStack_a8;
  long *plStack_68;
  long *plStack_28;
  
  plVar2 = param_2[0x21];
  plVar8 = param_2[0x2e];
  plStack_28 = (long *)0x0;
  _JSObjectGetProperty(plVar2,*(undefined8 *)(*param_3 + 0x10),plVar8,&plStack_28);
  if (plStack_28 == (long *)0x0) {
    _JSValueToNumber(param_2[0x21],plVar2,0);
    return (long **)(long)param_1;
  }
  plVar2 = plStack_28;
  FUN_109890ee0();
  plVar3 = param_2[0x21];
  plStack_68 = (long *)0x0;
  pplVar5 = &plStack_68;
  _JSObjectGetPropertyAtIndex(plVar3,*(undefined8 *)(*plVar2 + 0x10));
  if (plStack_68 == (long *)0x0) {
    pplVar4 = (long **)param_2[0x21];
    plVar2 = plVar3;
    _JSValueGetType();
    iVar1 = (int)pplVar4;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8 = 0;
          return pplVar4;
        }
        if (iVar1 == 1) {
          *extraout_x8 = 1;
          return pplVar4;
        }
      }
      else {
        if (iVar1 == 2) {
          pplVar5 = (long **)param_2[0x21];
          _JSValueToBoolean(pplVar5,plVar3);
          *extraout_x8 = 2;
          *(char *)(extraout_x8 + 2) = (char)pplVar5;
          return pplVar5;
        }
        if (iVar1 == 3) {
          pplVar5 = (long **)param_2[0x21];
          _JSValueToNumber(pplVar5,plVar3,0);
          *extraout_x8 = 3;
          *(double *)(extraout_x8 + 2) = param_1;
          return pplVar5;
        }
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 4) {
        pplVar4 = (long **)param_2[0x21];
        _JSValueToStringCopy(pplVar4,plVar3,0);
        plVar2 = param_2[0xb];
        pplVar5 = pplVar4;
        if (plVar2 == (long *)0x0) {
          pplVar5 = param_2 + 7;
          FUN_109892d80(pplVar5);
          plVar2 = param_2[0xb];
        }
        param_2[0xb] = (long *)*plVar2;
        plVar2[1] = (long)param_2;
        plVar2[2] = (long)pplVar4;
        *(undefined4 *)(plVar2 + 3) = 1;
        *plVar2 = (long)&PTR_FUN_110b16e18;
        *extraout_x8 = 6;
        *(long **)(extraout_x8 + 2) = plVar2;
        return pplVar5;
      }
      if (iVar1 == 5) {
        pplVar5 = param_2 + 2;
        FUN_1098927b8(pplVar5,param_2,plVar3,0);
        uVar9 = 7;
        goto LAB_109891550;
      }
    }
    else {
      if (iVar1 == 6) {
        pplVar5 = param_2 + 2;
        FUN_1098927b8(pplVar5,param_2,plVar3,0);
        uVar9 = 4;
LAB_109891550:
        *extraout_x8 = uVar9;
        *(long ***)(extraout_x8 + 2) = pplVar5;
        return pplVar5;
      }
      if (iVar1 == 7) {
        pplVar5 = param_2 + 2;
        FUN_1098927b8(pplVar5,param_2,plVar3,0);
        uVar9 = 5;
        goto LAB_109891550;
      }
    }
  }
  else {
    plVar2 = plStack_68;
    FUN_109890ee0();
    pplVar4 = param_2;
  }
  _abort();
  uVar10 = *(undefined8 *)(*plVar2 + 0x10);
  pplVar6 = (long **)pplVar4[0x21];
  iVar1 = *(int *)pplVar5;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        pplVar5 = pplVar6;
      }
      else {
        if (iVar1 != 1) goto LAB_10989166c;
        _JSValueMakeNull();
        pplVar5 = pplVar6;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(pplVar6,*(undefined1 *)(pplVar5 + 1));
      pplVar5 = pplVar6;
    }
    else {
      if (iVar1 != 3) goto LAB_10989166c;
      _JSValueMakeNumber(pplVar5[1]);
      pplVar5 = pplVar6;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(pplVar6,pplVar5[1][2]);
        pplVar5 = pplVar6;
        goto LAB_109891630;
      }
      if (iVar1 != 7) goto LAB_10989166c;
    }
    pplVar5 = (long **)pplVar5[1][2];
  }
LAB_109891630:
  pplVar6 = (long **)pplVar4[0x21];
  lStack_a8 = 0;
  _JSObjectSetPropertyAtIndex(pplVar6,uVar10,plVar8,pplVar5,&lStack_a8);
  if (lStack_a8 == 0) {
    return pplVar6;
  }
  FUN_109890ee0();
  pplVar6 = pplVar4;
LAB_10989166c:
  _abort();
  plVar2 = pplVar6[0x21];
  plVar3 = pplVar6[0x1c];
  puVar7 = (undefined8 *)0x48;
  __Znwm();
  plVar8 = *pplVar5;
  *puVar7 = pplVar6;
  puVar7[1] = plVar8;
  (*(code *)pplVar5[1][2])(puVar7 + 2,pplVar5 + 1);
  _JSObjectMake(plVar2,plVar3,puVar7);
  _JSObjectSetPrototype(pplVar6[0x21],plVar2,pplVar6[0x2d]);
  pplVar5 = pplVar6 + 2;
  FUN_10988e404(pplVar5,pplVar6,plVar2,0);
  *extraout_x8_00 = (long)pplVar5;
  return pplVar5;
}



/* Entry: 1098913b8; end: 10989166f;  */

void FUN_1098913b8(undefined4 *param_1,undefined8 param_2,long **param_3,long *param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long *extraout_x8;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lStack_78;
  long *plStack_38;
  
  plVar2 = param_3[0x21];
  plStack_38 = (long *)0x0;
  pplVar4 = &plStack_38;
  _JSObjectGetPropertyAtIndex(plVar2,*(undefined8 *)(*param_4 + 0x10));
  if (plStack_38 == (long *)0x0) {
    pplVar3 = (long **)param_3[0x21];
    plVar8 = plVar2;
    _JSValueGetType();
    iVar1 = (int)pplVar3;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *param_1 = 0;
          return;
        }
        if (iVar1 == 1) {
          *param_1 = 1;
          return;
        }
      }
      else {
        if (iVar1 == 2) {
          plVar8 = param_3[0x21];
          _JSValueToBoolean(plVar8,plVar2);
          *param_1 = 2;
          *(char *)(param_1 + 2) = (char)plVar8;
          return;
        }
        if (iVar1 == 3) {
          _JSValueToNumber(param_3[0x21],plVar2,0);
          *param_1 = 3;
          *(undefined8 *)(param_1 + 2) = param_2;
          return;
        }
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 4) {
        plVar8 = param_3[0x21];
        _JSValueToStringCopy(plVar8,plVar2,0);
        plVar2 = param_3[0xb];
        if (plVar2 == (long *)0x0) {
          FUN_109892d80(param_3 + 7);
          plVar2 = param_3[0xb];
        }
        param_3[0xb] = (long *)*plVar2;
        plVar2[1] = (long)param_3;
        plVar2[2] = (long)plVar8;
        *(undefined4 *)(plVar2 + 3) = 1;
        *plVar2 = (long)&PTR_FUN_110b16e18;
        *param_1 = 6;
        *(long **)(param_1 + 2) = plVar2;
        return;
      }
      if (iVar1 == 5) {
        pplVar4 = param_3 + 2;
        FUN_1098927b8(pplVar4,param_3,plVar2,0);
        uVar7 = 7;
        goto LAB_109891550;
      }
    }
    else {
      if (iVar1 == 6) {
        pplVar4 = param_3 + 2;
        FUN_1098927b8(pplVar4,param_3,plVar2,0);
        uVar7 = 4;
LAB_109891550:
        *param_1 = uVar7;
        *(long ***)(param_1 + 2) = pplVar4;
        return;
      }
      if (iVar1 == 7) {
        pplVar4 = param_3 + 2;
        FUN_1098927b8(pplVar4,param_3,plVar2,0);
        uVar7 = 5;
        goto LAB_109891550;
      }
    }
  }
  else {
    plVar8 = plStack_38;
    FUN_109890ee0();
    pplVar3 = param_3;
  }
  _abort();
  uVar9 = *(undefined8 *)(*plVar8 + 0x10);
  pplVar5 = (long **)pplVar3[0x21];
  iVar1 = *(int *)pplVar4;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        pplVar4 = pplVar5;
      }
      else {
        if (iVar1 != 1) goto LAB_10989166c;
        _JSValueMakeNull();
        pplVar4 = pplVar5;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(pplVar5,*(undefined1 *)(pplVar4 + 1));
      pplVar4 = pplVar5;
    }
    else {
      if (iVar1 != 3) goto LAB_10989166c;
      _JSValueMakeNumber(pplVar4[1]);
      pplVar4 = pplVar5;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(pplVar5,pplVar4[1][2]);
        pplVar4 = pplVar5;
        goto LAB_109891630;
      }
      if (iVar1 != 7) goto LAB_10989166c;
    }
    pplVar4 = (long **)pplVar4[1][2];
  }
LAB_109891630:
  lStack_78 = 0;
  _JSObjectSetPropertyAtIndex(pplVar3[0x21],uVar9,param_5,pplVar4,&lStack_78);
  if (lStack_78 == 0) {
    return;
  }
  FUN_109890ee0();
  pplVar5 = pplVar3;
LAB_10989166c:
  _abort();
  plVar2 = pplVar5[0x21];
  plVar10 = pplVar5[0x1c];
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  plVar8 = *pplVar4;
  *puVar6 = pplVar5;
  puVar6[1] = plVar8;
  (*(code *)pplVar4[1][2])(puVar6 + 2,pplVar4 + 1);
  _JSObjectMake(plVar2,plVar10,puVar6);
  _JSObjectSetPrototype(pplVar5[0x21],plVar2,pplVar5[0x2d]);
  pplVar4 = pplVar5 + 2;
  FUN_10988e404(pplVar4,pplVar5,plVar2,0);
  *extraout_x8 = (long)pplVar4;
  return;
}



/* Entry: 109891670; end: 10989170b;  */

void FUN_109891670(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  plVar1 = (long *)0x48;
  __Znwm();
  lVar2 = *param_5;
  *plVar1 = param_2;
  plVar1[1] = lVar2;
  (**(code **)(param_5[1] + 0x10))(plVar1 + 2,param_5 + 1);
  _JSObjectMake(uVar3,uVar4,plVar1);
  _JSObjectSetPrototype(*(undefined8 *)(param_2 + 0x108),uVar3,*(undefined8 *)(param_2 + 0x168));
  lVar2 = param_2 + 0x10;
  FUN_10988e404(lVar2,param_2,uVar3,0);
  *param_1 = lVar2;
  return;
}



/* Entry: 10989170c; end: 109891723;  */

void FUN_10989170c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSValueIsObjectOfClass_110346f80)
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),
             *(undefined8 *)(param_1 + 0xe0));
  return;
}



/* Entry: 109891724; end: 10989176f;  */

void FUN_109891724(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(*param_3 + 0x10);
  _JSObjectGetPrivate();
  lVar5 = *(long *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 8);
  param_1[1] = *(undefined8 *)(lVar4 + 0x10);
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 109891770; end: 10989178f;  */

long FUN_109891770(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x10);
  _JSObjectGetPrivate(lVar1);
  return lVar1 + 8;
}



/* Entry: 109891790; end: 109891b4b;  */

void FUN_109891790(undefined4 *param_1,long param_2,long *param_3,int *param_4,long param_5,
                  ulong param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = 0;
  lStack_a0 = 8;
  lStack_a8 = 0;
  puStack_b0 = auStack_98;
  if (param_6 < 9) {
    if (param_6 != 0) goto LAB_109891824;
LAB_109891908:
    if (*param_4 == 7) {
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 2) + 0x10);
    }
    else {
      uVar4 = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x108);
    lStack_b8 = 0;
    _JSObjectCallAsFunction
              (uVar5,*(undefined8 *)(*param_3 + 0x10),uVar4,param_6,puStack_b0,&lStack_b8);
    if (lStack_b8 != 0) {
LAB_109891b00:
      FUN_109890ee0(param_2);
      goto LAB_109891b1c;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x108);
    _JSValueGetType(uVar4,uVar5);
    iVar2 = (int)uVar4;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          *param_1 = 0;
        }
        else {
          if (iVar2 != 1) {
LAB_109891afc:
            _abort();
            goto LAB_109891b00;
          }
          *param_1 = 1;
        }
      }
      else if (iVar2 == 2) {
        uVar4 = *(undefined8 *)(param_2 + 0x108);
        _JSValueToBoolean(uVar4,uVar5);
        *param_1 = 2;
        *(char *)(param_1 + 2) = (char)uVar4;
      }
      else {
        if (iVar2 != 3) goto LAB_109891afc;
        _JSValueToNumber(*(undefined8 *)(param_2 + 0x108),uVar5,0);
        *param_1 = 3;
        *(long *)(param_1 + 2) = lVar10;
      }
    }
    else {
      if (iVar2 < 6) {
        if (iVar2 == 4) {
          uVar4 = *(undefined8 *)(param_2 + 0x108);
          _JSValueToStringCopy(uVar4,uVar5,0);
          puVar7 = *(undefined8 **)(param_2 + 0x58);
          if (puVar7 == (undefined8 *)0x0) {
            FUN_109892d80(param_2 + 0x38);
            puVar7 = *(undefined8 **)(param_2 + 0x58);
          }
          *(undefined8 *)(param_2 + 0x58) = *puVar7;
          puVar7[1] = param_2;
          puVar7[2] = uVar4;
          *(undefined4 *)(puVar7 + 3) = 1;
          *puVar7 = &PTR_FUN_110b16e18;
          *param_1 = 6;
          *(undefined8 **)(param_1 + 2) = puVar7;
          goto LAB_109891ab0;
        }
        if (iVar2 != 5) goto LAB_109891afc;
        lVar10 = param_2 + 0x10;
        FUN_1098927b8(lVar10,param_2,uVar5,0);
        uVar6 = 7;
      }
      else if (iVar2 == 6) {
        lVar10 = param_2 + 0x10;
        FUN_1098927b8(lVar10,param_2,uVar5,0);
        uVar6 = 4;
      }
      else {
        if (iVar2 != 7) goto LAB_109891afc;
        lVar10 = param_2 + 0x10;
        FUN_1098927b8(lVar10,param_2,uVar5,0);
        uVar6 = 5;
      }
      *param_1 = uVar6;
      *(long *)(param_1 + 2) = lVar10;
    }
LAB_109891ab0:
    if ((lStack_a0 != 0) && (auStack_98 != puStack_b0)) {
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (param_6 >> 0x3c == 0) {
    lVar3 = param_6 << 3;
    __Znwm(lVar3);
    FUN_109893768(&puStack_b0,lVar3,param_6,puStack_b0 + lStack_a8 * 8);
LAB_109891824:
    plVar8 = (long *)(param_5 + 8);
    uVar9 = param_6;
    do {
      uVar4 = *(undefined8 *)(param_2 + 0x108);
      iVar2 = (int)plVar8[-1];
      if (iVar2 < 4) {
        if (iVar2 < 2) {
          if (iVar2 == 0) {
            _JSValueMakeUndefined();
          }
          else {
            if (iVar2 != 1) goto LAB_109891afc;
            _JSValueMakeNull();
          }
        }
        else if (iVar2 == 2) {
          _JSValueMakeBoolean(uVar4,(char)*plVar8);
        }
        else {
          if (iVar2 != 3) goto LAB_109891afc;
          lVar10 = *plVar8;
          _JSValueMakeNumber();
        }
      }
      else {
        if (1 < iVar2 - 4U) {
          if (iVar2 == 6) {
            _JSValueMakeString(uVar4,*(undefined8 *)(*plVar8 + 0x10));
            goto LAB_1098918bc;
          }
          if (iVar2 != 7) goto LAB_109891afc;
        }
        uVar4 = *(undefined8 *)(*plVar8 + 0x10);
      }
LAB_1098918bc:
      uStack_c0 = uVar4;
      if (lStack_a8 == lStack_a0) {
        func_0x0001080e4338(&lStack_b8,&puStack_b0,puStack_b0 + lStack_a8 * 8,1,&uStack_c0);
      }
      else {
        *(undefined8 *)(puStack_b0 + lStack_a8 * 8) = uVar4;
        lStack_a8 = lStack_a8 + 1;
      }
      plVar8 = plVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    goto LAB_109891908;
  }
  func_0x00010772e1f8(&UNK_10f424dbf);
LAB_109891b1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109891b20);
  (*pcVar1)();
}



/* Entry: 109891b4c; end: 109891eef;  */

void FUN_109891b4c(undefined4 *param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = 0;
  lStack_a0 = 8;
  lStack_a8 = 0;
  puStack_b0 = auStack_98;
  if (param_5 < 9) {
    if (param_5 != 0) goto LAB_109891bdc;
LAB_109891cc4:
    uVar4 = *(undefined8 *)(param_2 + 0x108);
    lStack_b8 = 0;
    _JSObjectCallAsConstructor(uVar4,*(undefined8 *)(*param_3 + 0x10),param_5,puStack_b0,&lStack_b8)
    ;
    if (lStack_b8 != 0) {
LAB_109891ea4:
      FUN_109890ee0(param_2);
      goto LAB_109891ec0;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x108);
    _JSValueGetType(uVar5,uVar4);
    iVar2 = (int)uVar5;
    if (iVar2 < 4) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          *param_1 = 0;
        }
        else {
          if (iVar2 != 1) {
LAB_109891ea0:
            _abort();
            goto LAB_109891ea4;
          }
          *param_1 = 1;
        }
      }
      else if (iVar2 == 2) {
        uVar5 = *(undefined8 *)(param_2 + 0x108);
        _JSValueToBoolean(uVar5,uVar4);
        *param_1 = 2;
        *(char *)(param_1 + 2) = (char)uVar5;
      }
      else {
        if (iVar2 != 3) goto LAB_109891ea0;
        _JSValueToNumber(*(undefined8 *)(param_2 + 0x108),uVar4,0);
        *param_1 = 3;
        *(long *)(param_1 + 2) = lVar10;
      }
    }
    else {
      if (iVar2 < 6) {
        if (iVar2 == 4) {
          uVar5 = *(undefined8 *)(param_2 + 0x108);
          _JSValueToStringCopy(uVar5,uVar4,0);
          puVar7 = *(undefined8 **)(param_2 + 0x58);
          if (puVar7 == (undefined8 *)0x0) {
            FUN_109892d80(param_2 + 0x38);
            puVar7 = *(undefined8 **)(param_2 + 0x58);
          }
          *(undefined8 *)(param_2 + 0x58) = *puVar7;
          puVar7[1] = param_2;
          puVar7[2] = uVar5;
          *(undefined4 *)(puVar7 + 3) = 1;
          *puVar7 = &PTR_FUN_110b16e18;
          *param_1 = 6;
          *(undefined8 **)(param_1 + 2) = puVar7;
          goto LAB_109891e54;
        }
        if (iVar2 != 5) goto LAB_109891ea0;
        lVar10 = param_2 + 0x10;
        FUN_1098927b8(lVar10,param_2,uVar4,0);
        uVar6 = 7;
      }
      else if (iVar2 == 6) {
        lVar10 = param_2 + 0x10;
        FUN_1098927b8(lVar10,param_2,uVar4,0);
        uVar6 = 4;
      }
      else {
        if (iVar2 != 7) goto LAB_109891ea0;
        lVar10 = param_2 + 0x10;
        FUN_1098927b8(lVar10,param_2,uVar4,0);
        uVar6 = 5;
      }
      *param_1 = uVar6;
      *(long *)(param_1 + 2) = lVar10;
    }
LAB_109891e54:
    if ((lStack_a0 != 0) && (auStack_98 != puStack_b0)) {
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (param_5 >> 0x3c == 0) {
    lVar3 = param_5 << 3;
    __Znwm(lVar3);
    FUN_109893768(&puStack_b0,lVar3,param_5,puStack_b0 + lStack_a8 * 8);
LAB_109891bdc:
    plVar8 = (long *)(param_4 + 8);
    uVar9 = param_5;
    do {
      uVar4 = *(undefined8 *)(param_2 + 0x108);
      iVar2 = (int)plVar8[-1];
      if (iVar2 < 4) {
        if (iVar2 < 2) {
          if (iVar2 == 0) {
            _JSValueMakeUndefined();
          }
          else {
            if (iVar2 != 1) goto LAB_109891ea0;
            _JSValueMakeNull();
          }
        }
        else if (iVar2 == 2) {
          _JSValueMakeBoolean(uVar4,(char)*plVar8);
        }
        else {
          if (iVar2 != 3) goto LAB_109891ea0;
          lVar10 = *plVar8;
          _JSValueMakeNumber();
        }
      }
      else {
        if (1 < iVar2 - 4U) {
          if (iVar2 == 6) {
            _JSValueMakeString(uVar4,*(undefined8 *)(*plVar8 + 0x10));
            goto LAB_109891c74;
          }
          if (iVar2 != 7) goto LAB_109891ea0;
        }
        uVar4 = *(undefined8 *)(*plVar8 + 0x10);
      }
LAB_109891c74:
      uStack_c0 = uVar4;
      if (lStack_a8 == lStack_a0) {
        func_0x0001080e4338(&lStack_b8,&puStack_b0,puStack_b0 + lStack_a8 * 8,1,&uStack_c0);
      }
      else {
        *(undefined8 *)(puStack_b0 + lStack_a8 * 8) = uVar4;
        lStack_a8 = lStack_a8 + 1;
      }
      plVar8 = plVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    goto LAB_109891cc4;
  }
  func_0x00010772e1f8(&UNK_10f424dbf);
LAB_109891ec0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109891ec4);
  (*pcVar1)();
}



/* Entry: 109891ef0; end: 109891f13;  */

void FUN_109891ef0(void)

{
  FUN_109891f14();
  return;
}



/* Entry: 109891f14; end: 109892183;  */

long FUN_109891f14(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  plVar14 = (long *)(param_2 + 0xd0);
  puVar11 = (undefined8 *)*plVar14;
  if ((undefined8 *)*plVar14 == (undefined8 *)0x0) {
    uVar15 = *(ulong *)(param_2 + 200);
    lVar8 = uVar15 << 5;
    if (uVar15 >> 0x3b != 0) {
      lVar8 = -1;
    }
    __Znam();
    _bzero();
    plVar2 = *(long **)(param_2 + 0xb8);
    if (plVar2 < *(long **)(param_2 + 0xc0)) {
      puVar9 = (undefined8 *)0x0;
      plVar16 = plVar2 + 1;
      *plVar2 = lVar8;
    }
    else {
      lVar18 = *(long *)(param_2 + 0xb0);
      lVar19 = (long)plVar2 - lVar18;
      uVar1 = (lVar19 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        func_0x000109892ee4();
LAB_109892178:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10989217c);
        (*pcVar4)();
      }
      uVar10 = (long)*(long **)(param_2 + 0xc0) - lVar18;
      uVar12 = (long)uVar10 >> 2;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_109892178;
      }
      lVar5 = uVar12 << 3;
      __Znwm();
      plVar2 = (long *)(lVar5 + lVar19);
      plVar16 = plVar2 + 1;
      *plVar2 = lVar8;
      _memcpy(plVar2 + -(lVar19 >> 3),lVar18,lVar19);
      *(long **)(param_2 + 0xb0) = plVar2 + -(lVar19 >> 3);
      *(long **)(param_2 + 0xb8) = plVar16;
      *(ulong *)(param_2 + 0xc0) = lVar5 + uVar12 * 8;
      if (lVar18 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        __ZdlPv(lVar18);
        uVar15 = *(ulong *)(param_2 + 200);
        puVar9 = *(undefined8 **)(param_2 + 0xd0);
      }
    }
    *(long **)(param_2 + 0xb8) = plVar16;
    puVar11 = puVar9;
    if (uVar15 != 0) {
      puVar11 = (undefined8 *)plVar16[-1];
      puVar13 = puVar11 + uVar15 * 4;
      lVar8 = uVar15 << 5;
      do {
        puVar13 = puVar13 + -4;
        *(undefined8 **)((long)puVar11 + lVar8 + -8) = puVar9;
        *plVar14 = (long)puVar11 + lVar8 + -0x20;
        lVar8 = lVar8 + -0x20;
        puVar9 = puVar13;
      } while (lVar8 != 0);
    }
  }
  *(undefined8 *)(param_2 + 0xd0) = puVar11[3];
  *puVar11 = param_3;
  puVar11[1] = param_4;
  puVar11[2] = param_5;
  puVar11[3] = plVar14;
  uVar6 = *(undefined8 *)(param_2 + 0x108);
  plVar14 = *(long **)(param_2 + 0xd8);
  _JSObjectMake(uVar6,plVar14,(ulong)puVar11 | 7);
  iVar3 = *param_6;
  if (iVar3 == 0) goto LAB_109892138;
  uVar17 = *(undefined8 *)(param_2 + 0x108);
  uVar7 = uVar17;
  if (iVar3 < 4) {
    if (iVar3 == 1) {
      _JSValueMakeNull(uVar17);
    }
    else if (iVar3 == 2) {
      _JSValueMakeBoolean(uVar17,(char)param_6[2]);
    }
    else {
      if (iVar3 != 3) goto LAB_10989217c;
      _JSValueMakeNumber(*(undefined8 *)(param_6 + 2),uVar17);
    }
  }
  else {
    if (1 < iVar3 - 4U) {
      if (iVar3 == 6) {
        _JSValueMakeString(uVar17,*(undefined8 *)(*(long *)(param_6 + 2) + 0x10));
        goto LAB_10989212c;
      }
      if (iVar3 != 7) {
LAB_10989217c:
        _abort();
        func_0x000104bd46a0();
        uVar15 = *(ulong *)(*plVar14 + 0x10);
        _JSObjectGetPrivate();
        if ((~(uint)uVar15 & 7) == 0) {
          lVar8 = *(long *)(uVar15 & 0xfffffffffffffff8);
        }
        else {
          lVar8 = 0;
        }
        return lVar8;
      }
    }
    uVar7 = *(undefined8 *)(*(long *)(param_6 + 2) + 0x10);
  }
LAB_10989212c:
  _JSObjectSetPrototype(uVar17,uVar6,uVar7);
LAB_109892138:
  lVar8 = param_2 + 0x10;
  FUN_10988e48c(lVar8,param_2,uVar6);
  *param_1 = lVar8;
  return lVar8;
}



/* Entry: 109892184; end: 1098921bb;  */

undefined8 FUN_109892184(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(*param_2 + 0x10);
  _JSObjectGetPrivate();
  if ((~(uint)uVar1 & 7) == 0) {
    uVar2 = *(undefined8 *)(uVar1 & 0xfffffffffffffff8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1098921bc; end: 1098921eb;  */

void FUN_1098921bc(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSValueIsObjectOfClass_110346f80)
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),
             *(undefined8 *)(param_1 + 0xd8));
  return;
}



/* Entry: 1098921ec; end: 1098921ff;  */

void FUN_1098921ec(undefined8 param_1,long *param_2,long *param_3)

{
  FUN_109892a8c(&UNK_10f5822c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSStringIsEqual_110346f38)
            (*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_3 + 0x10));
  return;
}



/* Entry: 109892200; end: 10989222b;  */

void FUN_109892200(undefined8 param_1,long *param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSStringIsEqual_110346f38)
            (*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_3 + 0x10));
  return;
}



/* Entry: 10989222c; end: 10989227f;  */

void FUN_10989222c(long param_1,long *param_2,long *param_3)

{
  long lStack_28;
  
  lStack_28 = 0;
  _JSValueIsInstanceOfConstructor
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),
             *(undefined8 *)(*param_3 + 0x10),&lStack_28);
  if (lStack_28 == 0) {
    return;
  }
  FUN_109890ee0();
  *(long *)(param_1 + 0x118) = lStack_28;
  return;
}



/* Entry: 109892280; end: 10989228f;  */

void FUN_109892280(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  return;
}



/* Entry: 109892290; end: 1098923d7;  */

undefined *** FUN_109892290(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined ****ppppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  int iVar7;
  code **ppcVar8;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  byte bStack_79;
  code *pcStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  _JSObjectMakeError(uVar3,0,0,0);
  ppuVar4 = *(undefined ***)(param_2 + 0x108);
  ppcVar8 = *(code ***)(param_2 + 400);
  _JSObjectGetProperty(ppuVar4,uVar3,ppcVar8,0);
  pppuVar5 = *(undefined ****)(param_2 + 0x108);
  ppuVar6 = ppuVar4;
  _JSValueIsUndefined();
  if (((ulong)pppuVar5 & 1) == 0) {
    FUN_1098923d8(&pcStack_78,*(undefined8 *)(param_2 + 0x108),ppuVar4);
    FUN_10988f620(&pppuStack_90,pcStack_78);
    if (pcStack_78 != (code *)0x0) {
      _JSStringRelease(pcStack_78);
    }
    ppuVar6 = ppuStack_88;
    ppppuVar1 = (undefined ****)pppuStack_90;
    if (-1 < (char)bStack_79) {
      ppuVar6 = (undefined **)(ulong)bStack_79;
      ppppuVar1 = &pppuStack_90;
    }
    pcStack_78 = FUN_10989380c;
    appuStack_70[0] = &PTR_FUN_110b16f58;
    ppcVar8 = &pcStack_78;
    FUN_10989feac(param_1,ppppuVar1,ppuVar6,ppcVar8,param_3);
    pppuVar5 = appuStack_70;
    (*(code *)*appuStack_70[0])();
    if ((char)bStack_79 < '\0') {
      __ZdlPv();
      pppuVar5 = pppuStack_90;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  iVar7 = (int)ppuVar6;
  while (iVar7 != 0) {
    func_0x000104bd46a0();
    iVar7 = (int)ppuVar6;
  }
  __Unwind_Resume();
  _JSValueToStringCopy(ppuVar6,ppcVar8,0);
  *pppuVar5 = ppuVar6;
  if (ppuVar6 != (undefined **)0x0) {
    return pppuVar5;
  }
  FUN_109892a8c(&UNK_10f58234e);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109892420);
  (*pcVar2)();
}



/* Entry: 1098923d8; end: 109892437;  */

long * FUN_1098923d8(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  
  _JSValueToStringCopy(param_2,param_3,0);
  *param_1 = param_2;
  if (param_2 != 0) {
    return param_1;
  }
  FUN_109892a8c(&UNK_10f58234e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109892420);
  (*pcVar1)();
}



/* Entry: 109892438; end: 10989243f;  */

undefined *** FUN_109892438(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined ****ppppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  int iVar7;
  code **ppcVar8;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  byte bStack_79;
  code *pcStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_2 + 0x100);
  _JSObjectMakeError(uVar3,0,0,0);
  ppuVar4 = *(undefined ***)(param_2 + 0x100);
  ppcVar8 = *(code ***)(param_2 + 0x188);
  _JSObjectGetProperty(ppuVar4,uVar3,ppcVar8,0);
  pppuVar5 = *(undefined ****)(param_2 + 0x100);
  ppuVar6 = ppuVar4;
  _JSValueIsUndefined();
  if (((ulong)pppuVar5 & 1) == 0) {
    FUN_1098923d8(&pcStack_78,*(undefined8 *)(param_2 + 0x100),ppuVar4);
    FUN_10988f620(&pppuStack_90,pcStack_78);
    if (pcStack_78 != (code *)0x0) {
      _JSStringRelease(pcStack_78);
    }
    ppuVar6 = ppuStack_88;
    ppppuVar1 = (undefined ****)pppuStack_90;
    if (-1 < (char)bStack_79) {
      ppuVar6 = (undefined **)(ulong)bStack_79;
      ppppuVar1 = &pppuStack_90;
    }
    pcStack_78 = FUN_10989380c;
    appuStack_70[0] = &PTR_FUN_110b16f58;
    ppcVar8 = &pcStack_78;
    FUN_10989feac(param_1,ppppuVar1,ppuVar6,ppcVar8,param_3);
    pppuVar5 = appuStack_70;
    (*(code *)*appuStack_70[0])();
    if ((char)bStack_79 < '\0') {
      __ZdlPv();
      pppuVar5 = pppuStack_90;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  iVar7 = (int)ppuVar6;
  while (iVar7 != 0) {
    func_0x000104bd46a0();
    iVar7 = (int)ppuVar6;
  }
  __Unwind_Resume();
  _JSValueToStringCopy(ppuVar6,ppcVar8,0);
  *pppuVar5 = ppuVar6;
  if (ppuVar6 != (undefined **)0x0) {
    return pppuVar5;
  }
  FUN_109892a8c(&UNK_10f58234e);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109892420);
  (*pcVar2)();
}



/* Entry: 109892440; end: 1098924c7;  */

void FUN_109892440(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (0x20000 < param_3) {
    uVar1 = (long)((float)param_3 * 0.1);
    if (0x18fff < (ulong)(long)((float)param_3 * 0.1)) {
      uVar1 = 0x19000;
    }
    lVar2 = *(long *)(param_1 + 0x108);
    _JSObjectMakeTypedArray(lVar2,0,uVar1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbc1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__JSObjectSetProperty_110346ec8)
                (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),
                 *(undefined8 *)(param_1 + 0x198),lVar2,0xe,0);
      return;
    }
  }
  return;
}



/* Entry: 1098924c8; end: 10989266b;  */

void FUN_1098924c8(void)

{
  code *pcVar1;
  undefined1 auStack_38 [8];
  
  __ZSt17current_exceptionv(auStack_38);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098924f8);
  (*pcVar1)();
}



/* Entry: 10989266c; end: 1098926a7;  */

void FUN_10989266c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectGetTypedArrayByteOffset_110346e60)
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),0);
  return;
}



/* Entry: 1098926a8; end: 1098926ff;  */

long FUN_1098926a8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  _JSObjectGetTypedArrayBytesPtr(lVar1,*(undefined8 *)(*param_2 + 0x10),0);
  lVar2 = *(long *)(param_1 + 0x108);
  _JSObjectGetTypedArrayByteOffset(lVar2,*(undefined8 *)(*param_2 + 0x10),0);
  return lVar1 + lVar2;
}



/* Entry: 109892700; end: 109892743;  */

void FUN_109892700(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a8;
  __Znwm();
  FUN_10988cd64();
  *param_1 = uVar1;
  return;
}



/* Entry: 109892744; end: 1098927b7;  */

long * FUN_109892744(long *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[5] != 0) {
      _JSStringRelease();
    }
    if (param_1[4] != 0) {
      _JSStringRelease();
    }
    if (param_1[3] != 0) {
      _JSStringRelease();
    }
    if (param_1[2] != 0) {
      _JSStringRelease();
    }
    if (param_1[1] != 0) {
      _JSStringRelease();
    }
    if (*param_1 != 0) {
      _JSStringRelease();
    }
  }
  return param_1;
}



/* Entry: 1098927b8; end: 10989283f;  */

undefined8 * FUN_1098927b8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_109892840(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(uint *)(puVar1 + 3) = (param_4 ^ 0xffffffff) & 1;
  *puVar1 = &PTR_FUN_110b16db0;
  *(undefined2 *)((long)puVar1 + 0x1c) = 0xffff;
  if ((param_4 & 1) == 0) {
    FUN_109892990(puVar1);
  }
  return puVar1;
}



/* Entry: 109892840; end: 10989297b;  */

void FUN_109892840(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar11 = param_1[3];
  lVar4 = uVar11 << 5;
  if (uVar11 >> 0x3b != 0) {
    lVar4 = -1;
  }
  __Znam();
  _bzero();
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    plVar12 = plVar6 + 1;
    *plVar6 = lVar4;
LAB_109892918:
    param_1[1] = (long)plVar12;
    if (uVar11 != 0) {
      plVar6 = (long *)(plVar12[-1] + uVar11 * 0x20);
      lVar4 = uVar11 * -0x20;
      plVar8 = (long *)param_1[4];
      plVar12 = plVar6;
      do {
        plVar12 = plVar12 + -4;
        plVar6 = plVar6 + -4;
        *plVar12 = (long)plVar8;
        param_1[4] = (long)plVar12;
        lVar4 = lVar4 + 0x20;
        plVar8 = plVar6;
      } while (lVar4 != 0);
    }
    return;
  }
  lVar9 = *param_1;
  lVar10 = (long)plVar6 - lVar9;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - lVar9;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      plVar6 = (long *)(lVar3 + lVar10);
      plVar12 = plVar6 + 1;
      *plVar6 = lVar4;
      _memcpy(plVar6 + -(lVar10 >> 3),lVar9,lVar10);
      *param_1 = (long)(plVar6 + -(lVar10 >> 3));
      param_1[1] = (long)plVar12;
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
        uVar11 = param_1[3];
      }
      goto LAB_109892918;
    }
    func_0x000104c4f740();
  }
  else {
    FUN_10989297c();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109892978);
  (*pcVar2)();
}



/* Entry: 10989297c; end: 10989298f;  */

void FUN_10989297c(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *(long *)(puVar3 + 8);
  lVar1 = *(long *)(lVar4 + 0x68);
  if (*(long *)(lVar4 + 0x60) != lVar1) {
    iVar2 = *(int *)(lVar1 + -0x30);
    if (iVar2 < 5) {
      *(undefined8 *)(*(long *)(lVar1 + -0x38) + (long)iVar2 * 8) = *(undefined8 *)(puVar3 + 0x10);
      *(undefined **)(lVar1 + (long)iVar2 * 8 + -0x28) = puVar3;
      *(int *)(lVar1 + -0x30) = iVar2 + 1;
      if (iVar2 != -1) {
        puVar3[0x1c] = (char)iVar2;
        puVar3[0x1d] = (char)((uint)(*(int *)(lVar4 + 0x68) - *(int *)(lVar4 + 0x60)) >> 3) * -0x49
                       + -1;
        return;
      }
      lVar4 = *(long *)(puVar3 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSValueProtect_110346fc0)
            (*(undefined8 *)(lVar4 + 0x108),*(undefined8 *)(puVar3 + 0x10));
  return;
}



/* Entry: 109892990; end: 109892a07;  */

void FUN_109892990(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(lVar3 + 0x68);
  if (*(long *)(lVar3 + 0x60) != lVar1) {
    iVar2 = *(int *)(lVar1 + -0x30);
    if (iVar2 < 5) {
      *(undefined8 *)(*(long *)(lVar1 + -0x38) + (long)iVar2 * 8) = *(undefined8 *)(param_1 + 0x10);
      *(long *)(lVar1 + (long)iVar2 * 8 + -0x28) = param_1;
      *(int *)(lVar1 + -0x30) = iVar2 + 1;
      if (iVar2 != -1) {
        *(char *)(param_1 + 0x1c) = (char)iVar2;
        *(char *)(param_1 + 0x1d) =
             (char)((uint)(*(int *)(lVar3 + 0x68) - *(int *)(lVar3 + 0x60)) >> 3) * -0x49 + -1;
        return;
      }
      lVar3 = *(long *)(param_1 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSValueProtect_110346fc0)
            (*(undefined8 *)(lVar3 + 0x108),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 109892a08; end: 109892a83;  */

void FUN_109892a08(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 3);
  iVar2 = iVar1 + -1;
  *(int *)(param_1 + 3) = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    if (iVar2 == 0) {
      lVar3 = param_1[1];
      if (*(char *)((long)param_1 + 0x1d) < '\0') {
        if ((*(byte *)(lVar3 + 0x110) & 1) == 0) {
          _JSValueUnprotect(*(undefined8 *)(lVar3 + 0x108),param_1[2]);
        }
      }
      else {
        *(undefined8 *)
         (*(long *)(*(long *)(lVar3 + 0x60) + (long)(int)*(char *)((long)param_1 + 0x1d) * 0x38) +
         (long)*(char *)((long)param_1 + 0x1c) * 8) = 0;
      }
    }
    *param_1 = *(undefined8 *)(param_1[1] + 0x30);
    *(undefined8 **)(param_1[1] + 0x30) = param_1;
  }
  return;
}



/* Entry: 109892a84; end: 109892a8b;  */

void FUN_109892a84(void)

{
  return;
}



/* Entry: 109892a8c; end: 109892b4f;  */

void FUN_109892a8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  func_0x000107c31940(&uStack_50,param_1);
  uVar5 = uStack_39;
  uVar4 = uStack_40;
  uVar3 = uStack_41;
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  uStack_48 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  puVar7[2] = CONCAT17(uVar3,uVar2);
  *(ulong *)((long)puVar7 + 0x17) = CONCAT71(uVar4,uVar3);
  uStack_50 = 0;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar5;
  *puVar7 = &PTR_FUN_110b16660;
  puVar7[1] = uVar1;
  ___cxa_throw(puVar7,&PTR_DAT_110b16580,FUN_109883ca4);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109892b24);
  (*pcVar6)();
}



/* Entry: 109892b50; end: 109892cc7;  */

void FUN_109892b50(long *param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar7 < 0) {
    uVar8 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar7 = (ulong)param_1[2] >> 0x38;
  }
  else {
    uVar4 = 10;
    uVar8 = uVar7;
  }
  bVar1 = 10 >= param_2;
  plVar2 = param_1;
  if (10 < param_2) {
    if (uVar4 < param_2) {
      lVar3 = param_2 + 1;
      FUN_109886a84();
      uVar4 = lVar3 - 1;
      uVar7 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    else {
      lVar3 = param_2 + 1;
      FUN_109886a84();
      uVar4 = lVar3 - 1;
      uVar7 = (ulong)*(char *)((long)param_1 + 0x17);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        uVar5 = (param_1[2] & 0x7fffffffffffffffU) - 1;
        uVar7 = (ulong)param_1[2] >> 0x38;
      }
      else {
        uVar5 = 10;
      }
      if (uVar5 < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar2);
        return;
      }
    }
    plVar6 = param_1;
    if (((uint)uVar7 >> 7 & 1) == 0) goto LAB_109892c38;
    plVar6 = (long *)*param_1;
  }
  else {
    plVar6 = (long *)*param_1;
    uVar4 = param_2;
    if (((uint)uVar7 >> 7 & 1) == 0) {
LAB_109892c38:
      uVar7 = uVar7 & 0xff;
      goto LAB_109892c4c;
    }
  }
  uVar7 = param_1[1];
  bVar1 = true;
LAB_109892c4c:
  if (uVar7 != 0xffffffffffffffff) {
    _memmove(plVar2,plVar6,(uVar7 + 1) * 2);
  }
  if (bVar1) {
    __ZdlPv(plVar6);
  }
  if (param_2 < 0xb) {
    *(byte *)((long)param_1 + 0x17) = (byte)uVar8 & 0x7f;
  }
  else {
    param_1[1] = uVar8;
    param_1[2] = uVar4 + 1 | 0x8000000000000000;
    *param_1 = (long)plVar2;
  }
  return;
}



/* Entry: 109892cc8; end: 109892d7f;  */

void FUN_109892cc8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109892d80; end: 109892ebb;  */

void FUN_109892d80(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar11 = param_1[3];
  lVar4 = uVar11 << 5;
  if (uVar11 >> 0x3b != 0) {
    lVar4 = -1;
  }
  __Znam();
  _bzero();
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    plVar12 = plVar6 + 1;
    *plVar6 = lVar4;
LAB_109892e58:
    param_1[1] = (long)plVar12;
    if (uVar11 != 0) {
      plVar6 = (long *)(plVar12[-1] + uVar11 * 0x20);
      lVar4 = uVar11 * -0x20;
      plVar8 = (long *)param_1[4];
      plVar12 = plVar6;
      do {
        plVar12 = plVar12 + -4;
        plVar6 = plVar6 + -4;
        *plVar12 = (long)plVar8;
        param_1[4] = (long)plVar12;
        lVar4 = lVar4 + 0x20;
        plVar8 = plVar6;
      } while (lVar4 != 0);
    }
    return;
  }
  lVar9 = *param_1;
  lVar10 = (long)plVar6 - lVar9;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - lVar9;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      plVar6 = (long *)(lVar3 + lVar10);
      plVar12 = plVar6 + 1;
      *plVar6 = lVar4;
      _memcpy(plVar6 + -(lVar10 >> 3),lVar9,lVar10);
      *param_1 = (long)(plVar6 + -(lVar10 >> 3));
      param_1[1] = (long)plVar12;
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
        uVar11 = param_1[3];
      }
      goto LAB_109892e58;
    }
    func_0x000104c4f740();
  }
  else {
    FUN_109892ebc();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109892eb8);
  (*pcVar2)();
}



/* Entry: 109892ebc; end: 109892ef7;  */

void FUN_109892ebc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar4 = (long *)*puVar1;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)puVar1[1];
    plVar3 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        lVar2 = *plVar5;
        *plVar5 = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
      } while (plVar5 != plVar4);
      plVar3 = (long *)*puVar1;
    }
    puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
  return;
}



/* Entry: 109892ef8; end: 1098930a7;  */

void FUN_109892ef8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        lVar1 = *plVar4;
        *plVar4 = 0;
        if (lVar1 != 0) {
          __ZdaPv();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*param_1;
    }
    param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 1098930a8; end: 10989320b;  */

long * FUN_1098930a8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar8 = puVar6;
  if (puVar2 != puVar6) {
    uVar5 = param_1[4];
    puVar7 = puVar6 + (uVar5 >> 9);
    plVar3 = (long *)*puVar7;
    plVar9 = plVar3 + (uVar5 & 0x1ff);
    plVar1 = (long *)(puVar6[param_1[5] + uVar5 >> 9] + (param_1[5] + uVar5 & 0x1ff) * 8);
    puVar8 = puVar2;
    if (plVar9 != plVar1) {
      do {
        if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar9)();
          plVar3 = (long *)*puVar7;
        }
        plVar9 = plVar9 + 1;
        if ((long)plVar9 - (long)plVar3 == 0x1000) {
          puVar7 = puVar7 + 1;
          plVar3 = (long *)*puVar7;
          plVar9 = plVar3;
        }
      } while (plVar9 != plVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar8 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar8 - (long)puVar6;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    __ZdlPv(*puVar6);
    puVar2 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar8 = puVar2;
    lVar4 = (long)puVar2 - (long)puVar6;
  }
  if (uVar5 == 1) {
    lVar4 = 0x100;
  }
  else {
    if (uVar5 != 2) goto LAB_1098931b0;
    lVar4 = 0x200;
  }
  param_1[4] = lVar4;
LAB_1098931b0:
  if (puVar6 != puVar8) {
    do {
      puVar2 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar2;
    } while (puVar2 != puVar8);
    puVar8 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar8) {
    param_1[2] = (long)puVar2 + ((long)puVar8 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10989320c; end: 109893253;  */

void FUN_10989320c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 3);
  iVar2 = iVar1 + -1;
  *(int *)(param_1 + 3) = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    if (iVar2 == 0) {
      _JSStringRelease(param_1[2]);
    }
    *param_1 = *(undefined8 *)(param_1[1] + 0x58);
    *(undefined8 **)(param_1[1] + 0x58) = param_1;
  }
  return;
}



/* Entry: 109893254; end: 10989325b;  */

void FUN_109893254(void)

{
  return;
}



/* Entry: 10989325c; end: 10989349b;  */

long * FUN_10989325c(long *param_1,long *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar4 <= 0x7ffffffffffffff - uVar4) {
    uVar2 = uVar4 << 3;
    if (4 < uVar4 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar4 >> 0x3d == 0) {
      uVar2 = (uVar4 << 3) / 5;
    }
    if (0x7fffffffffffffe < uVar2) {
      uVar2 = 0x7ffffffffffffff;
    }
    uVar4 = uVar1;
    if (uVar1 <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar1 >> 0x3b == 0) {
      lVar11 = *param_2;
      plVar6 = (long *)(uVar4 << 4);
      __Znwm();
      lVar10 = param_2[1];
      piVar3 = (int *)*param_2;
      plVar7 = plVar6;
      for (piVar8 = piVar3; piVar8 != param_3; piVar8 = piVar8 + 4) {
        iVar5 = *piVar8;
        *(int *)plVar7 = iVar5;
        if (iVar5 == 3) {
          plVar7[1] = *(long *)(piVar8 + 2);
        }
        else if (iVar5 == 2) {
          *(char *)(plVar7 + 1) = (char)piVar8[2];
        }
        else if (3 < iVar5) {
          plVar7[1] = *(long *)(piVar8 + 2);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        *piVar8 = 0;
        plVar7 = plVar7 + 2;
      }
      iVar5 = *param_4;
      *(int *)plVar7 = iVar5;
      if (iVar5 == 3) {
        plVar7[1] = *(long *)(param_4 + 2);
      }
      else if (iVar5 == 2) {
        *(char *)(plVar7 + 1) = (char)param_4[2];
      }
      else if (3 < iVar5) {
        plVar7[1] = *(long *)(param_4 + 2);
        param_4[2] = 0;
        param_4[3] = 0;
      }
      *param_4 = 0;
      if (param_3 != piVar3 + lVar10 * 4) {
        plVar7 = plVar7 + 3;
        piVar8 = param_3;
        do {
          iVar5 = *piVar8;
          *(int *)(plVar7 + -1) = iVar5;
          if (iVar5 == 3) {
            *plVar7 = *(long *)(piVar8 + 2);
          }
          else if (iVar5 == 2) {
            *(char *)plVar7 = (char)piVar8[2];
          }
          else if (3 < iVar5) {
            *plVar7 = *(long *)(piVar8 + 2);
            piVar8[2] = 0;
            piVar8[3] = 0;
          }
          piVar9 = piVar8 + 4;
          *piVar8 = 0;
          plVar7 = plVar7 + 2;
          piVar8 = piVar9;
        } while (piVar9 != piVar3 + lVar10 * 4);
      }
      plVar7 = plVar6;
      if (piVar3 != (int *)0x0) {
        lVar10 = param_2[1];
        if (lVar10 != 0) {
          plVar7 = (long *)(piVar3 + 2);
          do {
            if ((3 < (int)plVar7[-1]) && ((undefined8 *)*plVar7 != (undefined8 *)0x0)) {
              (*(code *)**(undefined8 **)*plVar7)();
            }
            plVar7 = plVar7 + 2;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        plVar7 = (long *)*param_2;
        if (param_2 + 3 != plVar7) {
          __ZdlPv();
        }
      }
      *param_2 = (long)plVar6;
      param_2[1] = param_2[1] + 1;
      param_2[2] = uVar4;
      *param_1 = (long)plVar6 + ((long)param_3 - lVar11);
      return plVar7;
    }
  }
  plVar7 = (long *)&UNK_10f424dbf;
  func_0x00010772e1f8();
  lVar10 = plVar7[1];
  if (lVar10 != 0) {
    plVar6 = (long *)(*plVar7 + 8);
    do {
      if ((3 < (int)plVar6[-1]) && ((undefined8 *)*plVar6 != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)*plVar6)();
      }
      plVar6 = plVar6 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((plVar7[2] != 0) && (plVar7 + 3 != (long *)*plVar7)) {
    __ZdlPv();
  }
  return plVar7;
}



/* Entry: 10989349c; end: 10989351b;  */

long * FUN_10989349c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)(*param_1 + 8);
    do {
      if ((3 < (int)plVar2[-1]) && ((undefined8 *)*plVar2 != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)*plVar2)();
      }
      plVar2 = plVar2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (param_1[2] != 0) {
    if (param_1 + 3 != (long *)*param_1) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10989351c; end: 1098935b3;  */

long * FUN_10989351c(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x68);
    iVar1 = *(int *)(lVar3 + -0x30);
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + -0x38) + lVar4 * 8) != 0) {
          lVar5 = *(long *)(lVar3 + -0x28 + lVar4 * 8);
          _JSValueProtect(*(undefined8 *)(*(long *)(lVar5 + 8) + 0x108),
                          *(undefined8 *)(lVar5 + 0x10));
          *(undefined1 *)(lVar5 + 0x1d) = 0xff;
          iVar1 = *(int *)(lVar3 + -0x30);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
      lVar3 = *(long *)(lVar2 + 0x68);
    }
    *(long *)(lVar2 + 0x68) = lVar3 + -0x38;
  }
  return param_1;
}



/* Entry: 1098935b4; end: 1098935c3;  */

void FUN_1098935b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16e70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1098935c4; end: 1098935e3;  */

void FUN_1098935c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16e70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098935e4; end: 109893613;  */

long FUN_1098935e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 109893614; end: 109893617;  */

void FUN_109893614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109893618; end: 109893687;  */

long FUN_109893618(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x000109892d28(param_1 + 0x10);
  return param_1;
}



/* Entry: 109893688; end: 1098936a7;  */

void FUN_109893688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109893694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1098936a8; end: 109893713;  */

long FUN_1098936a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 109893714; end: 109893733;  */

void FUN_109893714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109893720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 109893734; end: 109893767;  */

void FUN_109893734(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_2;
  if (lVar1 != 0 && lVar1 != param_4) {
    _memmove(param_2,lVar1,param_4 - lVar1);
    lVar3 = param_2 + (param_4 - lVar1);
  }
  if ((param_4 != 0) && (lVar2 = (lVar1 + lVar2 * 8) - param_4, lVar2 != 0)) {
    _memmove(lVar3,param_4,lVar2);
  }
  if ((lVar1 != 0) && (param_1 + 3 != (long *)*param_1)) {
    __ZdlPv();
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  return;
}



/* Entry: 109893768; end: 10989380b;  */

void FUN_109893768(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_2;
  if (lVar1 != 0 && lVar1 != param_4) {
    _memmove(param_2,lVar1,param_4 - lVar1);
    lVar3 = param_2 + (param_4 - lVar1);
  }
  if ((param_4 != 0) && (lVar2 = (lVar1 + lVar2 * 8) - param_4, lVar2 != 0)) {
    _memmove(lVar3,param_4,lVar2);
  }
  if ((lVar1 != 0) && (param_1 + 3 != (long *)*param_1)) {
    __ZdlPv();
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  return;
}



/* Entry: 10989380c; end: 10989380f;  */

void FUN_10989380c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined8 *******pppppppuVar2;
  long *plVar3;
  code *pcVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 **ppuVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  ppuVar7 = &puStack_b0;
  ppuVar12 = &puStack_b0;
  plStack_70 = param_2;
  uStack_68 = param_3;
  if (param_3 != 0) {
    plVar11 = param_2;
    _memchr(param_2,0x40,param_3);
    uVar10 = 0;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
      goto LAB_10989389c;
    }
    uVar9 = (long)plVar11 - (long)param_2;
    plVar11 = (long *)0x0;
    if (uVar9 == 0xffffffffffffffff) goto LAB_10989389c;
    if (uVar9 < param_3) {
      plStack_70 = (long *)((long)param_2 + uVar9 + 1);
      uStack_68 = param_3 - (uVar9 + 1);
      uVar10 = uVar9;
      plVar11 = param_2;
      goto LAB_10989389c;
    }
LAB_109893ad4:
    FUN_109262df8(&UNK_10f2fca6e);
    goto LAB_109893ae0;
  }
  uVar10 = 0;
  plVar11 = (long *)0x0;
LAB_10989389c:
  pplVar5 = &plStack_70;
  FUN_109893b08(pplVar5,0x3a);
  if (((uVar10 == 0xb) && (((ulong)pplVar5 >> 0x20 & 1) == 0)) &&
     ((*plVar11 == 0x63206c61626f6c67 && *(long *)((long)plVar11 + 3) == 0x65646f63206c6162) &&
      uStack_68 == 0)) {
    func_0x000107c31940(&puStack_b0,"");
    func_0x000107c31940(&ppppppuStack_98,&UNK_10f5823c6);
    param_1[2] = uStack_a0;
    param_1[1] = uStack_a8;
    *param_1 = puStack_b0;
    param_1[4] = uStack_90;
    param_1[3] = ppppppuStack_98;
    param_1[5] = uStack_88;
    param_1[6] = CONCAT44(uStack_7c,uStack_80) & 0xffffff00ffffff00;
    *(ulong *)((long)param_1 + 0x35) =
         (ulong)(CONCAT43(uStack_78,(int3)((uint)uStack_7c >> 8)) & 0xffffff00ffffff);
    goto LAB_109893aac;
  }
  pplVar6 = &plStack_70;
  FUN_109893b08(pplVar6,0x3a);
  uVar9 = uStack_68;
  plVar3 = plStack_70;
  if (((ulong)pplVar6 >> 0x20 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (0x7ffffffffffffff7 < uStack_68) {
    func_0x000104c4f6b8();
    goto LAB_109893ad4;
  }
  if (uStack_68 < 0x17) {
    uStack_a0 = CONCAT17((char)uStack_68,(undefined7)uStack_a0);
    if (uStack_68 != 0) goto LAB_1098939dc;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((uStack_68 | 7) != 0x17) {
      puVar1 = (undefined1 *)((uStack_68 | 7) + 1);
    }
    ppuVar7 = (undefined1 **)puVar1;
    __Znwm();
    uStack_a0 = (ulong)puVar1 | 0x8000000000000000;
    uStack_a8 = uVar9;
    puStack_b0 = (undefined1 *)ppuVar7;
LAB_1098939dc:
    _memmove(ppuVar7,plVar3,uVar9);
    ppuVar12 = ppuVar7;
  }
  *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
  pppppppuVar8 = &ppppppuStack_98;
  if (uVar10 == 0) {
    func_0x000107c31940(pppppppuVar8,&UNK_10f5823c6);
  }
  else {
    if (0x7ffffffffffffff7 < uVar10) {
LAB_109893ae0:
      func_0x000104c4f6b8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109893ae8);
      (*pcVar4)();
    }
    if (uVar10 < 0x17) {
      uStack_88 = CONCAT17((char)uVar10,(undefined7)uStack_88);
    }
    else {
      pppppppuVar2 = (undefined8 *******)0x19;
      if ((uVar10 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)((uVar10 | 7) + 1);
      }
      pppppppuVar8 = pppppppuVar2;
      __Znwm();
      uStack_88 = (ulong)pppppppuVar2 | 0x8000000000000000;
      ppppppuStack_98 = pppppppuVar8;
      uStack_90 = uVar10;
    }
    _memmove(pppppppuVar8,plVar11,uVar10);
    *(undefined1 *)((long)pppppppuVar8 + uVar10) = 0;
  }
  uStack_7c = CONCAT31(uStack_7c._1_3_,1);
  param_1[2] = uStack_a0;
  param_1[1] = uStack_a8;
  *param_1 = puStack_b0;
  param_1[4] = uStack_90;
  param_1[3] = ppppppuStack_98;
  param_1[5] = uStack_88;
  param_1[6] = CONCAT44(uStack_7c,(int)pplVar6);
  *(ulong *)((long)param_1 + 0x35) = CONCAT17(1,CONCAT43((int)pplVar5 + 1,uStack_7c._1_3_));
LAB_109893aac:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 109893810; end: 109893b07;  */

void FUN_109893810(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined8 *******pppppppuVar2;
  long *plVar3;
  code *pcVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 **ppuVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  ppuVar7 = &puStack_b0;
  ppuVar12 = &puStack_b0;
  plStack_70 = param_2;
  uStack_68 = param_3;
  if (param_3 != 0) {
    plVar11 = param_2;
    _memchr(param_2,0x40,param_3);
    uVar10 = 0;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
      goto LAB_10989389c;
    }
    uVar9 = (long)plVar11 - (long)param_2;
    plVar11 = (long *)0x0;
    if (uVar9 == 0xffffffffffffffff) goto LAB_10989389c;
    if (uVar9 < param_3) {
      plStack_70 = (long *)((long)param_2 + uVar9 + 1);
      uStack_68 = param_3 - (uVar9 + 1);
      uVar10 = uVar9;
      plVar11 = param_2;
      goto LAB_10989389c;
    }
LAB_109893ad4:
    FUN_109262df8(&UNK_10f2fca6e);
    goto LAB_109893ae0;
  }
  uVar10 = 0;
  plVar11 = (long *)0x0;
LAB_10989389c:
  pplVar5 = &plStack_70;
  FUN_109893b08(pplVar5,0x3a);
  if (((uVar10 == 0xb) && (((ulong)pplVar5 >> 0x20 & 1) == 0)) &&
     ((*plVar11 == 0x63206c61626f6c67 && *(long *)((long)plVar11 + 3) == 0x65646f63206c6162) &&
      uStack_68 == 0)) {
    func_0x000107c31940(&puStack_b0,"");
    func_0x000107c31940(&ppppppuStack_98,&UNK_10f5823c6);
    param_1[2] = uStack_a0;
    param_1[1] = uStack_a8;
    *param_1 = puStack_b0;
    param_1[4] = uStack_90;
    param_1[3] = ppppppuStack_98;
    param_1[5] = uStack_88;
    param_1[6] = CONCAT44(uStack_7c,uStack_80) & 0xffffff00ffffff00;
    *(ulong *)((long)param_1 + 0x35) =
         (ulong)(CONCAT43(uStack_78,(int3)((uint)uStack_7c >> 8)) & 0xffffff00ffffff);
    goto LAB_109893aac;
  }
  pplVar6 = &plStack_70;
  FUN_109893b08(pplVar6,0x3a);
  uVar9 = uStack_68;
  plVar3 = plStack_70;
  if (((ulong)pplVar6 >> 0x20 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (0x7ffffffffffffff7 < uStack_68) {
    func_0x000104c4f6b8();
    goto LAB_109893ad4;
  }
  if (uStack_68 < 0x17) {
    uStack_a0 = CONCAT17((char)uStack_68,(undefined7)uStack_a0);
    if (uStack_68 != 0) goto LAB_1098939dc;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((uStack_68 | 7) != 0x17) {
      puVar1 = (undefined1 *)((uStack_68 | 7) + 1);
    }
    ppuVar7 = (undefined1 **)puVar1;
    __Znwm();
    uStack_a0 = (ulong)puVar1 | 0x8000000000000000;
    uStack_a8 = uVar9;
    puStack_b0 = (undefined1 *)ppuVar7;
LAB_1098939dc:
    _memmove(ppuVar7,plVar3,uVar9);
    ppuVar12 = ppuVar7;
  }
  *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
  pppppppuVar8 = &ppppppuStack_98;
  if (uVar10 == 0) {
    func_0x000107c31940(pppppppuVar8,&UNK_10f5823c6);
  }
  else {
    if (0x7ffffffffffffff7 < uVar10) {
LAB_109893ae0:
      func_0x000104c4f6b8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109893ae8);
      (*pcVar4)();
    }
    if (uVar10 < 0x17) {
      uStack_88 = CONCAT17((char)uVar10,(undefined7)uStack_88);
    }
    else {
      pppppppuVar2 = (undefined8 *******)0x19;
      if ((uVar10 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)((uVar10 | 7) + 1);
      }
      pppppppuVar8 = pppppppuVar2;
      __Znwm();
      uStack_88 = (ulong)pppppppuVar2 | 0x8000000000000000;
      ppppppuStack_98 = pppppppuVar8;
      uStack_90 = uVar10;
    }
    _memmove(pppppppuVar8,plVar11,uVar10);
    *(undefined1 *)((long)pppppppuVar8 + uVar10) = 0;
  }
  uStack_7c = CONCAT31(uStack_7c._1_3_,1);
  param_1[2] = uStack_a0;
  param_1[1] = uStack_a8;
  *param_1 = puStack_b0;
  param_1[4] = uStack_90;
  param_1[3] = ppppppuStack_98;
  param_1[5] = uStack_88;
  param_1[6] = CONCAT44(uStack_7c,(int)pplVar6);
  *(ulong *)((long)param_1 + 0x35) = CONCAT17(1,CONCAT43((int)pplVar5 + 1,uStack_7c._1_3_));
LAB_109893aac:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 109893b08; end: 109893c93;  */

char * FUN_109893b08(long *param_1,char *param_2,uint *param_3,undefined4 *param_4)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint *puVar11;
  int *piVar13;
  byte *pbVar14;
  ulong uVar15;
  uint auStack_80 [9];
  uint uStack_5c;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  uint uStack_38;
  uint uStack_34;
  uint *puVar12;
  
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    pbVar1 = (byte *)(*param_1 + uVar9);
    lVar6 = 1;
    do {
      if (uVar9 + lVar6 == 1) goto LAB_109893c68;
      lVar7 = lVar6 + -2;
      lVar6 = lVar6 + -1;
    } while ((uint)pbVar1[lVar7] != ((uint)param_2 & 0xff));
    if (uVar9 + lVar6 == 0) {
      uVar9 = 0;
      uStack_34 = 0;
      uVar8 = 0;
      goto LAB_109893c6c;
    }
    uVar15 = (uVar9 + lVar6) - 1;
    if (uVar9 <= uVar15) {
      pcVar5 = "string_view::substr";
      FUN_109262df8();
      puStack_50 = &stack0xfffffffffffffff0;
      pcStack_48 = FUN_109893c94;
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar6 = 9;
      while (cVar2 = *pcVar5, 0xf5 < (byte)(cVar2 - 0x3aU)) {
        pcVar5 = pcVar5 + 1;
        auStack_80[lVar6] = (uint)(byte)(cVar2 - 0x30);
        bVar3 = lVar6 == 0;
        lVar6 = lVar6 + -1;
        if ((bVar3) || (pcVar5 == param_2)) break;
      }
      lVar7 = lVar6 + 1 << 0x20;
      iVar10 = (int)(lVar6 + 1);
      uVar8 = auStack_80[iVar10];
      if (iVar10 < 8) {
        puVar11 = (uint *)((long)auStack_80 + (lVar7 >> 0x1e) + 4);
        piVar13 = (int *)&UNK_10de6dc94;
        do {
          puVar12 = puVar11 + 1;
          uVar8 = uVar8 + *piVar13 * *puVar11;
          puVar11 = puVar12;
          piVar13 = piVar13 + 1;
        } while (puVar12 < &uStack_5c);
      }
      *param_3 = uVar8;
      uVar8 = *(uint *)(&UNK_10de6dc90 + (0x900000000 - lVar7 >> 0x1e));
      *param_4 = (int)((ulong)uStack_5c * (ulong)uVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        return pcVar5;
      }
      return pcVar5 + -(ulong)(((ulong)uStack_5c * (ulong)uVar8 & 0xffffffff00000000) != 0);
    }
    if (lVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulong)(pbVar1[lVar6] == 0x2d);
    }
    pbVar14 = pbVar1;
    if (lVar6 + uVar9 != 0) {
      lVar7 = uVar9 + lVar6;
      pbVar4 = pbVar1 + lVar6 + uVar9;
      do {
        if (*pbVar4 != 0x30) {
          if ((lVar7 != 0) && (pbVar14 = pbVar4, *pbVar4 - 0x30 < 10)) {
            FUN_109893c94(pbVar4,pbVar1,&uStack_34,&uStack_38);
            if (((pbVar4 != pbVar1) && (*pbVar4 - 0x30 < 10)) || (CARRY4(uStack_34,uStack_38)))
            goto LAB_109893c68;
            uStack_34 = uStack_34 + uStack_38;
            if ((int)uVar9 != 0) {
              if (0x80000000 < uStack_34) goto LAB_109893c68;
              goto LAB_109893c38;
            }
            if (-1 < (int)uStack_34) goto LAB_109893c3c;
            goto LAB_109893c68;
          }
          break;
        }
        pbVar4 = pbVar4 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0);
    }
    if (pbVar1 + lVar6 + uVar9 != pbVar14) {
      uStack_34 = 0;
      if ((int)uVar9 != 0) {
LAB_109893c38:
        uStack_34 = -uStack_34;
      }
LAB_109893c3c:
      uVar9 = param_1[1];
      if (uVar15 <= (ulong)param_1[1]) {
        uVar9 = uVar15;
      }
      param_1[1] = uVar9;
      uVar8 = uStack_34 & 0xffffff00;
      uStack_34 = uStack_34 & 0xff;
      uVar9 = 0x100000000;
      goto LAB_109893c6c;
    }
  }
LAB_109893c68:
  uStack_34 = 0;
  uVar9 = 0;
  uVar8 = 0;
LAB_109893c6c:
  return (char *)(uVar9 | (uVar8 | uStack_34));
}



/* Entry: 109893c94; end: 109893d87;  */

char * FUN_109893c94(char *param_1,char *param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar9;
  uint auStack_40 [9];
  uint uStack_1c;
  long lStack_18;
  uint *puVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 9;
  while (cVar1 = *param_1, 0xf5 < (byte)(cVar1 - 0x3aU)) {
    param_1 = param_1 + 1;
    auStack_40[lVar3] = (uint)(byte)(cVar1 - 0x30);
    bVar2 = lVar3 == 0;
    lVar3 = lVar3 + -1;
    if ((bVar2) || (param_1 == param_2)) break;
  }
  lVar4 = lVar3 + 1 << 0x20;
  iVar6 = (int)(lVar3 + 1);
  uVar5 = auStack_40[iVar6];
  if (iVar6 < 8) {
    puVar7 = (uint *)((long)auStack_40 + (lVar4 >> 0x1e) + 4);
    piVar9 = (int *)&UNK_10de6dc94;
    do {
      puVar8 = puVar7 + 1;
      uVar5 = uVar5 + *piVar9 * *puVar7;
      puVar7 = puVar8;
      piVar9 = piVar9 + 1;
    } while (puVar8 < &uStack_1c);
  }
  *param_3 = uVar5;
  uVar5 = *(uint *)(&UNK_10de6dc90 + (0x900000000 - lVar4 >> 0x1e));
  *param_4 = (int)((ulong)uStack_1c * (ulong)uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1 + -(ulong)(((ulong)uStack_1c * (ulong)uVar5 & 0xffffffff00000000) != 0);
  }
  ___stack_chk_fail();
  return param_1;
}



/* Entry: 109893d88; end: 109893d9b;  */

void FUN_109893d88(void)

{
  return;
}



/* Entry: 109893d9c; end: 109893df3;  */

void FUN_109893d9c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar2 = 0x60;
  ___cxa_allocate_exception();
  FUN_109882324();
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
  ___cxa_free_exception(uVar2);
  __Unwind_Resume();
  uVar3 = 0x60;
  ___cxa_allocate_exception();
  FUN_109886034();
  ppuVar4 = &PTR_DAT_110b164e0;
  uVar2 = uVar3;
  ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
  ___cxa_free_exception(uVar3);
  __Unwind_Resume(uVar2);
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  *ppuVar4 = (undefined *)0x0;
  ppuVar4[1] = (undefined *)0x0;
  ppuVar4[2] = (undefined *)0x0;
  FUN_1098807a8();
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109893ec0);
  (*pcVar1)();
}



/* Entry: 109893df4; end: 109893e4f;  */

void FUN_109893df4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar2 = 0x60;
  ___cxa_allocate_exception();
  FUN_109886034();
  ppuVar4 = &PTR_DAT_110b164e0;
  uVar3 = uVar2;
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
  ___cxa_free_exception(uVar2);
  __Unwind_Resume(uVar3);
  uVar3 = 0x60;
  ___cxa_allocate_exception(0x60);
  *ppuVar4 = (undefined *)0x0;
  ppuVar4[1] = (undefined *)0x0;
  ppuVar4[2] = (undefined *)0x0;
  FUN_1098807a8();
  ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109893ec0);
  (*pcVar1)();
}



/* Entry: 109893e50; end: 109893ee7;  */

void FUN_109893e50(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1098807a8();
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109893ec0);
  (*pcVar1)();
}



/* Entry: 109893ee8; end: 109893f0f;  */

void FUN_109893ee8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *extraout_x8;
  undefined8 *puVar2;
  long *plStack_80;
  int iStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  FUN_10988bd28(&UNK_10f5823d2);
  puVar1 = (undefined8 *)&UNK_10f5823ed;
  FUN_10988bd28();
  puVar2 = (undefined8 *)puVar1[3];
  if (((undefined8 *)puVar1[3] == (undefined8 *)0x0) &&
     (func_0x0001098942c8(), puVar2 = puVar1, puVar1 == (undefined8 *)0x0)) {
    *extraout_x8 = 0;
  }
  else {
    (**(code **)(*param_2 + 0xd8))(auStack_68,param_2,param_3);
    iStack_78 = 0;
    plStack_80 = param_2;
    (**(code **)*puVar2)(puVar2,auStack_68,&plStack_80);
    *extraout_x8 = iStack_78;
    if (iStack_78 == 3) {
      *(ulong *)(extraout_x8 + 2) = CONCAT71(uStack_6f,uStack_70);
    }
    else if (iStack_78 == 2) {
      *(undefined1 *)(extraout_x8 + 2) = uStack_70;
    }
    else if (3 < iStack_78) {
      *(ulong *)(extraout_x8 + 2) = CONCAT71(uStack_6f,uStack_70);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  return;
}



/* Entry: 109893f10; end: 109894023;  */

void FUN_109893f10(int *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plStack_60;
  int iStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar1 = (undefined8 *)param_2[3];
  if (((undefined8 *)param_2[3] == (undefined8 *)0x0) &&
     (func_0x0001098942c8(), puVar1 = param_2, param_2 == (undefined8 *)0x0)) {
    *param_1 = 0;
  }
  else {
    (**(code **)(*param_3 + 0xd8))(auStack_48,param_3,param_4);
    iStack_58 = 0;
    plStack_60 = param_3;
    (**(code **)*puVar1)(puVar1,auStack_48,&plStack_60);
    *param_1 = iStack_58;
    if (iStack_58 == 3) {
      *(ulong *)(param_1 + 2) = CONCAT71(uStack_4f,uStack_50);
    }
    else if (iStack_58 == 2) {
      *(undefined1 *)(param_1 + 2) = uStack_50;
    }
    else if (3 < iStack_58) {
      *(ulong *)(param_1 + 2) = CONCAT71(uStack_4f,uStack_50);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return;
}



/* Entry: 109894024; end: 1098941fb;  */

long * FUN_109894024(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  long *plStack_70;
  int iStack_68;
  undefined8 *puStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  plVar3 = (long *)param_1[3];
  if ((plVar3 == (long *)0x0) && (plVar3 = param_1, func_0x0001098942c8(), plVar3 == (long *)0x0)) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(*param_2 + 0xd8))(auStack_58,param_2,param_3);
    plVar2 = plVar3;
    FUN_1098941fc(plVar3,auStack_58);
    if ((int)plVar2 != 0) {
      if (*(char *)(*(long *)param_1[2] + 0x21) == '\x01') {
        FUN_109894344(param_2);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109894198);
        (*pcVar1)();
      }
      FUN_1098849a4(aiStack_80,param_2,param_4);
      iStack_68 = aiStack_80[0];
      if (aiStack_80[0] == 3) {
        puStack_60 = puStack_78;
      }
      else if (aiStack_80[0] == 2) {
        puStack_60 = (undefined8 *)CONCAT71(puStack_60._1_7_,puStack_78._0_1_);
      }
      else if (3 < aiStack_80[0]) {
        puStack_60 = puStack_78;
        puStack_78 = (undefined8 *)0x0;
      }
      aiStack_80[0] = 0;
      plStack_70 = param_2;
      (**(code **)(*plVar3 + 8))(plVar3,auStack_58,&plStack_70);
      if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
        (**(code **)*puStack_60)();
      }
      if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return plVar2;
}



/* Entry: 1098941fc; end: 10989422f;  */

void FUN_1098941fc(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}



/* Entry: 109894230; end: 1098942af;  */

long FUN_109894230(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x0001098942c8();
    lVar1 = param_1;
  }
  (**(code **)(*param_2 + 0xd8))(auStack_48,param_2,param_3);
  FUN_1098941fc(lVar1,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return lVar1;
}



/* Entry: 1098942b0; end: 1098942b3;  */

undefined8 * FUN_1098942b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16f80;
  FUN_10989ba24(param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 1098942b4; end: 109894307;  */

void FUN_1098942b4(void)

{
  FUN_109894308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109894308; end: 109894343;  */

undefined8 * FUN_109894308(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16f80;
  FUN_10989ba24(param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 109894344; end: 10989439b;  */

undefined ****** FUN_109894344(void)

{
  ulong uVar1;
  undefined ******ppppppuVar2;
  undefined **ppuVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined ******ppppppuVar11;
  long lVar12;
  undefined *****pppppuVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *****pppppuStack_188;
  undefined *****pppppuStack_180;
  long lStack_178;
  undefined ****ppppuStack_170;
  undefined *****pppppuStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined *****pppppuStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *****pppppuStack_130;
  undefined *****pppppuStack_128;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined ****ppppuStack_f0;
  code *pcStack_e8;
  undefined ****appppuStack_e0 [7];
  code *pcStack_a8;
  undefined **appuStack_a0 [7];
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  ppppppuVar2 = (undefined ******)0x60;
  ___cxa_allocate_exception();
  FUN_109882324();
  ppuVar3 = &PTR_DAT_110b164e0;
  ppppppuVar6 = ppppppuVar2;
  ___cxa_throw(ppppppuVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
  ___cxa_free_exception(ppppppuVar2);
  __Unwind_Resume();
  pcStack_28 = FUN_10989439c;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *ppppppuVar6 = (undefined *****)ppuVar3;
  puStack_30 = &stack0xfffffffffffffff0;
  (*(code *)*(undefined ****)((long)*ppuVar3 + 0x58))();
  ppppppuVar6[1] = (undefined *****)ppuVar3;
  ppppppuVar2 = ppppppuVar6 + 2;
  *ppppppuVar2 = (undefined *****)0x0;
  *(undefined1 *)(ppppppuVar6 + 0xf) = 0;
  *(undefined1 *)(ppppppuVar6 + 0x10) = 0;
  *(undefined1 *)(ppppppuVar6 + 0x12) = 0;
  ppppppuVar11 = ppppppuVar6 + 0x13;
  *(undefined1 *)ppppppuVar11 = 0;
  *(undefined1 *)(ppppppuVar6 + 0x19) = 0;
  ppppppuVar6[3] = (undefined *****)0x0;
  ppppppuVar6[4] = (undefined *****)0x0;
  *(undefined1 *)(ppppppuVar6 + 5) = 0;
  (*(code *)(**ppppppuVar6)[6])(&pcStack_a8);
  FUN_1098945bc(ppppppuVar2,&pcStack_a8);
  if (pcStack_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)pcStack_a8)();
  }
  pcStack_e8 = FUN_109895f18;
  appppuStack_e0[0] = (undefined ****)&PTR_FUN_110b17030;
  pcStack_a8 = FUN_109895f18;
  appuStack_a0[0] = &PTR_FUN_110b17030;
  pppppuVar8 = ppppppuVar6[1] + 0x23;
  (*(code *)(**ppppppuVar6)[0x54])(&ppppuStack_f0,*ppppppuVar6,pppppuVar8,0,&pcStack_a8);
  (*(code *)*appuStack_a0[0])(appuStack_a0);
  if (((*(char *)(ppppppuVar6 + 0x12) == '\x01') && (3 < *(int *)(ppppppuVar6 + 0x10))) &&
     (ppppppuVar6[0x11] != (undefined *****)0x0)) {
    (*(code *)**ppppppuVar6[0x11])();
  }
  *(undefined4 *)(ppppppuVar6 + 0x10) = 7;
  ppppppuVar6[0x11] = (undefined *****)ppppuStack_f0;
  ppppuStack_f0 = (undefined ****)0x0;
  *(undefined1 *)(ppppppuVar6 + 0x12) = 1;
  ppppppuVar4 = (undefined ******)appppuStack_e0;
  (*(code *)*appppuStack_e0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_a0[0])(appuStack_a0);
  (*(code *)*appppuStack_e0[0])(appppuStack_e0);
  func_0x000109895bc8(ppppppuVar11);
  if (((*(char *)(ppppppuVar6 + 0x12) == '\x01') && (3 < *(int *)(ppppppuVar6 + 0x10))) &&
     (ppppppuVar6[0x11] != (undefined *****)0x0)) {
    (*(code *)**ppppppuVar6[0x11])();
  }
  if ((*(char *)(ppppppuVar6 + 0xf) == '\x01') && (*(char *)((long)ppppppuVar6 + 0x3f) < '\0')) {
    __ZdlPv(ppppppuVar6[5]);
  }
  FUN_109895c14(ppppppuVar2);
  ppppppuVar5 = ppppppuVar4;
  __Unwind_Resume();
  pcStack_f8 = FUN_1098945bc;
  pppuStack_160 = &ppuStack_100;
  pppppuVar7 = ppppppuVar5[1];
  if (pppppuVar7 < ppppppuVar5[2]) {
    pppppuVar13 = pppppuVar7 + 1;
    *pppppuVar7 = *pppppuVar8;
    *pppppuVar8 = (undefined ****)0x0;
    ppppppuVar5[1] = pppppuVar13;
    ppppppuVar6 = ppppppuVar5;
  }
  else {
    lVar12 = (long)pppppuVar7 - (long)*ppppppuVar5;
    uVar1 = (lVar12 >> 3) + 1;
    pppppuStack_120 = (undefined *****)ppppppuVar4;
    pppppuStack_118 = (undefined *****)ppppppuVar11;
    pppppuStack_110 = (undefined *****)ppppppuVar2;
    pppppuStack_108 = (undefined *****)ppppppuVar6;
    ppuStack_100 = &puStack_30;
    if (uVar1 >> 0x3d != 0) {
      pppppuVar13 = pppppuVar8;
      FUN_109895b28();
      func_0x000109895b70(&pppppuStack_148);
      ppppppuVar6 = ppppppuVar5;
      __Unwind_Resume();
      pcStack_158 = FUN_1098946ac;
      pppppuVar15 = ppppppuVar6[3];
      pppppuVar14 = *ppppppuVar6;
      pppppuVar7 = pppppuVar13;
      pppppuStack_180 = (undefined *****)ppppppuVar4;
      lStack_178 = lVar12;
      ppppuStack_170 = (undefined ****)pppppuVar8;
      pppppuStack_168 = (undefined *****)ppppppuVar5;
      _strlen(pppppuVar13);
      (*(code *)(*pppppuVar14)[0x16])(&pppppuStack_188,pppppuVar14,pppppuVar13,pppppuVar7);
      pppppuVar15 = pppppuVar15 + -1;
      pppppuVar8 = *ppppppuVar6;
      (*(code *)(*pppppuVar8)[0x37])(pppppuVar8,pppppuVar15,&pppppuStack_188);
      if (((ulong)pppppuVar8 & 1) == 0) {
        pppppuVar8 = *ppppppuVar6;
        (*(code *)(*pppppuVar8)[0x29])(&iStack_1a0,pppppuVar8);
        FUN_1098947e8(pppppuVar15,pppppuVar8,&pppppuStack_188,&iStack_1a0);
        if ((undefined8 *)CONCAT44(uStack_19c,iStack_1a0) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT44(uStack_19c,iStack_1a0))();
        }
      }
      (*(code *)(**ppppppuVar6)[0x34])(&iStack_1a0,*ppppppuVar6,pppppuVar15,&pppppuStack_188);
      puStack_190 = puStack_198;
      puStack_198 = (undefined8 *)0x0;
      FUN_1098945bc(ppppppuVar6 + 2,&puStack_190);
      if (puStack_190 != (undefined8 *)0x0) {
        (**(code **)*puStack_190)();
      }
      if ((3 < iStack_1a0) && (puStack_198 != (undefined8 *)0x0)) {
        (**(code **)*puStack_198)();
      }
      if ((undefined ******)pppppuStack_188 != (undefined ******)0x0) {
        (*(code *)**pppppuStack_188)();
      }
      return (undefined ******)pppppuStack_188;
    }
    uVar9 = (long)ppppppuVar5[2] - (long)*ppppppuVar5;
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    pppppuStack_128 = (undefined *****)ppppppuVar5;
    if (uVar10 == 0) {
      ppppppuVar6 = (undefined ******)0x0;
    }
    else {
      ppppppuVar6 = ppppppuVar5;
      func_0x000109895b3c();
    }
    puStack_140 = (undefined8 *)((long)ppppppuVar6 + lVar12);
    pppppuStack_130 = (undefined *****)(ppppppuVar6 + uVar10);
    puStack_138 = puStack_140 + 1;
    *puStack_140 = *pppppuVar8;
    *pppppuVar8 = (undefined ****)0x0;
    pppppuStack_148 = (undefined *****)ppppppuVar6;
    FUN_109895a6c(ppppppuVar5,&pppppuStack_148);
    pppppuVar13 = ppppppuVar5[1];
    ppppppuVar6 = &pppppuStack_148;
    func_0x000109895b70(ppppppuVar6);
  }
  ppppppuVar5[1] = pppppuVar13;
  return ppppppuVar6;
}



/* Entry: 10989439c; end: 1098945bb;  */

undefined ****** FUN_10989439c(undefined ******param_1,undefined *****param_2)

{
  ulong uVar1;
  undefined ******ppppppuVar2;
  undefined ******ppppppuVar3;
  undefined ******ppppppuVar4;
  undefined *****pppppuVar5;
  undefined *****pppppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined ******ppppppuVar9;
  long lVar10;
  undefined *****pppppuVar11;
  undefined *****pppppuVar12;
  undefined *****pppppuVar13;
  int iStack_180;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *****pppppuStack_168;
  undefined *****pppppuStack_160;
  long lStack_158;
  undefined ****ppppuStack_150;
  undefined *****pppppuStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *****pppppuStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined ****ppppuStack_d0;
  code *pcStack_c8;
  undefined ****appppuStack_c0 [7];
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = param_2;
  (*(code *)(*param_2)[0xb])();
  param_1[1] = param_2;
  ppppppuVar4 = param_1 + 2;
  *ppppppuVar4 = (undefined *****)0x0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  ppppppuVar9 = param_1 + 0x13;
  *(undefined1 *)ppppppuVar9 = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[3] = (undefined *****)0x0;
  param_1[4] = (undefined *****)0x0;
  *(undefined1 *)(param_1 + 5) = 0;
  (*(code *)(**param_1)[6])(&pcStack_88);
  FUN_1098945bc(ppppppuVar4,&pcStack_88);
  if (pcStack_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)pcStack_88)();
  }
  pcStack_c8 = FUN_109895f18;
  appppuStack_c0[0] = (undefined ****)&PTR_FUN_110b17030;
  pcStack_88 = FUN_109895f18;
  appuStack_80[0] = &PTR_FUN_110b17030;
  pppppuVar6 = param_1[1] + 0x23;
  (*(code *)(**param_1)[0x54])(&ppppuStack_d0,*param_1,pppppuVar6,0,&pcStack_88);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (((*(char *)(param_1 + 0x12) == '\x01') && (3 < *(int *)(param_1 + 0x10))) &&
     (param_1[0x11] != (undefined *****)0x0)) {
    (*(code *)**param_1[0x11])();
  }
  *(undefined4 *)(param_1 + 0x10) = 7;
  param_1[0x11] = (undefined *****)ppppuStack_d0;
  ppppuStack_d0 = (undefined ****)0x0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  ppppppuVar2 = (undefined ******)appppuStack_c0;
  (*(code *)*appppuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  (*(code *)*appppuStack_c0[0])(appppuStack_c0);
  func_0x000109895bc8(ppppppuVar9);
  if (((*(char *)(param_1 + 0x12) == '\x01') && (3 < *(int *)(param_1 + 0x10))) &&
     (param_1[0x11] != (undefined *****)0x0)) {
    (*(code *)**param_1[0x11])();
  }
  if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    __ZdlPv(param_1[5]);
  }
  FUN_109895c14(ppppppuVar4);
  ppppppuVar3 = ppppppuVar2;
  __Unwind_Resume();
  pcStack_d8 = FUN_1098945bc;
  ppuStack_140 = &puStack_e0;
  pppppuVar5 = ppppppuVar3[1];
  if (pppppuVar5 < ppppppuVar3[2]) {
    pppppuVar11 = pppppuVar5 + 1;
    *pppppuVar5 = *pppppuVar6;
    *pppppuVar6 = (undefined ****)0x0;
    ppppppuVar3[1] = pppppuVar11;
    ppppppuVar4 = ppppppuVar3;
  }
  else {
    lVar10 = (long)pppppuVar5 - (long)*ppppppuVar3;
    uVar1 = (lVar10 >> 3) + 1;
    pppppuStack_100 = (undefined *****)ppppppuVar2;
    pppppuStack_f8 = (undefined *****)ppppppuVar9;
    pppppuStack_f0 = (undefined *****)ppppppuVar4;
    pppppuStack_e8 = (undefined *****)param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    if (uVar1 >> 0x3d != 0) {
      pppppuVar11 = pppppuVar6;
      FUN_109895b28();
      func_0x000109895b70(&pppppuStack_128);
      ppppppuVar4 = ppppppuVar3;
      __Unwind_Resume();
      pcStack_138 = FUN_1098946ac;
      pppppuVar13 = ppppppuVar4[3];
      pppppuVar12 = *ppppppuVar4;
      pppppuVar5 = pppppuVar11;
      pppppuStack_160 = (undefined *****)ppppppuVar2;
      lStack_158 = lVar10;
      ppppuStack_150 = (undefined ****)pppppuVar6;
      pppppuStack_148 = (undefined *****)ppppppuVar3;
      _strlen(pppppuVar11);
      (*(code *)(*pppppuVar12)[0x16])(&pppppuStack_168,pppppuVar12,pppppuVar11,pppppuVar5);
      pppppuVar13 = pppppuVar13 + -1;
      pppppuVar6 = *ppppppuVar4;
      (*(code *)(*pppppuVar6)[0x37])(pppppuVar6,pppppuVar13,&pppppuStack_168);
      if (((ulong)pppppuVar6 & 1) == 0) {
        pppppuVar6 = *ppppppuVar4;
        (*(code *)(*pppppuVar6)[0x29])(&iStack_180,pppppuVar6);
        FUN_1098947e8(pppppuVar13,pppppuVar6,&pppppuStack_168,&iStack_180);
        if ((undefined8 *)CONCAT44(uStack_17c,iStack_180) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT44(uStack_17c,iStack_180))();
        }
      }
      (*(code *)(**ppppppuVar4)[0x34])(&iStack_180,*ppppppuVar4,pppppuVar13,&pppppuStack_168);
      puStack_170 = puStack_178;
      puStack_178 = (undefined8 *)0x0;
      FUN_1098945bc(ppppppuVar4 + 2,&puStack_170);
      if (puStack_170 != (undefined8 *)0x0) {
        (**(code **)*puStack_170)();
      }
      if ((3 < iStack_180) && (puStack_178 != (undefined8 *)0x0)) {
        (**(code **)*puStack_178)();
      }
      if ((undefined ******)pppppuStack_168 != (undefined ******)0x0) {
        (*(code *)**pppppuStack_168)();
      }
      return (undefined ******)pppppuStack_168;
    }
    uVar7 = (long)ppppppuVar3[2] - (long)*ppppppuVar3;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    pppppuStack_108 = (undefined *****)ppppppuVar3;
    if (uVar8 == 0) {
      ppppppuVar4 = (undefined ******)0x0;
    }
    else {
      ppppppuVar4 = ppppppuVar3;
      func_0x000109895b3c();
    }
    puStack_120 = (undefined8 *)((long)ppppppuVar4 + lVar10);
    pppppuStack_110 = (undefined *****)(ppppppuVar4 + uVar8);
    puStack_118 = puStack_120 + 1;
    *puStack_120 = *pppppuVar6;
    *pppppuVar6 = (undefined ****)0x0;
    pppppuStack_128 = (undefined *****)ppppppuVar4;
    FUN_109895a6c(ppppppuVar3,&pppppuStack_128);
    pppppuVar11 = ppppppuVar3[1];
    ppppppuVar4 = &pppppuStack_128;
    func_0x000109895b70(ppppppuVar4);
  }
  ppppppuVar3[1] = pppppuVar11;
  return ppppppuVar4;
}



/* Entry: 1098945bc; end: 1098946ab;  */

void FUN_1098945bc(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar6 = puVar2 + 1;
    *puVar2 = *param_2;
    *param_2 = 0;
    param_1[1] = (ulong)puVar6;
  }
  else {
    lVar5 = (long)puVar2 - *param_1;
    uVar8 = (lVar5 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
      FUN_109895b28();
      func_0x000109895b70(&puStack_58);
      __Unwind_Resume();
      uVar8 = param_1[3];
      plVar7 = (long *)*param_1;
      puVar2 = param_2;
      _strlen(param_2);
      (**(code **)(*plVar7 + 0xb0))(&puStack_98,plVar7,param_2,puVar2);
      lVar5 = uVar8 - 8;
      plVar7 = (long *)*param_1;
      (**(code **)(*plVar7 + 0x1b8))(plVar7,lVar5,&puStack_98);
      if (((ulong)plVar7 & 1) == 0) {
        plVar7 = (long *)*param_1;
        (**(code **)(*plVar7 + 0x148))(&iStack_b0,plVar7);
        FUN_1098947e8(lVar5,plVar7,&puStack_98,&iStack_b0);
        if ((undefined8 *)CONCAT44(uStack_ac,iStack_b0) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT44(uStack_ac,iStack_b0))();
        }
      }
      (**(code **)(*(long *)*param_1 + 0x1a0))(&iStack_b0,(long *)*param_1,lVar5,&puStack_98);
      puStack_a0 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      FUN_1098945bc(param_1 + 2,&puStack_a0);
      if (puStack_a0 != (undefined8 *)0x0) {
        (**(code **)*puStack_a0)();
      }
      if ((3 < iStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a8)();
      }
      if (puStack_98 != (undefined8 *)0x0) {
        (**(code **)*puStack_98)();
      }
      return;
    }
    uVar3 = (long)param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    puStack_38 = param_1;
    if (uVar4 == 0) {
      puVar1 = (ulong *)0x0;
    }
    else {
      puVar1 = param_1;
      FUN_109895b3c();
    }
    puStack_50 = (undefined8 *)((long)puVar1 + lVar5);
    puStack_40 = puVar1 + uVar4;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *param_2;
    *param_2 = 0;
    puStack_58 = puVar1;
    FUN_109895a6c(param_1,&puStack_58);
    puVar6 = (undefined8 *)param_1[1];
    func_0x000109895b70(&puStack_58);
  }
  param_1[1] = (ulong)puVar6;
  return;
}



/* Entry: 1098946ac; end: 1098947e7;  */

void FUN_1098946ac(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  uVar4 = param_1[3];
  plVar3 = (long *)*param_1;
  uVar1 = param_2;
  _strlen(param_2);
  (**(code **)(*plVar3 + 0xb0))(&puStack_38,plVar3,param_2,uVar1);
  lVar2 = uVar4 - 8;
  plVar3 = (long *)*param_1;
  (**(code **)(*plVar3 + 0x1b8))(plVar3,lVar2,&puStack_38);
  if (((ulong)plVar3 & 1) == 0) {
    plVar3 = (long *)*param_1;
    (**(code **)(*plVar3 + 0x148))(&iStack_50,plVar3);
    FUN_1098947e8(lVar2,plVar3,&puStack_38,&iStack_50);
    if ((undefined8 *)CONCAT44(uStack_4c,iStack_50) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_4c,iStack_50))();
    }
  }
  (**(code **)(*(long *)*param_1 + 0x1a0))(&iStack_50,(long *)*param_1,lVar2,&puStack_38);
  puStack_40 = puStack_48;
  puStack_48 = (undefined8 *)0x0;
  FUN_1098945bc(param_1 + 2,&puStack_40);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 1098947e8; end: 1098948a3;  */

void FUN_1098947e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  int aiStack_40 [2];
  long *plStack_38;
  
  aiStack_40[0] = 7;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*param_4);
  plStack_38 = plVar1;
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,param_3,aiStack_40);
  if ((3 < aiStack_40[0]) && (plStack_38 != (long *)0x0)) {
    (**(code **)*plStack_38)();
  }
  return;
}



/* Entry: 1098948a4; end: 1098949cb;  */

void FUN_1098948a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  lVar4 = param_1[3];
  plVar3 = (long *)*param_1;
  uVar2 = param_2;
  _strlen(param_2);
  (**(code **)(*plVar3 + 0xb0))(&puStack_38,plVar3,param_2,uVar2);
  plVar3 = (long *)*param_1;
  (**(code **)(*plVar3 + 0x1b8))(plVar3,lVar4 + -8,&puStack_38);
  if ((int)plVar3 == 0) {
    (**(code **)(*(long *)*param_1 + 0x148))(&iStack_50);
    FUN_1098945bc(param_1 + 2,&iStack_50);
    puVar1 = (undefined8 *)CONCAT44(uStack_4c,iStack_50);
  }
  else {
    (**(code **)(*(long *)*param_1 + 0x1a0))(&iStack_50,(long *)*param_1,lVar4 + -8,&puStack_38);
    puStack_40 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    FUN_1098945bc(param_1 + 2,&puStack_40);
    if (puStack_40 != (undefined8 *)0x0) {
      (**(code **)*puStack_40)();
    }
    puVar1 = puStack_48;
    if (iStack_50 < 4) goto LAB_10989499c;
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
LAB_10989499c:
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 1098949cc; end: 109894f3f;  */

void FUN_1098949cc(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  lVar16 = param_1[1];
  lStack_98 = param_3[1];
  lStack_a0 = *param_3;
  plVar15 = *(long **)(lVar16 + 0x50);
  (**(code **)(*plVar15 + 0x148))(&puStack_a8,plVar15);
  plVar8 = &lStack_a0;
  FUN_109895c84(plVar8,(ulong)&lStack_a0 | 8);
  plVar1 = (long *)(lVar16 + 0xa8);
  plVar17 = *(long **)(lVar16 + 0xb0);
  plVar14 = param_2;
  if (plVar17 != (long *)0x0) {
    uVar12 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar12) == 0) {
      plVar14 = (long *)(uVar12 & (ulong)plVar8);
    }
    else {
      plVar14 = plVar8;
      if (plVar17 <= plVar8) {
        uVar2 = 0;
        if (plVar17 != (long *)0x0) {
          uVar2 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar14 = (long *)((long)plVar8 - uVar2 * (long)plVar17);
      }
    }
    puVar6 = *(undefined8 **)(*plVar1 + (long)plVar14 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar6; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        plVar7 = (long *)plVar13[1];
        if (plVar7 == plVar8) {
          lVar4 = plVar13[2];
          func_0x000107c31948(lVar4,lStack_a0);
          if ((int)lVar4 != 0 && plVar13[3] == lStack_98) goto LAB_109894db4;
        }
        else {
          if (((ulong)plVar17 & uVar12) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar12);
          }
          else if (plVar17 <= plVar7) {
            uVar2 = 0;
            if (plVar17 != (long *)0x0) {
              uVar2 = (ulong)plVar7 / (ulong)plVar17;
            }
            plVar7 = (long *)((long)plVar7 - uVar2 * (long)plVar17);
          }
          if (plVar7 != plVar14) break;
        }
      }
    }
  }
  plVar13 = (long *)0x40;
  __Znwm();
  uStack_70 = 0;
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  plVar13[3] = lStack_98;
  plVar13[2] = lStack_a0;
  puStack_88 = puStack_a8;
  puStack_a8 = (undefined8 *)0x0;
  plStack_80 = plVar13;
  plStack_78 = plVar1;
  FUN_109895d08(plVar13 + 4,plVar15,&puStack_88);
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  uStack_70 = CONCAT71(uStack_70._1_7_,1);
  fVar18 = (float)(*(long *)(lVar16 + 0xc0) + 1);
  if ((plVar17 == (long *)0x0) || (*(float *)(lVar16 + 200) * (float)plVar17 < fVar18)) {
    uVar12 = 1;
    if ((long *)0x2 < plVar17) {
      uVar12 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar14 = (long *)(uVar12 | (long)plVar17 << 1);
    plVar17 = (long *)(long)(fVar18 / *(float *)(lVar16 + 200));
    if (plVar14 <= plVar17) {
      plVar14 = plVar17;
    }
    if ((long)plVar14 - 1U == 0) {
      plVar14 = (long *)0x2;
    }
    else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar17 = *(long **)(lVar16 + 0xb0);
    if (plVar17 < plVar14) {
LAB_109894bc0:
      if ((ulong)plVar14 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_109894ee4;
      }
      lVar4 = (long)plVar14 << 3;
      __Znwm();
      lVar5 = *plVar1;
      *plVar1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      plVar17 = (long *)0x0;
      *(long **)(lVar16 + 0xb0) = plVar14;
      do {
        *(undefined8 *)(*plVar1 + (long)plVar17 * 8) = 0;
        plVar17 = (long *)((long)plVar17 + 1);
      } while (plVar14 != plVar17);
      plVar15 = *(long **)(lVar16 + 0xb8);
      plVar17 = plVar14;
      if (plVar15 != (long *)0x0) {
        plVar7 = (long *)plVar15[1];
        uVar12 = (long)plVar14 - 1;
        if (((ulong)plVar14 & uVar12) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar12);
        }
        else if (plVar14 <= plVar7) {
          uVar2 = 0;
          if (plVar14 != (long *)0x0) {
            uVar2 = (ulong)plVar7 / (ulong)plVar14;
          }
          plVar7 = (long *)((long)plVar7 - uVar2 * (long)plVar14);
        }
        *(undefined8 **)(*plVar1 + (long)plVar7 * 8) = (undefined8 *)(lVar16 + 0xb8);
        plVar9 = (long *)*plVar15;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)plVar14 & uVar12) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar12);
          }
          else if (plVar14 <= plVar11) {
            uVar2 = 0;
            if (plVar14 != (long *)0x0) {
              uVar2 = (ulong)plVar11 / (ulong)plVar14;
            }
            plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar14);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar7) {
            lVar4 = *plVar1;
            if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar11 * 8) = plVar15;
              plVar7 = plVar11;
            }
            else {
              *plVar15 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar4 + (long)plVar11 * 8);
              **(long **)(lVar4 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar15;
            }
          }
          plVar15 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    else if (plVar14 < plVar17) {
      plVar15 = (long *)(long)((float)*(ulong *)(lVar16 + 0xc0) / *(float *)(lVar16 + 200));
      if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar15) {
        plVar15 = (long *)(1L << (-LZCOUNT((long)plVar15 + -1) & 0x3fU));
      }
      if (plVar14 <= plVar15) {
        plVar14 = plVar15;
      }
      if (plVar14 < plVar17) {
        if (plVar14 != (long *)0x0) goto LAB_109894bc0;
        lVar4 = *plVar1;
        *plVar1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar16 + 0xb0) = 0;
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = *(long **)(lVar16 + 0xb0);
      }
    }
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      plVar14 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
    }
    else {
      plVar14 = plVar8;
      if (plVar17 <= plVar8) {
        uVar12 = 0;
        if (plVar17 != (long *)0x0) {
          uVar12 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar14 = (long *)((long)plVar8 - uVar12 * (long)plVar17);
      }
    }
  }
  lVar4 = *plVar1;
  plVar8 = *(long **)(lVar4 + (long)plVar14 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(lVar16 + 0xb8);
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
    *(long **)(lVar4 + (long)plVar14 * 8) = plVar8;
    if (*plVar13 != 0) {
      plVar8 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar12 = 0;
        if (plVar17 != (long *)0x0) {
          uVar12 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar12 * (long)plVar17);
      }
      *(long **)(*plVar1 + (long)plVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
  }
  *(long *)(lVar16 + 0xc0) = *(long *)(lVar16 + 0xc0) + 1;
LAB_109894db4:
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(param_1[5]);
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  func_0x000107c31940(&plStack_80,param_2);
  lVar4 = param_3[1];
  lVar16 = *param_3;
  param_1[6] = plStack_78;
  param_1[5] = plStack_80;
  param_1[7] = uStack_70;
  param_1[8] = plVar13 + 4;
  param_1[9] = plVar13 + 5;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = lVar4;
  param_1[0xd] = lVar16;
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (*(char *)(param_4 + 2) == '\x01') {
    plStack_78 = (long *)param_4[1];
    plStack_80 = (long *)*param_4;
    lVar16 = param_1[1] + 0xa8;
    FUN_109895e04(lVar16,&plStack_80);
    if (lVar16 == 0) {
      FUN_10988bd28(&UNK_10f58244e);
LAB_109894ee4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109894ee8);
      (*pcVar3)();
    }
    (**(code **)(*(long *)*param_1 + 400))((long *)*param_1,plVar13 + 4,lVar16 + 0x30);
  }
  return;
}



/* Entry: 109894f40; end: 1098956bb;  */

void FUN_109894f40(long *param_1,undefined1 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int aiStack_170 [2];
  undefined8 *puStack_168;
  long *plStack_160;
  undefined4 auStack_158 [2];
  long *plStack_150;
  int aiStack_148 [2];
  undefined8 *puStack_140;
  long *plStack_138;
  int iStack_130;
  undefined8 **ppuStack_128;
  undefined1 auStack_120 [8];
  int iStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  int aiStack_100 [2];
  undefined8 *puStack_f8;
  long *plStack_f0;
  int aiStack_e8 [2];
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  int aiStack_c8 [2];
  undefined8 *puStack_c0;
  undefined8 *apuStack_b8 [2];
  int aiStack_a8 [2];
  long lStack_a0;
  undefined8 **ppuStack_98;
  long *plStack_90;
  undefined8 **ppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 uStack_70;
  
  *(undefined1 *)param_1[9] = param_2;
  iVar3 = (int)param_1[1];
  FUN_1098956bc();
  if ((iVar3 - 1U & 0xff) < 2) {
    FUN_10989cbac(param_1[1],param_1[8]);
  }
  plVar1 = param_1 + 5;
  if ((char)param_1[0xc] == '\x01') {
    lVar5 = (long)*(char *)((long)param_1 + 0x3f);
    plVar4 = plVar1;
    if (lVar5 < 0) {
      lVar5 = param_1[6];
      plVar4 = (long *)param_1[5];
    }
    FUN_10989bad4(aiStack_148,param_1[1],plVar4,lVar5,param_1[10],param_1[8],
                  *(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xb]);
    plVar6 = (long *)*param_1;
    plVar4 = plVar6;
    (**(code **)(*plVar6 + 0x98))(plVar6,*(undefined8 *)(param_1[3] + -8));
    puVar2 = puStack_140;
    auStack_158[0] = 7;
    lVar5 = (long)*(char *)((long)param_1 + 0x3f);
    plVar7 = plVar1;
    if (lVar5 < 0) {
      lVar5 = param_1[6];
      plVar7 = (long *)param_1[5];
    }
    if (aiStack_148[0] == 3) {
      aiStack_170[0] = 3;
      puStack_168 = puStack_140;
    }
    else if (aiStack_148[0] == 2) {
      aiStack_170[0] = 2;
      puStack_168 = (undefined8 *)CONCAT71(puStack_168._1_7_,puStack_140._0_1_);
    }
    else if (aiStack_148[0] < 4) {
      aiStack_170[0] = aiStack_148[0];
    }
    else {
      puStack_140 = (undefined8 *)0x0;
      aiStack_170[0] = aiStack_148[0];
      puStack_168 = puVar2;
    }
    aiStack_148[0] = 0;
    plStack_160 = plVar6;
    plStack_150 = plVar4;
    FUN_109884c0c(apuStack_b8,auStack_158,plVar6);
    (**(code **)(*plVar6 + 0xb8))(&plStack_108,plVar6,plVar7,lVar5);
    (**(code **)(*plVar6 + 0x1a0))(&ppuStack_98,plVar6,apuStack_b8,&plStack_108);
    iVar3 = (int)ppuStack_98;
    aiStack_e8[0] = (int)ppuStack_98;
    if ((int)ppuStack_98 == 3) {
      plStack_e0 = plStack_90;
    }
    else if ((int)ppuStack_98 == 2) {
      plStack_e0 = (long *)CONCAT71(plStack_e0._1_7_,plStack_90._0_1_);
    }
    else if (3 < (int)ppuStack_98) {
      plStack_e0 = plStack_90;
      plStack_90 = (long *)0x0;
    }
    ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffff00000000);
    plStack_f0 = plVar6;
    if (plStack_108 != (long *)0x0) {
      (**(code **)*plStack_108)();
    }
    if (apuStack_b8[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_b8[0])();
    }
    if (iVar3 != 0) {
      plVar8 = (long *)*param_1;
      (**(code **)(*plVar8 + 0x30))(&ppuStack_98,plVar8);
      iStack_130 = 7;
      ppuStack_128 = ppuStack_98;
      plStack_138 = plVar8;
      FUN_109895f40(auStack_120,&plStack_138,&UNK_10f581e9b);
      FUN_109895f40(&plStack_108,auStack_120,&UNK_10f57bc20);
      FUN_109884c0c(&ppuStack_98,aiStack_100,plStack_108);
      FUN_109884820(&puStack_d0,&ppuStack_98,plStack_108);
      if (ppuStack_98 != (undefined8 **)0x0) {
        (*(code *)**ppuStack_98)();
      }
      (**(code **)(*plStack_108 + 0x30))(&puStack_d8);
      plVar8 = plStack_108;
      FUN_1098849a4(apuStack_b8,plStack_108,aiStack_170);
      FUN_1098849a4(aiStack_a8,plVar8,aiStack_e8);
      uStack_70 = 2;
      ppuStack_78 = apuStack_b8;
      (**(code **)(*plVar8 + 0x58))(plVar8);
      ppuStack_98 = &puStack_d0;
      plStack_90 = plVar8;
      pppuStack_80 = &ppuStack_78;
      ppuStack_88 = &puStack_d8;
      FUN_1098960c0(aiStack_c8);
      if ((3 < aiStack_c8[0]) && (puStack_c0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_c0)();
      }
      lVar9 = 0;
      do {
        if ((3 < *(int *)((long)aiStack_a8 + lVar9)) &&
           (*(undefined8 **)((long)&lStack_a0 + lVar9) != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)((long)&lStack_a0 + lVar9))();
        }
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != -0x20);
      if (puStack_d8 != (undefined8 *)0x0) {
        (**(code **)*puStack_d8)();
      }
      if (puStack_d0 != (undefined8 *)0x0) {
        (**(code **)*puStack_d0)();
      }
      if ((3 < aiStack_100[0]) && (puStack_f8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_f8)();
      }
      if ((3 < iStack_118) && (puStack_110 != (undefined8 *)0x0)) {
        (**(code **)*puStack_110)();
      }
      if ((3 < iStack_130) && (ppuStack_128 != (undefined8 **)0x0)) {
        (*(code *)**ppuStack_128)();
      }
    }
    FUN_1098849a4(&ppuStack_98,plVar6,aiStack_170);
    FUN_109884c0c(apuStack_b8,auStack_158,plVar6);
    (**(code **)(*plVar6 + 0xb8))(&plStack_108,plVar6,plVar7,lVar5);
    FUN_1098962e4(apuStack_b8,plVar6,&plStack_108,&ppuStack_98);
    if (plStack_108 != (long *)0x0) {
      (**(code **)*plStack_108)();
    }
    if (apuStack_b8[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_b8[0])();
    }
    if ((3 < (int)ppuStack_98) && (plStack_90 != (long *)0x0)) {
      (**(code **)*plStack_90)();
    }
    if ((3 < iVar3) && (plStack_e0 != (long *)0x0)) {
      (**(code **)*plStack_e0)();
    }
    if ((3 < aiStack_170[0]) && (puStack_168 != (undefined8 *)0x0)) {
      (**(code **)*puStack_168)();
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    if ((3 < aiStack_148[0]) && (puStack_140 != (undefined8 *)0x0)) {
      (**(code **)*puStack_140)();
    }
  }
  if ((char)param_1[0xf] == '\x01') {
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(*plVar1);
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return;
}



/* Entry: 1098956bc; end: 109895707;  */

undefined1 ** FUN_1098956bc(undefined1 **param_1,long *param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  if (*(uint *)(param_1 + 0x14) != 0xffffffff) {
    puStack_18 = &uStack_19;
    ppuVar1 = &puStack_18;
    (*(code *)(&PTR_FUN_110b17010)[*(uint *)(param_1 + 0x14)])(ppuVar1,param_1 + 0xb);
    return ppuVar1;
  }
  FUN_1092612e0();
  *(undefined4 *)param_1 = 7;
  (**(code **)(*param_2 + 0x98))(param_2,*param_3);
  param_1[1] = (undefined1 *)param_2;
  return param_1;
}



/* Entry: 109895708; end: 109895777;  */

undefined4 * FUN_109895708(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  *param_1 = 7;
  (**(code **)(*param_2 + 0x98))(param_2,*param_3);
  *(long **)(param_1 + 2) = param_2;
  return param_1;
}



/* Entry: 109895778; end: 109895973;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109895778(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  undefined4 auStack_88 [2];
  long *plStack_80;
  undefined4 uStack_78;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 *puStack_48;
  
  (**(code **)(*(long *)*param_1 + 0x148))(&puStack_58);
  FUN_109882a90(&puStack_58,*param_1,&DAT_10f3dd81d,param_5);
  FUN_109882a90(&puStack_58,*param_1,&DAT_10f4653d9,param_4);
  FUN_109895974(&puStack_58,*param_1,&UNK_10f581eea,1);
  FUN_109895974(&puStack_58,*param_1,&UNK_10f581ef7,1);
  plVar1 = (long *)*param_1;
  auStack_88[0] = 7;
  (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)param_1[8]);
  plStack_80 = plVar1;
  (**(code **)(*(long *)*param_1 + 0x120))(aiStack_50,(long *)*param_1,param_2,param_3);
  uStack_78 = 6;
  aiStack_68[0] = 7;
  puStack_60 = puStack_58;
  puStack_58 = (undefined8 *)0x0;
  aiStack_50[0] = 0;
  (**(code **)(*(long *)*param_1 + 0x2a8))
            (aiStack_98,(long *)*param_1,param_1[1] + 0xd0,aiStack_50,auStack_88,3);
  if ((3 < aiStack_50[0]) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
    (**(code **)*puStack_90)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_68 + lVar2)) &&
       (*(undefined8 **)((long)&puStack_60 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&puStack_60 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x30);
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 109895974; end: 109895a6b;  */

void FUN_109895974(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_48;
  int aiStack_40 [2];
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0xb0))(&puStack_48,param_2,param_3,uVar1);
  aiStack_40[0] = 2;
  uStack_38 = param_4;
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,&puStack_48,aiStack_40);
  if ((3 < aiStack_40[0]) && ((undefined8 *)CONCAT71(uStack_37,uStack_38) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_37,uStack_38))();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  return;
}



/* Entry: 109895a6c; end: 109895b27;  */

void FUN_109895a6c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  plVar1 = (long *)((long)plVar7 + (param_2[1] - (long)plVar2));
  plVar3 = plVar7;
  plVar6 = plVar1;
  if (plVar2 != plVar7) {
    do {
      *plVar6 = *plVar3;
      plVar4 = plVar3 + 1;
      *plVar3 = 0;
      plVar3 = plVar4;
      plVar6 = plVar6 + 1;
    } while (plVar4 != plVar2);
    do {
      if ((undefined8 *)*plVar7 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar7)();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
    plVar7 = (long *)*param_1;
  }
  param_2[1] = plVar1;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar7;
  param_2[1] = plVar7;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109895b28; end: 109895b3b;  */

undefined1  [16] FUN_109895b28(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&UNK_10f582472;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  plVar5 = (long *)plVar2[2];
  while (plVar5 != plVar1) {
    plVar5 = plVar5 + -1;
    puVar4 = (undefined8 *)*plVar5;
    plVar2[2] = (long)plVar5;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
      plVar5 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 109895b3c; end: 109895c13;  */

undefined1  [16] FUN_109895b3c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    puVar3 = (undefined8 *)*plVar4;
    param_1[2] = (long)plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 109895c14; end: 109895c83;  */

void FUN_109895c14(undefined8 *param_1)

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
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar3)();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 109895c84; end: 109895d07;  */

ulong FUN_109895c84(long *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(*param_1 + 8);
  if ((long)uVar2 < 0) {
    pbVar3 = (byte *)(uVar2 & 0x7fffffffffffffff);
    uVar4 = 0x1505;
    do {
      uVar2 = uVar4;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar2 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  uVar2 = uVar2 + 0x9e3779b9;
  uVar4 = *param_2;
  uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar4 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  return uVar2 * 0x40 + (uVar2 >> 2) + (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297 + 0x9e3779b9 ^
         uVar2;
}



/* Entry: 109895d08; end: 109895d63;  */

undefined8 * FUN_109895d08(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_109895708(param_1 + 2,param_2,param_1);
  return param_1;
}



/* Entry: 109895d64; end: 109895e03;  */

void FUN_109895d64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109895dac(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}


