/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108216e00; end: 108217ba3;  */

bool FUN_108216e00(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_4;
  if (cVar1 != '\0') {
    lVar2 = (long)param_3 - (long)param_2;
    do {
      param_4 = param_4 + 1;
      if (((lVar2 < 2) || (*param_2 != '\0')) || (param_2[1] != cVar1)) {
        return false;
      }
      param_2 = param_2 + 2;
      cVar1 = *param_4;
      lVar2 = lVar2 + -2;
    } while (cVar1 != '\0');
  }
  return param_2 == param_3;
}



/* Entry: 108217ba4; end: 10821804f;  */

void FUN_108217ba4(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_54 [4];
  
  uVar9 = param_3 - (long)param_2;
  if ((long)uVar9 < 2) {
    return;
  }
  bVar1 = *param_2;
  uVar6 = (uint)bVar1;
  if (bVar1 == 0) {
    uVar5 = (ulong)param_2[1];
    bVar1 = *(byte *)(param_1 + uVar5 + 0x88);
    if (bVar1 < 0x16) {
      if (bVar1 == 5) goto LAB_108217da0;
      if (bVar1 == 6) {
        if (uVar9 == 2) {
          return;
        }
        goto LAB_108217da0;
      }
      if (bVar1 != 7) goto LAB_108217da0;
      goto LAB_108217c30;
    }
    if (bVar1 == 0x16 || bVar1 == 0x18) goto LAB_108217c84;
    if (bVar1 != 0x1d) goto LAB_108217da0;
  }
  else {
    if (bVar1 - 0xd8 < 4) {
LAB_108217c30:
      if (uVar9 < 4) {
        return;
      }
      goto LAB_108217da0;
    }
    if (uVar6 - 0xdc < 4) goto LAB_108217da0;
    if (uVar6 == 0xff) {
      uVar5 = (ulong)param_2[1];
      if (0xfd < param_2[1]) goto LAB_108217da0;
    }
    else {
      uVar5 = (ulong)param_2[1];
    }
  }
  if ((*(uint *)(&UNK_10df09f7c +
                (ulong)((uint)(uVar5 >> 5) | (uint)(byte)(&UNK_10df0a47c)[uVar6] << 3) * 4) >>
       (ulong)((uint)uVar5 & 0x1f) & 1) != 0) {
LAB_108217c84:
    if (param_3 - (long)(param_2 + 2) < 2) {
      return;
    }
    lVar10 = 0;
    lVar11 = 3;
    do {
      bVar1 = param_2[lVar11 + -1];
      uVar7 = (uint)bVar1;
      if (0xdb < uVar7) {
        if (bVar1 == 0xff) {
          uVar8 = (ulong)param_2[lVar11];
          if (param_2[lVar11] < 0xfe) {
LAB_108217ccc:
            uVar7 = *(uint *)(&UNK_10df09f7c +
                             (ulong)((uint)(uVar8 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3)
                             * 4) >> (ulong)((uint)uVar8 & 0x1f);
            goto joined_r0x000108217ce0;
          }
        }
        else if (3 < bVar1 - 0xdc) goto LAB_108217d54;
LAB_108217e28:
        pbVar4 = param_2 + (2 - lVar10);
        goto LAB_108217e34;
      }
      if (uVar7 == 0) {
        uVar8 = (ulong)param_2[lVar11];
        bVar2 = *(byte *)(param_1 + 0x88 + uVar8);
        uVar7 = (uint)bVar2;
        if (bVar2 < 0x18) {
          if (bVar2 < 0xf) {
            if (bVar2 < 9) {
              if (uVar7 != 5) {
                if (bVar2 != 6) {
                  if (bVar2 == 7) goto LAB_108217dcc;
                  goto LAB_108217e28;
                }
                if (uVar9 + lVar10 == 4) {
                  return;
                }
              }
              goto LAB_108217ddc;
            }
            if (1 < uVar7 - 9) goto LAB_108217e28;
LAB_108217df8:
            if ((uVar6 == 0) && (lVar10 == -4)) {
              if ((int)uVar5 == 0x78) {
                bVar3 = false;
              }
              else {
                if ((int)uVar5 != 0x58) goto LAB_108217ec0;
                bVar3 = true;
              }
              if (param_2[2] == 0) {
                if (param_2[3] != 0x6d) {
                  if (param_2[3] != 0x4d) goto LAB_108217ec0;
                  bVar3 = true;
                }
                if ((param_2[4] == 0) && ((param_2[5] == 0x4c || ((param_2[5] == 0x6c && (bVar3)))))
                   ) {
                  pbVar4 = param_2 + 6;
LAB_108217e34:
                  *param_4 = (long)pbVar4;
                  return;
                }
              }
            }
LAB_108217ec0:
            uVar9 = (uVar9 + lVar10) - 4;
            if ((long)uVar9 < 2) {
              return;
            }
            param_2 = param_2 + (4 - lVar10);
            goto LAB_108217f04;
          }
          if (bVar2 != 0x16) {
            if (bVar2 == 0xf) {
              pbVar4 = param_2;
              func_0x0001082185f8(param_2,param_2 + (2 - lVar10),auStack_54);
              if ((int)pbVar4 == 0) {
                *param_4 = (long)(param_2 + (2 - lVar10));
                return;
              }
              if ((long)(uVar9 + lVar10 + -4) < 2) {
                return;
              }
              pbVar4 = param_2 + (4 - lVar10);
              if ((param_2[lVar11 + 1] == 0) && (param_2[lVar11 + 2] == 0x3e)) {
                *param_4 = (long)(param_2 + (6 - lVar10));
                return;
              }
              goto LAB_108217e34;
            }
            if (bVar2 == 0x15) goto LAB_108217df8;
            goto LAB_108217e28;
          }
        }
        else if (3 < bVar2 - 0x18) {
          if (uVar7 == 0x1d) goto LAB_108217ccc;
          goto LAB_108217e28;
        }
      }
      else {
        if (uVar7 - 0xd8 < 4) {
LAB_108217dcc:
          if ((uVar9 + lVar10) - 2 < 4) {
            return;
          }
          goto LAB_108217ddc;
        }
LAB_108217d54:
        uVar7 = *(uint *)(&UNK_10df09f7c +
                         (ulong)((uint)(param_2[lVar11] >> 5) |
                                (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                (ulong)(param_2[lVar11] & 0x1f);
joined_r0x000108217ce0:
        if ((uVar7 & 1) == 0) {
LAB_108217ddc:
          pbVar4 = param_2 + (2 - lVar10);
          goto LAB_108217e34;
        }
      }
      lVar10 = lVar10 + -2;
      lVar11 = lVar11 + 2;
      if ((long)(uVar9 + lVar10 + -2) < 2) {
        return;
      }
    } while( true );
  }
LAB_108217da0:
  *param_4 = (long)param_2;
  return;
LAB_108217f04:
  bVar1 = *param_2;
  uVar6 = (uint)bVar1;
  if (uVar6 < 0xdc) {
    if (3 < uVar6 - 0xd8) {
      if (uVar6 == 0) {
        bVar1 = *(byte *)(param_1 + 0x88 + (ulong)param_2[1]);
        if (bVar1 < 7) {
          if (bVar1 != 5) {
            if (bVar1 == 6) {
              if (uVar9 == 2) {
                return;
              }
              pbVar4 = param_2 + 3;
              goto LAB_108217ef4;
            }
            if (bVar1 < 2) goto LAB_108217fbc;
          }
        }
        else {
          if (bVar1 == 7) goto LAB_108217f1c;
          if (bVar1 == 0xf) {
            pbVar4 = param_2 + 2;
            if (param_3 - (long)pbVar4 < 2) {
              return;
            }
            if ((*pbVar4 == 0) && (param_2[3] == 0x3e)) {
              *param_4 = (long)(param_2 + 4);
              return;
            }
            goto LAB_108217ef4;
          }
          if (bVar1 == 8) goto LAB_108217fbc;
        }
      }
      goto LAB_108217ef0;
    }
LAB_108217f1c:
    if (uVar9 < 4) {
      return;
    }
    pbVar4 = param_2 + 4;
  }
  else {
    if (bVar1 == 0xff) {
      if (0xfd < param_2[1]) {
LAB_108217fbc:
        *param_4 = (long)param_2;
        return;
      }
    }
    else if (bVar1 - 0xdc < 4) goto LAB_108217fbc;
LAB_108217ef0:
    pbVar4 = param_2 + 2;
  }
LAB_108217ef4:
  param_2 = pbVar4;
  uVar9 = param_3 - (long)param_2;
  if ((long)uVar9 < 2) {
    return;
  }
  goto LAB_108217f04;
}



/* Entry: 108218050; end: 108218ab7;  */

undefined8 FUN_108218050(long param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar6 = param_3 - (long)param_2;
  uVar5 = uVar6 - 2;
  if ((long)uVar6 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  uVar8 = (uint)bVar1;
  if (bVar1 < 0xdc) {
    if (uVar8 - 0xd8 < 4) {
LAB_108218074:
      if (uVar6 < 4) {
        return 0xfffffffe;
      }
    }
    else if (uVar8 == 0) {
      uVar7 = (ulong)param_2[1];
      bVar2 = *(byte *)(param_1 + uVar7 + 0x88);
      uVar8 = (uint)bVar2;
      if (bVar2 < 0x1f) {
        uVar3 = 1 << (ulong)(uVar8 & 0x1f);
        if ((uVar3 & 0x40200600) != 0) {
          uVar4 = 0x16;
          goto LAB_108218094;
        }
        if ((uVar3 & 0x1400000) != 0) goto LAB_108218118;
        if (uVar8 == 0x1d) goto LAB_1082180f0;
      }
      if (uVar8 == 6) {
        if (uVar6 == 2) {
          return 0xfffffffe;
        }
      }
      else if (uVar8 == 7) goto LAB_108218074;
    }
    else {
LAB_1082180ec:
      uVar7 = (ulong)param_2[1];
LAB_1082180f0:
      if ((*(uint *)(&UNK_10df09f7c +
                    (ulong)((uint)(uVar7 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4) >>
           (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
LAB_108218118:
        if ((long)uVar5 < 2) {
          return 0xffffffff;
        }
        param_2 = param_2 + 4;
LAB_108218184:
        bVar1 = param_2[-2];
        uVar8 = (uint)bVar1;
        if (uVar8 < 0xdc) {
          if (uVar8 != 0) {
            if (uVar8 - 0xd8 < 4) {
LAB_108218264:
              if (uVar5 < 4) {
                return 0xfffffffe;
              }
            }
            else {
LAB_1082181d8:
              uVar8 = *(uint *)(&UNK_10df09f7c +
                               (ulong)((uint)(param_2[-1] >> 5) |
                                      (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                      (ulong)(param_2[-1] & 0x1f);
joined_r0x0001082181f0:
              if ((uVar8 & 1) != 0) goto LAB_108218174;
            }
            goto LAB_108218284;
          }
          uVar6 = (ulong)param_2[-1];
          bVar2 = *(byte *)(param_1 + 0x88 + uVar6);
          uVar8 = (uint)bVar2;
          if (0x17 < bVar2) {
            if (3 < uVar8 - 0x18) {
              if (uVar8 == 0x1d) goto LAB_10821815c;
              goto LAB_108218284;
            }
LAB_108218174:
            uVar5 = uVar5 - 2;
            param_2 = param_2 + 2;
            if ((long)uVar5 < 2) {
              return 0xffffffff;
            }
            goto LAB_108218184;
          }
          if (bVar2 < 0x16) {
            if (uVar8 != 6) {
              if (uVar8 == 7) goto LAB_108218264;
              if (uVar8 != 0x12) goto LAB_108218284;
              uVar4 = 0x1c;
              goto LAB_108218094;
            }
            if (uVar5 == 2) {
              return 0xfffffffe;
            }
          }
          else if (uVar8 == 0x16) goto LAB_108218174;
        }
        else if (bVar1 == 0xff) {
          uVar6 = (ulong)param_2[-1];
          if (param_2[-1] < 0xfe) {
LAB_10821815c:
            uVar8 = *(uint *)(&UNK_10df09f7c +
                             (ulong)((uint)(uVar6 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3)
                             * 4) >> (ulong)((uint)uVar6 & 0x1f);
            goto joined_r0x0001082181f0;
          }
        }
        else if (3 < bVar1 - 0xdc) goto LAB_1082181d8;
LAB_108218284:
        uVar4 = 0;
        param_2 = param_2 + -2;
        goto LAB_108218094;
      }
    }
  }
  else if (3 < uVar8 - 0xdc) {
    if (uVar8 != 0xff) goto LAB_1082180ec;
    uVar7 = (ulong)param_2[1];
    if (param_2[1] < 0xfe) goto LAB_1082180f0;
  }
  uVar4 = 0;
LAB_108218094:
  *param_4 = param_2;
  return uVar4;
}



/* Entry: 108218ab8; end: 1082194f3;  */

ulong FUN_108218ab8(ulong param_1,byte *param_2,long param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbStack_68;
  
  uVar7 = param_3 - (long)param_2;
  if ((long)uVar7 < 2) {
    return 0xffffffff;
  }
  bVar1 = false;
  lVar2 = param_1 + 0x88;
LAB_108218b18:
  bVar3 = *param_2;
  uVar5 = (uint)bVar3;
  if (0xdb < bVar3) {
    if (uVar5 == 0xff) {
      uVar9 = (ulong)param_2[1];
      if (param_2[1] < 0xfe) goto LAB_108218b90;
    }
    else if (3 < uVar5 - 0xdc) goto LAB_108218b8c;
    goto LAB_108218ffc;
  }
  if (uVar5 == 0) {
    uVar9 = (ulong)param_2[1];
    bVar4 = *(byte *)(lVar2 + uVar9);
    uVar5 = (uint)bVar4;
    if (bVar4 < 0x17) {
      if (bVar4 < 0xe) {
        if (uVar5 - 9 < 2) {
LAB_108218bf0:
          param_2 = param_2 + 2;
          lVar6 = param_3 - (long)param_2;
          while( true ) {
            if (lVar6 < 2) {
              return 0xffffffff;
            }
            if (*param_2 != 0) goto LAB_108218ffc;
            bVar3 = *(byte *)(lVar2 + (ulong)param_2[1]);
            if (1 < bVar3 - 9 && bVar3 != 0x15) break;
            param_2 = param_2 + 2;
            lVar6 = lVar6 + -2;
          }
          if (bVar3 == 0xe) {
LAB_108218c8c:
            param_2 = param_2 + 2;
            lVar6 = param_3 - (long)param_2;
            if (lVar6 < 2) {
              return 0xffffffff;
            }
            while( true ) {
              if (*param_2 != 0) goto LAB_108218ffc;
              bVar3 = *(byte *)(lVar2 + (ulong)param_2[1]);
              if ((bVar3 & 0xfe) == 0xc) break;
              if (0x15 < bVar3 || (1 << (ulong)(bVar3 & 0x1f) & 0x200600U) == 0) goto LAB_108218ffc;
              param_2 = param_2 + 2;
              lVar6 = lVar6 + -2;
              if (lVar6 < 2) {
                return 0xffffffff;
              }
            }
            pbStack_68 = param_2 + 2;
            uVar7 = lVar6 - 2;
            if ((long)uVar7 < 2) {
              return 0xffffffff;
            }
            do {
              uVar5 = (uint)*pbStack_68;
              if (*pbStack_68 < 0xdc) {
                if (uVar5 - 0xd8 < 4) {
                  bVar4 = 7;
                }
                else if (uVar5 == 0) {
                  bVar4 = *(byte *)(lVar2 + (ulong)pbStack_68[1]);
                }
                else {
LAB_108218d94:
                  bVar4 = 0x1d;
                }
              }
              else if (uVar5 - 0xdc < 4) {
                bVar4 = 8;
              }
              else {
                if ((uVar5 != 0xff) || (pbStack_68[1] < 0xfe)) goto LAB_108218d94;
                bVar4 = 0;
              }
              if (bVar4 == bVar3) goto LAB_108218ea8;
              if (bVar4 < 6) {
                if (bVar4 == 3) {
                  uVar7 = param_1;
                  func_0x0001082186a4(param_1,pbStack_68 + 2,param_3,&pbStack_68);
                  if ((int)uVar7 < 1) {
                    param_2 = pbStack_68;
                    if ((int)uVar7 != 0) {
                      return uVar7;
                    }
                    goto LAB_108219000;
                  }
                }
                else {
                  if ((bVar4 != 5) && (bVar4 < 3)) goto LAB_108219034;
LAB_108218d1c:
                  pbStack_68 = pbStack_68 + 2;
                }
              }
              else if (bVar4 == 6) {
                if (uVar7 == 2) {
                  return 0xfffffffe;
                }
                pbStack_68 = pbStack_68 + 3;
              }
              else {
                if (bVar4 != 7) {
                  if (bVar4 != 8) goto LAB_108218d1c;
                  goto LAB_108219034;
                }
                if (uVar7 < 4) {
                  return 0xfffffffe;
                }
                pbStack_68 = pbStack_68 + 4;
              }
              uVar7 = param_3 - (long)pbStack_68;
              if ((long)uVar7 < 2) {
                return 0xffffffff;
              }
            } while( true );
          }
        }
        else if (uVar5 == 6) {
          if (uVar7 == 2) {
            return 0xfffffffe;
          }
        }
        else if (uVar5 == 7) goto LAB_108218fe4;
      }
      else {
        if (uVar5 == 0xe) goto LAB_108218c8c;
        if (uVar5 == 0x15) goto LAB_108218bf0;
        if (uVar5 == 0x16) goto LAB_108218ba8;
      }
      goto LAB_108218ffc;
    }
    if (uVar5 - 0x18 < 4) goto LAB_108218ba8;
    if (uVar5 != 0x17) {
      if (uVar5 == 0x1d) goto LAB_108218b90;
      goto LAB_108218ffc;
    }
    if (bVar1) goto LAB_108218ffc;
    pbStack_68 = param_2 + 2;
    uVar7 = param_3 - (long)pbStack_68;
    if ((long)uVar7 < 2) {
      return 0xffffffff;
    }
    bVar3 = *pbStack_68;
    uVar5 = (uint)bVar3;
    if (bVar3 < 0xdc) {
      if (uVar5 == 0) {
        uVar9 = (ulong)param_2[3];
        bVar4 = *(byte *)(lVar2 + uVar9);
        if (bVar4 < 0x18) {
          if (bVar4 == 0x16) goto LAB_108218e9c;
          if (bVar4 == 6) {
            if (uVar7 == 2) {
              return 0xfffffffe;
            }
          }
          else if (bVar4 == 7) goto LAB_10821902c;
        }
        else {
          if (bVar4 == 0x18) {
LAB_108218e9c:
            param_2 = param_2 + 4;
            bVar1 = true;
            goto LAB_108218bac;
          }
          if (bVar4 == 0x1d) goto LAB_108218e84;
        }
      }
      else if (uVar5 - 0xd8 < 4) {
LAB_10821902c:
        if (uVar7 < 4) {
          return 0xfffffffe;
        }
      }
      else {
LAB_108218e80:
        uVar9 = (ulong)param_2[3];
LAB_108218e84:
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)((uint)(uVar9 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar3] << 3) * 4) >>
             (ulong)((uint)uVar9 & 0x1f) & 1) != 0) goto LAB_108218e9c;
      }
    }
    else if (uVar5 == 0xff) {
      uVar9 = (ulong)param_2[3];
      if (param_2[3] < 0xfe) goto LAB_108218e84;
    }
    else if (3 < uVar5 - 0xdc) goto LAB_108218e80;
    goto LAB_108219034;
  }
  if (3 < uVar5 - 0xd8) {
LAB_108218b8c:
    uVar9 = (ulong)param_2[1];
LAB_108218b90:
    if ((*(uint *)(&UNK_10df09f7c +
                  (ulong)((uint)(uVar9 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar3] << 3) * 4) >>
         (ulong)((uint)uVar9 & 0x1f) & 1) == 0) goto LAB_108218ffc;
LAB_108218ba8:
    param_2 = param_2 + 2;
    goto LAB_108218bac;
  }
LAB_108218fe4:
  if (uVar7 < 4) {
    return 0xfffffffe;
  }
  goto LAB_108218ffc;
LAB_108218ea8:
  param_2 = pbStack_68 + 2;
  if (param_3 - (long)param_2 < 2) {
    return 0xffffffff;
  }
  if (*param_2 != 0) {
LAB_108218ffc:
    uVar7 = 0;
    goto LAB_108219000;
  }
  uVar5 = (uint)*(byte *)(lVar2 + (ulong)pbStack_68[3]);
  uVar7 = 0;
  if (*(byte *)(lVar2 + (ulong)pbStack_68[3]) < 0xb) {
    if (1 < uVar5 - 9) goto LAB_108219000;
LAB_108218ef8:
    pbVar8 = pbStack_68 + 4;
    if (param_3 - (long)pbVar8 < 2) {
      return 0xffffffff;
    }
    param_2 = pbStack_68 + 6;
    lVar6 = (param_3 + -6) - (long)pbStack_68;
    while( true ) {
      bVar3 = param_2[-2];
      uVar7 = (ulong)bVar3;
      if (bVar3 != 0) break;
      bVar3 = *(byte *)(lVar2 + (ulong)param_2[-1]);
      if (bVar3 < 0xb) {
        if (1 < bVar3 - 9) {
          if (bVar3 == 6) {
            if (lVar6 == 0) {
              return 0xfffffffe;
            }
          }
          else if (bVar3 == 7) goto LAB_108219050;
          goto LAB_10821905c;
        }
      }
      else {
        if (0x15 < bVar3) {
          if (bVar3 == 0x16 || bVar3 == 0x18) goto LAB_108218fcc;
          if (bVar3 == 0x1d) goto LAB_108218fa8;
          goto LAB_10821905c;
        }
        if (bVar3 != 0x15) {
          if (bVar3 == 0xb) {
            param_2 = param_2 + -2;
            goto LAB_108219100;
          }
          if (bVar3 != 0x11) goto LAB_10821905c;
          param_2 = param_2 + -2;
          goto LAB_10821909c;
        }
      }
      pbVar8 = pbVar8 + 2;
      param_2 = param_2 + 2;
      bVar1 = lVar6 < 2;
      lVar6 = lVar6 + -2;
      if (bVar1) {
        return 0xffffffff;
      }
    }
    if (bVar3 - 0xd8 < 4) {
LAB_108219050:
      if (lVar6 + 2U < 4) {
        return 0xfffffffe;
      }
    }
    else if (3 < bVar3 - 0xdc) {
      if (bVar3 == 0xff) {
        if (0xfd < param_2[-1]) {
          uVar7 = 0;
          param_2 = pbVar8;
          goto LAB_108219000;
        }
        uVar7 = 0xff;
      }
LAB_108218fa8:
      pbStack_68 = param_2 + -2;
      if ((*(uint *)(&UNK_10df09f7c +
                    (ulong)((uint)(param_2[-1] >> 5) | (uint)(byte)(&UNK_10df0a47c)[uVar7] << 3) * 4
                    ) >> (ulong)(param_2[-1] & 0x1f) & 1) != 0) {
LAB_108218fcc:
        bVar1 = false;
LAB_108218bac:
        uVar7 = param_3 - (long)param_2;
        if ((long)uVar7 < 2) {
          return 0xffffffff;
        }
        goto LAB_108218b18;
      }
      goto LAB_108219034;
    }
LAB_10821905c:
    uVar7 = 0;
    param_2 = param_2 + -2;
  }
  else {
    if (uVar5 == 0x15) goto LAB_108218ef8;
    if (uVar5 == 0xb) {
LAB_108219100:
      uVar7 = 1;
      param_2 = param_2 + 2;
      goto LAB_108219000;
    }
    if (uVar5 != 0x11) goto LAB_108219000;
LAB_10821909c:
    pbStack_68 = param_2 + 2;
    if (param_3 - (long)pbStack_68 < 2) {
      return 0xffffffff;
    }
    if (*pbStack_68 == 0) {
      pbVar8 = param_2 + 4;
      if (param_2[3] != 0x3e) {
        pbVar8 = pbStack_68;
      }
      uVar5 = 3;
      if (param_2[3] != 0x3e) {
        uVar5 = 0;
      }
      uVar7 = (ulong)uVar5;
      param_2 = pbVar8;
      goto LAB_108219000;
    }
LAB_108219034:
    uVar7 = 0;
    param_2 = pbStack_68;
  }
LAB_108219000:
  *param_4 = (long)param_2;
  return uVar7;
}



/* Entry: 1082194f4; end: 1082195c3;  */

undefined8 * FUN_1082194f4(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != (ulong *)0x0) {
    puVar1 = &uStack_30;
    uStack_28 = *(undefined8 *)(param_1 + 8);
    uStack_30 = 0;
    func_0x000108219544();
    if ((int)puVar1 != 0) {
      *param_2 = *param_2 & 0xfffffffefffffffe;
      puVar1 = (undefined8 *)0x1;
    }
    return puVar1;
  }
  return (undefined8 *)(undefined1 *)0x0;
}



/* Entry: 1082195c4; end: 1082195fb;  */

int FUN_1082195c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x458);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) >> 1 & 1) != 0)) {
    return *(int *)(lVar1 + 0x3c) + -1;
  }
  return 0;
}



/* Entry: 1082195fc; end: 10821985f;  */

ulong FUN_1082195fc(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 auStack_e8 [8];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_ac;
  undefined1 auStack_98 [16];
  long lStack_88;
  
  lVar6 = *(long *)(param_1 + 0x458);
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x30) >> 1 & 1) == 0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = (*(long *)(param_1 + 0x480) - *(long *)(param_1 + 0x478)) / 0x38;
    if ((*(byte *)(param_1 + 0x490) & 1) == 0) {
      uVar1 = *(uint *)(lVar6 + 0x44);
      if (uVar1 != (uint)uVar9) {
        if ((ulong)((*(long *)(param_1 + 0x488) - *(long *)(param_1 + 0x478)) / 0x38) <
            (ulong)(long)(int)uVar1) {
          if ((int)uVar1 < 0) {
            FUN_10821a704();
            puVar5 = auStack_e8;
            FUN_10821a890();
            func_0x00010821ab3c();
            return *(long *)(puVar5 + 0x10) + (long)param_2 * 0x38;
          }
          FUN_10821a80c(auStack_e8,(long)(int)uVar1,uVar9,param_1 + 0x488);
          FUN_10821a718(param_1 + 0x478,auStack_e8);
          FUN_10821a890(auStack_e8);
        }
        while (uVar8 = (uint)uVar9, uVar8 < uVar1) {
          uVar4 = *(undefined8 *)(param_1 + 0x458);
          FUN_10822111c(uVar4,uVar8 + 1,auStack_e8);
          if ((int)uVar4 == 0) {
            *(undefined1 *)(param_1 + 0x490) = 1;
            break;
          }
          lVar6 = (long)(*(ulong *)(param_1 + 0x480) - *(long *)(param_1 + 0x478)) / 0x38;
          if (*(ulong *)(param_1 + 0x480) < *(ulong *)(param_1 + 0x488)) {
            func_0x00010821aaa4();
            lVar11 = extraout_x8 + 0x38;
            *(long *)(param_1 + 0x480) = lVar11;
          }
          else {
            uVar9 = lVar6 + 1;
            if (0x492492492492492 < uVar9) {
              FUN_10821a704();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x108219834);
              (*pcVar3)();
            }
            uVar2 = (long)(*(ulong *)(param_1 + 0x488) - *(long *)(param_1 + 0x478)) / 0x38;
            uVar7 = uVar2 * 2;
            if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
              uVar7 = uVar9;
            }
            if (0x249249249249248 < uVar2) {
              uVar7 = 0x492492492492492;
            }
            FUN_10821a80c(auStack_98,uVar7,lVar6,param_1 + 0x488);
            func_0x00010821aaa4(lStack_88);
            lStack_88 = extraout_x8_00 + 0x38;
            FUN_10821a718(param_1 + 0x478,auStack_98);
            lVar11 = *(long *)(param_1 + 0x480);
            FUN_10821a890(auStack_98);
          }
          *(long *)(param_1 + 0x480) = lVar11;
          lVar6 = *(long *)(param_1 + 0x478) + (long)(int)lVar6 * 0x38;
          func_0x00010814c934(lVar6 + 0x14,uStack_e0,uStack_dc,uStack_d8,uStack_d4);
          uVar10 = 1;
          if (iStack_cc == 1) {
            uVar10 = 2;
          }
          *(undefined4 *)(lVar6 + 0x24) = uVar10;
          *(undefined4 *)(lVar6 + 0x28) = uStack_d0;
          if (iStack_ac != 0) {
            *(undefined4 *)(lVar6 + 0x2c) = 1;
          }
          FUN_10821c1ec(param_1 + 0x468,lVar6);
          uVar9 = (ulong)(uVar8 + 1);
        }
        uVar9 = (*(long *)(param_1 + 0x480) - *(long *)(param_1 + 0x478)) / 0x38;
      }
    }
  }
  return uVar9;
}



/* Entry: 108219860; end: 10821986f;  */

long FUN_108219860(long param_1,int param_2)

{
  return *(long *)(param_1 + 0x10) + (long)param_2 * 0x38;
}



/* Entry: 108219870; end: 1082198c7;  */

bool FUN_108219870(long param_1,int param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)((*(long *)(param_1 + 0x480) - *(long *)(param_1 + 0x478)) / 0x38);
  if ((param_3 != 0) && (param_2 < iVar1)) {
    FUN_10821c184(*(long *)(param_1 + 0x478) + (long)param_2 * 0x38,param_3,1);
  }
  return param_2 < iVar1;
}



/* Entry: 1082198c8; end: 108219ff7;  */

undefined1  [16]
FUN_1082198c8(long param_1,undefined8 *param_2,long param_3,ulong param_4,uint *param_5,int *param_6
             )

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  int extraout_w8;
  ulong uVar14;
  int iVar15;
  ulong *puVar16;
  int iVar17;
  ulong *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 uVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_410;
  ulong *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  int iStack_3cc;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  int iStack_3b0;
  uint uStack_3a0;
  int *piStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong *puStack_360;
  undefined1 auStack_358 [8];
  uint uStack_350;
  uint uStack_34c;
  int iStack_348;
  uint uStack_344;
  ulong *puStack_330;
  ulong *puStack_328;
  int iStack_320;
  int iStack_31c;
  undefined4 *puStack_308;
  undefined1 auStack_300 [40];
  undefined4 auStack_2d8 [3];
  undefined4 uStack_2cc;
  ulong *puStack_2c8;
  int iStack_2c0;
  ulong uStack_2b8;
  undefined4 uStack_258;
  ulong uStack_254;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined1 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_5[4];
  _bzero(auStack_300,0xf0);
  puStack_308 = auStack_2d8;
  FUN_10822111c(*(undefined8 *)(param_1 + 0x458),uVar19 + 1,auStack_358);
  if (uVar19 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(*(long *)(param_1 + 0x478) + (long)(int)uVar19 * 0x38 + 0x10) == -1;
  }
  uVar22 = (ulong)uStack_350;
  puVar9 = (ulong *)(ulong)uStack_34c;
  uVar13 = (ulong)uStack_344;
  iVar10 = iStack_348;
  FUN_108219ff8();
  iVar17 = (int)((ulong)puVar9 >> 0x20);
  bVar4 = true;
  if (((int)uVar22 == 0) && (uVar22 >> 0x20 == 0)) {
    bVar4 = (int)puVar9 != (int)*(ulong *)(param_1 + 8) ||
            (ulong)puVar9 >> 0x20 != *(ulong *)(param_1 + 8) >> 0x20;
  }
  uStack_368 = uVar22;
  puStack_360 = puVar9;
  if ((bool)(bVar3 & bVar4)) {
    uVar13 = (ulong)*param_5;
    uVar22 = param_4;
    FUN_10821ea6c(param_2,param_3);
    iVar10 = (int)uVar22;
    uVar22 = uStack_368 & 0xffffffff;
    puVar9 = (ulong *)((ulong)puStack_360 & 0xffffffff);
    iVar17 = (int)((ulong)puStack_360 >> 0x20);
  }
  uVar26 = uStack_368 >> 0x20;
  puVar16 = *(ulong **)(param_5 + 2);
  iVar15 = (int)uVar22;
  iVar25 = (int)(uStack_368 >> 0x20);
  if (puVar16 == (ulong *)0x0) {
    uVar20 = (ulong)(uint)((int)puVar9 - iVar15);
    iVar17 = iVar17 - iVar25;
LAB_108219aa8:
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    uStack_208 = puVar16[1];
    uStack_210 = (int *)*puVar16;
    uVar22 = 0;
    puVar9 = &uStack_368;
    FUN_10821a044();
    iVar12 = (int)uVar13;
    if ((uVar22 & 1) == 0) {
      uVar24 = 0;
      goto LAB_108219f0c;
    }
    iVar17 = (int)uStack_210;
    if (iVar15 <= (int)uStack_210) {
      iVar17 = iVar15;
    }
    iVar12 = uStack_210._4_4_;
    if (iVar25 <= uStack_210._4_4_) {
      iVar12 = iVar25;
    }
    func_0x00010821ab14(&uStack_368);
    func_0x00010821ab14(&uStack_210);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    puVar9 = &uStack_368;
    iVar10 = (int)&uStack_210;
    FUN_10838ea90(&uStack_3c0);
    uVar22 = (ulong)(uint)(iVar15 - iVar17);
    uVar26 = (ulong)(uint)(iVar25 - iVar12);
    uStack_24c = (int)uStack_3b8 - (int)uStack_3c0;
    uVar20 = (ulong)uStack_24c;
    iVar17 = uStack_3b8._4_4_ - uStack_3c0._4_4_;
    uStack_258 = 1;
    uStack_254 = (ulong)uStack_210;
    uVar5 = *(ulong *)(param_5 + 2);
    iStack_248 = iVar17;
    if (uVar5 == 0) goto LAB_108219aa8;
    func_0x00010821a0c0();
  }
  iVar12 = (int)uVar13;
  uVar14 = param_2[2];
  iVar15 = (int)(uVar14 >> 0x20);
  uVar21 = uVar20;
  if ((int)uVar5 != (int)uVar14 || uVar5 >> 0x20 != uVar14 >> 0x20) {
    uStack_244 = 1;
    uVar21 = uVar14;
    if (bVar4) {
      uVar24 = 0;
      fVar27 = (float)(int)uVar14 / (float)(int)uVar5;
      uVar19 = (uint)(fVar27 * (float)(int)uVar20);
      if (uVar19 == 0) goto LAB_108219f0c;
      fVar28 = (float)iVar15 / (float)(int)(uVar5 >> 0x20);
      iVar15 = (int)(fVar28 * (float)iVar17);
      if (iVar15 == 0) goto LAB_108219f0c;
      uVar22 = (ulong)(uint)(int)(fVar27 * (float)(int)uVar22);
      uVar26 = (ulong)(uint)(int)(fVar28 * (float)(int)uVar26);
      uVar21 = (ulong)uVar19;
    }
    iVar17 = iVar15;
    uStack_240 = (undefined4)uVar21;
    iStack_23c = iVar17;
  }
  if (iStack_31c != 0) {
    bVar3 = true;
  }
  bVar3 = !bVar3;
  bVar4 = iStack_320 != 0;
  piStack_380 = (int *)*param_2;
  if (piStack_380 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_380,0x10);
      if (bVar2) {
        *piStack_380 = *piStack_380 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar14 = param_2[2];
  }
  uStack_378 = param_2[1];
  uStack_370 = uVar14;
  if (iStack_320 == 0) {
    FUN_10814bd9c(&uStack_210,&piStack_380,1);
    func_0x00010821aa98();
LAB_108219bd0:
    func_0x00010821aac8();
  }
  else if (*(int *)(param_1 + 0x70) != 0 || bVar3 && bVar4) {
    FUN_10814bd9c(&uStack_210,&piStack_380,3);
    func_0x00010821aa98();
    goto LAB_108219bd0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    func_0x00010821ab58();
LAB_108219c3c:
    if (!bVar3 || !bVar4) goto LAB_108219c1c;
LAB_108219c40:
    FUN_108330980(&uStack_3c0,&piStack_380);
  }
  else {
    func_0x0001078bdd84(&uStack_210,&piStack_380,6);
    func_0x00010821aa98();
    func_0x00010821aac8();
    func_0x00010821ab58(*(undefined4 *)(param_1 + 0x70));
    if (extraout_w8 == 0) goto LAB_108219c3c;
    if ((*(uint *)(param_2 + 1) & 0xfffffffd) != 4 || bVar3 && bVar4) goto LAB_108219c40;
LAB_108219c1c:
    uVar13 = param_4;
    FUN_10814bdf0(&uStack_3c0,&piStack_380,param_3);
  }
  if ((int)uStack_378 == 2) {
    auStack_2d8[0] = 6;
  }
  else if ((int)uStack_378 == 4) {
    auStack_2d8[0] = 7;
    if (uStack_378._4_4_ != 2) {
      auStack_2d8[0] = 1;
    }
  }
  else if ((int)uStack_378 == 6) {
    auStack_2d8[0] = 8;
    if (uStack_378._4_4_ != 2) {
      auStack_2d8[0] = 3;
    }
  }
  else {
    auStack_2d8[0] = 0xd;
  }
  uStack_2cc = 1;
  puVar9 = &uStack_3c0;
  FUN_108330d14(puVar9,uVar22,uVar26);
  iStack_2c0 = iStack_3b0;
  uVar20 = (ulong)&uStack_3c0 | 8;
  puStack_2c8 = puVar9;
  FUN_10821a8d8();
  iVar10 = (int)auStack_300;
  lVar6 = 0;
  puVar9 = (ulong *)0x0;
  uStack_2b8 = uVar20;
  func_0x0001082259c8();
  iVar12 = (int)uVar13;
  lStack_3c8 = lVar6;
  if (lVar6 == 0) {
LAB_108219d14:
    uVar24 = 6;
  }
  else {
    iStack_3cc = 0;
    lVar7 = lVar6;
    FUN_108226324();
    iVar12 = (int)uVar13;
    iVar10 = (int)puStack_328;
    if ((int)lVar7 == 5) {
      puVar9 = (ulong *)&iStack_3cc;
      puVar16 = (ulong *)0x0;
      uVar13 = 0;
      FUN_1082263d4();
      iVar12 = (int)uVar13;
      iVar10 = (int)puVar16;
      uVar24 = 6;
      if ((lVar6 == 0) || (iStack_3cc < 1)) goto LAB_108219ef4;
      *param_6 = iStack_3cc + (int)uVar26;
      uVar24 = 1;
    }
    else {
      puVar9 = puStack_330;
      if ((int)lVar7 != 0) goto LAB_108219d14;
      uVar24 = 0;
      puVar16 = puStack_328;
      iStack_3cc = iVar17;
    }
    puVar8 = param_2;
    func_0x00010835c63c();
    puVar11 = puStack_2c8;
    iVar12 = (int)uVar13;
    iVar10 = (int)puVar16;
    puVar18 = (ulong *)(param_3 + (long)(int)puVar8 * (long)(int)uVar22 +
                       param_4 * (long)(int)uVar26);
    uVar19 = *(uint *)(param_2 + 1);
    puVar9 = (ulong *)(ulong)uVar19;
    if (*(int *)(param_1 + 0x70) == 0) {
      if (bVar3 && bVar4) {
        puVar11 = (ulong *)(ulong)uStack_3a0;
        uVar22 = (ulong)*(uint *)((long)param_2 + 0xc);
        FUN_10821a130(&uStack_210);
        iVar17 = 0;
        puVar16 = puStack_2c8;
        while( true ) {
          iVar12 = (int)uVar22;
          iVar10 = (int)puVar11;
          if (iStack_3cc <= iVar17) break;
          puVar9 = puVar18;
          puVar11 = puVar16;
          uVar22 = uVar21;
          func_0x00010821a0d8(&uStack_210);
          puVar16 = (ulong *)((long)puVar16 + (long)iStack_2c0);
          puVar18 = (ulong *)((long)puVar18 + param_4);
          iVar17 = iVar17 + 1;
        }
        func_0x00010821ab08();
      }
    }
    else {
      uStack_3e0 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      puStack_408 = (ulong *)0x0;
      uStack_410 = 0;
      if (bVar3 && bVar4) {
        uStack_210 = (int *)*param_2;
        if (uStack_210 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(uStack_210,0x10);
            if (bVar2) {
              *uStack_210 = *uStack_210 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_208 = param_2[1];
        uStack_200 = uVar21 & 0xffffffff | 0x100000000;
        FUN_108330980(&uStack_410,&uStack_210);
        func_0x00010821aac8();
        puVar23 = puStack_408;
        uStack_210 = (int *)((ulong)uStack_210 & 0xffffffffffffff00);
        uStack_78 = 0;
        uVar13 = (ulong)*(uint *)((long)param_2 + 0xc);
        puVar9 = (ulong *)(ulong)uVar19;
        puVar16 = puVar9;
        FUN_10821a130(&uStack_210);
        uStack_78 = 1;
      }
      else {
        uStack_210 = (int *)((ulong)uStack_210 & 0xffffffffffffff00);
        uStack_78 = 0;
        puVar23 = puVar18;
      }
      iVar17 = 0;
      while( true ) {
        iVar12 = (int)uVar13;
        iVar10 = (int)puVar16;
        if (iStack_3cc <= iVar17) break;
        puVar9 = puVar23;
        puVar16 = puVar11;
        uVar13 = uVar21;
        FUN_10821c06c(param_1);
        if (bVar3 && bVar4) {
          puVar9 = puVar18;
          puVar16 = puVar23;
          uVar13 = uVar21;
          func_0x00010821a0d8(&uStack_210);
          puVar18 = (ulong *)((long)puVar18 + param_4);
        }
        else {
          puVar23 = (ulong *)((long)puVar23 + param_4);
        }
        puVar11 = (ulong *)((long)puVar11 + (long)iStack_2c0);
        iVar17 = iVar17 + 1;
      }
      FUN_10821a100(&uStack_210);
      FUN_108330548(&uStack_410);
    }
  }
LAB_108219ef4:
  func_0x00010821a99c(&lStack_3c8);
  FUN_108330548(&uStack_3c0);
  FUN_10810a400(&piStack_380);
LAB_108219f0c:
  func_0x00010821a9c0(&puStack_308);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar29._8_8_ = puVar9;
    auVar29._0_8_ = uVar24;
    return auVar29;
  }
  ___stack_chk_fail();
  func_0x00010821a99c(&lStack_3c8);
  FUN_108330548(&uStack_3c0);
  FUN_10810a400(&piStack_380);
  uVar19 = (uint)&puStack_308;
  func_0x00010821a9c0();
  func_0x00010821ab3c();
  uVar22 = (long)iVar10 + (long)(int)uVar19;
  if ((long)uVar22 < -0x7ffffffe) {
    uVar22 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar22) {
    uVar22 = 0x7fffffff;
  }
  lVar6 = (long)iVar12 + (long)(int)puVar9;
  if (lVar6 < -0x7ffffffe) {
    lVar6 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar6) {
    lVar6 = 0x7fffffff;
  }
  auVar30._0_8_ = (ulong)uVar19 | (long)puVar9 << 0x20;
  auVar30._8_8_ = uVar22 & 0xffffffff | lVar6 << 0x20;
  return auVar30;
}



/* Entry: 108219ff8; end: 10821a043;  */

undefined1  [16] FUN_108219ff8(int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (long)param_3 + (long)param_1;
  if ((long)uVar1 < -0x7ffffffe) {
    uVar1 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  lVar2 = (long)param_4 + (long)param_2;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  auVar3._4_4_ = param_2;
  auVar3._0_4_ = param_1;
  auVar3._8_8_ = uVar1 & 0xffffffff | lVar2 << 0x20;
  return auVar3;
}



/* Entry: 10821a044; end: 10821a06b;  */

void FUN_10821a044(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_10838ea90(auStack_20,param_1,param_2);
  return;
}



/* Entry: 10821a06c; end: 10821a0ff;  */

void FUN_10821a06c(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (long)(int)*(undefined8 *)param_1 + (long)param_2;
  uVar6 = (long)(int)((ulong)*(undefined8 *)param_1 >> 0x20) + (long)param_3;
  uVar7 = (long)param_2 + (long)(int)*(undefined8 *)(param_1 + 2);
  uVar8 = (long)param_3 + (long)(int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar7 = uVar7 ^ (uVar7 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar7);
  uVar8 = uVar8 ^ (uVar8 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar8);
  uVar5 = uVar5 ^ (uVar5 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar5);
  uVar6 = uVar6 ^ (uVar6 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar6);
  uVar4 = (uint)uVar5;
  uVar1 = (uint)uVar6;
  uVar2 = (uint)uVar7;
  uVar3 = (uint)uVar8;
  param_1[2] = uVar2 ^ (uVar2 ^ 0x7fffffff) & ~-(uint)((long)uVar7 < 0x7fffffff);
  param_1[3] = uVar3 ^ (uVar3 ^ 0x7fffffff) & ~-(uint)((long)uVar8 < 0x7fffffff);
  *param_1 = uVar4 ^ (uVar4 ^ 0x7fffffff) & ~-(uint)((long)uVar5 < 0x7fffffff);
  param_1[1] = uVar1 ^ (uVar1 ^ 0x7fffffff) & ~-(uint)((long)uVar6 < 0x7fffffff);
  return;
}



/* Entry: 10821a100; end: 10821a12f;  */

long FUN_10821a100(long param_1)

{
  if (*(char *)(param_1 + 0x198) == '\x01') {
    func_0x00010821a970(param_1 + 0x20);
  }
  return param_1;
}



/* Entry: 10821a130; end: 10821a1ff;  */

long FUN_10821a130(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  FUN_10821a8e4(param_1 + 0x20);
  func_0x0001083881d0(param_1 + 0x20,param_2,param_1);
  if (param_4 == 3) {
    func_0x00010821aae0(param_1 + 0x20,7);
  }
  func_0x000108387f8c(param_1 + 0x20,param_3,param_1 + 0x10);
  if (param_5 != 0) {
    func_0x00010821aae0(param_1 + 0x20,6);
  }
  func_0x00010821aae0(param_1 + 0x20,0x42);
  if (param_4 == 3) {
    func_0x00010821aae0(param_1 + 0x20,0x72);
  }
  func_0x000108388378(param_1 + 0x20,param_2,param_1);
  return param_1;
}



/* Entry: 10821a200; end: 10821a203;  */

undefined8 * FUN_10821a200(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_110a32188;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    while (puVar1 != puVar2) {
      func_0x00010821ab20(puVar1[-7]);
      puVar1 = puVar1 + -7;
    }
    param_1[3] = puVar2;
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10821a204; end: 10821a24b;  */

bool FUN_10821a204(int *param_1,ulong param_2)

{
  int *piVar1;
  
  if (0xd < param_2) {
    piVar1 = param_1 + 2;
    if (*param_1 == 0x46464952) {
      _memcmp(piVar1,&UNK_10f47fa70,6);
      return (int)piVar1 == 0;
    }
  }
  return false;
}



/* Entry: 10821a24c; end: 10821a677;  */

void FUN_10821a24c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lStack_130;
  undefined8 auStack_128 [3];
  undefined1 auStack_110 [8];
  undefined8 auStack_108 [2];
  int iStack_f8;
  long lStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar9 = (long *)*param_2;
  *param_2 = 0;
  if (plVar9 == (long *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 6;
    }
    *param_1 = 0;
    return;
  }
  func_0x00010821ab44(*(undefined8 *)(*plVar9 + 0x60));
  if (param_2 == (undefined8 *)0x0) {
    FUN_1083a07a0(&lStack_e0,plVar9);
    func_0x00010821aad0();
    plVar9 = (long *)0x0;
    lVar10 = lStack_e0;
  }
  else {
    func_0x00010821ab44(*(undefined8 *)(*plVar9 + 0x60));
    puVar4 = param_2;
    func_0x00010821ab44(*(undefined8 *)(*plVar9 + 0x58));
    func_0x00010813fad0(&lStack_e0,param_2,puVar4);
    lVar10 = lStack_e0;
  }
  uStack_68 = *(undefined8 *)(lVar10 + 0x18);
  uStack_60 = *(undefined8 *)(lVar10 + 0x20);
  puVar4 = &uStack_68;
  FUN_108220df4(puVar4,1,&iStack_6c,0x107);
  puStack_78 = puVar4;
  if (iStack_6c == -1) {
LAB_10821a354:
    if (param_3 != (undefined4 *)0x0) {
      uVar8 = 6;
LAB_10821a35c:
      *param_3 = uVar8;
    }
  }
  else {
    if (iStack_6c != 0) {
      if (puVar4 == (undefined8 *)0x0) {
        iVar11 = 0;
        iVar12 = 0;
      }
      else {
        iVar11 = *(int *)((long)puVar4 + 0x34);
        iVar12 = *(int *)(puVar4 + 7);
      }
      if ((long)iVar12 * (long)iVar11 - 0x20000000U < 0xffffffff60000000) goto LAB_10821a354;
      lStack_80 = 0;
      puVar7 = puVar4;
      func_0x00010821aae8();
      iVar3 = 0;
      if ((int)puVar7 != 0) {
        FUN_108346318(auStack_108,uStack_d8,CONCAT44(iStack_cc,iStack_d0));
        uStack_88 = auStack_108[0];
        FUN_10821d0e0(auStack_128,&uStack_88);
        uVar5 = auStack_128[0];
        auStack_128[0] = 0;
        FUN_10814caf0(&lStack_80,uVar5);
        FUN_10814cacc(auStack_128);
        uVar5 = uStack_88;
        func_0x00010821aa84();
        iVar3 = (int)uVar5;
      }
      if ((lStack_80 != 0) && (*(int *)(lStack_80 + 0xc) != 0x52474220)) {
        plVar6 = &lStack_80;
        FUN_10814caf0(plVar6,0);
        iVar3 = (int)plVar6;
      }
      uStack_8c = 1;
      func_0x00010821aae8();
      if (iVar3 != 0) {
        FUN_10821e704(uStack_d8,CONCAT44(iStack_cc,iStack_d0),&uStack_8c);
      }
      puVar7 = puVar4;
      FUN_10822111c(puVar4,1,&lStack_e0);
      if ((int)puVar7 == 0) {
LAB_10821a490:
        if (param_3 != (undefined4 *)0x0) {
          uVar8 = 1;
LAB_10821a4ec:
          *param_3 = uVar8;
        }
LAB_10821a4f0:
        *param_1 = 0;
      }
      else {
        FUN_10822dba0(uStack_b8,uStack_b0,auStack_108,0x210);
        lVar1 = lStack_80;
        iVar3 = (int)uStack_b8;
        if (iVar3 != 0) {
          if (iVar3 == 7 || iVar3 == 5) goto LAB_10821a490;
LAB_10821a4e4:
          if (param_3 != (undefined4 *)0x0) {
            uVar8 = 6;
            goto LAB_10821a4ec;
          }
          goto LAB_10821a4f0;
        }
        bVar2 = true;
        if ((iStack_a8 == 0) && (iStack_d0 == iVar11)) {
          bVar2 = iStack_cc != iVar12;
        }
        if (iStack_f8 == 2) {
LAB_10821a4d8:
          iVar3 = 8;
        }
        else {
          if (iStack_f8 != 1) {
            if (iStack_f8 != 0) goto LAB_10821a4e4;
            goto LAB_10821a4d8;
          }
          iVar3 = 10;
        }
        if (bVar2 != false) {
          iVar3 = iVar3 + 1;
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0;
        }
        lStack_80 = 0;
        lStack_130 = lVar1;
        FUN_10814ca50(auStack_128,iVar11,iVar12,iVar3,bVar2,8,&lStack_130);
        FUN_10814cacc(&lStack_130);
        puVar7 = (undefined8 *)0x498;
        __Znwm();
        puStack_78 = (undefined8 *)0x0;
        plStack_58 = plVar9;
        FUN_10814b2f0();
        plVar9 = plStack_58;
        plStack_58 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          func_0x00010821ab4c();
        }
        *puVar7 = &PTR_FUN_110a32090;
        puVar7[0x8b] = puVar4;
        puVar7[0x8c] = lVar10;
        puVar7[0x8d] = &PTR_FUN_110a32188;
        puVar7[0x8f] = 0;
        puVar7[0x91] = 0;
        puVar7[0x90] = 0;
        *(undefined1 *)(puVar7 + 0x92) = 0;
        puVar7[0x8e] = puVar7[1];
        *param_1 = puVar7;
        FUN_10814cacc(auStack_110);
        plVar9 = (long *)0x0;
        lVar10 = 0;
      }
      FUN_10814cacc(&lStack_80);
      goto LAB_10821a364;
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar8 = 1;
      goto LAB_10821a35c;
    }
  }
  *param_1 = 0;
LAB_10821a364:
  FUN_10821a6b4(&puStack_78);
  func_0x00010821aa84(lVar10);
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010821a39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 8))(plVar9);
  return;
}



/* Entry: 10821a678; end: 10821a68b;  */

void FUN_10821a678(void)

{
  FUN_10821a9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10821a68c; end: 10821a68f;  */

undefined8 * FUN_10821a68c(undefined8 *param_1)

{
  FUN_10821a9e4(param_1 + 0x8d);
  func_0x0001078bddf8(param_1 + 0x8c);
  FUN_10821a6b4(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 10821a690; end: 10821a6a3;  */

void FUN_10821a690(void)

{
  FUN_10821aa4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10821a6a4; end: 10821a6b3;  */

undefined8 FUN_10821a6a4(void)

{
  return 6;
}



/* Entry: 10821a6b4; end: 10821a6d7;  */

void FUN_10821a6b4(long param_1)

{
  func_0x00010821aaf8();
  if (param_1 != 0) {
    FUN_1082210c4();
  }
  return;
}



/* Entry: 10821a6d8; end: 10821a703;  */

bool FUN_10821a6d8(int *param_1)

{
  return (((long)param_1[3] - (long)param_1[1] | (long)param_1[2] - (long)*param_1) &
         0xffffffff80000000U) != 0 ||
         ((long)param_1[2] - (long)*param_1 < 1 || (long)param_1[3] - (long)param_1[1] < 1);
}



/* Entry: 10821a704; end: 10821a717;  */

void FUN_10821a704(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar3 = (undefined8 *)*plVar2;
  puVar1 = (undefined8 *)plVar2[1];
  puVar7 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar3) / -0x38) * 0x38);
  puVar5 = puVar7;
  for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 7) {
    *puVar5 = &PTR_DAT_110a27d70;
    uVar9 = puVar6[2];
    uVar8 = puVar6[1];
    uVar11 = puVar6[4];
    uVar10 = puVar6[3];
    puVar5[5] = puVar6[5];
    puVar5[4] = uVar11;
    puVar5[3] = uVar10;
    puVar5[2] = uVar9;
    puVar5[1] = uVar8;
    *puVar5 = &PTR_FUN_110a321e0;
    *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(puVar6 + 6);
    puVar5 = puVar5 + 7;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 7) {
    func_0x00010821ab20(*puVar3);
  }
  param_2[1] = puVar7;
  lVar4 = *plVar2;
  *plVar2 = (long)puVar7;
  plVar2[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10821a718; end: 10821a80b;  */

void FUN_10821a718(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar2) / -0x38) * 0x38);
  puVar4 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 7) {
    *puVar4 = &PTR_DAT_110a27d70;
    uVar8 = puVar5[2];
    uVar7 = puVar5[1];
    uVar10 = puVar5[4];
    uVar9 = puVar5[3];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar10;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
    puVar4[1] = uVar7;
    *puVar4 = &PTR_FUN_110a321e0;
    *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 6);
    puVar4 = puVar4 + 7;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    func_0x00010821ab20(*puVar2);
  }
  param_2[1] = puVar6;
  lVar3 = *param_1;
  *param_1 = (long)puVar6;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10821a80c; end: 10821a87f;  */

long * FUN_10821a80c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x492492492492492 < param_2) {
      func_0x000104bd35f4();
      return param_1;
    }
    lVar1 = param_2 * 0x38;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x38;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x38;
  return param_1;
}



/* Entry: 10821a880; end: 10821a88f;  */

void FUN_10821a880(void)

{
  return;
}



/* Entry: 10821a890; end: 10821a8d7;  */

long * FUN_10821a890(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  while (lVar3 != param_1[2]) {
    puVar1 = (undefined8 *)(param_1[2] + -0x38);
    uVar2 = *puVar1;
    param_1[2] = (long)puVar1;
    func_0x00010821ab20(uVar2);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10821a8d8; end: 10821a8e3;  */

byte * FUN_10821a8d8(long param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte bStack_31;
  
  uVar4 = param_1 + 0x10;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 0) {
    bStack_31 = iVar2 != -0x80000000;
    if ((bool)bStack_31) {
      lVar6 = (long)iVar2 + -1;
    }
    else {
      lVar6 = -0x80000000;
    }
    pbVar3 = &bStack_31;
    func_0x000108154764(pbVar3,lVar6,*(undefined8 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x20);
    func_0x00010835c63c(uVar4);
    pbVar5 = &bStack_31;
    func_0x000108154764(pbVar5,(long)iVar2,uVar4 & 0xffffffff);
    pbVar5 = pbVar5 + (long)pbVar3;
    bVar1 = 0;
    if (pbVar3 <= pbVar5) {
      bVar1 = bStack_31;
    }
    if (((ulong)pbVar5 >> 0x1f == 0 & bVar1) == 0) {
      pbVar5 = (byte *)0xffffffffffffffff;
    }
    return pbVar5;
  }
  return (byte *)0x0;
}



/* Entry: 10821a8e4; end: 10821a943;  */

long * FUN_10821a8e4(long *param_1)

{
  param_1[9] = (long)(param_1 + 5);
  param_1[10] = 0x400000000;
  *param_1 = (long)(param_1 + 0x2b);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1081e4b70(param_1 + 0xb,0x100);
  return param_1;
}



/* Entry: 10821a944; end: 10821a9e3;  */

undefined8 * FUN_10821a944(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10821a9e4; end: 10821aa4b;  */

undefined8 * FUN_10821a9e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_110a32188;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    while (puVar1 != puVar2) {
      func_0x00010821ab20(puVar1[-7]);
      puVar1 = puVar1 + -7;
    }
    param_1[3] = puVar2;
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10821aa4c; end: 10821aa83;  */

undefined8 * FUN_10821aa4c(undefined8 *param_1)

{
  FUN_10821a9e4(param_1 + 0x8d);
  func_0x0001078bddf8(param_1 + 0x8c);
  FUN_10821a6b4(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 10821aa84; end: 10821ab6b;  */

void FUN_10821aa84(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10821ab6c; end: 10821af8b;  */

uint * FUN_10821ab6c(undefined ***param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  uint *puStack_240;
  uint auStack_238 [2];
  undefined8 uStack_230;
  code *pcStack_1d8;
  undefined ***pppuStack_1d0;
  uint auStack_134 [2];
  undefined4 uStack_12c;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_1 == (undefined ***)0x0) {
    return (uint *)0x0;
  }
  puVar7 = auStack_134;
  FUN_1082400c0(param_3[1],puVar7,0,0x210);
  if ((int)puVar7 == 0) {
    return (uint *)0x0;
  }
  _bzero(auStack_238,0x100);
  pcStack_1d8 = (code *)0x108245dd0;
  puStack_240 = auStack_238;
  if ((int)param_2[8] < 1) goto LAB_10821acac;
  puVar7 = (uint *)0x0;
  if ((((((int)param_2[9] < 1) || (param_2[8] >> 0x1d != 0)) || (param_2[9] >> 0x1d != 0)) ||
      ((puVar7 = (uint *)0x0, param_2[6] == 0 || (param_2[7] == 0)))) || (*(long *)param_2 == 0))
  goto LAB_10821acb0;
  puVar8 = *(uint **)(param_2 + 2);
  puVar7 = param_2 + 4;
  func_0x0001078bdb50();
  if (puVar7 <= puVar8) {
    uVar1 = param_2[6];
    if (0x1a < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10821af18);
      (*pcVar2)();
    }
    if (((1 << (ulong)(uVar1 & 0x1f) & 0x7affffdU) != 0) && (lVar6 = *(long *)param_2, lVar6 != 0))
    {
      uStack_230 = *(undefined8 *)(param_2 + 8);
      uStack_12c = 0;
      if (*param_3 == 0) {
        uStack_12c = 3;
      }
      auStack_238[0] = (uint)(*param_3 != 0);
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      ppuStack_80 = (undefined **)0x0;
      puVar8 = param_2;
      auStack_134[0] = auStack_238[0];
      if (uVar1 == 5) {
        pcVar2 = (code *)0x10824689c;
      }
      else if (uVar1 == 4 && param_2[7] != 2) {
        pcVar2 = (code *)0x10824687c;
      }
      else {
        func_0x0001078bdd84(&uStack_98,param_2 + 4,4);
        FUN_10814bd9c(&uStack_c0,&uStack_98,3);
        FUN_10810a400(&uStack_98);
        pppuVar3 = &ppuStack_80;
        func_0x00010821afec(pppuVar3,&uStack_c0);
        if ((int)pppuVar3 == 0) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = param_2;
          FUN_108384180(param_2,&uStack_68,uStack_78,uStack_70,0,0);
          puVar8 = (uint *)((ulong)&ppuStack_80 | 8);
          if ((int)puVar7 == 0) {
            puVar8 = param_2;
          }
        }
        FUN_10810a400(&uStack_c0);
        if ((int)puVar7 == 0) {
          func_0x00010821b098();
          goto LAB_10821acb0;
        }
        lVar6 = *(long *)puVar8;
        pcVar2 = (code *)0x10824687c;
      }
      puVar7 = auStack_238;
      (*pcVar2)(puVar7,lVar6,puVar8[2]);
      func_0x00010821b098();
      if ((int)puVar7 == 0) goto LAB_10821acb0;
      lVar6 = *(long *)(param_2 + 4);
      if (lVar6 == 0) {
        lStack_248 = 0;
      }
      else if (*(long *)(param_3 + 2) == 0) {
        uStack_78 = *(undefined8 *)(lVar6 + 0x30);
        ppuStack_80 = *(undefined ***)(lVar6 + 0x28);
        uStack_68 = *(undefined8 *)(lVar6 + 0x40);
        uStack_70 = *(undefined8 *)(lVar6 + 0x38);
        uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar6 + 0x48));
        uStack_c0 = *(undefined8 *)(lVar6 + 0xc);
        uStack_ac = *(undefined8 *)(lVar6 + 0x20);
        uStack_b0 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
        uStack_b8 = (undefined4)*(undefined8 *)(lVar6 + 0x14);
        uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x14) >> 0x20);
        FUN_1082621ec(&lStack_248,&uStack_c0,&ppuStack_80);
      }
      else {
        FUN_108260e80(&lStack_248,*(long *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
      }
      ppuStack_80 = &PTR_FUN_110a403f8;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      pppuStack_1d0 = param_1;
      if (lStack_248 != 0) {
        pppuStack_1d0 = &ppuStack_80;
      }
      pcStack_1d8 = FUN_10821af8c;
      puVar7 = auStack_134;
      FUN_108251920(puVar7,auStack_238);
      if ((int)puVar7 == 0) {
LAB_10821aefc:
        puVar7 = (uint *)0x0;
      }
      else {
        if (lStack_248 != 0) {
          FUN_1083a05b4(&lStack_250,&ppuStack_80);
          uStack_c0 = *(undefined8 *)(lStack_250 + 0x18);
          uStack_b8 = (undefined4)*(undefined8 *)(lStack_250 + 0x20);
          uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lStack_250 + 0x20) >> 0x20);
          uStack_98 = *(undefined8 *)(lStack_248 + 0x18);
          uStack_90 = *(undefined8 *)(lStack_248 + 0x20);
          uVar4 = 0x109;
          FUN_108257ac0();
          uVar5 = uVar4;
          uStack_258 = uVar4;
          FUN_108257fdc();
          if (((int)uVar5 == 1) &&
             (uVar5 = uVar4, func_0x000108257b68(uVar4,&UNK_10f47fa77,&uStack_98,0), (int)uVar5 == 1
             )) {
            FUN_108258674(uVar4,&uStack_268);
            if ((int)uVar4 == 1) {
              (*(code *)(*param_1)[2])(param_1,uStack_268,uStack_260);
              func_0x00010821b080();
              func_0x00010821b078();
              func_0x00010821b090();
              if (((ulong)param_1 & 1) == 0) goto LAB_10821aefc;
              goto LAB_10821aebc;
            }
            func_0x00010821b080();
          }
          func_0x00010821b078();
          func_0x00010821b090();
          goto LAB_10821aefc;
        }
LAB_10821aebc:
        puVar7 = (uint *)0x1;
      }
      FUN_1083a02a4(&ppuStack_80);
      func_0x0001078bddf8(&lStack_248);
      goto LAB_10821acb0;
    }
  }
LAB_10821acac:
  puVar7 = (uint *)0x0;
LAB_10821acb0:
  func_0x00010821b04c(&puStack_240);
  return puVar7;
}



/* Entry: 10821af8c; end: 10821afb7;  */

void FUN_10821af8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(**(long **)(param_3 + 0x68) + 0x10))(*(long **)(param_3 + 0x68),param_1,param_2);
  return;
}



/* Entry: 10821afb8; end: 10821b077;  */

undefined8 * FUN_10821afb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    _free(*puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return param_1;
}



/* Entry: 10821b078; end: 10821b09f;  */

undefined8 * FUN_10821b078(void)

{
  long lVar1;
  long in_stack_00000018;
  
  lVar1 = in_stack_00000018;
  in_stack_00000018 = 0;
  if (lVar1 != 0) {
    FUN_108257ae0();
  }
  return &stack0x00000018;
}



/* Entry: 10821b0a0; end: 10821b11f;  */

undefined8 FUN_10821b0a0(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (0 < param_2) {
    iVar2 = (int)param_1[2];
    iVar3 = *(int *)(param_1[1] + 0x24);
    if (iVar3 - iVar2 == 0 || iVar3 < iVar2) {
      uVar5 = 0;
    }
    else {
      iVar1 = iVar3 - iVar2;
      if (iVar2 + param_2 <= iVar3) {
        iVar1 = param_2;
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x10))(param_1,iVar1);
      if (((ulong)plVar4 & 1) == 0) {
        uVar5 = 0;
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1[1] + 0x24);
      }
      else {
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  return 0;
}



/* Entry: 10821b120; end: 10821b177;  */

undefined8 FUN_10821b120(void)

{
  int iVar1;
  
  if ((bRam0000000113824e78 & 1) == 0) {
    iVar1 = 0x13824e78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113824e60 = 0;
      uRam0000000113824e68 = 0;
      uRam0000000113824e70 = 0;
      ___cxa_guard_release(0x113824e78);
    }
  }
  return 0x113824e60;
}



/* Entry: 10821b178; end: 10821b207;  */

undefined8 * FUN_10821b178(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_10821b120();
  lVar3 = 0;
  uVar4 = 0;
  while( true ) {
    if ((ulong)((long)puRam0000000113824e68 - lRam0000000113824e60 >> 5) <= uVar4) {
      puVar2 = (undefined8 *)0x113824e60;
      if (puRam0000000113824e68 < puRam0000000113824e70) {
        uVar5 = *param_1;
        uVar7 = param_1[3];
        uVar6 = param_1[2];
        puRam0000000113824e68[1] = param_1[1];
        *puRam0000000113824e68 = uVar5;
        puRam0000000113824e68[3] = uVar7;
        puRam0000000113824e68[2] = uVar6;
        puVar2 = puRam0000000113824e68 + 4;
      }
      else {
        FUN_10821c48c();
      }
      puRam0000000113824e68 = puVar2;
      return puVar2 + -4;
    }
    puVar2 = *(undefined8 **)(lRam0000000113824e60 + lVar3);
    FUN_10821b208(puVar2,((undefined8 *)(lRam0000000113824e60 + lVar3))[1],*param_1,param_1[1]);
    if ((int)puVar2 != 0) break;
    uVar4 = uVar4 + 1;
    lVar3 = lVar3 + 0x20;
  }
  puVar1 = (undefined8 *)(lRam0000000113824e60 + lVar3);
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  return puVar2;
}



/* Entry: 10821b208; end: 10821b24b;  */

bool FUN_10821b208(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  iVar1 = (int)&uStack_20;
  if (param_2 == param_4) {
    uStack_20 = param_1;
    lStack_18 = param_2;
    func_0x000107c27978(&uStack_20,param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10821b24c; end: 10821b4d3;  */

void FUN_10821b24c(undefined8 *param_1,undefined8 *param_2,ulong *param_3,long param_4,
                  ulong *param_5,undefined8 param_6,uint param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined4 uVar7;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong uVar8;
  ulong uStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  ulong auStack_88 [4];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_5 == (ulong *)0x0;
  puVar1 = &uStack_90;
  if (!(bool)uVar3) {
    puVar1 = param_5;
  }
  puVar4 = (ulong *)*param_2;
  uStack_90._4_4_ = param_7;
  if (puVar4 == (ulong *)0x0) {
    uVar7 = 6;
  }
  else {
    uVar3 = param_7 == 2;
    if (param_7 < 2) {
      puVar6 = param_3;
      uStack_b8 = param_6;
      func_0x00010821c8f0(*(undefined8 *)(*puVar4 + 0x18));
      puVar5 = puVar4;
      if (puVar4 == (ulong *)0x0) {
        puVar5 = (ulong *)*param_2;
        func_0x00010821c8f0(*(undefined8 *)(*puVar5 + 0x10));
        puVar4 = (ulong *)*param_2;
        (**(code **)(*puVar4 + 0x28))();
        if (((ulong)puVar4 & 1) == 0) {
          uVar7 = 7;
          param_3 = puVar6;
          goto LAB_10821b2b0;
        }
      }
      uVar8 = 0;
      puVar2 = param_3;
      for (param_4 = param_4 << 5; param_3 = puVar6, param_4 != 0; param_4 = param_4 + -0x20) {
        puVar4 = auStack_88;
        param_3 = puVar5;
        (*(code *)puVar2[2])(puVar4,puVar5);
        if ((int)puVar4 != 0) {
          uVar8 = *puVar2;
          func_0x00010821c91c(uVar8,puVar2[1],"png");
          param_3 = puVar1;
          if ((int)uVar8 == 0) {
            uVar8 = *puVar2;
            func_0x000107c27944(uVar8,puVar2[1],&UNK_10f47fa81,4);
            if ((uVar8 & 1) == 0) {
              uVar8 = *puVar2;
              func_0x00010821c91c(uVar8,puVar2[1],&DAT_10f3ff2f7);
              if ((int)uVar8 == 0) {
                puVar4 = (ulong *)*puVar2;
                param_3 = (ulong *)puVar2[1];
                func_0x00010821c91c(puVar4,param_3,&UNK_10f47fa86);
                uVar8 = puVar2[3];
                if (((ulong)puVar4 & 1) != 0) goto LAB_10821b3b0;
                func_0x00010821c964();
                puStack_a8 = extraout_x8_01;
                func_0x00010821c8c0(&puStack_a8);
                puVar4 = puStack_a8;
                puStack_a8 = (ulong *)0x0;
                goto joined_r0x00010821b43c;
              }
            }
            func_0x00010821c964();
            puStack_a0 = extraout_x8;
            (*extraout_x9)(param_1,&puStack_a0,puVar1,(long)&uStack_90 + 4);
            puVar4 = puStack_a0;
            puStack_a0 = (ulong *)0x0;
            goto joined_r0x00010821b404;
          }
          func_0x00010821c964();
          puStack_98 = extraout_x8_00;
          (*extraout_x9_00)(param_1,&puStack_98,puVar1,uStack_b8);
          puVar4 = puStack_98;
          puStack_98 = (ulong *)0x0;
joined_r0x00010821b43c:
          if (puVar4 == (ulong *)0x0) goto LAB_10821b2b8;
          goto LAB_10821b460;
        }
LAB_10821b3b0:
        puVar2 = puVar2 + 4;
        puVar6 = param_3;
      }
      if (uVar8 != 0) {
        func_0x00010821c964();
        puVar4 = &uStack_b0;
        func_0x00010821c8c0();
        func_0x00010821c944();
joined_r0x00010821b404:
        if (puVar4 != (ulong *)0x0) {
LAB_10821b460:
          func_0x00010821c890();
        }
        goto LAB_10821b2b8;
      }
      uVar3 = puVar5 == (ulong *)0x20;
      uVar7 = 9;
      if (puVar5 < (ulong *)0x20) {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 5;
    }
  }
LAB_10821b2b0:
  *(undefined4 *)puVar1 = uVar7;
  *param_1 = 0;
LAB_10821b2b8:
  func_0x00010821c930(uStack_68);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar6 = puStack_a8;
    puStack_a8 = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      func_0x00010821c890();
    }
    func_0x00010821c89c();
    pcStack_c8 = FUN_10821b4d4;
    uStack_e8 = *puVar6;
    *puVar6 = 0;
    puStack_e0 = puVar1;
    puStack_d8 = puVar4;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_10821b120();
    FUN_10821b540(extraout_x8_02,&uStack_e8,*puVar6,(long)(lRam0000000113824e68 - *puVar6) >> 5,
                  param_3);
    func_0x00010821c8e8();
    return;
  }
  return;
}



/* Entry: 10821b4d4; end: 10821b53f;  */

void FUN_10821b4d4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lStack_28;
  
  lStack_28 = *param_2;
  *param_2 = 0;
  FUN_10821b120();
  FUN_10821b540(param_1,&lStack_28,*param_2,lRam0000000113824e68 - *param_2 >> 5,param_3);
  func_0x00010821c8e8();
  return;
}



/* Entry: 10821b540; end: 10821b60b;  */

void FUN_10821b540(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_48 = *param_2;
  if (lStack_48 == 0) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    FUN_10814c348(&lStack_40,&lStack_48);
    lStack_38 = lStack_40;
    lStack_40 = 0;
    FUN_10821b24c(param_1,&lStack_38,param_3,param_4,0,param_5,0);
    lVar1 = lStack_38;
    if (lStack_38 != 0) {
      FUN_10821c890();
    }
    func_0x00010821c944();
    if (lVar1 != 0) {
      FUN_10821c890();
    }
    func_0x00010821c8e8();
  }
  return;
}



/* Entry: 10821b60c; end: 10821b677;  */

void FUN_10821b60c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110a32220;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 2);
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[4] = uVar1;
  *(undefined4 *)(param_1 + 5) = param_3;
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = param_5;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x44c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  return;
}



/* Entry: 10821b678; end: 10821b7bb;  */

undefined8 * FUN_10821b678(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 10821b7bc; end: 10821b843;  */

ulong FUN_10821b7bc(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  uVar1 = (uint)param_3;
  if (*(int *)(param_2 + 0xc) != 1) {
    uVar1 = 1;
  }
  if ((*(int *)(param_2 + 0xc) != 0) && (uVar1 != 0)) {
    uVar2 = 1;
    switch(*(undefined4 *)(param_2 + 8)) {
    case 1:
      return (ulong)(*(int *)(param_1 + 0x10) == 2);
    case 2:
    case 0xb:
      return param_3;
    default:
      return 0;
    case 4:
    case 6:
    case 0xc:
    case 0x10:
      break;
    case 0xe:
      uVar1 = 0;
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar1 = (uint)param_3;
      }
      return (ulong)uVar1;
    }
  }
  return uVar2;
}



/* Entry: 10821b844; end: 10821bb6b;  */

void FUN_10821b844(undefined8 param_1,undefined8 param_2,int *param_3,long param_4,
                  undefined8 *param_5,long param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int **ppiVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  int *piStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = param_6;
  func_0x00010821c97c();
  if (*(long *)(lVar11 + 0x18) == 0) {
    if ((*(byte *)((long)unaff_x20 + 0x451) & 1) != 0) {
      return;
    }
  }
  else {
    *(undefined1 *)((long)unaff_x20 + 0x451) = 1;
  }
  plVar5 = unaff_x20;
  func_0x00010821b754();
  if ((int)plVar5 != 0) {
    iVar4 = *(int *)(param_5 + 2);
    if (iVar4 != 0) {
      if (iVar4 < 0) {
        return;
      }
      if (param_5[1] != 0) {
        return;
      }
      plVar5 = unaff_x20;
      (**(code **)(*unaff_x20 + 0x90))();
      if ((int)plVar5 <= iVar4) {
        return;
      }
      plVar5 = unaff_x20;
      (**(code **)(*unaff_x20 + 0xb0))();
      plVar6 = plVar5;
      (**(code **)(*plVar5 + 0x10))();
      iVar1 = (int)plVar6[2];
      if (iVar1 != -1) {
        iVar10 = *(int *)((long)param_5 + 0x14);
        if (iVar10 == -1) {
          plVar7 = *(long **)(param_6 + 0x18);
          if (plVar7 == (long *)0x0) {
            uStack_b8 = param_5[1];
            piStack_c0 = (int *)*param_5;
            uStack_b0 = CONCAT44((int)((ulong)param_5[2] >> 0x20),iVar1);
            func_0x00010821c970();
            iVar4 = (int)plVar7;
            FUN_10821bce4();
          }
          else {
            uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
            piStack_c0 = param_3;
            uStack_70 = param_4;
            (**(code **)(*plVar7 + 0x30))();
            iVar4 = (int)plVar7;
          }
          if (iVar4 != 0) {
            return;
          }
          pcVar12 = *(code **)(*plVar5 + 0x10);
          iVar10 = iVar1;
        }
        else {
          if (iVar10 < iVar1 || iVar4 <= iVar10) {
            return;
          }
          pcVar12 = *(code **)(*plVar5 + 0x10);
        }
        (*pcVar12)(plVar5,iVar10);
        if (*(int *)((long)plVar5 + 0x24) == 3) {
          return;
        }
        if ((*(int *)((long)plVar5 + 0x24) == 2) && ((int)plVar5[1] == iVar1)) {
          uVar13 = unaff_x20[1];
          uStack_68 = *(undefined8 *)((long)plVar5 + 0x1c);
          uStack_70 = *(long *)((long)plVar5 + 0x14);
          uVar14 = unaff_x19[2];
          if ((int)uVar14 != (int)uVar13 || uVar14 >> 0x20 != uVar13 >> 0x20) {
            fStack_78 = (float)(int)uVar13;
            fVar16 = (float)(int)(uVar13 >> 0x20);
            uVar17 = 0;
            uStack_80 = 0;
            fVar18 = (float)(int)uVar14;
            fStack_84 = (float)(int)(uVar14 >> 0x20);
            uStack_90 = 0;
            fStack_88 = fVar18;
            fStack_74 = fVar16;
            fVar15 = fStack_84;
            FUN_10814c9e0(&piStack_c0,&uStack_80,&uStack_90,0);
            FUN_10817500c(&uStack_70);
            ppiVar8 = &piStack_c0;
            fStack_d0 = fVar15;
            fStack_cc = fVar16;
            uStack_c8 = uVar17;
            fStack_c4 = fVar18;
            FUN_108189c38(ppiVar8,&fStack_d0,1);
            if ((int)ppiVar8 == 0) {
              return;
            }
            func_0x00010812f1a8(&fStack_d0,&uStack_70);
          }
          piStack_c0 = (int *)0x0;
          puVar9 = &uStack_70;
          uStack_b8 = uVar14;
          func_0x00010821b838(puVar9,&piStack_c0);
          if ((int)puVar9 != 0) {
            iVar4 = (int)uStack_70;
            iVar1 = uStack_70._4_4_;
            uStack_b0 = CONCAT44(uStack_68._4_4_ - uStack_70._4_4_,(int)uStack_68 - (int)uStack_70);
            piStack_c0 = (int *)*unaff_x19;
            if (piStack_c0 != (int *)0x0) {
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piStack_c0,0x10);
                if (bVar3) {
                  *piStack_c0 = *piStack_c0 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uStack_b8 = unaff_x19[1];
            func_0x00010835c63c();
            FUN_10821ea6c(&piStack_c0,
                          (long)param_3 + param_4 * iVar1 + (long)(int)unaff_x19 * (long)iVar4,
                          param_4,1);
            FUN_10810a400(&piStack_c0);
          }
        }
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    func_0x00010821c970();
    FUN_10821bb6c();
  }
  return;
}



/* Entry: 10821bb6c; end: 10821bce3;  */

void FUN_10821bb6c(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int iVar6;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0xe) = 0;
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x88))();
  if ((int)plVar4 == 0) {
LAB_10821bbf0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)param_2[1];
    uVar2 = iVar6 == 0x10 || iVar6 == 0xb;
    if (iVar6 == 0x10 || iVar6 == 0xb) {
      if (*param_2 == 0) {
        func_0x00010821c950();
        uVar5 = extraout_x9_00;
        if (!(bool)uVar2) {
          uVar5 = extraout_x8_00;
        }
        _memcpy(param_1 + 0xf,uVar5,0x3d0);
      }
      else {
        func_0x000108343dd4(*param_2,param_1 + 0xf);
      }
      uVar7 = 1;
    }
    else {
      if (*param_2 == 0) goto LAB_10821bbf0;
      func_0x000108343dd4(*param_2,param_1 + 0xf);
      func_0x00010821c950();
      uVar5 = extraout_x9;
      if (!(bool)uVar2) {
        uVar5 = extraout_x8;
      }
      FUN_10840918c(uVar5,param_1 + 0xf);
      uVar7 = (uint)uVar5 ^ 1;
    }
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_4,uVar7);
  if ((uVar7 != 0) && ((int)plVar4 != 0)) {
    lVar1 = param_2[1];
    iVar6 = 1;
    if ((int)lVar1 == 0x10) {
      iVar6 = 2;
    }
    if ((int)param_1[2] != 4) {
      iVar6 = 2;
    }
    *(int *)(param_1 + 0xe) = iVar6;
    uVar3 = 0xc;
    switch((int)lVar1) {
    case 2:
      uVar3 = 0xc;
      if (iVar6 != 1) {
        uVar3 = 7;
      }
      break;
    default:
      goto LAB_10821bcd0;
    case 4:
      break;
    case 6:
      uVar3 = 0xd;
      break;
    case 0xb:
      uVar3 = 0x27;
      break;
    case 0xe:
      uVar3 = 2;
      break;
    case 0x10:
      uVar3 = 0x20;
    }
    *(undefined4 *)((long)param_1 + 0x74) = uVar3;
    uVar3 = 1;
    if (*(int *)((long)param_2 + 0xc) == 2 && param_3 == 1) {
      uVar3 = 2;
    }
    *(undefined4 *)(param_1 + 0x89) = uVar3;
  }
LAB_10821bcd0:
  return;
}



/* Entry: 10821bce4; end: 10821be97;  */

long * FUN_10821bce4(long *param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  int *piVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  code *extraout_x8;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uStack_90;
  ulong uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  int aiStack_68 [6];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_90;
  puVar2 = &uStack_90;
  puVar6 = &uStack_90;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  if ((int)param_2[1] == 0) {
    plVar8 = (long *)0x3;
    goto LAB_10821bd48;
  }
  if (param_3 != 0) {
    plVar8 = param_2;
    func_0x0001078bdb50();
    in_ZR = param_4 == plVar8;
    if (plVar8 <= param_4) {
      auStack_80[0] = 1;
      uStack_78 = 0;
      uStack_70 = 0xffffffff00000000;
      if (param_5 == (long *)0x0) {
        param_5 = (long *)auStack_80;
      }
      else {
        puVar7 = (ulong *)param_5[1];
        if (puVar7 != (ulong *)0x0) {
          uStack_88 = puVar7[1];
          uStack_90 = *puVar7;
          plVar8 = param_1;
          (**(code **)(*param_1 + 0x60))();
          plVar5 = (long *)puVar4;
          if ((int)plVar8 != 0) {
            plVar5 = (long *)param_5[1];
            FUN_10821be98();
            plVar8 = (long *)puVar2;
            if (((ulong)puVar2 & 1) == 0) goto LAB_10821bdcc;
          }
          plVar8 = (long *)0x9;
          goto LAB_10821bd48;
        }
      }
LAB_10821bdcc:
      uStack_50 = 0;
      func_0x00010821c8a4();
      FUN_10821b844();
      FUN_10821c6c0(aiStack_68);
      if ((int)plVar8 == 0) {
        uStack_90 = param_2[2];
        plVar5 = param_1;
        func_0x00010821bee4();
        if ((int)plVar5 == 0) {
          plVar8 = (long *)0x4;
          plVar5 = (long *)puVar6;
        }
        else {
          plVar8 = param_1 + 8;
          plVar5 = param_2;
          func_0x000108152830();
          lVar10 = param_5[1];
          lVar9 = *param_5;
          param_1[0xd] = param_5[2];
          param_1[0xc] = lVar10;
          param_1[0xb] = lVar9;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          func_0x00010821c8a4(*(undefined8 *)(*param_1 + 0x48));
          (*extraout_x8)();
          uVar1 = (int)plVar8 - 1;
          in_ZR = uVar1 == 1;
          if (uVar1 < 2) {
            in_ZR = (int)uStack_90 == *(int *)((long)param_2 + 0x14);
            if (!(bool)in_ZR) {
              param_1[0xc] = 0;
              func_0x00010821c8a4();
              FUN_10821bf0c();
            }
          }
        }
      }
      goto LAB_10821bd48;
    }
  }
  plVar8 = (long *)0x5;
LAB_10821bd48:
  func_0x00010821c930(uStack_48);
  if ((bool)in_ZR) {
    return plVar8;
  }
  ___stack_chk_fail();
  piVar3 = aiStack_68;
  FUN_10821c6c0();
  func_0x00010821c89c();
  if (((*piVar3 == (int)*plVar5) && (piVar3[1] == *(int *)((long)plVar5 + 4))) &&
     (piVar3[2] == (int)plVar5[1])) {
    return (long *)(ulong)(piVar3[3] != *(int *)((long)plVar5 + 0xc));
  }
  return (long *)0x1;
}



/* Entry: 10821be98; end: 10821bf0b;  */

bool FUN_10821be98(int *param_1,int *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] != param_2[3];
  }
  return true;
}



/* Entry: 10821bf0c; end: 10821c01f;  */

void FUN_10821bf0c(long *param_1,undefined8 *param_2,long param_3,long param_4,int param_5,
                  int param_6,int param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  int *piStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_5 != 0) {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xe0))(param_1,0);
    if (plVar5 == (long *)0x0) {
      piVar4 = (int *)param_1[0xc];
      if (piVar4 == (int *)0x0) {
        plVar5 = (long *)(ulong)*(uint *)(param_2 + 2);
      }
      else {
        plVar5 = (long *)(ulong)(uint)(piVar4[2] - *piVar4);
      }
    }
    else {
      (**(code **)*plVar5)();
    }
    (**(code **)(*param_1 + 0x70))();
    lVar1 = 0;
    if ((int)param_1 != 1) {
      lVar1 = param_4 * param_7;
    }
    piStack_68 = (int *)*param_2;
    if (piStack_68 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
        if (bVar3) {
          *piStack_68 = *piStack_68 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_60 = param_2[1];
    uStack_58 = (ulong)plVar5 & 0xffffffff | (ulong)(uint)(param_6 - param_7) << 0x20;
    FUN_10821ea6c(&piStack_68,param_3 + lVar1,param_4,1);
    FUN_10810a400(&piStack_68);
  }
  return;
}



/* Entry: 10821c020; end: 10821c06b;  */

ulong FUN_10821c020(long *param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x70))();
  if ((int)plVar1 != 0) {
    if ((int)plVar1 == 1) {
      param_2 = (ulong)(*(int *)((long)param_1 + 0xc) + ~(uint)param_2);
    }
    else {
      param_2 = 0;
    }
  }
  return param_2;
}



/* Entry: 10821c06c; end: 10821c0b3;  */

void FUN_10821c06c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_1084092dc(param_3,*(undefined4 *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20),param_2,
                *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x448),param_1 + 0x78,
                (long)param_4);
  return;
}



/* Entry: 10821c0b4; end: 10821c183;  */

void FUN_10821c0b4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x90))();
  if (((int)plVar1 < 1) ||
     (((int)plVar1 == 1 &&
      (plVar2 = param_2, (**(code **)(*param_2 + 0x98))(param_2,0,0), (int)plVar2 == 0)))) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10821c710(param_1,(ulong)plVar1 & 0xffffffff);
    iVar3 = 0;
    for (lVar4 = 0; ((ulong)plVar1 & 0xffffffff) * 0x2c - lVar4 != 0; lVar4 = lVar4 + 0x2c) {
      (**(code **)(*param_2 + 0x98))(param_2,iVar3,*param_1 + lVar4);
      iVar3 = iVar3 + 1;
    }
  }
  return;
}



/* Entry: 10821c184; end: 10821c1eb;  */

void FUN_10821c184(undefined8 param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x00010821c97c();
  uVar3 = *(undefined4 *)(CONCAT44(uVar2,iVar1) + 0x28);
  *param_2 = *(undefined4 *)(CONCAT44(uVar2,iVar1) + 0x10);
  param_2[1] = uVar3;
  *(undefined1 *)(param_2 + 2) = param_3;
  uVar3 = 3;
  if (*(char *)(CONCAT44(uVar2,iVar1) + 0xc) == '\0') {
    uVar3 = 1;
  }
  param_2[3] = uVar3;
  (**(code **)(*(long *)CONCAT44(uVar2,iVar1) + 0x10))();
  *(bool *)(unaff_x19 + 0x10) = iVar1 != 0;
  uVar3 = *(undefined4 *)(unaff_x20 + 0x2c);
  *(undefined4 *)(unaff_x19 + 0x14) = *(undefined4 *)(unaff_x20 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar3;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x14);
  *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x20 + 0x1c);
  *(undefined8 *)(unaff_x19 + 0x1c) = uVar4;
  return;
}



/* Entry: 10821c1ec; end: 10821c3df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10821c1ec(long param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x10))();
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uStack_60 = 0;
  pppppppuVar4 = *(undefined8 ********)((long)param_2 + 0x14);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1c);
  FUN_10821c3e0(pppppppuVar4,uVar6,&uStack_60);
  iVar9 = (int)param_2[1];
  iVar12 = (int)plVar3;
  iVar11 = (int)((ulong)pppppppuVar4 >> 0x20);
  iVar10 = (int)((ulong)uVar6 >> 0x20);
  if (iVar9 == 0) {
    if (((iVar12 != 0 || (int)uStack_60 != (int)pppppppuVar4) || uStack_60._4_4_ != iVar11) ||
        (int)uStack_58 != (int)uVar6) goto LAB_10821c35c;
    bVar2 = uStack_58._4_4_ == iVar10;
  }
  else {
    iVar1 = *(int *)((long)param_2 + 0x2c);
    pppppppuStack_70 = pppppppuVar4;
    uStack_68 = uVar6;
    if ((iVar12 != 0 && iVar1 == 0) ||
       ((((int)uStack_60 != (int)pppppppuVar4 || uStack_60._4_4_ != iVar11) ||
        (int)uStack_58 != (int)uVar6) || uStack_58._4_4_ != iVar10)) {
      do {
        uVar7 = (ulong)(iVar9 - 1);
        func_0x00010821c8d0();
        iVar9 = *(int *)((long)pppppppuVar4 + 0x24);
        if (iVar9 != 3) {
          uVar6 = *(undefined8 *)((long)pppppppuVar4 + 0x14);
          func_0x00010821c908();
          if (iVar9 == 2) {
            if (((((int)uStack_60 == (int)uVar6 && uStack_60._4_4_ == (int)((ulong)uVar6 >> 0x20))
                 && (int)uStack_58 == (int)uVar7) && uStack_58._4_4_ == (int)(uVar7 >> 0x20)) ||
               (*(int *)(pppppppuVar4 + 2) == -1)) break;
          }
          uStack_80 = uVar6;
          uStack_78 = uVar7;
          if (iVar12 == 0 || iVar1 != 0) goto LAB_10821c30c;
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(pppppppuVar4 + 1);
          bVar8 = iVar9 == 2 | *(byte *)((long)pppppppuVar4 + 0xc);
          goto LAB_10821c3d8;
        }
        iVar9 = *(int *)(pppppppuVar4 + 1);
      } while (iVar9 != 0);
LAB_10821c35c:
      bVar2 = true;
      goto LAB_10821c370;
    }
    bVar2 = iVar12 == 0;
  }
  bVar2 = !bVar2;
LAB_10821c370:
  *(bool *)((long)param_2 + 0xc) = bVar2;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  return;
LAB_10821c30c:
  pppppppuVar5 = &pppppppuStack_70;
  func_0x000108219544(pppppppuVar5,&uStack_80);
  if ((int)pppppppuVar5 == 0) {
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(pppppppuVar4 + 1);
    if (*(int *)((long)pppppppuVar4 + 0x24) == 2) {
LAB_10821c3d4:
      bVar8 = 1;
    }
    else {
      bVar8 = (*(byte *)((long)pppppppuVar4 + 0xc) & 1) != 0 || iVar12 != 0 && iVar1 != 0;
    }
LAB_10821c3d8:
    *(byte *)((long)param_2 + 0xc) = bVar8;
    return;
  }
  uVar7 = (ulong)*(uint *)(pppppppuVar4 + 2);
  if (*(uint *)(pppppppuVar4 + 2) == 0xffffffff) {
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    goto LAB_10821c3d4;
  }
  func_0x00010821c8d0();
  uVar6 = *(undefined8 *)((long)pppppppuVar5 + 0x14);
  func_0x00010821c908();
  pppppppuVar4 = pppppppuVar5;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  goto LAB_10821c30c;
}



/* Entry: 10821c3e0; end: 10821c417;  */

undefined1  [16] FUN_10821c3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010821b838(&uStack_20,param_3);
  if (iVar1 == 0) {
    uStack_20 = 0;
    uStack_18 = 0;
  }
  auVar2._8_8_ = uStack_18;
  auVar2._0_8_ = uStack_20;
  return auVar2;
}



/* Entry: 10821c418; end: 10821c48b;  */

void FUN_10821c418(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x70))();
  }
  *param_1 = (long)plVar1;
  return;
}



/* Entry: 10821c48c; end: 10821c527;  */

long FUN_10821c48c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10821c528(param_1,(param_1[1] - *param_1 >> 5) + 1);
  FUN_10821c5e8(auStack_48,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  puStack_38[3] = uVar5;
  puStack_38[2] = uVar4;
  puStack_38 = puStack_38 + 4;
  FUN_10821c568(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10821c670(auStack_48);
  return lVar2;
}



/* Entry: 10821c528; end: 10821c567;  */

ulong FUN_10821c528(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3b == 0) {
    uVar2 = param_1[2] - *param_1 >> 4;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x7ffffffffffffff;
    }
    return uVar2;
  }
  FUN_10821c5dc();
  func_0x00010821c97c();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 10821c568; end: 10821c5db;  */

void FUN_10821c568(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010821c97c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10821c5dc; end: 10821c5e7;  */

long * FUN_10821c5dc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010821c924();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010821c630();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10821c5e8; end: 10821c653;  */

long * FUN_10821c5e8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010821c630();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10821c654; end: 10821c66f;  */

long * FUN_10821c654(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10821c69c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10821c670; end: 10821c69b;  */

long * FUN_10821c670(long *param_1)

{
  FUN_10821c69c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10821c69c; end: 10821c6bf;  */

void FUN_10821c69c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10821c6c0; end: 10821c703;  */

long * FUN_10821c6c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10821c704; end: 10821c70f;  */

long * FUN_10821c704(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong *puVar3;
  int *piVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  ulong *puVar9;
  code *extraout_x8;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uStack_90;
  ulong uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  int aiStack_68 [6];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar8 = param_2 + 2;
  plVar2 = (long *)param_2[1];
  puVar5 = &uStack_90;
  puVar3 = &uStack_90;
  puVar7 = &uStack_90;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar8;
  if ((int)param_2[3] == 0) {
    plVar10 = (long *)0x3;
    goto LAB_10821bd48;
  }
  if (*param_2 != 0) {
    plVar10 = plVar8;
    func_0x0001078bdb50();
    in_ZR = plVar2 == plVar10;
    if (plVar10 <= plVar2) {
      auStack_80[0] = 1;
      uStack_78 = 0;
      uStack_70 = 0xffffffff00000000;
      if (param_3 == (long *)0x0) {
        param_3 = (long *)auStack_80;
      }
      else {
        puVar9 = (ulong *)param_3[1];
        if (puVar9 != (ulong *)0x0) {
          uStack_88 = puVar9[1];
          uStack_90 = *puVar9;
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x60))();
          plVar6 = (long *)puVar5;
          if ((int)plVar2 != 0) {
            plVar6 = (long *)param_3[1];
            FUN_10821be98();
            plVar10 = (long *)puVar3;
            if (((ulong)puVar3 & 1) == 0) goto LAB_10821bdcc;
          }
          plVar10 = (long *)0x9;
          goto LAB_10821bd48;
        }
      }
LAB_10821bdcc:
      uStack_50 = 0;
      func_0x00010821c8a4();
      FUN_10821b844();
      FUN_10821c6c0(aiStack_68);
      if ((int)plVar10 == 0) {
        uStack_90 = param_2[4];
        plVar2 = param_1;
        func_0x00010821bee4();
        if ((int)plVar2 == 0) {
          plVar10 = (long *)0x4;
          plVar6 = (long *)puVar7;
        }
        else {
          plVar10 = param_1 + 8;
          func_0x000108152830();
          lVar12 = param_3[1];
          lVar11 = *param_3;
          param_1[0xd] = param_3[2];
          param_1[0xc] = lVar12;
          param_1[0xb] = lVar11;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          func_0x00010821c8a4(*(undefined8 *)(*param_1 + 0x48));
          (*extraout_x8)();
          uVar1 = (int)plVar10 - 1;
          in_ZR = uVar1 == 1;
          plVar6 = plVar8;
          if (uVar1 < 2) {
            in_ZR = (int)uStack_90 == *(int *)((long)param_2 + 0x24);
            if (!(bool)in_ZR) {
              param_1[0xc] = 0;
              func_0x00010821c8a4();
              FUN_10821bf0c();
              plVar6 = plVar8;
            }
          }
        }
      }
      goto LAB_10821bd48;
    }
  }
  plVar10 = (long *)0x5;
LAB_10821bd48:
  func_0x00010821c930(uStack_48);
  if ((bool)in_ZR) {
    return plVar10;
  }
  ___stack_chk_fail();
  piVar4 = aiStack_68;
  FUN_10821c6c0();
  func_0x00010821c89c();
  if (((*piVar4 == (int)*plVar6) && (piVar4[1] == *(int *)((long)plVar6 + 4))) &&
     (piVar4[2] == (int)plVar6[1])) {
    return (long *)(ulong)(piVar4[3] != *(int *)((long)plVar6 + 0xc));
  }
  return (long *)0x1;
}



/* Entry: 10821c710; end: 10821c783;  */

undefined8 * FUN_10821c710(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_10821c784(param_1);
    FUN_10821c7d0(param_1,param_2);
  }
  uStack_28 = 1;
  FUN_10821c864(&puStack_30);
  return param_1;
}



/* Entry: 10821c784; end: 10821c7cf;  */

void FUN_10821c784(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (0x5d1745d1745d174 < param_2) {
    FUN_10821c804();
    puVar3 = (undefined8 *)param_1[1];
    lVar4 = param_2 * 0x2c;
    lVar1 = (long)puVar3 + lVar4;
    for (; lVar4 != 0; lVar4 = lVar4 + -0x2c) {
      *(undefined8 *)((long)puVar3 + 0x24) = 0;
      *(undefined8 *)((long)puVar3 + 0x1c) = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3 = (undefined8 *)((long)puVar3 + 0x2c);
    }
    param_1[1] = lVar1;
    return;
  }
  plVar2 = param_1 + 2;
  FUN_10821c810();
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2;
  param_1[2] = (long)plVar2 + param_2 * 0x2c;
  return;
}



/* Entry: 10821c7d0; end: 10821c803;  */

void FUN_10821c7d0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  param_2 = param_2 * 0x2c;
  lVar1 = (long)puVar2 + param_2;
  for (; param_2 != 0; param_2 = param_2 + -0x2c) {
    *(undefined8 *)((long)puVar2 + 0x24) = 0;
    *(undefined8 *)((long)puVar2 + 0x1c) = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2 = (undefined8 *)((long)puVar2 + 0x2c);
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10821c804; end: 10821c80f;  */

void FUN_10821c804(void)

{
  func_0x00010821c924();
  FUN_10821c834();
  return;
}



/* Entry: 10821c810; end: 10821c833;  */

void FUN_10821c810(void)

{
  FUN_10821c834();
  return;
}



/* Entry: 10821c834; end: 10821c863;  */

long FUN_10821c834(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x5d1745d1745d175) {
    lVar1 = param_2 * 0x2c;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001078bdfa4(param_1);
  }
  return param_1;
}



/* Entry: 10821c864; end: 10821c88f;  */

long FUN_10821c864(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001078bdfa4(param_1);
  }
  return param_1;
}



/* Entry: 10821c890; end: 10821c987;  */

void FUN_10821c890(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010821c898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10821c988; end: 10821ca87;  */

void FUN_10821c988(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010821d018();
      uStack_40 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  FUN_10821b4d4(&lStack_38,&uStack_40,0);
  func_0x00010821cfe4(uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    *param_1 = 0;
  }
  else {
    uVar2 = 0x38;
    __Znwm();
    lStack_38 = 0;
    FUN_10821cb3c();
    *param_1 = uVar2;
    if (lVar1 != 0) {
      func_0x00010821cff0();
    }
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x00010821cff0();
    }
  }
  return;
}



/* Entry: 10821ca88; end: 10821cb3b;  */

void FUN_10821ca88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0x38;
    __Znwm();
    *param_2 = 0;
    FUN_10821cb3c();
    *param_1 = uVar1;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010821cafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10821cb3c; end: 10821cc5f;  */

undefined8 * FUN_10821cb3c(undefined8 *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piStack_60;
  int iStack_54;
  int *apiStack_48 [3];
  
  lVar3 = *param_2;
  func_0x0001078bde1c(&piStack_60,lVar3 + 8);
  if ((param_3 >> 0x20 & 1) == 0) {
    if (iStack_54 != 3) goto LAB_10821cbac;
    FUN_10814bd9c(apiStack_48,&piStack_60,2);
    func_0x00010821cffc();
  }
  else {
    FUN_10814bd9c(apiStack_48,&piStack_60,param_3);
    func_0x00010821cffc();
  }
  func_0x00010821d028();
LAB_10821cbac:
  if (4 < *(int *)(lVar3 + 0x3c)) {
    if (piStack_60 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_60,0x10);
        if (bVar2) {
          *piStack_60 = *piStack_60 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    apiStack_48[0] = piStack_60;
    func_0x00010821cffc();
    func_0x00010821d028();
  }
  FUN_10835c480(param_1,&piStack_60,0);
  FUN_10810a400(&piStack_60);
  *param_1 = &PTR_FUN_110a32340;
  lVar3 = *param_2;
  *param_2 = 0;
  param_1[5] = lVar3;
  param_1[6] = 0;
  return param_1;
}



/* Entry: 10821cc60; end: 10821cc93;  */

undefined8 * FUN_10821cc60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a323b0;
  FUN_10810a400(param_1 + 1);
  return param_1;
}



/* Entry: 10821cc94; end: 10821cda7;  */

void FUN_10821cc94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  int extraout_w10;
  long *plVar4;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar4 = (long *)(param_2 + 0x30);
  if (*plVar4 == 0) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(&plStack_38);
    (**(code **)(*plStack_38 + 0x68))(&uStack_40);
    uVar3 = uStack_40;
    uStack_40 = 0;
    FUN_108166048(plVar4,uVar3);
    FUN_10821cfe4(uStack_40);
    plVar1 = plStack_38;
    if (*plVar4 == 0) {
      plVar2 = plStack_38;
      (**(code **)(*plStack_38 + 0x58))(plStack_38);
      FUN_1083466ac(&uStack_40,plVar1,plVar2);
      FUN_108166048(plVar4,uStack_40);
      FUN_10821cfe4(0);
    }
    plVar1 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      func_0x00010821cff0();
    }
    uVar3 = 0;
    if (*plVar4 == 0) goto LAB_10821cd58;
  }
  do {
    func_0x00010821d018();
    uVar3 = extraout_x8;
  } while (extraout_w10 != 0);
LAB_10821cd58:
  *param_1 = uVar3;
  return;
}



/* Entry: 10821cda8; end: 10821cf27;  */

undefined8 * FUN_10821cda8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int *extraout_x8;
  int extraout_w10;
  undefined8 *puVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int *piStack_a8;
  long lStack_a0;
  ulong uStack_98;
  int *piStack_90;
  long lStack_88;
  ulong uStack_80;
  int *piStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  piStack_a8 = (int *)0x0;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  if (*param_2 != 0) {
    do {
      func_0x00010821d018();
      piStack_a8 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  lStack_a0 = param_2[1];
  uStack_98 = param_2[2];
  lVar4 = *(long *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar4 + 0x3c);
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (iVar1 == 1) {
    puVar5 = &uStack_b8;
LAB_10821ce84:
    FUN_10821c704(lVar4,puVar5,0);
    if ((uint)lVar4 < 3) {
      if (puVar5 == &uStack_b8) {
        puVar6 = (undefined8 *)0x1;
      }
      else {
        puVar6 = &uStack_b8;
        FUN_10821e7a4(puVar6,puVar5,iVar1);
      }
      goto LAB_10821cec0;
    }
  }
  else {
    if (piStack_a8 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piStack_a8,0x10);
        if (bVar3) {
          *piStack_a8 = *piStack_a8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    piStack_78 = piStack_a8;
    lStack_70 = lStack_a0;
    uStack_68 = uStack_98;
    if (4 < iVar1) {
      if (piStack_a8 != (int *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_a8,0x10);
          if (bVar3) {
            *piStack_a8 = *piStack_a8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_80 = uStack_98 >> 0x20 | uStack_98 << 0x20;
      piStack_90 = piStack_a8;
      lStack_88 = lStack_a0;
      func_0x0001078bddd4(&piStack_78,&piStack_90);
      FUN_10810a400(&piStack_90);
    }
    puVar5 = &uStack_60;
    FUN_10832ff5c(puVar5,&piStack_78);
    FUN_10810a400(&piStack_78);
    if ((int)puVar5 != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      puVar5 = &uStack_60;
      goto LAB_10821ce84;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_10821cec0:
  FUN_10832fef8(&uStack_60);
  FUN_10810a400(&piStack_a8);
  return puVar6;
}



/* Entry: 10821cf28; end: 10821cf2f;  */

bool FUN_10821cf28(long param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  
  plVar6 = *(long **)(param_1 + 0x28);
  if ((param_3 == 0) || ((**(code **)(*plVar6 + 0x50))(), (int)plVar6 == 0)) {
    return false;
  }
  func_0x00010821c970();
  uVar2 = *(uint *)(plVar6 + 1);
  if (uVar2 == 0) {
    return false;
  }
  lVar3 = plVar6[0x14];
  uVar4 = uVar2;
  FUN_1081a6298();
  uVar1 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar7 = 0;
  do {
    uVar8 = uVar1;
    if (uVar1 == uVar7) break;
    uVar5 = uVar2;
    func_0x0001081a62b4(uVar2,uVar7);
    uVar8 = uVar7;
    uVar7 = uVar7 + 1;
  } while ((*param_2 >> ((long)(int)lVar3 + -4 + (long)(int)uVar5 * 4 & 0x3fU) & 1) != 0);
  return (int)uVar4 <= (int)uVar8;
}



/* Entry: 10821cf30; end: 10821cf4f;  */

bool FUN_10821cf30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010821b700(uVar1);
  return (uint)uVar1 < 3;
}



/* Entry: 10821cf50; end: 10821cf53;  */

undefined8 * FUN_10821cf50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32340;
  func_0x0001078bddf8(param_1 + 6);
  func_0x0001078bdfbc(param_1 + 5);
  *param_1 = &PTR_DAT_110a323b0;
  FUN_10810a400(param_1 + 1);
  return param_1;
}



/* Entry: 10821cf54; end: 10821cf67;  */

void FUN_10821cf54(void)

{
  FUN_10821cfa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10821cf68; end: 10821cf7b;  */

undefined8 FUN_10821cf68(void)

{
  return 0;
}



/* Entry: 10821cf7c; end: 10821cf8f;  */

void FUN_10821cf7c(void)

{
  FUN_10821cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10821cf90; end: 10821cfa3;  */

void FUN_10821cf90(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10821cfa4; end: 10821cfe3;  */

undefined8 * FUN_10821cfa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32340;
  func_0x0001078bddf8(param_1 + 6);
  func_0x0001078bdfbc(param_1 + 5);
  *param_1 = &PTR_DAT_110a323b0;
  FUN_10810a400(param_1 + 1);
  return param_1;
}



/* Entry: 10821cfe4; end: 10821d02f;  */

void FUN_10821cfe4(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10821d030; end: 10821d093;  */

undefined8 * FUN_10821d030(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a32418;
  *(int *)(param_1 + 3) = (int)param_3;
  uVar1 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  FUN_108410808(uVar1,2);
  param_1[2] = uVar1;
  _memcpy();
  return param_1;
}



/* Entry: 10821d094; end: 10821d0c7;  */

undefined8 * FUN_10821d094(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32418;
  _free(param_1[2]);
  return param_1;
}



/* Entry: 10821d0c8; end: 10821d0cb;  */

undefined8 * FUN_10821d0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32418;
  _free(param_1[2]);
  return param_1;
}



/* Entry: 10821d0cc; end: 10821d0df;  */

void FUN_10821d0cc(void)

{
  FUN_10821d094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10821d0e0; end: 10821d1ab;  */

void FUN_10821d0e0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  long *plStack_450;
  long *plStack_448;
  undefined1 *puStack_440;
  code *pcStack_438;
  undefined8 uStack_428;
  undefined1 auStack_420 [976];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = *(ulong *)(lVar2 + 0x18);
    uStack_50 = 0x100000000;
    FUN_108408460(uVar1,*(undefined8 *)(lVar2 + 0x20),&uStack_50,2,auStack_420);
    unaff_x20 = param_2;
    if ((uVar1 & 1) != 0) {
      unaff_x21 = 0x3d8;
      __Znwm();
      unaff_x22 = *param_2;
      *param_2 = 0;
      _memcpy();
      uStack_428 = 0;
      *(long *)(unaff_x21 + 0x3d0) = unaff_x22;
      *param_1 = unaff_x21;
      func_0x0001078bddf8(&uStack_428);
      goto LAB_10821d174;
    }
  }
  *param_1 = 0;
LAB_10821d174:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_438 = FUN_10821d1ac;
  lVar2 = 0x3d8;
  lStack_460 = unaff_x22;
  lStack_458 = unaff_x21;
  plStack_450 = unaff_x20;
  plStack_448 = param_1;
  puStack_440 = &stack0xfffffffffffffff0;
  __Znwm();
  _memcpy();
  uStack_468 = 0;
  *(undefined8 *)(lVar2 + 0x3d0) = 0;
  *extraout_x8 = lVar2;
  func_0x0001078bddf8(&uStack_468);
  return;
}



/* Entry: 10821d1ac; end: 10821d207;  */

void FUN_10821d1ac(long *param_1)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = 0x3d8;
  __Znwm();
  _memcpy();
  uStack_38 = 0;
  *(undefined8 *)(lVar1 + 0x3d0) = 0;
  *param_1 = lVar1;
  func_0x0001078bddf8(&uStack_38);
  return;
}


